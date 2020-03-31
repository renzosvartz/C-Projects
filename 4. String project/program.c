//Renzo Alejo Moron-Svartz

//Project 3: String Play

//Project 3 performs operations on strings chosen by the user using input evaluation.

/* program includes and defines */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_HISTORY_SIZE 10
#define MAX_STR_LEN 100
#define MAX_CMD_LEN 100

//Read a string from the keyboard
void getString(char *current);

//Print a listing of the different commands
void printString(const char *current);

//Input and append the new string to the current string
void appendString(char *current);

//User inputs a substring and prints the number of times it appears in the current string
void findString(const char *current);

//Replace the current string with the last result
void replaceString(char *current, char *result);

//Toggle the case of the string
void toggleString(const char *current, char *result);

//Reverse the string character by character
void reverseString(const char *current, char *result);

//Print the statistics of the current string
void printStatistics(const char *current);

//Print a listing of the different commands
void printHelp(void);

//Print a history of the commands
void printHistory(char history[][MAX_CMD_LEN], int history_size);

/*Add a command to the history table if command is not empty.
If the history table is full, discard the oldest command.
Function takes three arguments: history table, the command to
be added into the table, and the current history table size. */
int updateHistory(char history[][MAX_CMD_LEN], const char *command, int hsize);

//Replace \n with \0
void fixString(char *current);

int main(void)
{
	char command[MAX_CMD_LEN];
        char current[MAX_STR_LEN] = "";
        char result[MAX_STR_LEN] = "";
        char history[MAX_HISTORY_SIZE][MAX_CMD_LEN];

        int hsize = 0 /* history size */;
        int flag = 0;
        do {
                printf("cmd> ");
               	fgets(command, 100, stdin);
		fixString(command);
		hsize = updateHistory(history, command, hsize);
                if (strcmp(command, "new") == 0)
		{
                        getString(current);
		}
                else if (strcmp(command, "list") == 0)
		{
                        printString(current);
		}
                else if (strcmp(command, "append") == 0)
		{
                        appendString(current);
		}
                else if (strcmp(command, "find") == 0)
		{
                        findString(current);
		}
                else if (strcmp(command, "replace") == 0)
		{
                        replaceString(current, result);
		}
                else if (strcmp(command, "toggle") == 0)
		{
                        toggleString(current, result);
		}
                else if (strcmp(command, "rev") == 0)
		{
			reverseString(current, result);
		}
		else if (strcmp(command, "stat") == 0)
		{
                        printStatistics(current);
		}
                else if (strcmp(command, "help") == 0)
		{
                        printHelp();
		}
                else if (strcmp(command, "hist") == 0)
		{
                        printHistory(history, hsize);
		}
                else if (strcmp(command, "quit") == 0)
		{
                        flag = 1;
		}
                else if (strlen(command) == 0)
		{
                        ;
		}
                else
		{
                     	fprintf(stderr, "Invalid input. Try again.\n");
		}
	} while (flag != 1);
	fprintf(stdout, "\n");
	return 0;
}//end main

void fixString(char *current)
{
	int i = strlen(current) - 1;
	current[i] = '\0';
}

void getString(char *current)
{	
	int c;
	char trash[MAX_STR_LEN];
	fprintf(stdout, "Enter new string: ");
	fgets(current, 100, stdin);
	printf("%d", strlen(current));
	if (strlen(current) == 99)
	{
		//gets(trash);
		//puts(trash);
		while ((c = getchar()) != '\n' && c != EOF )
			;
			//printf("%c",c);//trash
	}
	fixString(current);
}//end getString

void printString(const char *current)
{
	fprintf(stdout, "%s\n", current);
}//end printString

void appendString(char *current)
{
	char a_appendedString[MAX_STR_LEN];
	char *appendedString;
	int c;
	
	fprintf(stdout, "Enter a string to append: ");
	fgets(appendedString, 100, stdin);
	if (strlen(appendedString) == 99)
	{
		while ((c = getchar()) != '\n' && c != EOF)
               		;//trash
	}
	fixString(current);

	if (strlen(current) + strlen(appendedString) + 2 <= MAX_STR_LEN)
        {
                strcat(current, " ");
                strcat(current, appendedString);
        }//append string with space in between
	else
	{
		fprintf(stderr, "Error: Maximum string length exceeded.\n");
	}//print error notification
}//end appendString

void findString(const char *current)
{
	char a_substring[MAX_STR_LEN];
	char a_stringCopy[MAX_STR_LEN];
	char *substring = a_substring;
	char *stringCopy = a_stringCopy;
	int find_count = 0;
	int c;

	fprintf(stdout, "Enter a substring to find: ");
	fgets(substring, 100, stdin);
	if (strlen(substring) == 99)
	{
		while ((c = getchar()) != '\n' && c != EOF)
               		;//trash
	}
	fixString(substring);
	strcpy(stringCopy, current);
	
	while(stringCopy = strstr(stringCopy, substring))
	{
		find_count++;
		stringCopy++;
	}//count substring occurances

	fprintf(stdout, "The substring exists %d times in the current string.\n", find_count);
}//end findString

void replaceString(char *current, char *result)
{
        strcpy(current, result);
}//end replaceString

void toggleString(const char *current, char *result)
{
        int i = 0;
        while (current[i] != '\0')
        {
                if (isupper(current[i]))
                {
                        result[i] = tolower(current[i]);
                }
                else if (islower(current[i]))
                {
                        result[i] = toupper(current[i]);
                }
                else
                {
                        result[i] = current[i];
                }
                i++;
        }//end toggle logic
        result[i] = '\0';
        fprintf(stdout, "%s\n", result);
}//end toggleString

void reverseString(const char *current, char *result)
{
	int i = 0;
        int j = strlen(current);
        int k = j - 1;

        while (j-- > 0)
        {
                result[i++] = current[k--];
        }
        result[i] = '\0';
        fprintf(stdout, "%s\n", result);
}//end reverseString

void printStatistics(const char *current)
{
	int i = 1;
	int j = 1;
	int k = 0;
        char statistics[2][MAX_STR_LEN];
        int elements = strlen(current);

        statistics[0][0] = current[0];
        statistics[1][0] = 1;

        for (i = 1; i < elements; i++)
        {
                if (strchr(statistics[0], current[i]))
                {	
			//printf("found\n");
                        for (k = 0; k < j; k++)
                        {
                                if (statistics[0][k] == current[i])
                                {
                                        statistics[1][k]++;
					break;
                                }
                        }
                }
                else
                {	
			//printf("not found\n");
                        statistics[0][j] = current[i];
			printf("%c\n", current[i]);
                	fprintf(stdout, "frequency of \'%c\': %d\n", statistics[0][i], statistics[1][i]);
		}
        }//end print
}//printStatistics

void printHelp(void)
{
        fprintf(stdout, "%-11s", "[new]");
        fprintf(stdout, "Enter New String\n");
        fprintf(stdout, "%-11s", "[list]");
        fprintf(stdout, "List Current String\n");
        fprintf(stdout, "%-11s", "[append]");
        fprintf(stdout, "Append a String to the End of Current String\n");
        fprintf(stdout, "%-11s", "[find]");
        fprintf(stdout, "Find a String in Current String\n");
        fprintf(stdout, "%-11s", "[replace]");
        fprintf(stdout, "Replace Current String with Output of Last Command\n");
        fprintf(stdout, "%-11s", "[toggle]");
        fprintf(stdout, "Toggle the Case of Current String\n");
        fprintf(stdout, "%-11s", "[rev]");
        fprintf(stdout, "Print Current String in Reverse Order Character by Character\n");
        fprintf(stdout, "%-11s", "[stat]");
        fprintf(stdout, "Print Statistics of Current String\n");
        fprintf(stdout, "%-11s", "[help]");
        fprintf(stdout, "Print This Help Screen\n");
        fprintf(stdout, "%-11s", "[hist]");
        fprintf(stdout, "Print a History of Commands Entered\n");
        fprintf(stdout, "%-11s", "[quit]");
        fprintf(stdout, "Quit Program\n");
}//end printHelp

void printHistory(char history[][MAX_CMD_LEN], int history_size)
{       int i = 0;
        while (history_size-- > 0)
        {
                fprintf(stdout, "%s\n", history[i++]);
        }
}//end printHistory

int updateHistory(char history[][MAX_CMD_LEN], const char *command, int hsize)
{
        int i = 0;
	if (isspace(command[0]) || command[0] == NULL)
	{
		return hsize;
	}//ignore empty commands

        if (hsize < 10)
        {
               	strcpy(history[hsize++], command);
        }                
        else if (hsize == 10)
        {
                while (i < 9)
               	{
              		strcpy(history[i], history[i + 1]);
                	i++;
                }
               strcpy(history[9], command);
        }//end history storage logic
	return hsize;
}//end updateHistory

