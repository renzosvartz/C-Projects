#include <stdio.h>
#include <float.h>
#include <limits.h>
#include <stddef.h>
#include <conio.h> 
#include <ctype.h>
#include <string.h>
#include <math.h>

//main()
//{
//	printf("hello ");
//	printf("world");
//	printf("\n");
//	printf("\f");
//
//}

//main()
//{
//	float fahr, celcius;
//	int lower, upper, step;
//
//	lower = 0;
//	upper = 300;
//	step = 20;
//
//	fahr = lower;
//
//	printf("Fahrenheit\tCelcius\n");
//		while (fahr <= upper)
//		{
//			celcius = (5.0 / 9.0) * (fahr - 32.0); //5.0 for floating point number arithmetic
//			printf("%10.0f %12.1f\n", fahr, celcius);
//			fahr = fahr + step;
//		}
//	printf("\n\n\n\n\n\n\n\n\n\n\n");
//}

//main()
//{
//	float fahr, celcius;
//	int lower, upper, step;
//
//	lower = 0;
//	upper = 300;
//	step = 20;
//
//	celcius = lower;
//
//	printf("Celcius \tFahrenheit\n");
//	while (celcius <= upper)
//	{
//		fahr = ((9.0 / 5.0) * (celcius)) + 32.0; //5.0 for floating point number arithmetic
//		printf("%7.0f %18.1f\n", celcius, fahr);
//		celcius = celcius + step;
//	}
//	printf("\n\n\n\n\n\n\n\n\n\n\n");
//}

//main()
//{
//	float fahr, celcius;
//	int lower, upper, step;
//
//	lower = 0;
//	upper = 300;
//	step = 20;
//
//	celcius = upper;
//
//	printf("Celcius \tFahrenheit\n");
//	while (celcius >= lower)
//	{
//		fahr = ((9.0 / 5.0) * (celcius)) + 32.0; //5.0 for floating point number arithmetic
//		printf("%7.0f %18.1f\n", celcius, fahr);
//		celcius = celcius - step;
//	}
//	printf("\n\n\n\n\n\n\n\n\n\n\n");
//}

//main()
//{
//	int c;
//	while (c = (getchar() != EOF))
//	{
//		printf("%d\n", c);
//	}
//	printf("%d", c);
//}

//#define BUFSIZE 100 
//char buf[BUFSIZE];
//int bufp = 0;
//
//main()
//{
//	int getch(void);
//	void ungetch(int);
//	int c;
//
//	Start:
//	while (c = (getch() != EOF))
//	{
//		ungetch(); //c is 1, it returns a 1 to buf.
//		if (c = (getch() != '\n'))
//		{
//			ungetch(c);
//			if (c = (getch() != ' '))
//			{
//				printf("%d\n", c);
//			}
//			else
//			{
//				printf("skipped:   <-\n");
//			}
//		}
//		else
//		{
//			printf("skipped: \\n <-\n");
//		}
//	}
//	printf("%d", c);
//	goto Start;
//}
//
//int getch(void)
//{
//	return (bufp > 0) ? buf[--bufp] : getchar();
//}
//void ungetch(int c)
//{
//	if (bufp >= BUFSIZE) printf("ungetch: too many characters\n");
//	else
//		buf[bufp++] = c;
//}

//main()
//{
//	int c;
//
//	if (c = (getchar() != EOF))
//	{
//		printf("if loop executed so c was 1 because getchar() was 1.\n");
//		printf("value of getchar(): %d\n\n", c);
//	}
//	else
//	{
//		printf("if loop exited so c was 0 because getchar() was 0.\n");
//		printf("value of getchar(): %d", c);
//	}
//}

//main()
//{
//	int c = EOF;
//	printf("%d\n", c);
//}

//main()
//{
//	int c;
//	int NumberOfNewLines = 0;
//	int NumberOfTabs = 0;
//	int NumberOfSpaces = 0;
//
//
//	while ((c = getchar()) != EOF)
//	{
//		if (c == '\n')
//		{
//			NumberOfNewLines++;
//		}
//		else if (c == '\t')
//		{
//			NumberOfTabs++;
//		}
//		else if (c == ' ')
//		{
//			NumberOfSpaces++;
//		}
//	}
//
//	printf("Number of New Lines: %d\nNumber of Tabs: %d\nNumber of Spaces: %d\n", NumberOfNewLines, NumberOfTabs, NumberOfSpaces);
//}

//main()
//{
//	int c;
//	int OneSpaceRead = 0;
//
//	while ((c = getchar()) != EOF)
//	{
//		if (c != ' ')
//		{
//			putchar(c);
//			OneSpaceRead = 0;
//		}
//		else if (c == ' ' && OneSpaceRead == 0)
//		{
//			putchar(c);
//			OneSpaceRead = 1;
//		}
//	}
//}

//main()
//{
//	int c;
//
//	while ((c = getchar()) != EOF)
//	{
//		if (c != '\n' && c != '\b' && c != '\t')
//			putchar(c);
//		else if (c == '\n')
//		{
//			printf("\\n");
//		}
//		else if (c == '\t')
//		{
//			printf("\\t");
//		}
//		else if (c == '\\')
//		{
//			printf("\\");
//		}
//		else if (c == '\b')
//		{
//			printf("backspace");
//		}
//	}
//}

//main()
//{
//	int c;
//	int InAWord = 0;
//
//	printf("This program prints out every word and spacebar on an individual line.");
//
//	while ((c = getchar()) != EOF)
//	{
//		if (c != ' ' && c != '\n')
//		{
//			putchar(c);
//			InAWord = 1;
//		}
//		if (c == ' ')
//		{
//			if (InAWord == 1)
//			{
//				printf("\n");
//				putchar(c);
//				printf("\n");
//				InAWord = 0;
//			}
//			else if (InAWord == 0)
//			{
//				putchar(c);
//				printf("\n");
//			}
//		}
//		if (c == '\n')
//		{
//			putchar(c);
//		}
//	}
//}


//main()
//{
//	#define parameter 100
//	int c;
//	int NumberOfLetters[parameter];
//	int NumberOfLettersIndex = 0;
//
//	int i = 0;
//	int indexForNumberOfLettersArray = 0;
//
//	for (i = 0; i < parameter; i++)
//	{
//		NumberOfLetters[i] = 0;
//	}
//
//	while ((c = getchar()) != EOF && c != '\n')
//	{
//		if (c != ' ' && c != '\n')
//		{
//			NumberOfLetters[NumberOfLettersIndex]++;
//		}
//		if (c == ' ')
//		{
//			NumberOfLettersIndex++;
//			NumberOfLetters[NumberOfLettersIndex]++;
//			NumberOfLettersIndex++;
//		}
//	}
//
//	for (i = 0; i < parameter; i = i + 1)
//	{
//		if ((NumberOfLetters[i]) > 0)
//		{
//			while ((NumberOfLetters[i]) > 0)
//			{
//				printf("*");
//				NumberOfLetters[i]--;
//			}
//			printf("\n");
//		}
//		else if ((NumberOfLetters[i]) == 0)
//			break;
//	}
//}

//#define MAXSIZE 100
//#define IN 1
//#define OUT 0
//
//main()
//{
//	int c;
//	int MAXLETTERCOUNT = 0;
//	int WORDCOUNT = 0;
//	int i = 0;
//	int j;
//	int Array[MAXSIZE];
//	int State = OUT; //flag for whether in word or not
//	int Max[MAXSIZE];
//
//	for (i = 0; i < MAXSIZE; i++) //i < MAXSIZE
//	{
//		Array[i] = 0;
//		Max[i] = 1;
//	}
//
//  i = 0;//
//
//	while ((c = getchar()) != EOF)
//	{
//		if (isalpha(c)) //isalphanumerical
//		{
//			State = IN;
//			Array[i]++;
//			Max[i]++;
//			if (Array[i] >= MAXLETTERCOUNT)
//			{
//				MAXLETTERCOUNT = Array[i];
//			}
//		}
//		else if (State == IN && (c == ' ' || c == '\t' || c == '\n'))
//		{
//			WORDCOUNT++;
//			i++;
//			State = OUT;
//		}
//		else
//			continue;
//	}
//
//	for (i = MAXLETTERCOUNT + 1; i > 0; i--)
//	{
//		for (j = 0; j < WORDCOUNT; j++)
//		{
//			if (Max[j] == i)
//			{
//				printf("%5d", Max[j] - 1);
//			}
//			else if (Array[j] == i)
//			{
//				printf("    *");
//				Array[j]--;
//			}
//			else
//			{
//				printf("     ");
//			}
//		}
//		printf("\n");
//	}
//	
//	for (i = 1; i <= WORDCOUNT; i++)
//		printf("%5d", i);
//	
//	printf("\n");
//}

//#define MAXSIZE 100
//#define IN 1
//#define OUT 0
//
//main()
//{
//	int c;
//	int MAXLETTERCOUNT = 0;
//	int i = 0;
//	int j;
//	int nl = 0;
//	int Array[MAXSIZE];
//	int State = OUT; //flag for whether in word or not
//
//	for (i = 0; i < MAXSIZE; i++) //i < MAXSIZE
//	{
//		Array[i] = 0;
//	}
//	
//	i = 0;//
//
//	while ((c = getchar()) != EOF)
//	{
//		if (isalpha(c)) //isalphanumerical
//		{
//			State = IN;
//			nl++;
//			if (nl >= MAXLETTERCOUNT)
//			{
//				MAXLETTERCOUNT = nl;
//			}
//		}
//		else if (State == IN && (c == ' ' || c == '\t' || c == '\n'))
//		{
//			Array[nl]++;
//			nl = 0;
//			State = OUT;
//		}
//		else
//			continue;
//	}
//
//	for (i = 1; i <= MAXLETTERCOUNT; i++)
//		printf("%5d", Array[i]);
//
//	printf("\n");
//
//	for (i = 1; i <= MAXLETTERCOUNT; i++)
//		printf("%5d", i);
//
//	printf("\n");
//}

//
//main()
//{
//	int i = 0;
//	while (i <= 212)
//	{
//		printf("%9.4f\n", toCelcius(i));
//		i++;
//	}
//
//}
//
//double toCelcius(double F) 
//{
//	double C;
//	C = (5.0 / 9.0) * (F - 32);
//	return C;
//}

//#define MAXLINE 1000

//int getline(char line[], int maxline);
//void copy(char from[], char to[]);
//
//main()
//{
//	int len;
//	int max = 0;
//	char line[MAXLINE];
//	char longest[MAXLINE];
//	
//	while ((len = getline(line, MAXLINE)) > 0)
//	{
//		if (len > max)
//		{
//			max = len;
//			copy(line, longest);
//		}
//	}
//	if (max > 0)
//		printf("%s", longest);
//	return 0;
//}
//
//int getline(char s[], int limit)
//{
//	int i;
//	int c;
//
//	for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
//	{
//		s[i] = c;
//	}
//	if (c == '\n')
//	{
//		s[i] = c;
//		i++;
//	}
//	s[i] = '\0';
//	return i;
//}
//
//void copy(char from[], char to[])
//{
//	int i = 0;
//	while ((to[i] = from[i]) != '\0')
//	{
//		i++;
//	}
//}

//main()
//{
//	int i = 0;
//	int nc = 0;
//	int limit = 0;
//	int c;
//	char array[MAXLINE];
//	for (limit = 0; limit < 100; limit++)
//	{
//		i = 0;
//		while ((c = getchar()) != EOF && c != '\n' && i < MAXLINE - 1)
//		{
//			array[i] = c;
//			i++;
//			nc++;
//		}
//		array[i] = '\0';
//		//i = 0;
//		printf("%s %d\n", array, nc);
//		nc = 0;
//	}
//}

//main()
//{
//	int i = 0;																						D
//	int nc = 0;																						O
//	int limit = 0;																					E
//	int c;																							S						
//	int array[MAXLINE];																					
//	while ((c = getchar()) != EOF && c != '\n' && limit < 100)										N					
//	{																								O			
//		array[i] = c;																				T
//		i++;																								
//		nc++;																						W	
//	}																								O					
//	array[i] = '\0';																				R		
//	i = 0;																							K			
//	printf("%s %d\n", array, nc);
//}

//main()
//{
//	int i = 0;
//	int nc = 0;
//	int limit = 0;
//	int max = 0;
//	int c;
//	char array[MAXLINE];
//	char longest[MAXLINE];
//	for (limit = 0; limit < 100; limit++)
//	{
//		i = 0;
//		while ((c = getchar()) != EOF && c != '\n' && i < MAXLINE - 1)
//		{
//			array[i] = c;
//			i++;
//			nc++;
//		}
//		array[i] = '\0';
//		i = 0;
//		if (nc > max)
//		{
//			max = nc;
//			while ((longest[i] = array[i]) != '\0')
//				i++;
//		}
//		//i = 0;
//		if (c == EOF)
//			printf("%s %d\n", longest, max);
//		nc = 0;
//	}
//}

//main()
//{
//	int i = 0;
//	int nc = 0;
//	int limit = 0;
//	int c;
//	char array[MAXLINE];
//	for (limit = 0; limit < 100; limit++)
//	{
//		i = 0;
//		while ((c = getchar()) != EOF && c != '\n' && i < MAXLINE - 1)
//		{
//			array[i] = c;
//			i++;
//			nc++;
//		}
//		array[i] = '\0';
//		//i = 0;
//		if (nc > 80)
//			printf("%s %d\n", array, nc);
//		nc = 0;
//	}
//}

#define YES 1
#define NO 0

//main()
//{
//	int c;
//	char array[MAXLINE];
//	int INALINE = NO;
//	int TRAILING = NO;
//	int i = 0;
//	int index = 0;
//	int limit = 0;
//	int linesskipped = 0;
//	for (limit = 0; limit < 100; limit++)
//	{
//		while ((c = getchar()) != EOF && i < MAXLINE - 1)
//		{
//			if (c != '\n' && c != ' ' && c != '\t')
//			{
//				array[i] = c;
//				INALINE = YES;
//				TRAILING = NO;
//				i++;
//			}
//			if ((c == ' ' || c == '\t') && TRAILING == NO)
//			{
//				array[i] = c;
//				index = i;
//				TRAILING = YES;
//				i++;
//			}
//			else if ((c == ' ' || c == '\t') && TRAILING == YES)
//			{
//				array[i] = c;
//				i++;
//			}
//			if (c == '\n' && TRAILING == YES && INALINE == YES)
//			{
//				INALINE = NO;
//				TRAILING = NO;
//				array[index] = '\0';
//				array[index] = 'x';
//				array[index+1] = '\n';
//				i = index + 2;
//			}
//			else if (c == '\n' && TRAILING == NO && INALINE == YES)
//			{
//				INALINE = NO;
//				TRAILING = NO;
//				array[i] = 'x';
//				array[i+1] = '\n';
//				i = i + 2;
//			}
//			else if (c == '\n' && TRAILING == YES && INALINE == NO)
//			{
//				TRAILING = NO;
//				array[index] = '\0';
//				array[index] = 'x';
//				array[index + 1] = '\n';
//				i = index + 2;
//			}
//		}
//		if (c == EOF)
//		{
//			array[i] = '\0';
//			printf("%s", array);
//			array[0] = '\0';
//			i = 0;
//		}
//	}
//}

//#define MAXLENGTH 10000
//
//void reverse(char[], char[], int length); //new reverse(s) on line 5295
//
//main()
//{
//	int c;
//	int i = 0;
//	int SOMETHINGWASREVERSED = NO;
//	char array[MAXLENGTH];
//	char reversearray[MAXLENGTH];
//
//		while ((c = getchar()) != '!' && i < MAXLENGTH - 1)
//		{
//			if (c == '\n' && SOMETHINGWASREVERSED == YES)
//			{
//				printf("\n");
//				SOMETHINGWASREVERSED = NO;
//			}
//			else if (c == '?')
//			{
//				SOMETHINGWASREVERSED = YES;
//				array[i] = '\0';
//				reverse(array, reversearray, i);
//				printf("%s", reversearray);
//				array[0] = '\0';
//				reversearray[0] = '\0';
//				i = 0;
//			}
//
//			else
//			{
//				array[i] = c;
//				i++;
//			}
//		}
//		array[i] = '\0';
//		reverse(array, reversearray, i);
//		printf("%s\n", reversearray);
//}
//
//void reverse(char from[], char to[], int length)
//{
//	int i = 0;
//	while (length - 1 >= 0)
//	{
//		to[i] = from[length - 1];
//		length--;
//		i++;
//	}
//	to[i] = '\0';
//} 

//#define MAXSIZE 1000
//
//main()
//{
//	int c;
//	int tabspaces = 0;
//	int spaces = 0;
//	int i = 0;
//	int nc = 0;
//	char array[MAXSIZE];
//	
//	printf("How many tab spaces? Type in the number of tab spaces and then press enter\n");
//
//	while ((tabspaces = getchar()) == '\n')
//		;
//
//	while (tabspaces < '0' || tabspaces > '9')
//	{
//		printf("Not a number between 0 and 9.\nType in the number of tab spaces and then press enter\n");
//		while ((tabspaces = getchar()) == '\n')
//			;
//	}
//	printf("Ok replacing text now. Press ^Z to print out replacement text. The number of tabspaces you selected is %d. Anything after %d has been stored in your replacement text.\n", tabspaces - '0', tabspaces - '0');
//	while ((c = getchar()) != EOF && i < MAXSIZE)
//	{
//		if (c != '\t' && c != '\n')
//		{
//			array[i] = c;
//			i++;
//			nc++;
//		}
//		else if (c == '\n')
//		{
//			array[i] = c;
//			i++;
//			nc = 0;
//		}
//		else if (c == '\t')
//		{
//			spaces = (tabspaces - '0') - (nc % (tabspaces - '0')); //tabspaces - '0'. The '8' stored in tabspaces from getchar is the integer/NUMERICAL value of the '8' in the ASCII chart/character code.
//			while (spaces > 0)
//			{
//				array[i] = 'x';
//				i++;
//				spaces--;
//				nc = 0; //NOTICED AND FIXED THIS PROGRAM WITH THIS EXPRESSION AFTER MOVING ON TO THE NEXT PROGRAM AND REALIZING THAT TWO CONTINUOUS INPUTS OF A TEST CONDITION WAS NOT TAKEN CARE OF! This resets the tab spaces logic.
//			}
//		}
//	}
//	array[i] = '\0';
//	printf("%s\n", array);
//}

//inastringofspace
//beginning of text
//#define MAXSIZE 1000
//main()
//{
//	int c;
//	int i = 0;
//	int nc = 0;
//	int nfl = 0;
//	int Firsttab = 0;
//	int spacesfromtab = 0;
//	int stringspaces = 0;
//	int STRINGOFSPACES = NO;
//	char array[MAXSIZE];
//	while ((c = getchar()) != EOF && i < MAXSIZE - 1)
//	{
//		if (c != '\t' && c != ' ' && c != '\n')
//		{
//			if (STRINGOFSPACES == YES)
//			{
//				if (8 - (nfl % 8) <= stringspaces)
//				{
//					stringspaces = stringspaces - (8 - (nfl % 8));
//					array[i] = '\t';
//					i++;
//					nc = 0;
//					nfl = 0;
//					while (stringspaces / 8 > 0)
//					{
//						array[i] = '\t';
//						i++;
//						stringspaces = stringspaces - 8;
//					}
//				}
//				while (stringspaces > 0)
//				{
//					array[i] = 'y';
//					i++;
//					nc++;
//					stringspaces--;
//					nfl = 0;
//				}
//			}
//			STRINGOFSPACES = NO;
//			array[i] = c;
//			i++;
//			nc++;
//			nfl++;
//		}
//		else if (c == '\t')
//		{
//			STRINGOFSPACES = YES;
//			spacesfromtab = 8 - (nc % 8);
//			nc = 0;
//			stringspaces = stringspaces + spacesfromtab;
//		}
//		else if (c == ' ')
//		{
//			STRINGOFSPACES = YES;
//			stringspaces++;
//			nc++;
//		}
//		else if (c == '\n')
//		{
//			if (STRINGOFSPACES == YES)
//			{
//				if (8 - (nfl % 8) <= stringspaces)
//				{
//					stringspaces = stringspaces - (8 - (nfl % 8));
//					array[i] = '\t';
//					i++;
//					nc = 0;
//					nfl = 0;
//					while (stringspaces / 8 > 0)
//					{
//						array[i] = '\t';
//						i++;
//						stringspaces = stringspaces - 8;
//					}
//				}
//				while (stringspaces > 0)
//				{
//					array[i] = 'y';
//					i++;
//					nc++;
//					stringspaces--;
//					nfl = 0;
//				}
//			}
//			nc = 0;
//			nfl = 0;
//			STRINGOFSPACES = NO;
//			array[i] = c;
//			i++;
//		}
//	}
//
//	if (STRINGOFSPACES == YES)
//	{
//		if (8 - (nfl % 8) <= stringspaces)
//		{
//			stringspaces = stringspaces - (8 - (nfl % 8));
//			array[i] = '\t';
//			i++;
//			nc = 0;
//			nfl = 0;
//			while (stringspaces / 8 > 0)
//			{
//				array[i] = '\t';
//				i++;
//				stringspaces = stringspaces - 8;
//			}
//		}
//		while (stringspaces > 0)
//		{
//			array[i] = 'y';
//			i++;
//			nc++;
//			stringspaces--;
//			nfl = 0;
//		}
//
//	array[i] = '\0';
//	printf("%s\n", array);a
//}

//#define MAXCHARACTERS 1000
//main()
//{
//	int c;
//	int i = 0;
//	int j = 0;
//	int nc = 0;
//	char array[MAXCHARACTERS];
//	char output[MAXCHARACTERS];
//	while ((c = getchar()) != EOF)
//	{
//		array[i++] = c;
//	}
//	array[i] = '\0';
//	i = 0;
//	while (array[i] != '\0')
//	{
//		while (nc < 9 && array[i] != '\0')
//		{
//			if (array[i] == '\t')
//			{
//				nc = nc + 8 - (nc % 8);
//				if (nc > 9)
//				{
//					output[j++] = '\n';
//					output[j++] = '\t';
//					nc = 8;
//				}
//			}
//			else if (array[i] != '\t')
//				nc++;
//			output[j] = array[i];
//			i++;
//			j++;
//		}
//
//		if (nc == 9)
//		{
//			if (array[i] != ' ' && array[i] != '\t' && array[i] != '\n')
//			{
//				output[j++] = '-';
//				output[j++] = '\n';
//				nc = 0;
//			}
//			else
//			{
//				output[j++] = '\n';
//				nc = 0;
//			}
//		}
//	}
//	output[j] = '\0';
//	printf("%s\n", output);
//}

//#define MAXCHARACTERS 1000
//main()
//{
//	int c;
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int nc = 1;
//	int counter = 1;
//	char array[MAXCHARACTERS];
//	char output[MAXCHARACTERS];
//	while ((c = getchar()) != EOF)
//	{
//		array[i++] = c;
//	}
//	array[i] = '\0';
//	i = 0;
//	
//	while (array[i] != '\0')
//	{
//		while (counter < 9 && array[i] != '\0')
//		{
//			if (array[i] == '\t')
//			{
//				k = 8 - nc % 8;
//				while (k >= 0)
//				{
//					output[j++] = ' ';
//					k--;
//					counter++;
//					nc++;
//				}
//				i++;
//			}
//			else if (array[i] != '\t' && array[i] != '\n')
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//				nc++;
//				counter++;
//			}
//			else if (array[i] == '\n')
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//				nc = 1;
//				counter = 1;
//			}
//		}
//		if (counter >= 9)
//		{
//			if (array[i] != ' ' && array[i] != '\t' && array[i] != '\n' && array[i+1] != ' ' && array[i+1] != '\t' && array[i+1] != '\n')
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//				output[j++] = '-';
//				output[j++] = '\n';
//				nc++;
//				counter = 1;
//			}
//			else if (array[i] == '\t')
//			{
//				output[j++] = '\n';
//				output[j++] = '\t';
//				i++;
//				nc++;
//				counter = 8;
//			}
//			else if (array[i] == ' ')
//			{
//				output[j++] = ' ';
//				output[j++] = '\n';
//				i++;
//				nc++;
//				counter = 1;
//
//			}
//			else if (array[i] == '\n')
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//				nc = 1;
//				counter = 1;
//			}
//			else
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//				output[j++] = '\n';
//			 	nc++;
//				counter = 1;
//			}
//		}
//	}
//	
//	output[j] = '\0';
//	printf("%s\n", output);
//}
//#define MAXARRAYSIZE 1000
//#define ON 1
//#define OFF 0
//main()
//{
//	int c;
//	char array[MAXARRAYSIZE];
//	int i = 0;
//	int j = 0;
//	char output[MAXARRAYSIZE];
//	int DONE = NO;
//	int STAR = NO;
//	int COMMENTCHECKING = ON;
//
//	while ((c = getchar()) != EOF && i < MAXARRAYSIZE - 1)
//	{
//		array[i] = c;
//		i++;
//	}
//	array[i] = '\0';
//	i = 0;
//	while (array[i] != '\0')
//	{
//		while (COMMENTCHECKING == ON && array[i] != '\0')
//		{
//			output[j] = array[i];
//			if (array[i] == '/' && COMMENTCHECKING == YES)
//			{
//				if (array[i + 1] == '/')
//				{
//					i++;
//					while (array[i] != '\n')
//					{
//						i++;
//					}
//					output[j] = array[i];
//				}
//				else if (array[i + 1] == '*' && COMMENTCHECKING == YES)
//				{
//					i++;
//					while (DONE == NO)
//					{
//						if (array[i] == '*')
//						{
//							STAR = YES;
//							i++;
//						}
//						else if (array[i] == '/' && STAR == YES)
//						{
//							DONE = YES;
//							i++;
//						}
//						else
//						{
//							STAR = NO;
//							i++;
//						}
//						output[j] = array[i];
//					}
//				}
//			}
//			else if (array[i] == '"')
//			{
//				COMMENTCHECKING = OFF;
//			}
//			i++;
//			j++;
//		}
//		while (COMMENTCHECKING == OFF && array[i] != '\0')
//		{
//			output[j] = array[i];
//			i++;
//			j++;
//			if (array[i] == '"')
//			{
//				COMMENTCHECKING = ON;	
//			}
//		}
//	}
//	output[j] = array[i];
//	printf("%s\n", output);
//}
//#define MAXARRAYSIZE 10000
//#define ON 1
//#define OFF 0
//main()
//{ //test 
//	int c;
//	char array[MAXARRAYSIZE]; /*test*/
//	int i = 0;
//	int j = 0;
//	char output[MAXARRAYSIZE];
//	int COMMENT = NO;
//	int STAR = NO;
//	int SQCOMMENTCHECKING = ON;
//	int DQCOMMENTCHECKING = ON;
//	/*test
//	a
//	b
//	c*/
//	while ((c = getchar()) != EOF && i < MAXARRAYSIZE - 1)
//	{
//		array[i] = c;
//		i++;
//	}
//	array[i] = '\0';
//	i = 0; //test
//	while (array[i] != '\0')	/*test
//	a
//	b
//	c*/
//	{
//		while (SQCOMMENTCHECKING == ON && DQCOMMENTCHECKING == ON && array[i] != '\0')
//		{
//			output[j] = array[i];
//			if (array[i] == '/' && SQCOMMENTCHECKING == ON && DQCOMMENTCHECKING == ON)
//			{
//				if (array[i + 1] == '/')
//				{
//					i++;
//					while (array[i] != '\n')
//					{
//						i++;
//					}
//					output[j] = array[i];//test
//				}
//				else if (array[i + 1] == '*' && SQCOMMENTCHECKING == ON && DQCOMMENTCHECKING == ON)
//				{
//					i++;
//					i++;
//					COMMENT = YES;
//					while (COMMENT == YES)
//					{//test
//						if (array[i] == '*')
//						{
//							STAR = YES;
//							i++;//test
//						}	/*test
//	a
//	b
//	c*/
//						else if (array[i] == '/' && STAR == YES)
//						{
//							COMMENT = NO;
//							i++;
//						}
//						else
//						{
//							STAR = NO;//test
//							i++;
//						}
//					}
//					//output[j] = array[i];
//				}
//			}
//			/*else if (array[i] == '"' && array[i-1] != '\'')
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//				COMMENTCHECKING = OFF;
//			}*/
//			else if (array[i] == '\'' && array[i - 1] != '\\')
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//				SQCOMMENTCHECKING = OFF;
//			}
//			else if (array[i] == '"' && array[i - 1] != '\\')
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//				DQCOMMENTCHECKING = OFF;
//			}
//			else
//			{
//				i++;
//				j++;
//			}
//		}
//		while ((SQCOMMENTCHECKING == OFF || DQCOMMENTCHECKING == OFF) && array[i] != '\0')
//		{
//			if (array[i] == '\'' && array[i - 1] != '\\')
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//				SQCOMMENTCHECKING = ON;
//			}
//			else if (array[i] == '"' && array[i - 1] != '\\')
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//				DQCOMMENTCHECKING = ON;
//			}
//			else
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//			}
//	//		if (array[i] == '"')
//	//		{	/*test
//	//a
//	//b
//	//c*//*test*///
//	//			COMMENTCHECKING = ON;
//	//		}
//		}
//	}
//	output[j] = array[i];
//	printf("%s\n", output);
//}
#define MAXARRAYSIZE 10000

//main()
//{
//	int c;
//	char array[MAXARRAYSIZE];
//	int i = 0;
//	char output[MAXARRAYSIZE];
//	int j = 0;
//	int MAXLParenthesis = 0;
//	int MAXLBraces = 0;
//	int MAXLBrackets = 0;
//	int RParenthesis = 0;
//	int RBraces = 0;
//	int RBrackets = 0;
//	int COMMENT = NO;
//	int STAR = NO;
//	int COMMENTDONE = NO;
//	int COMMENTBEGANON = 0;
//	int COMMENTBEGANON_REGISTERED = NO;
//	int LINE = 0;
//	int UNEVENCOMMENT = NO;
//	int INACOMMENT = NO;
//	while ((c = getchar()) != EOF)
//	{
//		array[i] = c;
//		i++;
//	}
//	array[i] = '\0';
//	i = 0;
//	while (array[i] != '\0')
//	{
//		if (array[i] == '\n')
//		{
//			LINE++; //LINE COUNTER
//		} //THE NEWLINE IS SAVED IN THE NEXT EXPRESSION AND THEN IT DOES NOT FIT ANY OTHER CONDITIONAL STATEMENTS SO IT WILL BE INCREMENTED BY AN ELSE 1
//
//		output[j] = array[i]; //STORES EVERY CHARACTER FROM array
//
//		if (array[i] == ';') //THIS CHECKS FOR COMMENTS AFTER ;
//		{
//			i++;
//			j++;
//			output[j] = array[i]; //CHECKS EITHER // OR /* OR / OR WHITE SPACE OR NEWLINE . FIVE DIFFERENT CASES.
//			
//			while (array[i] != '\n') //WHILE THE CHARACTER WE JUST SAVED IS NOT THE NEW LINE \n CHECK THE SIX CASES
//			{
//				i++;
//				j++;
//				output[j] = array[i];
//				if (INACOMMENT == NO && array[i] != '/' && array[i] != '*' && array[i] != ' ' && array[i] != '\t')
//				{
//					while (array[i] != '\n')
//					{
//						i++;
//						j++;
//						output[j] = array[i]; // //CASE 6 TEXT NOT IN A COMMENT 
//					}
//					printf("Error: Syntax error. Text not in a comment on line %d.", LINE);
//				}
//
//				if (array[i] == '/') //CHECKS CASE 1 2 3 4 5
//				{
//					UNEVENCOMMENT = YES; //CASE 1 UNEVEN COMMENT 
//					INACOMMENT == YES;
//					COMMENTBEGANON = LINE;
//					if (array[i + 1] == '/')
//					{
//						UNEVENCOMMENT = NO;
//						INACOMMENT = YES;
//						while (array[i] != '\n')
//						{
//							i++;
//							j++;
//							output[j] = array[i]; //CASE 4 SINGLE LINE COMMENT // 
//						}
//					}
//
//					else if (array[i + 1] == '*') //CASE 5 MULTI LINE COMMENT /* 
//					{
//						UNEVENCOMMENT = NO;
//						INACOMMENT = YES;
//						while (INACOMMENT == YES && array[i] != '\0')
//						{
//							if (array[i] == '\n')
//							{
//								if (COMMENTBEGANON_REGISTERED == NO)
//								{
//									COMMENTBEGANON = LINE;
//									COMMENTBEGANON_REGISTERED == YES;
//								}
//								LINE++; //LINE COUNTER
//							}
//							if (array[i] == '*')
//							{
//								output[j] == array[i];
//								j++;
//								i++;
//								STAR = YES;
//							}
//							else if (array[i] == '/' && STAR == YES)
//							{
//								output[j] == array[i];
//								j++;
//								i++;
//								INACOMMENT = NO;
//								COMMENTBEGANON_REGISTERED == NO;
//							}
//							else
//							{
//								output[j] == array[i];
//								j++;
//								i++;
//								STAR = NO;
//							}
//						}
//						printf(" End of multi line comment. New line will be printed v \n");
//					}
//				}
//			}
//			if (UNEVENCOMMENT == YES)
//			{
//				printf("Error: Unbalanced comment on line. Missing / or *.");
//				output[j] = array[i];
//				i++;
//				j++;
//			}
//			else if (UNEVENCOMMENT == NO) //CASE 2 WHITESPACE  //CASE 3 NEWLINE 
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//			}
//		}
//		if (array[i] == '/')
//		{
//			if (array[i + 1] == '/')
//			{
//				output[j] == 'C';
//				j++;
//				output[j] == 'O';
//				j++;
//				output[j] == 'M';
//				j++;
//				output[j] == 'M';
//				j++;
//				output[j] == 'E';
//				j++;
//				output[j] == 'N';
//				j++;
//				output[j] == 'T';
//				j++;
//				output[j] == ':';
//				j++;
//				output[j] = array[i]; // /
//				i++;
//				j++;
//				output[j] = array[i]; // //
//				i++;
//				j++;
//				COMMENT = YES;
//				while (c != '\n')
//				{
//					output[j] = array[i];//comment text
//					i++;
//					j++;
//				}
//				//output[j] = array[i]; //\n
//				//i++;
//				//j++;
//			}
//			else if (array[i + 1] == '*')
//			{
//				output[j] == 'C';
//				j++;
//				output[j] == 'O';
//				j++;
//				output[j] == 'M';
//				j++;
//				output[j] == 'M';
//				j++;
//				output[j] == 'E';
//				j++;
//				output[j] == 'N';
//				j++;
//				output[j] == 'T';
//				j++;
//				output[j] == ':';
//				j++;
//				output[j] = array[i]; // /
//				i++;
//				j++;
//				output[j] = array[i]; // //
//				i++;
//				j++;
//				COMMENT = YES;
//				COMMENTBEGANON = LINE; //comment that began on Line 1 never terminated.
//				while (COMMENTDONE == NO && array[i] != '\0')
//				{
//					if (array[i] == '*')
//					{
//						output[j] == array[i];
//						j++;
//						i++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						output[j] == array[i];
//						j++;
//						i++;
//						COMMENTDONE = YES;
//					}
//					else
//					{
//						output[j] == array[i];
//						j++;
//						i++;
//						STAR = NO;
//					}
//				}
//				if (array[i] == '\0' && COMMENTDONE == NO)
//				{
//					printf("Error: Unbalanced cooment. The comment that started on Line %d never finished.", COMMENTBEGANON);
//				}
//				COMMENT = NO;
//			}
//			else
//				;
//		}
//		else
//		{
//			j++;
//			i++;
//		}
//
//	}
//	output[j] = '\0';
//	printf("%s\n", output);
//}

//#define MAXARRAYSIZE 10000
//
//
//main()
//{
//	int c;
//	char array[MAXARRAYSIZE];
//	int i = 0;
//	char output[MAXARRAYSIZE];
//	int j = 0;
//	int MAXLParenthesis = 0;
//	int MAXLBraces = 0;
//	int MAXLBrackets = 0;
//	int RParenthesis = 0;
//	int RBraces = 0;
//	int RBrackets = 0;
//	int COMMENT = NO;
//	int STAR = NO;
//	int COMMENTDONE = NO;
//	int COMMENTBEGANON = 0;
//	int COMMENTBEGANON_REGISTERED = NO;
//	int LINE = 0;
//	int UNEVENCOMMENT = NO;
//	int INACOMMENT = NO;
//	while ((c = getchar()) != EOF)
//	{
//		array[i] = c;
//		i++;
//	}
//	array[i] = '\0';
//	i = 0;
//	while (array[i] != '\0')
//	{
//		if (array[i] == '\n')
//		{
//			LINE++; //LINE COUNTER
//		}
//
//		output[j] = array[i]; //STORES EVERY CHARACTER FROM array to output
//
//		if (array[i] == ';') //THIS CHECKS FOR COMMENTS AND TEXT OUTSIDE OF COMMENTS AFTER ;
//		{
//			i++;
//			j++;
//
//			output[j] = array[i]; //CHECKS EITHER // OR /* OR / OR WHITE SPACE OR NEWLINE OR TEXT. SIX DIFFERENT CASES.
//
//			while (array[i] != '\n') //CHECK THE SIX CASES
//			{
//				i++;
//				j++;
//
//				output[j] = array[i]; //BEGIINNING OF TEXT THAT HAS TO BE ANALYZED. SAVED AND NOT NEXT.
//
//				if (INACOMMENT == NO && array[i] != '/' && array[i] != '*' && array[i] != ' ' && array[i] != '\t') //CASE 6
//				{
//					while (array[i] != '\n')
//					{
//						i++;
//						j++;
//
//						output[j] = array[i];
//					}
//					printf("Error: Syntax error. Text not in a comment on line %d.", LINE);
//				}
//
//				if (array[i] == '/') //CHECKS CASE 1 2 3 4 5
//				{
//					UNEVENCOMMENT = YES; //CASE 1 UNEVEN COMMENT 
//					INACOMMENT == YES;
//					COMMENTBEGANON = LINE;
//					if (array[i + 1] == '/')
//					{
//						UNEVENCOMMENT = NO;
//						INACOMMENT = YES;
//						while (array[i] != '\n')
//						{
//							i++;
//							j++;
//							output[j] = array[i]; //CASE 4 SINGLE LINE COMMENT // 
//						}
//					}
//
//					else if (array[i + 1] == '*') //CASE 5 MULTI LINE COMMENT /* 
//					{
//						UNEVENCOMMENT = NO;
//						INACOMMENT = YES;
//						while (INACOMMENT == YES && array[i] != '\0')
//						{
//							if (array[i] == '\n')
//							{
//								if (COMMENTBEGANON_REGISTERED == NO)
//								{
//									COMMENTBEGANON = LINE;
//									COMMENTBEGANON_REGISTERED == YES;
//								}
//								LINE++; //LINE COUNTER
//							}
//							if (array[i] == '*')
//							{
//								output[j] == array[i];
//								j++;
//								i++;
//								STAR = YES;
//							}
//							else if (array[i] == '/' && STAR == YES)
//							{
//								output[j] == array[i];
//								j++;
//								i++;
//								INACOMMENT = NO;
//								COMMENTBEGANON_REGISTERED == NO;
//							}
//							else
//							{
//								output[j] == array[i];
//								j++;
//								i++;
//								STAR = NO;
//							}
//						}
//						printf(" End of multi line comment. New line will be printed v \n");
//					}
//				}
//			}
//			if (UNEVENCOMMENT == YES)
//			{
//				printf("Error: Unbalanced comment on line. Missing / or *.");
//				output[j] = array[i];
//				i++;
//				j++;
//			}
//			else if (UNEVENCOMMENT == NO) //CASE 2 WHITESPACE  //CASE 3 NEWLINE 
//			{
//				output[j] = array[i];
//				i++;
//				j++;
//			}
//		}
//		if (array[i] == '/')
//		{
//			if (array[i + 1] == '/')
//			{
//				output[j] == 'C';
//				j++;
//				output[j] == 'O';
//				j++;
//				output[j] == 'M';
//				j++;
//				output[j] == 'M';
//				j++;
//				output[j] == 'E';
//				j++;
//				output[j] == 'N';
//				j++;
//				output[j] == 'T';
//				j++;
//				output[j] == ':';
//				j++;
//				output[j] = array[i]; // /
//				i++;
//				j++;
//				output[j] = array[i]; // //
//				i++;
//				j++;
//				COMMENT = YES;
//				while (c != '\n')
//				{
//					output[j] = array[i];//comment text
//					i++;
//					j++;
//				}
//				//output[j] = array[i]; //\n
//				//i++;
//				//j++;
//			}
//			else if (array[i + 1] == '*')
//			{
//				output[j] == 'C';
//				j++;
//				output[j] == 'O';
//				j++;
//				output[j] == 'M';
//				j++;
//				output[j] == 'M';
//				j++;
//				output[j] == 'E';
//				j++;
//				output[j] == 'N';
//				j++;
//				output[j] == 'T';
//				j++;
//				output[j] == ':';
//				j++;
//				output[j] = array[i]; // /
//				i++;
//				j++;
//				output[j] = array[i]; // //
//				i++;
//				j++;
//				COMMENT = YES;
//				COMMENTBEGANON = LINE; //comment that began on Line 1 never terminated.
//				while (COMMENTDONE == NO && array[i] != '\0')
//				{
//					if (array[i] == '*')
//					{
//						output[j] == array[i];
//						j++;
//						i++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						output[j] == array[i];
//						j++;
//						i++;
//						COMMENTDONE = YES;
//					}
//					else
//					{
//						output[j] == array[i];
//						j++;
//						i++;
//						STAR = NO;
//					}
//				}
//				if (array[i] == '\0' && COMMENTDONE == NO)
//				{
//					printf("Error: Unbalanced cooment. The comment that started on Line %d never finished.", COMMENTBEGANON);
//				}
//				COMMENT = NO;
//			}
//			else
//				;
//		}
//		else
//		{
//			j++;
//			i++;
//		}
//
//	}
//	output[j] = '\0';
//	printf("%s\n", output);
//}
//
//
//if (array[i] == '/')
//{
//	if (array[i + 1] == '/')
//	{
//		output[j] == 'C';
//		j++;
//		output[j] == 'O';
//		j++;
//		output[j] == 'M';
//		j++;
//		output[j] == 'M';
//		j++;
//		output[j] == 'E';
//		j++;
//		output[j] == 'N';
//		j++;
//		output[j] == 'T';
//		j++;
//		output[j] == ':';
//		j++;
//		output[j] = array[i]; // /
//		i++;
//		j++;
//		output[j] = array[i]; // //
//		i++;
//		j++;
//		COMMENT = YES;
//		while (c != '\n')
//		{
//			output[j] = array[i];//comment text
//			i++;
//			j++;
//		}
//		//output[j] = array[i]; //\n
//		//i++;
//		//j++;
//	}
//	else if (array[i + 1] == '*')
//	{
//		output[j] == 'C';
//		j++;
//		output[j] == 'O';
//		j++;
//		output[j] == 'M';
//		j++;
//		output[j] == 'M';
//		j++;
//		output[j] == 'E';
//		j++;
//		output[j] == 'N';
//		j++;
//		output[j] == 'T';
//		j++;
//		output[j] == ':';
//		j++;
//		output[j] = array[i]; // /
//		i++;
//		j++;
//		output[j] = array[i]; // //
//		i++;
//		j++;
//		COMMENT = YES;
//		COMMENTBEGANON = LINE; //comment that began on Line 1 never terminated.
//		while (COMMENTDONE == NO && array[i] != '\0')
//		{
//			if (array[i] == '*')
//			{
//				output[j] == array[i];
//				j++;
//				i++;
//				STAR = YES;
//			}
//			else if (array[i] == '/' && STAR == YES)
//			{
//				output[j] == array[i];
//				j++;
//				i++;
//				COMMENTDONE = YES;
//			}
//			else
//			{
//				output[j] == array[i];
//				j++;
//				i++;
//				STAR = NO;
//			}
//		}
//		if (array[i] == '\0' && COMMENTDONE == NO)
//		{
//			printf("Error: Unbalanced cooment. The comment that started on Line %d never finished.", COMMENTBEGANON);
//		}
//		COMMENT = NO;
//	}
//	else
//		;
//}
//else
//{
//	j++;
//	i++;
//}
//
//collects everything, line counts, all errors after ; prototype done, comment prototyp done, single quote and double quote prototype done, bracket prototype done, parenthesis prototype done, braces prototype, 

//#define MAXARRAYSIZE 10000
//main()
//{
//	int c;
//	char array[MAXARRAYSIZE];
//	int i = 0;
//	char output[MAXARRAYSIZE];
//	int j = 0;
//	char syntaxerror[MAXARRAYSIZE];
//	int k = 0;
//	int LeftBrackets = 0;
//	int RightBrackets = 0;
//	int EXTRABRACKETONLINE = 0;
//	int RightParenthesis = 0;
//	int LeftParanthesis = 0;
//	int EXTRAPARENTHESISONLINE = 0;
//	int RightBraces = 0;
//	int LeftBraces = 0;
//	int EXTRABRACESONLINE = 0;
//	int STAR = NO;
//	int UNBALANCEDCOMMENT = NO;
//	int INACOMMENT = NO;
//	int COMMENTDONE = NO;
//	int COMMENTBEGANON = 0;
//	int COMMENTENDEDON = 0;
//	int LINE = 1;
//	int SYNTAXERROR = NO;
//	int SYNTAXERRORONLINE = 0;
//	int INASINGLEQUOTE = NO;
//	int INADOUBLEQUOTE = NO;
//	int SINGLEQUOTEBEGANON = 0;
//	int DOUBLEQUOTEBEGANON = 0;
//	while ((c = getchar()) != EOF)
//	{
//		array[i] = c;
//		i++;
//	}
//	array[i] = '\0';
//	i = 0;
//	while (array[i] != '\0' && array[i] != EOF)
//	{
//
//		if (array[i] == '\n')
//		{
//			LINE++; //LINE COUNTER
//			if (LeftParanthesis > RightParenthesis)
//			{
//				printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d. \t", EXTRAPARENTHESISONLINE);
//			}
//			RightBrackets = 0;
//			LeftBrackets = 0;
//		}
//
//		output[j] = array[i]; //STORES EVERY CHARACTER FROM array
//
//		if (array[i] == ';') //THIS CHECKS FOR COMMENTS AFTER ;
//		{
//			i++;
//			j++;
//
//			output[j] = array[i]; //CHECKS EITHER // OR /* OR / OR WHITE SPACE OR NEWLINE . SIX DIFFERENT CASES.
//			if (LeftParanthesis > RightParenthesis)
//			{
//				printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d. \n", EXTRAPARENTHESISONLINE);
//			}
//			RightBrackets = 0;
//			LeftBrackets = 0;
//
//			while (array[i] != '\n' && array[i] != '\0') //WHILE THE CHARACTER WE JUST SAVED IS NOT THE NEW LINE \n CHECK THE SIX CASES
//			{
//				if (INACOMMENT == NO && array[i] != '/' && array[i] != '*' && array[i] != ' ' && array[i] != '\t') //CASE 6
//				{
//					while (array[i] != '/' && array[i] != '\n' && array[i] != '\0')
//					{
//						output[j] = array[i];
//						syntaxerror[k] = array[i];
//						SYNTAXERRORONLINE = LINE;
//						k++;
//						i++;
//						j++;
//					}
//					SYNTAXERROR = YES; //CASE 6 DONE
//				}
//
//				else if (array[i] == '/') //CASE 1 2 3 4 5
//				{
//					output[j] = array[i];
//
//					UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//					COMMENTBEGANON = LINE;
//
//					if (array[i + 1] == '/') //CASE 4
//					{
//						UNBALANCEDCOMMENT = NO;
//						INACOMMENT = YES;
//						while (array[i] != '\n')
//						{
//							i++;
//							j++;
//							output[j] = array[i]; //CASE 4 DONE
//						}
//						INACOMMENT = NO;
//					}
//
//					else if (array[i + 1] == '*') //CASE 5
//					{
//						UNBALANCEDCOMMENT = YES;
//						INACOMMENT = YES;
//						COMMENTBEGANON = LINE;
//						i++;
//						j++;
//						output[j] = array[i];
//						i++;
//						j++;
//						while (INACOMMENT == YES && array[i] != '\0')
//						{
//							if (array[i] == '\n')
//							{
//								LINE++; //LINE COUNTER
//							}
//							else if (array[i] == '*')
//							{
//								output[j] = array[i];
//								i++;
//								j++;
//								STAR = YES;
//							}
//							else if (array[i] == '/' && STAR == YES)
//							{
//								output[j] = array[i];
//								i++;
//								j++;
//								INACOMMENT = NO;
//								UNBALANCEDCOMMENT = NO;
//								COMMENTENDEDON = LINE;
//								STAR = NO;
//							}
//							else
//							{
//								output[j] = array[i];
//								i++;
//								j++;
//								STAR = NO;
//							}
//						}
//						if (INACOMMENT == NO && UNBALANCEDCOMMENT == NO)
//						{
//							printf("Multi-line comment that started on line %d and ended on %d. New line.\n", COMMENTBEGANON, COMMENTENDEDON); //CASE 5 DONE
//						}
//					}
//
//					else
//					{
//						while (array[i] != '\n')
//						{
//							syntaxerror[k] = array[i]; // / a b
//							i++;
//							j++;
//							k++;
//							if (array[i] != '\n')
//							{
//								output[j] = array[i]; // a b
//							}
//							SYNTAXERRORONLINE = LINE;
//						}
//						SYNTAXERROR = YES;
//					}
//				}
//				else
//				{
//					i++;
//					j++;
//				}
//			}
//
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				printf("Error: Unbalanced comment on line %d. Missing / or *.\n", COMMENTBEGANON);
//				output[j] = array[i];
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//
//				i++;
//				j++;
//				UNBALANCEDCOMMENT = NO;
//			}
//
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2 WHITESPACE DONE  //CASE 3 NEWLINE DONE //CASE 4 // DONE //CASE 5 /**/ DONE
//			{
//				output[j] = array[i]; //SAVES /n THEN NEXT -- EXITS CHECKING AFTER ;
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//
//				i++;
//				j++;
//			}
//			if (SYNTAXERROR == YES) //CASE 6 DONE
//			{
//				syntaxerror[k] = '\0';
//				printf("Error: Syntax error. Text not in a comment on line %d. Code: %s\n", SYNTAXERRORONLINE, syntaxerror);
//				syntaxerror[0] = '\0';
//				k = 0;
//				output[j] = array[i];
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//
//				i++;
//				j++;
//				SYNTAXERROR = NO;
//			}
//		} //; DONE
//
//
//		else if (array[i] == '/') //3 CASES
//		{
//			UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//			COMMENTBEGANON = LINE;
//
//			if (array[i + 1] == '/') //CASE 2
//			{
//				UNBALANCEDCOMMENT = NO;
//
//				INACOMMENT = YES;
//
//				while (array[i] != '\n')
//				{
//					i++;
//					j++;
//					output[j] = array[i];
//				}
//				INACOMMENT = NO; //CASE 2 DONE
//			}
//
//			else if (array[i + 1] == '*') //CASE 3
//			{
//				UNBALANCEDCOMMENT = YES;
//
//				INACOMMENT = YES;
//
//				COMMENTBEGANON = LINE;
//
//				while (INACOMMENT == YES && array[i] != '\0')
//				{
//					if (array[i] == '\n')
//					{
//						LINE++; //LINE COUNTER
//					}
//					if (array[i] == '*')
//					{
//						i++;
//						j++;
//						output[j] == array[i];
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						i++;
//						j++;
//						output[j] == array[i];
//						INACOMMENT = NO;
//						UNBALANCEDCOMMENT = NO;
//					}
//					else
//					{
//						i++;
//						j++;
//						output[j] == array[i];
//						STAR = NO;
//					}
//				}
//				if (INACOMMENT == NO && UNBALANCEDCOMMENT == NO && SYNTAXERROR == NO)
//				{
//					printf(" End of multi line comment that started on line %d. New line will be printed in case the next character is not a whitespace \n", COMMENTBEGANON); //CASE 3 DONE
//				}
//			}
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				printf("Error: Unbalanced comment on line %d. Missing / or *.\n", COMMENTBEGANON);
//				output[j] = array[i];
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//
//				i++;
//				j++;
//				UNBALANCEDCOMMENT = NO;
//			}
//
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2
//			{
//				output[j] = array[i]; //SAVES /n THEN NEXT
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//
//				i++;
//				j++;
//			}
//		}
//
//		else if (array[i] == '\'' && array[i - 1] != '\\')
//		{
//			INASINGLEQUOTE = YES;
//			SINGLEQUOTEBEGANON = LINE;
//			i++;
//			j++;
//
//			while (INASINGLEQUOTE == YES && array[i] != '\n') //could use one variable INAQUOTE
//			{
//				if (array[i] == '\'' && array[i - 1] != '\\')
//				{
//					INASINGLEQUOTE = NO;
//					output[j] = array[i];
//
//					i++;
//					j++;
//				}
//				else
//				{
//					output[j] = array[i];
//
//					i++;
//					j++;
//				}
//			}
//			if (INASINGLEQUOTE == YES)
//			{
//				printf("Error: Uneven single quote. The quote that started on line %d is missing a single quote \'.\n", SINGLEQUOTEBEGANON);
//				INASINGLEQUOTE = NO;
//			}
//
//		}
//
//		else if (array[i] == '"' && array[i - 1] != '\\')
//		{
//			INADOUBLEQUOTE = YES;
//			DOUBLEQUOTEBEGANON = LINE; //could use one variable QUOTEBEGANON
//			i++;
//			j++;
//			while (INADOUBLEQUOTE == YES && array[i] != '\n') //could use one variable INAQUOTE
//			{
//				if (array[i] == '"' && array[i - 1] != '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					output[j] = array[i];
//
//					i++;
//					j++;
//				}
//				else
//				{
//					output[j] = array[i];
//
//					i++;
//					j++;
//				}
//			}
//			if (INADOUBLEQUOTE == YES)
//			{
//				printf("Error: Uneven double quote. The double quote that started on line %d is missing a single quote \".\n", DOUBLEQUOTEBEGANON);
//				INADOUBLEQUOTE = NO;
//			}
//		}
//
//		else if (array[i] == '[')
//		{
//			LeftBrackets++;
//			EXTRABRACKETONLINE = LINE;
//
//			i++;
//			j++;
//			if (LeftBrackets - RightBrackets > 1)
//			{
//				printf("Error: Uneven brackets. An extra [ was found on line %d.\n", EXTRABRACKETONLINE);
//			}
//		}
//		else if (array[i] == ']')
//		{
//			RightBrackets++;
//			EXTRABRACKETONLINE = LINE;
//
//			i++;
//			j++;
//			if (RightBrackets - LeftBrackets > 0)
//			{
//				printf("Error: Uneven brackets. An extra ] was found on line %d.\n", EXTRABRACKETONLINE);
//			}
//		}
//
//		else if (array[i] == '(')
//		{
//			LeftParanthesis++;
//			EXTRAPARENTHESISONLINE = LINE;
//
//			i++;
//			j++;
//		}
//		else if (array[i] == ')')
//		{
//			RightParenthesis++;
//			EXTRAPARENTHESISONLINE = LINE;
//
//			i++;
//			j++;
//			if (RightParenthesis > LeftParanthesis)
//			{
//				printf("Error: Uneven Right Parenthesis. An extra ) was found on line %d.\n", EXTRAPARENTHESISONLINE);
//			}
//		}
//
//		else if (array[i] == '{')
//		{
//			LeftBraces++;
//			EXTRABRACESONLINE = LINE;
//
//			i++;
//			j++;
//		}
//		else if (array[i] == '}')
//		{
//			RightBraces++;
//			EXTRABRACESONLINE = LINE;
//
//			i++;
//			j++;
//			if (RightBraces > LeftBraces)
//			{
//				printf("Error: Uneven Right Braces. An extra } was found on line %d.\n", EXTRABRACESONLINE);
//			}
//		}
//		else if (array[i] != '\0' && array[i] != EOF)
//		{
//			i++;
//			j++;
//		}
//		else
//			;
//	}
//
//	if (LeftBraces > RightBraces)
//	{
//		printf("Error: Uneven Left Braces. An extra { was found on line %d.\n", EXTRABRACESONLINE);
//	}
//
//	output[j] = '\0'; //DONE
//	printf("%s\n", output); //PRINT OUTPUT
//}
/*
error
error; error
error; / error
error; //noerror
error; /*noerror*/
//error;/*noerror
//*/
//error; /*error/
//error; /*error*8/
//error:
//*/
//#define MAXARRAYSIZE 20000
//main()
//{
//	int c;
//	char array[MAXARRAYSIZE];
//	int i = 0;
//	char output[MAXARRAYSIZE];
//	int j = 0;
//	char syntaxerror[MAXARRAYSIZE];
//	int k = 0;
//	int LeftBrackets = 0;
//	int RightBrackets = 0;
//	int EXTRABRACKETONLINE = 0;
//	int RightParenthesis = 0;
//	int LeftParanthesis = 0;
//	int EXTRAPARENTHESISONLINE = 0;
//	int RightBraces = 0;
//	int LeftBraces = 0;
//	int EXTRALEFTBRACEONLINE = 0;
//	int EXTRARIGHTBRACEONLINE = 0;
//	int STAR = NO;
//	int UNBALANCEDCOMMENT = NO;
//	int INACOMMENT = NO;
//	int COMMENTDONE = NO;
//	int COMMENTBEGANON = 0;
//	int COMMENTENDEDON = 0;
//	int LINE = 2362;
//	int SYNTAXERROR = NO;
//	int SYNTAXERRORONLINE = 0;
//	int INASINGLEQUOTE = NO;
//	int INADOUBLEQUOTE = NO;
//	int SINGLEQUOTEBEGANON = 0;
//	int DOUBLEQUOTEBEGANON = 0;
//	int HEXSYNTAXERROR = NO;
//	int HEXSYNTAXERRORBEGANON = 0;
//	//octal (come back)
//	while ((c = getchar()) != EOF)
//	{
//		array[i] = c;
//		i++;
//	}
//	array[i] = '\0';
//	i = 0;
//	printf("\n");//appears after data collection. if this was placed at the beginning of the program after the declarations the newline would be printed before the data collection (the terminal would appear initiate with a newline.
//	while (array[i] != '\0' && array[i] != EOF)
//	{
//
//		if (array[i] == '\n')
//		{
//			LINE++; //LINE COUNTER
//			if (LeftParanthesis > RightParenthesis)
//			{
//				printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d.\n", EXTRAPARENTHESISONLINE);
//			}
//			RightBrackets = 0;
//			LeftBrackets = 0;
//			RightParenthesis = 0;
//			LeftParanthesis = 0;
//		}
//		output[j] = array[i]; //STORES EVERY CHARACTER FROM array
//
//		if (array[i] == ';') //THIS CHECKS FOR COMMENTS AFTER ;
//		{
//			i++;
//			j++;
//
//			output[j] = array[i]; //CHECKS EITHER // OR /* OR / OR WHITE SPACE OR NEWLINE . SIX DIFFERENT CASES.
//			if (LeftParanthesis > RightParenthesis)
//			{
//				printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d. \n", EXTRAPARENTHESISONLINE);
//			}
//			RightBrackets = 0;
//			LeftBrackets = 0;
//
//			while (array[i] != '\n' && array[i] != '\0' && array[i] != EOF) //WHILE THE CHARACTER WE JUST SAVED IS NOT THE NEW LINE \n CHECK THE SIX CASES
//			{
//				if (INACOMMENT == NO && array[i] != '/' && array[i] != '*' && array[i] != ' ' && array[i] != '\t') //CASE 6
//				{
//					while (array[i] != '/' && array[i] != '\n' && array[i] != '\0')
//					{
//						output[j] = array[i];
//						syntaxerror[k] = array[i];
//						SYNTAXERRORONLINE = LINE;
//						k++;
//						i++;
//						j++;
//					}
//					syntaxerror[k] = ' ';
//					k++;
//					SYNTAXERROR = YES; //CASE 6 DONE
//				}
//
//				else if (array[i] == '/') //CASE 1 2 3 4 5
//				{
//					output[j] = array[i];
//
//					UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//					COMMENTBEGANON = LINE;
//
//					if (array[i + 1] == '/') //CASE 4
//					{
//						UNBALANCEDCOMMENT = NO;
//						INACOMMENT = YES;
//						while (array[i] != '\n')
//						{
//							i++;
//							j++;
//							output[j] = array[i]; //CASE 4 DONE
//						}
//						INACOMMENT = NO;
//					}
//
//					else if (array[i + 1] == '*') //CASE 5
//					{
//						UNBALANCEDCOMMENT = YES;
//						INACOMMENT = YES;
//						COMMENTBEGANON = LINE;
//						i++;
//						j++;
//						output[j] = array[i];
//						i++;
//						j++;
//						while (INACOMMENT == YES && array[i] != '\0')
//						{
//							if (array[i] == '\n')
//							{
//								LINE++; //LINE COUNTER
//								output[j] = array[i];
//								i++;
//								j++;
//								if (LeftParanthesis > RightParenthesis)
//								{
//									printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d.\n", EXTRAPARENTHESISONLINE);
//								}
//								RightBrackets = 0;
//								LeftBrackets = 0;
//								RightParenthesis = 0;
//								LeftParanthesis = 0;
//							}
//							else if (array[i] == '*')
//							{
//								output[j] = array[i];
//								i++;
//								j++;
//								STAR = YES;
//							}
//							else if (array[i] == '/' && STAR == YES)
//							{
//								output[j] = array[i];
//								i++;
//								j++;
//								INACOMMENT = NO;
//								UNBALANCEDCOMMENT = NO;
//								COMMENTENDEDON = LINE;
//								STAR = NO;
//							}
//							else
//							{
//								output[j] = array[i];
//								i++;
//								j++;
//								STAR = NO;
//							}
//						}
//						if (INACOMMENT == NO && UNBALANCEDCOMMENT == NO)
//						{
//							printf("Multi-line comment started on line %d and ended on %d.\n", COMMENTBEGANON, COMMENTENDEDON); //CASE 5 DONE
//						}
//					}
//
//					else
//					{
//						syntaxerror[k] = array[i];
//						output[j] = array[i];
//						i++;
//						j++;
//						k++;
//
//						while (array[i] != '\n' && array[i] != '/' && array[i] != '\0' && array[i] != EOF)
//						{
//							syntaxerror[k] = array[i]; // / a b
//							output[j] = array[i];
//							i++;
//							j++;
//							k++;
//							SYNTAXERRORONLINE = LINE;
//						}
//						SYNTAXERROR = YES;
//					}
//				}
//				else
//				{
//					; //NEXT CHARACTER HANDLED IN THE UNBALANCED COMMENT CODE BLOCK
//					/*i++;
//					j++;*/
//				}
//			}
//
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				printf("Error: Unbalanced comment on line %d. Missing / or *.\n", COMMENTBEGANON);
//				output[j] = array[i];
//
//				if (array[i] == '\0')
//				{
//					printf("\n%s\n", output);
//				}
//				if (array[i] == '\n')
//				{
//					LINE++;
//					if (LeftParanthesis > RightParenthesis)
//					{
//						printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d.\n", EXTRAPARENTHESISONLINE);
//					}
//					RightBrackets = 0;
//					LeftBrackets = 0;
//					RightParenthesis = 0;
//					LeftParanthesis = 0;
//				}
//
//				i++;
//				j++;
//				UNBALANCEDCOMMENT = NO;
//			}
//
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2 WHITESPACE DONE  //CASE 3 NEWLINE DONE //CASE 4 // DONE //CASE 5 /**/ DONE
//			{
//				output[j] = array[i]; //SAVES /n THEN NEXT -- EXITS CHECKING AFTER ;
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//					if (LeftParanthesis > RightParenthesis)
//					{
//						printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d.\n", EXTRAPARENTHESISONLINE);
//					}
//					RightBrackets = 0;
//					LeftBrackets = 0;
//					RightParenthesis = 0;
//					LeftParanthesis = 0;
//				}
//
//				i++;
//				j++;
//			}
//			if (SYNTAXERROR == YES) //CASE 6 DONE
//			{
//				syntaxerror[k] = '\0';
//				printf("Error: Syntax error. Text not in a comment on line %d. Code: %s\n", SYNTAXERRORONLINE, syntaxerror);
//				syntaxerror[0] = '\0';
//				k = 0;
//				output[j] = array[i];
//
//				if (array[i] == '\n')
//				{
//					if (LeftParanthesis > RightParenthesis)
//					{
//						printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d.\n", EXTRAPARENTHESISONLINE);
//					}
//					LINE++;
//					RightBrackets = 0;
//					LeftBrackets = 0;
//					RightParenthesis = 0;
//					LeftParanthesis = 0;
//				}
//
//				i++;
//				j++;
//				SYNTAXERROR = NO;
//			}
//		} //; DONE
//		else if (array[i] == '/') //3 CASES
//		{
//			output[j] = array[i];
//
//			UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//			COMMENTBEGANON = LINE;
//
//			if (array[i + 1] == '/') //CASE 4
//			{
//				UNBALANCEDCOMMENT = NO;
//				INACOMMENT = YES;
//				while (array[i] != '\n')
//				{
//					i++;
//					j++;
//					output[j] = array[i]; //CASE 4 DONE
//				}
//				INACOMMENT = NO;
//			}
//
//			else if (array[i + 1] == '*') //CASE 3
//			{
//				UNBALANCEDCOMMENT = YES;
//
//				INACOMMENT = YES;
//
//				COMMENTBEGANON = LINE;
//				i++;
//				j++;
//				output[j] = array[i];
//				i++;
//				j++;
//				while (INACOMMENT == YES && array[i] != '\0')
//				{
//					if (array[i] == '\n')
//					{
//						LINE++; //LINE COUNTER
//						output[j] = array[i];
//						i++;
//						j++;
//						if (LeftParanthesis > RightParenthesis)
//						{
//							printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d.\n", EXTRAPARENTHESISONLINE);
//						}
//						RightBrackets = 0;
//						LeftBrackets = 0;
//						RightParenthesis = 0;
//						LeftParanthesis = 0;
//					}
//					else if (array[i] == '*')
//					{
//						output[j] = array[i];
//						i++;
//						j++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						output[j] = array[i];
//						i++;
//						j++;
//						INACOMMENT = NO;
//						UNBALANCEDCOMMENT = NO;
//						COMMENTENDEDON = LINE;
//						STAR = NO;
//					}
//					else
//					{
//						output[j] = array[i];
//						i++;
//						j++;
//						STAR = NO;
//					}
//				}
//				if (INACOMMENT == NO && UNBALANCEDCOMMENT == NO)
//				{
//					printf("Multi-line comment started on line %d and ended on %d.\n", COMMENTBEGANON, COMMENTENDEDON);
//				}
//			}
//			else
//				; //NEXT CHARACTER HANDLED IN THE UNBALANCED CODE BLOCK
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				printf("Error: Unbalanced comment on line %d. Missing / or *.\n", COMMENTBEGANON);
//				output[j] = array[i];
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//					if (LeftParanthesis > RightParenthesis)
//					{
//						printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d.\n", EXTRAPARENTHESISONLINE);
//					}
//					RightBrackets = 0;
//					LeftBrackets = 0;
//					RightParenthesis = 0;
//					LeftParanthesis = 0;
//				}
//
//				i++;
//				j++;
//				UNBALANCEDCOMMENT = NO;
//			}
//
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2
//			{
//				output[j] = array[i]; //SAVES /n THEN NEXT
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//					if (LeftParanthesis > RightParenthesis)
//					{
//						printf("Error: Uneven Left Parenthesis. An extra ( was found on line %d.\n", EXTRAPARENTHESISONLINE);
//					}
//					RightBrackets = 0;
//					LeftBrackets = 0;
//					RightParenthesis = 0;
//					LeftParanthesis = 0;
//				}
//
//				i++;
//				j++;
//			}
//		}
//
//		else if (array[i] == '\'' && array[i - 1] != '\\') //wow '\\' is reading \' wow SO THE CODE READS ' and before that the last two characters are \\. cases like \"' work as expected before this fix. LATEST DEBUG 5:02 PM 11/20/2019
//		{
//			INASINGLEQUOTE = YES;
//			SINGLEQUOTEBEGANON = LINE;
//			i++;
//			j++;
//
//			while (INASINGLEQUOTE == YES && array[i] != '\n') //if hex number must be 0-9 A-F until a space is read.
//			{
//				if (array[i] == '\'' && array[i - 1] != '\\') // && array[i-2] == "\""
//				{
//					INASINGLEQUOTE = NO;
//					output[j] = array[i];
//
//					i++;
//					j++;
//				}
//				else if (array[i] == '\'' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INASINGLEQUOTE = NO;
//					output[j] = array[i];
//
//					i++;
//					j++;
//				}
//				else if (array[i] == 'x' && array[i - 1] == '\\' && array[i-2] != '\\')
//				{
//					output[j] = array[i];
//
//					i++;
//					j++;
//					while (array[i] != ' ' && array[i] != '\'' && array[i] != '\n')
//					{
//						if (array[i] != '0' && array[i] != '1' && array[i] != '2' && array[i] != '3' && array[i] != '4' && array[i] != '5' && array[i] != '6' && array[i] != '7' && array[i] != '8' && array[i] != '9' && array[i] != 'A' && array[i] != 'B' && array[i] != 'C' && array[i] != 'D' && array[i] != 'E' && array[i] != 'F')
//						{
//							HEXSYNTAXERROR = YES;
//							HEXSYNTAXERRORBEGANON = LINE;
//						}
//						output[j] = array[i];
//
//						i++;
//						j++;
//					}
//				}
//				else
//				{
//
//					output[j] = array[i];
//
//					i++;
//					j++;
//				}
//			}
//			if (INASINGLEQUOTE == YES)
//			{
//				printf("Error: Uneven single quote. The single quote that started on line %d is missing a single quote \'.\n", SINGLEQUOTEBEGANON);
//				INASINGLEQUOTE = NO;
//			}
//			if (HEXSYNTAXERROR == YES)
//			{
//				printf("Error: Syntax error. The hexidecimal number on line %d is not acceptable.\n", HEXSYNTAXERRORBEGANON);
//				HEXSYNTAXERROR = NO;
//			}
//		}
//
//		else if (array[i] == '"' && array[i - 1] != '\\')
//		{
//			INADOUBLEQUOTE = YES;
//			DOUBLEQUOTEBEGANON = LINE; //could use one variable QUOTEBEGANON
//			i++;
//			j++;
//			while (INADOUBLEQUOTE == YES && array[i] != '\n') //could use one variable INAQUOTE
//			{
//				if (array[i] == '"' && array[i - 1] != '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					output[j] = array[i];
//
//					i++;
//					j++;
//				}
//				else if (array[i] == '"' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					output[j] = array[i];
//
//					i++;
//					j++;
//				}
//				else if (array[i] == 'x' && array[i - 1] == '\\' && array[i - 2] != '\\')
//				{
//					output[j] = array[i];
//
//					i++;
//					j++;
//					while (array[i] != ' ' && array[i] != '\'' && array[i] != '\n')
//					{
//						if (array[i] != '0' && array[i] != '1' && array[i] != '2' && array[i] != '3' && array[i] != '4' && array[i] != '5' && array[i] != '6' && array[i] != '7' && array[i] != '8' && array[i] != '9' && array[i] != 'A' && array[i] != 'B' && array[i] != 'C' && array[i] != 'D' && array[i] != 'E' && array[i] != 'F')
//						{
//							HEXSYNTAXERROR = YES;
//							HEXSYNTAXERRORBEGANON = LINE;
//						}
//						output[j] = array[i];
//
//						i++;
//						j++;
//					}
//				}
//				else
//				{
//					output[j] = array[i];
//
//					i++;
//					j++;
//				}
//			}
//			if (INADOUBLEQUOTE == YES)
//			{
//				printf("Error: Uneven double quote. The double quote that started on line %d is missing a double quote \".\n", DOUBLEQUOTEBEGANON);
//				INADOUBLEQUOTE = NO;
//			}
//			if (HEXSYNTAXERROR == YES)
//			{
//				printf("Error: Syntax error. The hexidecimal number on line %d is not acceptable.\n", HEXSYNTAXERRORBEGANON);
//				HEXSYNTAXERROR = NO;
//			}
//		}
//
//		else if (array[i] == '[')
//		{
//			LeftBrackets++;
//			EXTRABRACKETONLINE = LINE;
//
//			i++;
//			j++;
//			if (LeftBrackets - RightBrackets > 1)
//			{
//				printf("Error: Uneven brackets. An extra [ was found on line %d.\n", EXTRABRACKETONLINE);
//			}
//		}
//		else if (array[i] == ']')
//		{
//			RightBrackets++;
//			EXTRABRACKETONLINE = LINE;
//
//			i++;
//			j++;
//			if (RightBrackets - LeftBrackets > 0)
//			{
//				printf("Error: Uneven brackets. An extra ] was found on line %d.\n", EXTRABRACKETONLINE);
//			}
//		}
//
//		else if (array[i] == '(')
//		{
//			LeftParanthesis++;
//			EXTRAPARENTHESISONLINE = LINE;
//
//			i++;
//			j++;
//		}
//		else if (array[i] == ')')
//		{
//			RightParenthesis++;
//			EXTRAPARENTHESISONLINE = LINE;
//
//			i++;
//			j++;
//			if (RightParenthesis > LeftParanthesis)
//			{
//				printf("Error: Uneven Right Parenthesis. An extra ) was found on line %d.\n", EXTRAPARENTHESISONLINE);
//			}
//		}
//
//		else if (array[i] == '{')
//		{
//			LeftBraces++;
//			EXTRALEFTBRACEONLINE = LINE;
//
//			i++;
//			j++;
//		}
//		else if (array[i] == '}')
//		{
//			RightBraces++;
//			EXTRARIGHTBRACEONLINE = LINE;
//
//			i++;
//			j++;
//			if (RightBraces > LeftBraces)
//			{
//				printf("Error: Uneven Right Braces. An extra } was found on line %d.\n", EXTRARIGHTBRACEONLINE);
//			}
//		}
//		else if (array[i] != '\0' && array[i] != EOF)
//		{
//			i++;
//			j++;
//		}
//		else
//			;
//	}
//
//	if (LeftBraces > RightBraces)
//	{
//		printf("Error: Uneven Left Braces. An extra { was found on line %d.\n", EXTRALEFTBRACEONLINE);
//	}
//
//	output[j] = '\0'; //DONE
//	printf("\n%s\n", output); //PRINT OUTPUT
//}
//
//void checkCommentsAfterSemicolon(char array[]); //line 0
//void checkComments(char array[]);
//void checkSingleQuotes(char array[]);
//void checkDoubleQuotes(char array[]);
//void checkHexidecimalEscapeSequences(char array[]);
//void checkBrackets(char array[]);
//void checkParenthesis(char array[]);
//void checkBraces(char array[]);
//
//#define MAXARRAYSIZE 50000
//main()
//{
//	int c;
//	char array[MAXARRAYSIZE];
//	int i = 0;
//	//octal (come back)
//
//	while ((c = getchar()) != EOF)
//	{
//		array[i] = c;
//		i++;
//	}
//	array[i] = '\0';
//
//	printf("\n");
//	//line 0
//	checkCommentsAfterSemicolon(array);
//
//	checkComments(array);
//
//	checkSingleQuotes(array);
//
//	checkDoubleQuotes(array);
//
//	checkHexidecimalEscapeSequences(array); //line 34
//
//	checkBrackets(array);
//
//	checkParenthesis(array);
//
//	printf("\ndone\n");
//}
//
//void checkCommentsAfterSemicolon(char array[])
//{
//	int i = 0;
//	char syntaxerror[MAXARRAYSIZE];
//	int k = 0;
//	int STAR = NO;
//	int UNBALANCEDCOMMENT = NO;
//	int INACOMMENT = NO;
//	int COMMENTBEGANON = 0;
//	int COMMENTENDEDON = 0;
//	int LINE = 0;
//	int SYNTAXERROR = NO;
//	int SYNTAXERRORONLINE = 0;
//	int INASINGLEQUOTE = NO;
//	int INADOUBLEQUOTE = NO;
//
//	while (array[i] != '\0' && array[i] != EOF)
//	{
//		if (array[i] == ';') //line 34
//		{
//			i++;
//			while (array[i] != '\n' && array[i] != '\0' && array[i] != EOF) //WHILE THE CHARACTER WE JUST SAVED IS NOT THE NEW LINE \n CHECK THE SIX CASES
//			{
//				if (INACOMMENT == NO && array[i] != '/' && array[i] != ' ' && array[i] != '\t') //CASE 6
//				{
//					while (array[i] != '/' && array[i] != '\n' && array[i] != '\0' && array[i] != EOF)
//					{
//						syntaxerror[k] = array[i];
//						SYNTAXERRORONLINE = LINE;
//						k++;
//						i++;
//					}
//					syntaxerror[k] = ' ';
//					k++;
//					SYNTAXERROR = YES; //CASE 6 DONE
//				}
//
//				else if (array[i] == '/') //CASE 1 2 3 4 5
//				{
//					UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//					COMMENTBEGANON = LINE;
//
//					if (array[i + 1] == '/') //CASE 4
//					{
//						UNBALANCEDCOMMENT = NO;
//						INACOMMENT = YES;
//						while (array[i] != '\n' && array[i] != '\0' && array[i] != EOF)
//						{
//							i++;
//						}
//						INACOMMENT = NO;
//					}
//
//					else if (array[i + 1] == '*') //CASE 5
//					{
//						UNBALANCEDCOMMENT = YES;
//						INACOMMENT = YES;
//						COMMENTBEGANON = LINE;
//						i++;
//						i++;
//						while (INACOMMENT == YES && array[i] != '\0' && array[i] != EOF)
//						{
//							if (array[i] == '\n')
//							{
//								LINE++; //LINE COUNTER
//								i++;
//							}
//							else if (array[i] == '*')
//							{
//								i++;
//								STAR = YES;
//							}
//							else if (array[i] == '/' && STAR == YES)
//							{
//								i++;
//								INACOMMENT = NO;
//								UNBALANCEDCOMMENT = NO;
//								STAR = NO;
//							}
//							else
//							{
//								i++;
//								STAR = NO;
//							}
//						}
//						if (INACOMMENT == NO && UNBALANCEDCOMMENT == NO)
//						{
//							printf("Multi-line comment started on line %d and ended on %d.\n", COMMENTBEGANON, COMMENTENDEDON); //CASE 5 DONE
//							/*test
//							*/
//						}
//					}
//
//					else
//					{
//						printf("5\n");
//						syntaxerror[k] = array[i];
//						i++;
//						k++;
//
//						while (array[i] != '\n' && array[i] != '/' && array[i] != '\0' && array[i] != EOF)
//						{
//							syntaxerror[k] = array[i]; // / a b
//							i++;
//							k++;
//							SYNTAXERRORONLINE = LINE;
//						}
//						SYNTAXERROR = YES;
//					}
//				}
//				else
//					i++;
//			}
//
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				printf("Error: Unbalanced comment on line %d. Missing / or *.\n", COMMENTBEGANON);
//
//				if (array[i] == '\0')
//				{
//					//printf("\n%s\n", output);
//					printf("null\n");
//				}
//
//				if (array[i] == EOF)
//				{
//					printf("EOF\n");
//				}
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//
//				i++;
//				UNBALANCEDCOMMENT = NO;
//			}
//
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2 WHITESPACE DONE  //CASE 3 NEWLINE DONE //CASE 4 // DONE //CASE 5 /**/ DONE
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//			}
//			if (SYNTAXERROR == YES) //CASE 6 DONE
//			{
//				syntaxerror[k] = '\0';
//				printf("Error: Syntax error. Text not in a comment on line %d. Code: %s\n", SYNTAXERRORONLINE, syntaxerror);
//				syntaxerror[0] = '\0';
//				k = 0;
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//
//				i++;
//				SYNTAXERROR = NO;
//			}
//		}
//		else if (array[i] == '/') //3 CASES
//		{
//			UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//			COMMENTBEGANON = LINE;
//
//			if (array[i + 1] == '/') //CASE 4
//			{
//				UNBALANCEDCOMMENT = NO;
//				INACOMMENT = YES;
//				while (array[i] != '\n' && array[i] != '\0' && array[i] != EOF)
//				{
//					i++;
//				}
//				INACOMMENT = NO;
//			}
//
//			else if (array[i + 1] == '*') //CASE 3
//			{
//				UNBALANCEDCOMMENT = YES;
//
//				INACOMMENT = YES;
//
//				COMMENTBEGANON = LINE;
//				i++;
//				i++;
//				while (INACOMMENT == YES && array[i] != '\0' && array[i] != EOF)
//				{
//					if (array[i] == '\n')
//					{
//						LINE++; //LINE COUNTER
//						i++;
//					}
//					else if (array[i] == '*')
//					{
//						i++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						i++;
//						INACOMMENT = NO;
//						UNBALANCEDCOMMENT = NO;
//						COMMENTENDEDON = LINE;
//						STAR = NO;
//					}
//					else
//					{
//						i++;
//						STAR = NO;
//					}
//				}
//				if (INACOMMENT == NO && UNBALANCEDCOMMENT == NO)
//				{
//					printf("Multi-line comment started on line %d and ended on %d.\n", COMMENTBEGANON, COMMENTENDEDON); //style
//				}
//			}
//			else
//				; //NEXT CHARACTER (' ') IS HANDLED IN THE UNBALANCED COMMENT CODE BLOCK
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				printf("Error: Unbalanced comment on line %d. Missing / or *.\n", COMMENTBEGANON);
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//
//				i++;
//				UNBALANCEDCOMMENT = NO;
//			}
//
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2
//			{
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//			}
//		}
//		else if (array[i] == '\'' && array[i - 1] != '\\') //wow '\\' is reading \' wow SO THE CODE READS ' and before that the last two characters are \\. cases like \"' work as expected before this fix. LATEST DEBUG 5:02 PM 11/20/2019
//		{
//			INASINGLEQUOTE = YES;
//			i++;
//
//			while (INASINGLEQUOTE == YES && array[i] != '\n' && array[i] != '\0' && array[i] != EOF) //if hex number must be 0-9 A-F until a space is read.
//			{
//				if (array[i] == '\'' && array[i - 1] != '\\') // && array[i-2] == "\""
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '\'' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INASINGLEQUOTE == YES)
//			{
//				INASINGLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '"' && array[i - 1] != '\\')
//		{
//			INADOUBLEQUOTE = YES;
//			i++;
//			while (INADOUBLEQUOTE == YES && array[i] != '\n' && array[i] != '\0' && array[i] != EOF) //could use one variable INAQUOTE
//			{
//				if (array[i] == '"' && array[i - 1] != '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '"' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INADOUBLEQUOTE == YES)
//			{
//				INADOUBLEQUOTE = NO;
//			}
//		}
//		else
//		{ 
//			if (array[i] == '\n')
//			{
//				LINE++;
//			}
//			i++;
//		}
//	}
//}
//
//void checkComments(char array[])
//{
//	int i = 0;
//	int STAR = NO;
//	int UNBALANCEDCOMMENT = NO;
//	int INACOMMENT = NO;
//	int COMMENTBEGANON = 0;
//	int COMMENTENDEDON = 0;
//	int LINE = 0;
//	int INASINGLEQUOTE = NO;
//	int INADOUBLEQUOTE = NO;
//
//	while (array[i] != '\0' && array[i] != EOF)
//	{
//		if (array[i] == '/') //3 CASES
//		{
//			UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//			COMMENTBEGANON = LINE;
//
//			if (array[i + 1] == '/') //CASE 4
//			{
//				UNBALANCEDCOMMENT = NO;
//				INACOMMENT = YES;
//				while (array[i] != '\n' && array[i] != '\0' && array[i] != EOF)
//				{
//					i++;
//				}
//				INACOMMENT = NO;
//			}
//
//			else if (array[i + 1] == '*') //CASE 3
//			{
//				UNBALANCEDCOMMENT = YES;
//
//				INACOMMENT = YES;
//
//				COMMENTBEGANON = LINE;
//				i++;
//				i++;
//				while (INACOMMENT == YES && array[i] != '\0' && array[i] != EOF)
//				{
//					if (array[i] == '\n')
//					{
//						LINE++; //LINE COUNTER
//						i++;
//					}
//					else if (array[i] == '*')
//					{
//						i++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						i++;
//						INACOMMENT = NO;
//						UNBALANCEDCOMMENT = NO;
//						COMMENTENDEDON = LINE;
//						STAR = NO;
//					}
//					else
//					{
//						i++;
//						STAR = NO;
//					}
//				}
//				if (INACOMMENT == NO && UNBALANCEDCOMMENT == NO)
//				{
//					printf("Multi-line comment started on line %d and ended on %d.\n", COMMENTBEGANON, COMMENTENDEDON); //style
//				}
//			}
//			else
//				; //NEXT CHARACTER (' ') IS HANDLED IN THE UNBALANCED COMMENT CODE BLOCK
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				printf("Error: Unbalanced comment on line %d. Missing / or *.\n", COMMENTBEGANON);
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//
//				i++;
//				UNBALANCEDCOMMENT = NO;
//			}
//
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2
//			{
//
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//			}
//		}
//		else if (array[i] == '\'' && array[i - 1] != '\\') //wow '\\' is reading \' wow SO THE CODE READS ' and before that the last two characters are \\. cases like \"' work as expected before this fix. LATEST DEBUG 5:02 PM 11/20/2019
//		{
//			INASINGLEQUOTE = YES;
//			i++;
//
//			while (INASINGLEQUOTE == YES && array[i] != '\n' && array[i] != '\0' && array[i] != EOF) //if hex number must be 0-9 A-F until a space is read.
//			{
//				if (array[i] == '\'' && array[i - 1] != '\\') // && array[i-2] == "\""
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '\'' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INASINGLEQUOTE == YES)
//			{
//				INASINGLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '"' && array[i - 1] != '\\')
//		{
//			INADOUBLEQUOTE = YES;
//			i++;
//			while (INADOUBLEQUOTE == YES && array[i] != '\n' && array[i] != '\0' && array[i] != EOF) //could use one variable INAQUOTE
//			{
//				if (array[i] == '"' && array[i - 1] != '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '"' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INADOUBLEQUOTE == YES)
//			{
//				INADOUBLEQUOTE = NO;
//			}
//		}
//		else
//		{
//			if (array[i] == '\n')
//			{
//				LINE++;
//			}
//			i++;
//		}
//	}
//}
//
//void checkSingleQuotes(char array[])
//{
//	int i = 0;
//	char syntaxerror[MAXARRAYSIZE];
//	int k = 0;
//	int STAR = NO;
//	int UNBALANCEDCOMMENT = NO;
//	int INACOMMENT = NO;
//	int LINE = 0;
//	int INASINGLEQUOTE = NO;
//	int SINGLEQUOTEBEGANON = 0;
//	int INADOUBLEQUOTE = NO;
//
//	while (array[i] != '\0' && array[i] != EOF)
//	{
//		if (array[i] == '\'' && array[i - 1] != '\\') /*wow '\\' is reading \' wow SO THE CODE READS ' and before that the last two characters are \\. cases like \"' work as expected before this fix. LATEST DEBUG 5:02 PM 11/20/2019*/
//		{
//			INASINGLEQUOTE = YES;
//			SINGLEQUOTEBEGANON = LINE;
//			i++;
//
//			while (INASINGLEQUOTE == YES && array[i] != '\n' && array[i] != '\0' && array[i] != EOF) //if hex number must be 0-9 A-F until a space is read.
//			{
//				if (array[i] == '\'' && array[i - 1] != '\\') // && array[i-2] == "\""
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '\'' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INASINGLEQUOTE == YES)
//			{
//				printf("Error: Uneven single quote. The single quote that started on line %d is missing a single quote \'.\n", SINGLEQUOTEBEGANON);
//				INASINGLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '"' && array[i - 1] != '\\')
//		{
//			INADOUBLEQUOTE = YES;
//			i++;
//			while (INADOUBLEQUOTE == YES && array[i] != '\n' && array[i] != '\0' && array[i] != EOF) //could use one variable INAQUOTE
//			{
//				if (array[i] == '"' && array[i - 1] != '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '"' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INADOUBLEQUOTE == YES)
//			{
//				INADOUBLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '/') //3 CASES
//		{
//			UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//			if (array[i + 1] == '/') //CASE 4
//			{
//				UNBALANCEDCOMMENT = NO;
//				INACOMMENT = YES;
//				while (array[i] != '\n' && array[i] != '\0' && array[i] != EOF)
//				{
//					i++;
//				}
//				INACOMMENT = NO;
//			}
//
//			else if (array[i + 1] == '*') //CASE 3
//			{
//				UNBALANCEDCOMMENT = YES;
//				INACOMMENT = YES;
//				i++;
//				i++;
//				while (INACOMMENT == YES && array[i] != '\0' && array[i] != EOF)
//				{
//					if (array[i] == '\n')
//					{
//						LINE++; //LINE COUNTER
//						i++;
//					}
//					else if (array[i] == '*')
//					{
//						i++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						i++;
//						INACOMMENT = NO;
//						UNBALANCEDCOMMENT = NO;
//						STAR = NO;
//					}
//					else
//					{
//						i++;
//						STAR = NO;
//					}
//				}
//			}
//			else
//			{
//				;//NEXT CHARACTER IS HANDLED IN THE UNBALANCED COMMENT CODE BLOCK
//				/*i++;
//				j++;*/
//			}
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//				UNBALANCEDCOMMENT = NO;
//			}
//
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//			}
//		}
//		else
//		{
//			if (array[i] == '\n')
//			{
//				LINE++;
//			}
//			i++;
//		}
//	}
//}
//
//void checkDoubleQuotes(char array[])
//{
//	int i = 0;
//	char syntaxerror[MAXARRAYSIZE];
//	int k = 0;
//	int STAR = NO;
//	int UNBALANCEDCOMMENT = NO;
//	int INACOMMENT = NO;
//	int LINE = 0;
//	int INADOUBLEQUOTE = NO;
//	int DOUBLEQUOTEBEGANON = 0;
//	int INASINGLEQUOTE = NO;
//
//	while (array[i] != '\0' && array[i] != EOF)
//	{
//		if (array[i] == '"' && array[i - 1] != '\\')
//		{
//			INADOUBLEQUOTE = YES;
//			DOUBLEQUOTEBEGANON = LINE; //could use one variable QUOTEBEGANON
//			i++;
//			while (INADOUBLEQUOTE == YES && array[i] != '\n' && array[i] != '\0' && array[i] != EOF) //could use one variable INAQUOTE
//			{
//				if (array[i] == '"' && array[i - 1] != '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '"' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INADOUBLEQUOTE == YES)
//			{
//				printf("Error: Uneven double quote. The double quote that started on line %d is missing a double quote \".\n", DOUBLEQUOTEBEGANON);
//				INADOUBLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '\'' && array[i - 1] != '\\') //wow '\\' is reading \' wow SO THE CODE READS ' and before that the last two characters are \\. cases like \"' work as expected before this fix. LATEST DEBUG 5:02 PM 11/20/2019
//		{
//			INASINGLEQUOTE = YES;
//			i++;
//
//			while (INASINGLEQUOTE == YES && array[i] != '\n' && array[i] != '\0' && array[i] != EOF) //if hex number must be 0-9 A-F until a space is read.
//			{
//				if (array[i] == '\'' && array[i - 1] != '\\') // && array[i-2] == "\""
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '\'' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INASINGLEQUOTE == YES)
//			{
//				INASINGLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '/') //3 CASES
//		{
//			UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//			if (array[i + 1] == '/') //CASE 4
//			{
//				UNBALANCEDCOMMENT = NO;
//				INACOMMENT = YES;
//				while (array[i] != '\n' && array[i] != '\0' && array[i] != EOF)
//				{
//					i++;
//				}
//				INACOMMENT = NO;
//			}
//
//			else if (array[i + 1] == '*') //CASE 3
//			{
//				UNBALANCEDCOMMENT = YES;
//				INACOMMENT = YES;
//				i++;
//				i++;
//				while (INACOMMENT == YES && array[i] != '\0' && array[i] != EOF)
//				{
//					if (array[i] == '\n')
//					{
//						LINE++; //LINE COUNTER
//						i++;
//					}
//					else if (array[i] == '*')
//					{
//						i++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						i++;
//						INACOMMENT = NO;
//						UNBALANCEDCOMMENT = NO;
//						STAR = NO;
//					}
//					else
//					{
//						i++;
//						STAR = NO;
//					}
//				}
//			}
//			else
//			{
//				;//NEXT CHARACTER HANDLED IN THE UNBALANCED COMMENT BLOCK
//				/*i++;
//				j++;*/
//			}
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//				UNBALANCEDCOMMENT = NO;
//			}
//
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//			}
//		}
//		else
//		{
//			if (array[i] == '\n')
//			{
//				LINE++;
//			}
//			i++;
//		}
//	}
//}
//
//void checkHexidecimalEscapeSequences(char array[])
//{
//	int i = 0;
//	char syntaxerror[MAXARRAYSIZE];
//	int k = 0;
//	int STAR = NO;
//	int UNBALANCEDCOMMENT = NO;
//	int INACOMMENT = NO;
//	int LINE = 0;
//	int INASINGLEQUOTE = NO;
//	int INADOUBLEQUOTE = NO;
//	int HEXSYNTAXERROR = NO;
//	int HEXSYNTAXERRORBEGANON = 0;
//
//	while (array[i] != '\0' && array[i] != EOF)
//	{
//		if (array[i] == '\'' && array[i - 1] != '\\') //wow '\\' is reading \' wow SO THE CODE READS ' and before that the last two characters are \\. cases like \"' work as expected before this fix. LATEST DEBUG 5:02 PM 11/20/2019
//		{
//			INASINGLEQUOTE = YES;
//			i++;
//
//			while (INASINGLEQUOTE == YES && array[i] != '\n') //if hex number must be 0-9 A-F until a space is read.
//			{
//				if (array[i] == '\'' && array[i - 1] != '\\') // && array[i-2] == "\""
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '\'' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == 'x' && array[i - 1] == '\\' && array[i - 2] != '\\')
//				{
//					i++;
//					while (array[i] != ' ' && array[i] != '\'' && array[i] != '\n')
//					{
//						if (array[i] != '0' && array[i] != '1' && array[i] != '2' && array[i] != '3' && array[i] != '4' && array[i] != '5' && array[i] != '6' && array[i] != '7' && array[i] != '8' && array[i] != '9' && array[i] != 'A' && array[i] != 'B' && array[i] != 'C' && array[i] != 'D' && array[i] != 'E' && array[i] != 'F')
//						{
//							HEXSYNTAXERROR = YES;
//							HEXSYNTAXERRORBEGANON = LINE;
//						}
//						i++;
//					}
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INASINGLEQUOTE == YES)
//			{
//				INASINGLEQUOTE = NO;
//			}
//			if (HEXSYNTAXERROR == YES)
//			{
//				printf("Error: Syntax error. The hexidecimal number in the single quotes on line %d is not acceptable.\n", HEXSYNTAXERRORBEGANON);
//				HEXSYNTAXERROR = NO;
//			}
//		}
//		else if (array[i] == '"' && array[i - 1] != '\\')
//		{
//			INADOUBLEQUOTE = YES;
//			i++;
//			while (INADOUBLEQUOTE == YES && array[i] != '\n') //could use one variable INAQUOTE
//			{
//				if (array[i] == '"' && array[i - 1] != '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '"' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == 'x' && array[i - 1] == '\\' && array[i - 2] != '\\')
//				{
//					i++;
//					while (array[i] != ' ' && array[i] != '\'' && array[i] != '\n')
//					{
//						if (array[i] != '0' && array[i] != '1' && array[i] != '2' && array[i] != '3' && array[i] != '4' && array[i] != '5' && array[i] != '6' && array[i] != '7' && array[i] != '8' && array[i] != '9' && array[i] != 'A' && array[i] != 'B' && array[i] != 'C' && array[i] != 'D' && array[i] != 'E' && array[i] != 'F')
//						{
//							HEXSYNTAXERROR = YES;
//							HEXSYNTAXERRORBEGANON = LINE;
//						}
//						i++;
//					}
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INADOUBLEQUOTE == YES)
//			{
//				INADOUBLEQUOTE = NO;
//			}
//			if (HEXSYNTAXERROR == YES)
//			{
//				printf("Error: Syntax error. The hexidecimal number in the double quotes on line %d is not acceptable.\n", HEXSYNTAXERRORBEGANON);
//				HEXSYNTAXERROR = NO;
//			}
//		}
//		else if (array[i] == '/') //3 CASES
//		{
//			UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//			if (array[i + 1] == '/') //CASE 4
//			{
//				UNBALANCEDCOMMENT = NO;
//				INACOMMENT = YES;
//				while (array[i] != '\n')
//				{
//					i++;
//				}
//				INACOMMENT = NO;
//			}
//
//			else if (array[i + 1] == '*') //CASE 3
//			{
//				UNBALANCEDCOMMENT = YES;
//				INACOMMENT = YES;
//				i++;
//				i++;
//				while (INACOMMENT == YES && array[i] != '\0')
//				{
//					if (array[i] == '\n')
//					{
//						LINE++; //LINE COUNTER
//						i++;
//					}
//					else if (array[i] == '*')
//					{
//						i++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						i++;
//						INACOMMENT = NO;
//						UNBALANCEDCOMMENT = NO;
//						STAR = NO;
//					}
//					else
//					{
//						i++;
//						STAR = NO;
//					}
//				}
//			}
//			else
//			{
//				;//NEXT CHARACTER HANDLED IN THE UNBALANCED COMMENT CODE BLOCK
//				/*i++;
//				j++;*/
//			}
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//				UNBALANCEDCOMMENT = NO;
//			}
//
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//			}
//		}
//		else
//		{
//			if (array[i] == '\n')
//			{
//				LINE++;
//			}
//			i++;
//		}
//	}
//}
//
//void checkBrackets(char array[])
//{
//	int i = 0;
//	int LeftBrackets = 0;
//	int RightBrackets = 0;
//	int EXTRALEFTBRACKETONLINE = 0;
//	int EXTRARIGHTBRACKETONLINE = 0;
//	int STAR = NO;
//	int UNBALANCEDCOMMENT = NO;
//	int INACOMMENT = NO;
//	int LINE = 0;
//	int INASINGLEQUOTE = NO;
//	int INADOUBLEQUOTE = NO;
//
//	while (array[i] != '\0' && array[i] != EOF)
//	{
//		if (array[i] == '[')
//		{
//			LeftBrackets++;
//			EXTRALEFTBRACKETONLINE = LINE;
//			i++;
//			if (LeftBrackets - RightBrackets > 1)
//			{
//				printf("Error: Uneven brackets. An extra [ was found on line %d.\n", EXTRALEFTBRACKETONLINE);
//			}
//		}
//		else if (array[i] == ']')
//		{
//			RightBrackets++;
//			EXTRARIGHTBRACKETONLINE = LINE;
//			i++;
//			if (RightBrackets - LeftBrackets > 0)
//			{
//				printf("Error: Uneven brackets. An extra ] was found on line %d.\n", EXTRARIGHTBRACKETONLINE);
//			}
//		}
//		else if (array[i] == '\'' && array[i - 1] != '\\') //wow '\\' is reading \' wow SO THE CODE READS ' and before that the last two characters are \\. cases like \"' work as expected before this fix. LATEST DEBUG 5:02 PM 11/20/2019
//		{
//			INASINGLEQUOTE = YES;
//			i++;
//
//			while (INASINGLEQUOTE == YES && array[i] != '\n') //if hex number must be 0-9 A-F until a space is read.
//			{
//				if (array[i] == '\'' && array[i - 1] != '\\') // && array[i-2] == "\""
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '\'' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INASINGLEQUOTE == YES)
//			{
//				INASINGLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '"' && array[i - 1] != '\\')
//		{
//			INADOUBLEQUOTE = YES;
//			i++;
//			while (INADOUBLEQUOTE == YES && array[i] != '\n') //could use one variable INAQUOTE
//			{
//				if (array[i] == '"' && array[i - 1] != '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '"' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INADOUBLEQUOTE == YES)
//			{
//				INADOUBLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '/') //3 CASES
//		{
//			UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//			if (array[i + 1] == '/') //CASE 4
//			{
//				UNBALANCEDCOMMENT = NO;
//				INACOMMENT = YES;
//				while (array[i] != '\n')
//				{
//					i++;
//				}
//				INACOMMENT = NO;
//			}
//
//			else if (array[i + 1] == '*') //CASE 3
//			{
//				UNBALANCEDCOMMENT = YES;
//				INACOMMENT = YES;
//				i++;
//				i++;
//				while (INACOMMENT == YES && array[i] != '\0')
//				{
//					if (array[i] == '\n')
//					{
//						LINE++; //LINE COUNTER
//						i++;
//					}
//					else if (array[i] == '*')
//					{
//						i++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						i++;
//						INACOMMENT = NO;
//						UNBALANCEDCOMMENT = NO;
//						STAR = NO;
//					}
//					else
//					{
//						i++;
//						STAR = NO;
//					}
//				}
//			}
//			else
//			{
//				; //NEXT CHARACTER HANDLED IN THE UNBALANCED COMMENT CODE BLOCK
//				/*i++;
//				j++;*/
//			}
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//				UNBALANCEDCOMMENT = NO;
//			}
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//			}
//		}
//		else
//		{
//			if (array[i] == '\n')
//			{
//				LINE++;
//				LeftBrackets = 0;
//				RightBrackets = 0;
//			}
//			i++;
//		}
//	}
//}
//
//void checkParenthesis(char array[])
//{
//	int i = 0;
//	int LeftParenthesis = 0;
//	int RightParenthesis = 0;
//	int EXTRALEFTPARENTHESISONLINE = 0;
//	int EXTRARIGHTPARENTHESISONLINE = 0;
//	int STAR = NO;
//	int UNBALANCEDCOMMENT = NO;
//	int INACOMMENT = NO;
//	int LINE = 0;
//	int INASINGLEQUOTE = NO;
//	int INADOUBLEQUOTE = NO;
//
//	while (array[i] != '\0' && array[i] != EOF)
//	{
//		if (array[i] == '(')
//		{
//			LeftParenthesis++;
//			EXTRALEFTPARENTHESISONLINE = LINE;
//
//			i++;
//		}
//		else if (array[i] == ')')
//		{
//			RightParenthesis++;
//			EXTRARIGHTPARENTHESISONLINE = LINE;
//
//			i++;
//			if (RightParenthesis > LeftParenthesis)
//			{
//				printf("Error: Uneven Right Parenthesis ). An extra ) was found on line %d.\n", EXTRARIGHTPARENTHESISONLINE);
//			}
//		}
//		else if (array[i] == '\'' && array[i - 1] != '\\') //wow '\\' is reading \' wow SO THE CODE READS ' and before that the last two characters are \\. cases like \"' work as expected before this fix. LATEST DEBUG 5:02 PM 11/20/2019
//		{
//			INASINGLEQUOTE = YES;
//			i++;
//
//			while (INASINGLEQUOTE == YES && array[i] != '\n') //if hex number must be 0-9 A-F until a space is read.
//			{
//				if (array[i] == '\'' && array[i - 1] != '\\') // && array[i-2] == "\""
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '\'' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INASINGLEQUOTE == YES)
//			{
//				INASINGLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '"' && array[i - 1] != '\\')
//		{
//			INADOUBLEQUOTE = YES;
//			i++;
//			while (INADOUBLEQUOTE == YES && array[i] != '\n') //could use one variable INAQUOTE
//			{
//				if (array[i] == '"' && array[i - 1] != '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '"' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INADOUBLEQUOTE == YES)
//			{
//				INADOUBLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '/') //3 CASES
//		{
//			UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//			if (array[i + 1] == '/') //CASE 4
//			{
//				UNBALANCEDCOMMENT = NO;
//				INACOMMENT = YES;
//				while (array[i] != '\n')
//				{
//					i++;
//				}
//				INACOMMENT = NO;
//			}
//
//			else if (array[i + 1] == '*') //CASE 3
//			{
//				UNBALANCEDCOMMENT = YES;
//				INACOMMENT = YES;
//				i++;
//				i++;
//				while (INACOMMENT == YES && array[i] != '\0')
//				{
//					if (array[i] == '\n')
//					{
//						LINE++; //LINE COUNTER
//						i++;
//					}
//					else if (array[i] == '*')
//					{
//						i++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						i++;
//						INACOMMENT = NO;
//						UNBALANCEDCOMMENT = NO;
//						STAR = NO;
//					}
//					else
//					{
//						i++;
//						STAR = NO;
//					}
//				}
//			}
//			else
//			{
//				; //NEXT CHARACTER HANDLED IN THE UNBALANCED COMMENT CODE BLOCK
//				/*i++;
//				j++;*/
//			}
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//				UNBALANCEDCOMMENT = NO;
//			}
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//			}
//		}
//		else
//		{
//			if (array[i] == '\n')
//			{
//				LINE++;
//				if (LeftParenthesis > RightParenthesis)
//				{
//					printf("Error: Uneven Left Parenthesis (. An extra ( was found on line %d.\n", EXTRALEFTPARENTHESISONLINE);
//				}
//				LeftParenthesis = 0;
//				RightParenthesis = 0;
//			}
//			i++;
//		}
//	}
//}
//
//void checkBraces(char array[])
//{
//	int i = 0;
//	int LeftBraces = 0;
//	int RightBraces = 0;
//	int EXTRALEFTBRACEONLINE = 0;
//	int EXTRARIGHTBRACEONLINE = 0;
//	int STAR = NO;
//	int UNBALANCEDCOMMENT = NO;
//	int INACOMMENT = NO;
//	int LINE = 0;
//	int INASINGLEQUOTE = NO;
//	int INADOUBLEQUOTE = NO;
//
//	while (array[i] != '\0' && array[i] != EOF)
//	{
//		if (array[i] == '{')
//		{
//			LeftBraces++;
//			EXTRALEFTBRACEONLINE = LINE;
//			i++;
//		}
//		else if (array[i] == '}')
//		{
//			RightBraces++;
//			EXTRARIGHTBRACEONLINE = LINE;
//			i++;
//			if (RightBraces - LeftBraces > 0)
//			{
//				printf("Error: Uneven Right Braces. An extra } was found on line %d.\n", EXTRARIGHTBRACEONLINE);
//			}
//		}
//		else if (array[i] == '\'' && array[i - 1] != '\\') //wow '\\' is reading \' wow SO THE CODE READS ' and before that the last two characters are \\. cases like \"' work as expected before this fix. LATEST DEBUG 5:02 PM 11/20/2019
//		{
//			INASINGLEQUOTE = YES;
//			i++;
//
//			while (INASINGLEQUOTE == YES && array[i] != '\n') //if hex number must be 0-9 A-F until a space is read.
//			{
//				if (array[i] == '\'' && array[i - 1] != '\\') // && array[i-2] == "\""
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '\'' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INASINGLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INASINGLEQUOTE == YES)
//			{
//				INASINGLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '"' && array[i - 1] != '\\')
//		{
//			INADOUBLEQUOTE = YES;
//			i++;
//			while (INADOUBLEQUOTE == YES && array[i] != '\n') //could use one variable INAQUOTE
//			{
//				if (array[i] == '"' && array[i - 1] != '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else if (array[i] == '"' && array[i - 1] == '\\' && array[i - 2] == '\\')
//				{
//					INADOUBLEQUOTE = NO;
//					i++;
//				}
//				else
//				{
//					i++;
//				}
//			}
//			if (INADOUBLEQUOTE == YES)
//			{
//				INADOUBLEQUOTE = NO;
//			}
//		}
//		else if (array[i] == '/') //3 CASES
//		{
//			UNBALANCEDCOMMENT = YES; //CASE 1 DONE
//
//			if (array[i + 1] == '/') //CASE 4
//			{
//				UNBALANCEDCOMMENT = NO;
//				INACOMMENT = YES;
//				while (array[i] != '\n')
//				{
//					i++;
//				}
//				INACOMMENT = NO;
//			}
//
//			else if (array[i + 1] == '*') //CASE 3
//			{
//				UNBALANCEDCOMMENT = YES;
//				INACOMMENT = YES;
//				i++;
//				i++;
//				while (INACOMMENT == YES && array[i] != '\0')
//				{
//					if (array[i] == '\n')
//					{
//						LINE++; //LINE COUNTER
//						i++;
//					}
//					else if (array[i] == '*')
//					{
//						i++;
//						STAR = YES;
//					}
//					else if (array[i] == '/' && STAR == YES)
//					{
//						i++;
//						INACOMMENT = NO;
//						UNBALANCEDCOMMENT = NO;
//						STAR = NO;
//					}
//					else
//					{
//						i++;
//						STAR = NO;
//					}
//				}
//			}
//			else
//			{
//				; //NEXT CHARACTER HANDLED IN THE UNBALANCED COMMENT CODE BLOCK
//				/*i++;
//				j++;*/
//			}
//			if (UNBALANCEDCOMMENT == YES) //CASE 1
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//				UNBALANCEDCOMMENT = NO;
//			}
//			else if (UNBALANCEDCOMMENT == NO) //CASE 2
//			{
//				if (array[i] == '\n')
//				{
//					LINE++;
//				}
//				i++;
//			}
//		}
//		else
//		{
//			if (array[i] == '\n')
//			{
//				LINE++;
//			}
//			i++;
//		}
//	}
//	if (LeftBraces > RightBraces)
//	{
//		printf("Error: Uneven amount of Left Braces {. An extra left brace ({) was found on line %d.\n", EXTRALEFTBRACEONLINE);
//		printf("Total number of extra left braces: %d\n", LeftBraces - RightBraces);
//	}
//}
//
//main()
//{
	/*unsigned int c = 0;
	c--;
	printf("%d", c);*/
	//unsigned int c = 1; //It's about the interpretation that printf gives to the parameter you pass.
	//while (c > 0)
	//	c++;
	//c--;
	//printf("%d", c);
	//while (c > 0)
	//	c++;
	//printf("%d", c); //It's about the interpretation that printf gives to the parameter you pass.
//}
//main()
//{
//	unsigned char c = 0; //1 bytes 2^8 unsigned char is q byte on this machine
//	c--;
//	printf("%u", c);
//}
//main()
//{
//	signed char c = 1; //1 bytes -2^7 to 2^7 - 1 signed char is q byte on this machine
//	while (c > 0)
//		c++;
//	c--;
//	printf("%c", c); //%c causes unexpected results //%c prints a character, not the decimal representation of an integer. If you want to print the decimal representation of an integer, use %d.
//	printf("\n");
//	printf("%d", c);
//}
//main()
//{
//	unsigned int c = 0; //4 bytes 2^32 unsigned int is 4 bytes on this machine
//	c--;
//	printf("%u", c);
//}
//main()
//{
//	signed int c = 1; //4 bytes -2^32 to 2^32 - 1 signed int is 4 bytes on this machine
//	while (c > 0)
//		c++;
//	c--;
//	printf("%d", c);
//}
//Experiment
//Valuable result: unsigned and signed data type use the same number of bytes. The escape sequence %c prints out the character at the position of the numerical value in the character set of the system of the numerical value of the character passed to it.
//main()
//{
//	char zero = 0;
//	char A = 65;
//	printf("%c", zero); //prints NULL and not 0
//	printf("\n");
//	printf("%d", zero); //prints the decimal representation of an integer (char 0; a small integer)
//	printf("\n");
//	printf("%c", A); //prints A and not 65
//	printf("\n");
//	printf("%d", A); //prints the decimal representation of an integer (char 65; a small integer)
//}
//Experiment
//Valueable result: character is a small integer. Use %c to print out the character represented by the numerical value in the character set of the computer of the numerical value of the character passed to it. Use %d to print out the decimal representation of an integer.
//main()
//{
//	char zero = 0;
//	char A = 65;
//	printf("%c %d\n", A - zero, A - zero);
//	printf("%c %d\n", A - 0, A - 0); //
//	printf("%c %d\n", A - '0', A - '0');
//	zero = '0';
//	A = 65;
//	printf("%c %d\n", A - zero, A - zero);
//	printf("%c %d\n", A - 0, A - 0); //
//	printf("%c %d\n", A - '0', A - '0');
//}
//Experiment
//Valuable result: the integer 0 stored in variable character zero is different than the character 0 ('0') stored in the variable (character zero). The definition of the variable is directly related to the programs operation(s).
//main()
//{
//	char zero = getchar();
//	char A = 65;
//	printf("%c %d\n", A - zero, A - zero);
//	printf("%c %d\n", A - 0, A - 0); //
//	printf("%c %d\n", A - '0', A - '0');
//	zero = '0';
//	A = 65;
//	printf("%c %d\n", A - zero, A - zero);
//	printf("%c %d\n", A - 0, A - 0); //
//	printf("%c %d\n", A - '0', A - '0');
//}
//Experiment
//Valueable result: getchar grabs '0' and '1' not integers 0 and 1. getchar() GRABS CHARACTERS AND NOT INTEGERS!
//main()
//{
//	char zero = getchar();
//	char A = 65;
//	printf("%c %d\n", A - (zero - '0'), A - (zero - '0'));
//	printf("%c %d\n", A - 0, A - 0); //
//	printf("%c %d\n", A - '0', A - '0');
//	zero = '0';
//	A = 65;
//	printf("%c %d\n", A - zero, A - zero);
//	printf("%c %d\n", A - 0, A - 0); //
//	printf("%c %d\n", A - '0', A - '0');
//
//	printf("%c %d\n", A - (zero - '0'), A - (zero - '0'));
//	printf("%c %d\n", A - 0, A - 0);
//	printf("%c %d\n", A - '0', A - '0');
//}
//Experiment
//Valueable result: arithmetic can be used to effectively produce integers from getchar(), like A - (zero - '0')
//main()
//{
//	char zero = getchar();
//	char A = 65;
//	printf("%c %d\n", A - (zero - '0'), A - (zero - '0'));
//	printf("%c %d\n", A - 0, A - 0); //
//	printf("%c %d\n", A - '0', A - '0');
//	zero = 'A';
//	A = 65;
//	printf("%c %d\n", A - zero, A - zero);
//	printf("%c %d\n", A - 0, A - 0); //
//	printf("%c %d\n", A - '0', A - '0');
//}
//Experiment
//Valueable result: chacacter read by getchar display character that are defined by small integers and can be implemented into arithmetic
//unsigned and signed short and long (int), float, double, and long double
//main()
//{
//	unsigned short int number = 1; //short is 2 bytes 2^16 = 65535
//	while (number > 0)
//		number++;
//	number--;
//	printf("%u", number);
//}
//main()
//{
//	signed short int number = 1; //short is 2 bytes 2^16-1 to 2^16-1 - 1 = -32768 to 32767
//	while (number > 0)
//		number++;
//	number--;
//	printf("%d", number);
//}
//main()
//{
//	unsigned long int number = 0; //long is 4 bytes 2^32 = 4.29e9
//	/*while (number > 0)
//		number++;*/
//	number--;
//	printf("%u", number);
//}
//main()
//{
//	signed long int number = 1; //long is 4 bytes 2^32-1 = -4.29e9/2 to 4.29e9/2 - 1
//	while (number > 0)
//		number++;
//	//number--;
//	printf("%d", number);
//}
//main()
//{
//	float number = 1;
//	while (number > 0)
//		number++;
//	number--;
//	printf("%f", number);
//}
//Valuable result: float does not wrap it goes to infinity.												 #define FLT_MAX          3.402823466e+38F        // max value											#define FLT_MIN          1.175494351e-38F        // min normalized positive value
//main()
//{
//	double number = 99999.1;
//	while (number > 0)
//	{
//		number++;
//		printf("%f\n", number); //fixed.point notation infinity and nan
//		printf("%e\n", number); //standard form e+00
//		printf("%g\n", number); //Normal or exponent notation, whichever is more appropriate. Differs from fixed-point notation in that significant zeroes to the right of the decimal point are not included
//		printf("%F\n", number); //FIXED.POINT NOTATION INFINITY AND NAN
//		printf("%E\n", number); //standard form E+00
//		printf("%G\n", number); ////Normal or exponent notation, uses uppercase letters, whichever is more appropriate. Differs from fixed-point notation in that significant zeroes to the right of the decimal point are not included
//		printf("-\n");
//	
//		/*
//			1000000.100000
//			1.000000e+06
//			1e+06
//			1000000.100000
//			1.000000E+06
//			1E+06
//			-
//		*/
//
//		/*
//			100000.100000
//			1.000001e+05
//			100000
//			100000.100000
//			1.000001E+05
//			100000
//			-
//		*/
//	}
//}
//Valuable result: double does not wrap it goes to infinity. more of inf and nan support later.			#define DBL_MAX          1.7976931348623158e+308 // max value											#define DBL_MIN          2.2250738585072014e-308 // min positive value
//main()
//{
//	long double number = 99999.1;
//	while (number > 0)
//	{
//		number++;
//		printf("%f\n", number); //fixed.point notation infinity and nan
//		printf("%e\n", number); //standard form e+00
//		printf("%g\n", number); //Normal or exponent notation, whichever is more appropriate. Differs from fixed-point notation in that significant zeroes to the right of the decimal point are not included
//		printf("%F\n", number); //FIXED.POINT NOTATION INFINITY AND NAN
//		printf("%E\n", number); //standard form E+00
//		printf("%G\n", number); ////Normal or exponent notation, uses uppercase letters, whichever is more appropriate. Differs from fixed-point notation in that significant zeroes to the right of the decimal point are not included
//		printf("-\n");
//
//		/*
//			1000000.100000
//			1.000000e+06
//			1e+06
//			1000000.100000
//			1.000000E+06
//			1E+06
//			-
//		*/
//
//		/*
//			100000.100000
//			1.000001e+05
//			100000
//			100000.100000
//			1.000001E+05
//			100000
//			-
//		*/
//		//NOT DIFFERENT FROM DOUBLE
//	}
//}
//Valuable result: long double does not wrap it goes to infinity, more on INF and NAN support later		#define LDBL_MAX         DBL_MAX                 // max value											#define LDBL_MIN         DBL_MIN                 // min normalized positive value
//Experiment: Changing the maximum and minimum of long double in <float.h>. Thought: 12/1/2019 Tested: not yet
//main()
//{	
//	float number = 999999.1;
//	while (number > 0)
//	{
//		number++;
//		printf("%f\n", number); //fixed.point notation infinity and nan
//		printf("%e\n", number); //standard form e+00
//		printf("%g\n", number); //Normal or exponent notation, whichever is more appropriate. Differs from fixed-point notation in that significant zeroes to the right of the decimal point are not included
//		printf("%F\n", number); //FIXED.POINT NOTATION INFINITY AND NAN
//		printf("%E\n", number); //standard form E+00
//		printf("%G\n", number); ////Normal or exponent notation, uses uppercase letters, whichever is more appropriate. Differs from fixed-point notation in that significant zeroes to the right of the decimal point are not included
//		printf("-\n");
//
//		/*
//			1000000.125000
//			1.000000e+06
//			1e+06
//			1000000.125000
//			1.000000E+06
//			1E+06
//			-
//		*/
//
//		/*
//			100000.101563
//			1.000001e+05
//			100000
//			100000.101563
//			1.000001E+05
//			100000
//			-
//		*/
//		//DIFFERENT THAN DOUBLE AND LONG DOUBLE IN BOTH 99999.1 + 1 and 999999.1 
//	}
//}
//
//main()
//{
//	float fnumber1 = 99999.1;
//	double dnumber1 = 99999.1;
//	long double ldnumber1 = 99999.1;
//
//	float fnumber2 = 999999.1;
//	double dnumber2 = 999999.1;
//	long double ldnumber2 = 999999.1;
//
//	int i = 0;
//	printf("%18d+1%18d+1\n", 99999, 999999);
//	while (i < 1) //Float
//	{
//		printf("Float\n");
//		fnumber1++;
//		fnumber2++;
//		i++;
//		printf("%20f%20f\n\n", fnumber1, fnumber2);
//		printf("%20e%20e\n\n", fnumber1, fnumber2);
//		printf("%20g%20g\n\n", fnumber1, fnumber2);
//		printf("%20F%20F\n\n", fnumber1, fnumber2);
//		printf("%20E%20E\n\n", fnumber1, fnumber2);
//		printf("%20G%20G\n\n", fnumber1, fnumber2);
//		printf("\n");
//	}
//	i = 0;
//
//	while (i < 1) //Double
//	{
//		printf("Double\n");
//		dnumber1++;
//		dnumber2++;
//		i++;
//		printf("%20f%20f\n\n", dnumber1, dnumber2);
//		printf("%20e%20e\n\n", dnumber1, dnumber2);
//		printf("%20g%20g\n\n", dnumber1, dnumber2);
//		printf("%20F%20F\n\n", dnumber1, dnumber2);
//		printf("%20E%20E\n\n", dnumber1, dnumber2);
//		printf("%20G%20G\n\n", dnumber1, dnumber2);
//		printf("\n");
//	}
//	i = 0;
//
//	while (i < 1) //Long Double
//	{
//		printf("Long Double\n");
//		ldnumber1++;
//		ldnumber2++;
//		i++;
//		printf("%20f%20f\n\n", ldnumber1, ldnumber2);
//		printf("%20e%20e\n\n", ldnumber1, ldnumber2);
//		printf("%20g%20g\n\n", ldnumber1, ldnumber2);
//		printf("%20F%20F\n\n", ldnumber1, ldnumber2);
//		printf("%20E%20E\n\n", ldnumber1, ldnumber2);
//		printf("%20G%20G\n\n", ldnumber1, ldnumber2);
//		printf("\n");
//	}
//}
//The % operator determines what is printed and how it is printed while the variable is unaffected. The float data type output variance is because
//Valuable result: truncation occurs from double to float and long double to float
//Valuable result: exponent notation (%g and %G) begins at 1,000,000

//Valuable results: char 1 byte, short 2 bytes, int 4 bytes, long 4 bytes, float 4 bytes 6 decimal places, double 8 bytes 15 decimal places, long double 10 bytes 19 decimal places on other computers but it is 8 bytes 15 decimal places on my computer
//https://www.tutorialspoint.com/cprogramming/c_data_types.htm 
//https://en.wikipedia.org/wiki/Printf_format_string
//Experiment: Changing the maximum and minimum of long double in <float.h>. Thought: 12/1/2019 Tested: not yet

//main()
//{
//	printf("unsigned char: %u to %u\n", 0, UCHAR_MAX);
//	printf("signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
//	printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
//
//	printf("unsigned short int: %u to %u\n", 0, USHRT_MAX);
//	printf("signed short int: %d to %d\n", SHRT_MIN, SHRT_MAX); //signed short
//	printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX); //short are the same
//
//	printf("unsigned int: %u to %u\n", 0, UINT_MAX);
//	printf("signed int: %d to %d\n", INT_MIN, INT_MAX); //signed int
//	printf("int: %d to %d\n", INT_MIN, INT_MAX); //int are the same
//
//	printf("unsigned long int: %u to %u\n", 0, ULONG_MAX);
//	printf("signed long int: %d to %d\n", LONG_MIN, LONG_MAX); //signed long
//	printf("long: %d to %d\n", LONG_MIN, LONG_MAX); //long are the same
//
//	printf("unsigned long long int: %llu to %llu\n", 0, ULLONG_MAX);
//	printf("signed long long int: %lld to %lld\n", LLONG_MIN, LLONG_MAX); //signed long long
//	printf("long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX); //long long are the same
//
//	printf("float: %G to %G\n", FLT_MIN, FLT_MAX);
//
//	printf("double: %G to %G\n", DBL_MIN, DBL_MAX);
//
//	printf("long double: %G to %G\n", LDBL_MIN, LDBL_MAX);
//
//	//limits.h includes number of bits, number of bytes in multibyte char, range for 8-bit/16-bit/32-bit/64-bit/128-bit values
//	/*
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4863,9): warning C4477: 'printf' : format string '%u' requires an argument of type 'unsigned int', but variadic argument 2 has type 'unsigned __int64'
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4863,9): message : consider using '%llu' in the format string
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4863,9): message : consider using '%I64u' in the format string
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4864,9): warning C4477: 'printf' : format string '%d' requires an argument of type 'int', but variadic argument 1 has type '__int64'
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4864,9): message : consider using '%lld' in the format string
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4864,9): message : consider using '%I64d' in the format string
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4864,9): warning C4477: 'printf' : format string '%d' requires an argument of type 'int', but variadic argument 2 has type '__int64'
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4864,9): message : consider using '%lld' in the format string
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4864,9): message : consider using '%I64d' in the format string
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4865,9): warning C4477: 'printf' : format string '%d' requires an argument of type 'int', but variadic argument 1 has type '__int64'
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4865,9): message : consider using '%lld' in the format string
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4865,9): message : consider using '%I64d' in the format string
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4865,9): warning C4477: 'printf' : format string '%d' requires an argument of type 'int', but variadic argument 2 has type '__int64'
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4865,9): message : consider using '%lld' in the format string
//	1>C:\Users\funca\source\repos\C\P1\P1.c(4865,9): message : consider using '%I64d' in the format string
//	*/
//
//	/*
//	unsigned char: 0 to 255
//	signed char: -128 to 127
//	char: -128 to 127
//	unsigned short int: 0 to 65535
//	signed short int: -32768 to 32767
//	short: -32768 to 32767
//	unsigned int: 0 to 4294967295
//	signed int: -2147483648 to 2147483647
//	int: -2147483648 to 2147483647
//	unsigned long int: 0 to 4294967295
//	signed long int: -2147483648 to 2147483647
//	long: -2147483648 to 2147483647
//	unsigned long long int: 18446744069414584320 to 27887162523385855
//	signed long long int: -9223372036854775808 to 9223372036854775807
//	long long: -9223372036854775808 to 9223372036854775807
//	float: 1.17549E-38 to 3.40282E+38
//	double: 2.22507E-308 to 1.79769E+308
//	long double: 2.22507E-308 to 1.79769E+308
//	*/
//}
//
//main()
//{
//	int c;
//	int lim;
//	char line[40];
//	int i = 0;
//	for (lim = 0; lim < 100; lim++)
//	{
//		if ((c = getchar()) != '\n')
//		{
//			if (c != EOF)
//				line[i++] = c;
//		}
//	}
//}

//int htoi(char array[])
//{
//	int c;
//	int i;
//	int n;
//	int pp;
//	for (i = 0; isdigit(array[i]) || array[i] >= 'A' && array[i] <= 'Z' || array[i] >= 'a' && array[i] <= 'z'; i++)
//	{
//		if (isdigit(array[i]))
//			pp = array[i] - '0';
//		else if (array[i] == 'A' || array[i] == 'a')
//			pp = 10;
//		else if (array[i] == 'B' || array[i] == 'b')
//			pp = 11;
//		else if (array[i] == 'C' || array[i] == 'c')
//			pp = 12;
//		else if (array[i] == 'D' || array[i] == 'd')
//			pp = 13;
//		else if (array[i] == 'E' || array[i] == 'e')
//			pp = 14;
//		else if (array[i] == 'F' || array[i] == 'f')
//			pp = 15;
//		n = n * 10 + pp;
//		if (i == 0 && array[i] == '0')
//		{
//			i = 3;
//			n = 0;
//		}
//		return n;
//	}
//}

//void squeezedelete(char s1[], char s2[])
//{
//	int i = 0;
//	int j;
//	int k = 0;
//	while (s1[i] != '\0')
//	{
//		j = 0;
//		while (s2[j] != '\0' && s1[i] != s2[j])
//		{
//			if (s2[j+1] == '\0')
//			{
//				s1[k++] = s1[i];
//			}
//			j++;
//		}
//		i++;
//	}
//}

//void firstcommoncharacter(char s1[], char s2[])
//{
//	int i;
//	int j;
//	int fcci = 0;
//
//	while (s1[i] != '\0')
//	{
//		j = 0;
//		while (s2[j++] != '\0')
//		{
//			if (s1[i] == s2[j])
//			{
//				return ++fcci;
//			}
//			fcci++;
//		}
//		if (s1[i + 1] == '\0')
//			return -1;
//		i++;
//	}
//}

//unsigned setbits(unsigned x, int p, int n, unsigned y) //signed instead of unsigned for sign bit sign extension p.50
//{
//	return ((x >> (p + 1 - n)) & (y & ~(~0 << n));
//}

//unsigned invert(unsigned x, int p, int n) //signed instead of unsigned for sign bit sign extension p.50
//{
//	return x ^ ((~0 << p + 1 - n) >> n - 1); //arithmetic right shift, sign extension vital
//}

//unsigned rightrot(unsigned x, int n) //signed instead of unsigned for sign bit sign extension p.50
//{
//	unsigned x2 = x;
//	int size = bitsize(x); //function bitsize counts the number of bits in x. Example x = 0000 returns 4.
//	return (x >> n) | ((~0 << size - 1)  & (x2 << size - n));
//}

//unsigned bitcount_Faster(unsigned x)
//{
//	return ~(x - 1);
//}

//void lower(char array[])
//{
//	int i = 0;
//	while (array[i] != '\0')
//	{
//		array[i] = (array[i] >= 'A' || array[i] <= 'Z') ? array[i] + 'a' - 'A' : array[i];
//		i++;
//	}
//}

//int binsearch(int x, char array[], int bottom, int top)
//{
//	int low = bottom;
//	int high = top - 1;
//	int middle = (high + low) / 2;
//
//	while (x != array[middle] && (high + middle) / 2 != middle && (low + middle) / 2 != middle)
//	{
//		if (x > array[middle])
//			middle = (high + middle) / 2;
//		else
//			middle = (low + middle) / 2;
//	}
//	if (x == array[middle])
//		return middle;
//	else
//		return -1;
//} //did not run them next to eachother was not interested in that moment

//void escape(char s[], char t[])
//{
//	int i = 0;
//	int j = 0;
//	while (s[i] != '\0')
//	{
//		switch (s[i])
//		{
//			case '\n': 
//				t[j] = '\\';
//				j++;
//				t[j] = 'n';
//				i++;
//				break;
//			case '\t':
//				t[j] = '\\';
//				j++;
//				t[j] = 't';
//				i++;
//				break;
//			default:
//				t[j] = s[i];
//				j++;
//				i++;
//				break;
//		}
//	}
//}

//void escapereversed(char s[], char t[])
//{
//	int i = 0;
//	int j = 0;
//	while (s[i] != '\0')
//	{
//		switch (s[i])
//		{
//		case ('\\'):
//			if (s[i + 1] == 'n')
//			{
//				t[j] = '\n';
//				j++;
//				i++;
//				break;
//			}
//			else if (s[i + 1] == 't')
//			{
//				t[j] = '\t';
//				j++;
//				i++;
//				break;
//			}
//			else
//			{
//				t[j] = s[i];
//				j++;
//				i++;
//				break;
//			}
//		default:
//			t[j] = s[i];
//			j++;
//			i++;
//			break;
//		}
//	}
//}

//https://www.youtube.com/watch?v=qzXAVXddcPU 

//void expand(char s1[], char s2[]);
//
//main()
//{
//	int c;
//	int i = 0;
//	char s1[MAXARRAYSIZE];
//	char s2[MAXARRAYSIZE];
//	while ((c = getchar()) != EOF)
//		s1[i++] = c;
//	s1[i] = '\0';
//	expand(s1, s2);
//	printf("%s", s2);
//}
//
//void expand(char s1[], char s2[])
//{
//	int INALETTEREXPANSION = NO;
//	int INANUMBEREXPANSION = NO;
//	int i = 0;
//	int k;
//	int j = 0;
//	int nc = 0;
//	int valk;
//	int vali;
//	int inc;
//	while (s1[i] != '\0' && s1[i] != EOF)
//	{
//		switch (s1[i])
//		{
//			case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g': case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n': case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u': case 'v': case 'w': case 'x': case 'y': case 'z':
//			case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G': case 'H': case 'I': case 'J': case 'K': case 'L': case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U': case 'V': case 'W': case 'X': case 'Y': case 'Z':
//				if (!INALETTEREXPANSION)
//				{
//					s2[j++] = s1[i];
//					INALETTEREXPANSION = YES;
//				}
//				k = i + 1;
//				nc = 1;
//				while (!isalnum(s1[k]) && s1[k] != '-' && s1[k] != '\0' && s1[k] != EOF)
//					nc++, k++;
//				if (isdigit(s1[k]))
//				{
//					INALETTEREXPANSION = NO;
//					i++;
//				}
//				else if (s1[k] == '-')
//				{
//					nc++, k++;
//					while (!isalnum(s1[k]) && s1[k] != '\0' && s1[k] != EOF)
//						nc++, k++;
//					if (isalpha(s1[k]) && s1[k] > s1[i])
//					{
//						valk = s1[k];
//						vali = s1[i];
//						inc = 1;
//						while (valk-- > vali)
//						{
//							s2[j++] = s1[i] + inc++;
//						}
//						i += nc;
//						INALETTEREXPANSION = YES;
//					}
//					else if (isalpha(s1[k]) && s1[k] < s1[i])
//					{
//						valk = s1[k];
//						vali = s1[i];
//						inc = 1;
//						while (valk++ < vali)
//						{
//							s2[j++] = s1[i] - inc++;
//						}
//						i += nc;
//						INALETTEREXPANSION = YES;
//					}
//					else if (isalpha(s1[k]) && s1[k] == s1[i])
//					{
//						s2[j++] = s1[i];
//						i += nc;
//					}
//					else
//					{
//						s2[j++] = '-';
//						i += nc;
//						INALETTEREXPANSION = NO;
//					}
//				}
//				else if (isalpha(s1[k]))
//				{
//					INALETTEREXPANSION = NO;
//					i += nc;
//				}
//				else
//					i++;
//				break;
//			case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
//				if (!INANUMBEREXPANSION)
//				{
//					s2[j++] = s1[i];
//					INANUMBEREXPANSION = YES;
//				}
//				k = i + 1;
//				nc = 1;
//				while (!isalnum(s1[k]) && s1[k] != '-' && s1[k] != '\0' && s1[k] != EOF)
//					nc++, k++;
//				if (isalpha(s1[k]))
//				{
//					INANUMBEREXPANSION = NO;
//					i++;
//				}
//				else if (s1[k] == '-')
//				{
//					nc++, k++;
//					while (!isalnum(s1[k]) && s1[k] != '\0' && s1[k] != EOF)
//						nc++, k++;
//					if (isdigit(s1[k]) && s1[k] > s1[i])
//					{
//						valk = s1[k];
//						vali = s1[i];
//						inc = 1;
//						while (valk-- > vali)
//						{
//							s2[j++] = s1[i] + inc++;
//						}
//						i += nc;
//						INANUMBEREXPANSION = YES;
//					}
//					else if (isdigit(s1[k]) && s1[k] < s1[i])
//					{
//						valk = s1[k];
//						vali = s1[i];
//						inc = 1;
//						while (valk++ < vali)
//						{
//							s2[j++] = s1[i] - inc++;
//						}
//						i += nc;
//						INANUMBEREXPANSION = YES;
//					}
//					else if (isdigit(s1[k]) && s1[k] == s1[i])
//					{
//						s2[j++] = s1[i];
//						i += nc;
//					}
//					else
//					{
//						s2[j++] = '-';
//						i += nc;
//						INANUMBEREXPANSION = NO;
//					}
//				}
//				else if (isalpha(s1[k]))
//				{
//					INANUMBEREXPANSION = NO;
//					i += nc;
//				}
//				else
//					i++;
//				break;
//			default:
//				s2[j++] = s1[i++];
//				break;
//		}
//	}
//	s2[j] = '\0';
//}

//void reverse(char s[])
//{
//	char temp[MAXARRAYSIZE];
//	int i = 0;
//	int j = 0;
//	int pointofreverse = 0;
//
//	while (s[i] != '\0')
//	{
//		while (s[i] != '\n' && s[i] != '\0')
//		{
//			i++;
//		}
//		pointofreverse = i - 1;
//		while (j < i)
//		{
//			temp[j++] = s[pointofreverse--];
//		}
//		temp[j] = s[i++];
//	}
//	temp[j] = '\0';
//	s = temp; //new reverse on 5373
//}
//The problem is that, if n is the largest negative number, when you do n = -n you obtain 0, bacause you cannot represent a positive number that big.
//A solution can be to hold the positive number in a long integer.
//Learned ints are stored using binary number representation systems 127 = 01111111 -128 = 10000000. char is a int (56) representing a character 'A
//void itoa(int n, char s[])
//{
//	int i;
//	int sign;
//	long long int holdthepositivenumber;
//	if ((sign = n) < 0)
//		holdthepositivenumber = -n; //n = -n;
//	i = 0;
//	do {
//		s[i++] = n % 10 + '0';
//	} while ((n /= 10) > 0);
//	if (sign < 0)
//		s[i++] = '-';
//	s[i] = '\0';
//	reverse(s);
//}
//void reverse(char s[]);
//void itob(int n, char s[], int b);
//int atoi(char s[]);
//main()
//{
//	int c;
//	char anumber[MAXARRAYSIZE];
//	int number;
//	int i = 0;
//	int base;
//	while ((c = getchar()) != '\n')
//		anumber[i++] = c;
//	anumber[i] = '\0', printf("%s\n", anumber);
//	number = atoi(anumber), printf("%d\n", number);
//	i = 0, anumber[0] = '\0';
//	while ((c = getchar()) != '\n')
//		anumber[i++] = c;
//	anumber[i] = '\0', printf("%s\n", anumber);
//	base = atoi(anumber), printf("%d\n", base);
//	anumber[0] = '\0', itob(number, anumber, base), printf("%s\n", anumber);
//}
//void itob(int n, char s[], int b)
//{
//	int i = 0;
//	int nrc;
//	while (n > 0)
//	{
//		if ((nrc = n % b) >= 10)
//			s[i++] = (char) (nrc + 55);
//		else 
//			s[i++] = (char) (nrc + '0');
//		n /= b;
//	}
//	s[i] = '\0';
//	reverse(s);
//}
//void reverse(char s[])
//{
//	char temp[MAXARRAYSIZE];
//	int i = 0;
//	int j = 0;
//	int pointofreverse = 0;
//	while (s[i] != '\0' && s[i] != EOF)
//	{
//		while (s[i] != '\n' && s[i] != '\0' && s[i] != EOF)
//			i++;
//		pointofreverse = i - 1;
//		while (j < i)
//			temp[j++] = s[pointofreverse--];
//		temp[j++] = s[i];
//		if (s[i] != '\0')
//			i++;
//	}
//	temp[j] = '\0';
//	i = 0;
//	while ((s[i] = temp[i]) != '\0')
//		i++;
//}
//int atoi(char s[])
//{
//	int sign;
//	int i = 0;
//	int n = 0;
//	if (s[i] == '-')
//	{
//		sign = YES;
//		i++;
//	}
//	while (s[i] != '\0')
//		n = n * 10 + (s[i++] - '0');
//	return n;
//}
//void reverse(char s[]);
//main()
//{
//	int c;
//	int i = 0;
//	char array[MAXARRAYSIZE];
//	while ((c = getchar()) != '!')
//		array[i++] = c;
//	array[i] = '\0';
//	reverse(array);
//	printf("%s", array);
//}
//void reverse(char s[])
//{
//	char temp[MAXARRAYSIZE];
//	int i = 0;
//	int j = 0;
//	int pointofreverse = 0;
//	while (s[i] != '\0' && s[i] != EOF)
//	{
//		while (s[i] != '\n' && s[i] != '\0' && s[i] != EOF)
//			i++;
//		pointofreverse = i - 1;
//		while (j < i)
//			temp[j++] = s[pointofreverse--];
//		temp[j++] = s[i];
//		if (s[i] != '\0')
//			i++;
//	}
//	temp[j] = '\0';
//	i = 0;
//	while ((s[i] = temp[i]) != '\0')
//		i++;
//}

//void itoawithpadding(int n, char s[], int padding)
//{
//	long long int carefulconversion;
//	int sign = NO;
//	int i = 0;
//	if (n < 0)
//	{
//		n = -n;
//		sign = YES;
//		padding = padding - 1;
//	}
//	while (n > 0)
//	{
//		s[i++] = n % 10;
//		n /= 10;
//		padding--;
//	}
//	s[i++] = '-';
//	while (padding-- > 0)
//	{
//		s[i++] = ' ';
//	}
//	s[i] = '\0'; //this one character more than the minimum width padding
//	reverse(s);
//}

//int getline(char line[], int max);
//int strindex(char source[], char searchfor[]);
//
//char pattern[] = "ould";
//
//main()
//{
//	char line[MAXARRAYSIZE];
//	int found = 0;
//
//	while (getline(line, MAXARRAYSIZE) > 0)
//		if (strindex(line, pattern) >= 0) {
//			printf("%s", line);
//			found++;
//		}
//	return found;
//}
//int  getline(char s[], int lim)
//{
//	int c;
//	int i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		s[i++] = c;
//	if (c == '\n')
//		s[i++] = c;
//	s[i] = '\0';
//	return i;
//}
//int strindex(char s[], char t[])
//{
//	int i, j, k;
//
//	for (i = 0; s[i] != '\0'; i++) {
//		for (j = i, k = 0; t[k]!= '\0' && s[j] == t[k]; j++, k++)
//			;
//		if (k > 0 && t[k] == '\0')
//			return i;
//	}
//	return -1;
//}
//int getline(char line[], int max);
//int strrindex(char source[], char searchfor[]);
//
//char pattern[] = "ould";
//
//main()
//{
//	char line[MAXARRAYSIZE];
//	int found = 0;
//	int index = 0;
//	int linenumber = 0;
//
//	while (getline(line, MAXARRAYSIZE) > 0)
//		if ((index = strrindex(line, pattern)) >= 0) {
//			printf("The rightmost occurance of the pattern on line %d occurs at index %d", index);
//			found++;
//			linenumber++;
//		}
//		else
//			printf("The line %d did not contain the pattern\n", linenumber++);
//	return found;
//}
//int  getline(char s[], int lim)
//{
//	int c;
//	int i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		s[i++] = c;
//	if (c == '\n')
//		s[i++] = c;
//	s[i] = '\0';
//	return i;
//}
//int strrindex(char s[], char t[])
//{
//	int i, j, k, index;
//	int index = 0;
//
//	for (i = 0; s[i] != '\0'; i++) {
//		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
//			;
//		if (k > 0 && t[k] == '\0')
//		{
//			index = i;
//		}
//	}
//	if (index)
//		return index;
//	else
//		return -1;
//}

//double atof(char s[])
//{
//	int i = 0;
//	int sign = 1;
//	int val = 0;
//	int power = 1;
//	int e = 0;
//	double exp = 0;
//	if (s[i] == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (s[i] == '+')
//		i++;
//	while (isdigit(s[i]))
//		val = val * 10 + (s[i++] - '0');
//	if (s[i] == '.')
//	{
//		i++;
//		while (isdigit(s[i]))
//		{
//			val = val * 10 + (s[i++] - '0');
//			power *= 10;
//		}
//	}
//	val = sign * val / power;
//	if (s[i] == 'e' || s[i] == 'E')
//	{
//		i++;
//		if (s[i] == '-')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val /= 10;
//			return val;
//		}
//		else if (s[i] == '+')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val *= 10;
//			return val;
//		}
//	}
//	else
//		return val;
//}

//#define NUMBER 1
//
//int getop(char []);
//void push(double);
//double pop(void);
//int getch(void);
//void ungetch(int);
//double atof(char[]);
//
//char operator_or_error_overread[MAXARRAYSIZE];
//int index_error = 0;
//
//int index = 0;
//double values[MAXARRAYSIZE];
//
//char pushbackentirestring[MAXARRAYSIZE];
//int j = 0;
//int array_index = 0;
//
//char number[MAXARRAYSIZE];
//int index_number = 0;
//int beginningofsubarray = 0;
//
//main() //q, w, e for sin cos pow
//{
//	int operator;
//	double operator2;
//	double temp;
//	double temp2;
//	int pushbackentirestringontoinput = 0;
//	char op[MAXARRAYSIZE];
//
//	while ((operator = getop(op)) != EOF) 
//	{
//		switch (operator) {
//		case NUMBER:
//			push(atof(op));
//			break;
//		case '+':
//			push(pop() + pop());
//			break;
//		case '*':
//			push(pop() * pop());
//			break;
//		case '-':
//			operator2 = pop();
//			push(pop() - operator2);
//			break;
//		case '/':
//			operator2 = pop();
//			if (operator2 != 0.0)
//				push(pop() / operator2);
//			else
//				printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//			break;
//		case '%':
//			operator2 = pop();
//			if (operator2 != 0)
//				push((int) pop() % (int) operator2);
//			else
//				printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//			break;
//		case 'p':
//			temp = pop();
//			push(temp);
//			printf("%f", temp);
//			break;
//		case 'd':
//			temp = pop();
//			push(temp);
//			push(temp);
//			break;
//		case 's':
//			temp = pop();
//			temp2 = pop();
//			push(temp);
//			push(temp2);
//			break;
//		case 'c':
//			//while(isdigit(pop()));
//			values[0] = '\0';
//			index = 0;
//			break;
//		case 'q':
//			push(sin(pop()));
//			break;
//		case 'w':
//			push(cos(pop()));
//			break;
//		case 'e':
//			operator2 = pop();
//			push(pow(pop(), operator2));
//			break;
//		case 'u':
//			pushbackentirestringontoinput = 1;
//			goto ungets;
//			break;
//		case '\n':
//			printf("\t%.8f\n", pop());
//			break;
//		default:
//			printf("Error: The program read a character using getchar() that was not a digit or a character with a switch case defined. The character is %s.\n", op);
//			break;
//		}
//	}
//	ungets:
//	while (pushbackentirestring[j] != '\0')
//	{
//		while ((operator = getop2(pushbackentirestring)) != EOF)
//		{
//			switch (operator) {
//			case NUMBER:
//				push(atof(op));
//				break;
//			case '+':
//				push(pop() + pop());
//				break;
//			case '*':
//				push(pop() * pop());
//				break;
//			case '-':
//				operator2 = pop();
//				push(pop() - operator2);
//				break;
//			case '/':
//				operator2 = pop();
//				if (operator2 != 0.0)
//					push(pop() / operator2);
//				else
//					printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//				break;
//			case '%':
//				operator2 = pop();
//				if (operator2 != 0)
//					push((int)pop() % (int)operator2);
//				else
//					printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//				break;
//			case 'p':
//				temp = pop();
//				push(temp);
//				printf("%f", temp);
//				break;
//			case 'd':
//				temp = pop();
//				push(temp);
//				push(temp);
//				break;
//			case 's':
//				temp = pop();
//				temp2 = pop();
//				push(temp);
//				push(temp2);
//				break;
//			case 'c':
//				//while(isdigit(pop()));
//				values[0] = '\0';
//				index = 0;
//				break;
//			case 'q':
//				push(sin(pop()));
//				break;
//			case 'w':
//				push(cos(pop()));
//				break;
//			case 'e':
//				operator2 = pop();
//				push(pow(pop(), operator2));
//				break;
//			case '\n':
//				printf("\t%.8f\n", pop());
//				break;
//			default:
//				printf("Error: The program read a character using getchar() that was not a digit or a character with a switch case defined. The character is %s.\n", op);
//				break;
//			}
//		}
//	}
//}
//
//void push(double OperandValue)
//{
//	if (index < MAXARRAYSIZE)
//		values[index++] = OperandValue;
//	else
//		printf("Error: Stack full. Cannot push operand value %g.\n", OperandValue);
//}
//
//double pop(void)
//{
//	if (index > 0)
//		return values[--index];
//	else
//	{
//		printf("Error: There are 0 operands stored in the stack containing numbers.\n");
//		return 0.0;
//	}
//}
//
//int getop(char s[])
//{
//	int c;
//	int d;
//	int i = 0;
//
//	while ((s[i] = c = getch()) == ' ' || c == '\t') //skips white space by overwriting c into s[0] until an operand, operator, or error is read using getch() which reads an operand or error from getchar() overreading past a number onto an operator 123.456+.
//		;
//	s[i++] = '\0';
//	if (!isdigit(c) && c != '.' && c != '-')
//		return c;
//	if (c == '-' && !isdigit(d = getch()))
//	{
//		ungetch(d);
//		return c;
//	}
//	else if (c == '-')
//		s[i++] = '-';
//	if (isdigit(c))
//		while (isdigit(s[i++] = c = getch()))
//			;
//	if (c == '.')
//	{
//		s[i++] = c;
//		while (isdigit(s[i++] = c = getch()))
//			;
//	}
//	s[i] = '\0';
//	if (c != EOF)
//		ungetch(c);
//
//	return NUMBER;
//}
//
//int getop2(char s[])
//{
//	while (s[array_index] == ' ' || s[array_index] == '\t')
//		i++;
//	if (!isdigit(s[i]) && s[i] != '.' && s[i] != '-')
//		return s[i];
//	if (s[i] == '-' && !isdigit(s[i + 1]))
//		return s[i];
//	else if (s[i] == '-')
//	{
//		beginningofsubarray = i;
//		number[index_number++] = '-';
//		i++;
//	}
//	if (isdigit(s[i]))
//		while (isdigit(s[i]))
//			number[index_number++] = s[i++];
//	if (s[i] == '.')
//	{
//		number[index_number++] = s[i];
//		while (isdigit(s[i]))
//			number[index_number++] = s[i++];
//	}
//	s[i] = '\0';
//	if (s[i] != EOF)
//		i--;
//
//	return NUMBER;
//}
//
//int getch(void)
//{
//	return (index_error > 0) ? operator_or_error_overread[--index_error] : getchar();
//}
//
//void ungetch(int operator_or_error) //stores overread operators or errors in a stack operator_or_error_overread[MAXARRAYSIZE]
//{
//	if (index_error >= MAXARRAYSIZE)
//		printf("Error: Stack full. Cannot push character %c.\n");
//	else
//		operator_or_error_overread[index_error++] = operator_or_error;
//}
//
//double atof(char s[])
//{
//	int i = 0;
//	int sign = 1;
//	int val = 0;
//	int power = 1;
//	int e = 0;
//	double exp = 0;
//	if (s[i] == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (s[i] == '+')
//		i++;
//	while (isdigit(s[i]))
//		val = val * 10 + (s[i++] - '0');
//	if (s[i] == '.')
//	{
//		i++;
//		while (isdigit(s[i]))
//		{
//			val = val * 10 + (s[i++] - '0');
//			power *= 10;
//		}
//	}
//	val = sign * val / power;
//	if (s[i] == 'e' || s[i] == 'E')
//	{
//		i++;
//		if (s[i] == '-')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val /= 10;
//			return val;
//		}
//		else if (s[i] == '+')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val *= 10;
//			return val;
//		}
//	}
//	else
//		return val;
//}

//#define NUMBER 1
//
//int getop(char[]);
//void push(double);
//double pop(void);
//int getchx(void);
//void ungetchx(int);
//double atofx(char[]);
//int getline(char[], int);
//
//char operator_or_error_overread[MAXARRAYSIZE];
//int index_error = 0;
//
//int index = 0;
//double values[MAXARRAYSIZE];
//
//char ungets_string[MAXARRAYSIZE];
//int ungets_index = 0;
//
////store a duplicate of every input into ungets
//
//main() //q, w, e for sin cos pow //print //most recently printed value
//{
//	int linelength = 0;
//	char getlinearray[MAXARRAYSIZE];
//	int operator;
//	double operator2;
//	double temp;
//	double temp2;
//	char op[MAXARRAYSIZE];
//
//	double a = 0;
//	int a_def = NO;
//	double b = 0;
//	int b_def = NO;
//	double x = 0;
//	int x_def = NO;
//	double y = 0;
//	int y_def = NO; //must be double to safely store double values from pop()
//	int undef = 0;
//
//	double mrp = 0.0; //must be able to handle floating-point values
//
//	while ((linelength = getline(getlinearray, MAXARRAYSIZE)) > 0)
//	{
//		while (linelength >= 1)
//		{
//			operator_or_error_overread[index_error++] = getlinearray[linelength-- - 1];
//			operator_or_error_overread[index_error] = '\0';
//		}
//		getlinearray[0] = '\0';
//		while ((operator = getop(op)) != EOF)
//		{
//			switch (operator) {
//			case '0':
//				goto terminate;
//				break;
//			case 'a':
//				if (a_def == NO)
//				{
//					if (index > 0)
//						a = pop(), a_def = YES;
//					else
//						a = 0;
//				}
//				else
//					push(a);
//				break;
//			case 'b':
//				if (b_def == NO)
//					b = pop(), b_def = YES;
//				else
//					push(b);
//				break;
//			case 'x':
//				if (x_def == NO)
//					x = pop(), x_def = YES;
//				else
//					push(a);
//				break;
//			case 'y':
//				if (y_def == NO)
//					y = pop(), y_def = YES;
//				else
//					push(a);
//				break;
//			case 'z': //assuming appropriate usage
//				undef = getchar();
//				switch (undef) {
//				case 'a':
//					a_def = NO;
//					break;
//				case 'b':
//					b_def = NO;
//					break;
//				case 'x':
//					x_def = NO;
//					break;
//				case 'y':
//					y_def = NO;
//					break;
//				default: printf("Error: The character after z is supposed to be a variable. The variable are a, b, x, and y. The correct syntax to undefine a variable is za, zb, zx, and zy.\n");
//					break;
//				}
//				break;
//			case 'm':
//				printf("%f\n", mrp);
//				break;
//			case NUMBER:
//				push(atof(op));
//				break;
//			case '+':
//				push(pop() + pop());
//				break;
//			case '*':
//				push(pop() * pop());
//				break;
//			case '-':
//				operator2 = pop();
//				push(pop() - operator2);
//				break;
//			case '/':
//				operator2 = pop();
//				if (operator2 != 0.0)
//					push(pop() / operator2);
//				else
//					printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//				break;
//			case '%':
//				operator2 = pop();
//				if (operator2 != 0)
//					push((int)pop() % (int)operator2);
//				else
//					printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//				break;
//			case 'p':
//				temp = pop();
//				push(temp);
//				printf("%f", temp);
//				break;
//			case 'd':
//				temp = pop();
//				push(temp);
//				push(temp);
//				break;
//			case 's':
//				temp = pop();
//				temp2 = pop();
//				push(temp);
//				push(temp2);
//				break;
//			case 'c':
//				//while(isdigit(pop()));
//				values[0] = '\0';
//				index = 0;
//				break;
//			case 'q':
//				push(sin(pop()));
//				break;
//			case 'w':
//				push(cos(pop()));
//				break;
//			case 'e':
//				operator2 = pop();
//				push(pow(pop(), operator2));
//				break;
//			case 'u':
//				printf("%s\n", ungets_string);
//				while (ungets_index >= 0)
//					operator_or_error_overread[index_error++] = ungets_string[ungets_index--];
//				ungets_string[0] = '\0', ungets_index = 0;
//				break;
//			case '\n':
//				printf("\t%.8f\n", mrp = pop());
//				break;
//			default:
//				printf("Error: The program read a character using getchar() that was not a digit or a character with a switch case defined. The character is %s.\n", op);
//				break;
//			}
//		}
//	}
//	terminate:
//	return 0;
//}
//
//void push(double OperandValue)
//{
//	if (index < MAXARRAYSIZE)
//		values[index++] = OperandValue;
//	else
//		printf("Error: Stack full. Cannot push operand value %g.\n", OperandValue);
//}
//
//double pop(void)
//{
//	if (index > 0)
//		return values[--index];
//	else
//	{
//		printf("Error: There are 0 operands stored in the stack containing numbers.\n");
//		return 0.0;
//	}
//}
//
//int getop(char s[])
//{
//	int c;
//	int d = 0;
//	int i = 0;
//
//	while ((s[i] = c = getchx()) == ' ' || c == '\t' || c == '\0') //skips white space by overwriting c into s[0] until an operand, operator, or error is read using getch() which reads an operand or error from getchar() overreading past a number onto an operator 123.456+. //s[i] is char op[];
//		;
//	if (s[i] != '\n' && s[i] != 'u')
//		ungets_string[ungets_index++] = s[i];
//	else if (s[i] == '\n' || s[i] == 'u')
//		ungets_string[ungets_index++] = ' ';
//	i++; //'\0'
//	if (!isdigit(c) && c != '.' && c != '-')
//	{
//		ungets_string[ungets_index++] = ' ';
//		return c;
//	}
//	if (c == '-' && !isdigit(d = getchx()))
//	{
//		ungetchx(d);
//		ungets_string[ungets_index++] = ' ';
//		return c;
//	}
//	else if (c == '-' && isdigit(d))
//	{
//		s[i++] = c;
//		ungets_string[ungets_index++] = c;
//	}
//	if (isdigit((c = getchx())))
//	{
//		ungets_string[ungets_index++] = s[i++] = c;
//		while (isdigit(c = getchx()))
//			ungets_string[ungets_index++] = s[i++] = c;
//	}
//	if (c == '.')
//	{
//		ungets_string[ungets_index++] = s[i++] = c;
//		while (isdigit(c = getchx()))
//			ungets_string[ungets_index++] = s[i++] = c;
//	}
//	s[i] = '\0';
//	ungets_string[ungets_index++] = ' ';
//	if (c != EOF)
//		ungetchx(c);
//
//	return NUMBER;
//}
//
//int getchx(void)
//{
//	return (index_error > 0) ? operator_or_error_overread[--index_error] : getchar();
//}
//
//void ungetchx(int operator_or_error) //stores overread operators or errors in a stack operator_or_error_overread[MAXARRAYSIZE]
//{
//	if (index_error >= MAXARRAYSIZE)
//		printf("Error: Stack full. Cannot push character.\n");
//	else
//	{
//		if (operator_or_error == EOF)
//			operator_or_error_overread[index_error++] = '0';
//		else
//			operator_or_error_overread[index_error++] = operator_or_error;
//	}
//}
//
//double atofx(char s[])
//{
//	int i = 0;
//	int sign = 1;
//	int val = 0;
//	int power = 1;
//	int e = 0;
//	double exp = 0;
//	if (s[i] == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (s[i] == '+')
//		i++;
//	while (isdigit(s[i]))
//		val = val * 10 + (s[i++] - '0');
//	if (s[i] == '.')
//	{
//		i++;
//		while (isdigit(s[i]))
//		{
//			val = val * 10 + (s[i++] - '0');
//			power *= 10;
//		}
//	}
//	val = sign * val / power;
//	if (s[i] == 'e' || s[i] == 'E')
//	{
//		i++;
//		if (s[i] == '-')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val /= 10;
//			return val;
//		}
//		else if (s[i] == '+')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val *= 10;
//			return val;
//		}
//	}
//	else
//		return val;
//}
//
//int  getline(char s[], int lim)
//{
//	int c;
//	int i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		s[i++] = c;
//	if (c == '\n')
//		s[i++] = c;
//	s[i] = '\0';
//	return i;
//}

//#define NUMBER 1
//#define OFF 0
//#define ON 1
//
//int getop(char[]); //processes data into a number that is pushed onto a stack or an operand
//void push(double); //pushes a number onto a stack
//double pop(void); //pops the top number in the stack
//double atofx(char[]); //converts the string op[] into a number
//int getline(char[], int); //gets a line. characters followed by \n \0
//
//int index = 0; //index of the stack of numbers
//double values[MAXARRAYSIZE]; //stack of numbers
//
//char ungets_string[MAXARRAYSIZE]; //an array used to push back an entire line of numbers and operands onto the input
//int ungets_index = 0; //index of the ungets array
//
//char getlinearray[MAXARRAYSIZE]; //the array getline stores a line within
//int ix = 0; //the index of the array that stores the information obtained whilst getline runs
//
//main()
//{
//	int operator; //variable for holding a number popped from the stack of numbers values[index]
//	double operator2; //second variable for holding a number popped from the stack of numbers values[index]
//	double temp; //variable for holding a value temporarily
//	double temp2; //variable for holding a value temporarily
//	char op[MAXARRAYSIZE]; //array used to store numbers that may be negative and floating-point. Used with atof to produce a number that is pushed onto values[index]
//
//	double a = 0; /* variables for holding values and a flag to indicate if they have been defined*/
//	int a_def = NO;
//	double b = 0;
//	int b_def = NO;
//	double x = 0;
//	int x_def = NO;
//	double y = 0;
//	int y_def = NO;
//
//	char undef = 0; //variable that holds the character of the variable being undefined a, b, x, y so it can be redefined as a new value
//
//	double mrp = 0.0; //most recently printed value
//
//	int k = 0;
//	char temparray[MAXARRAYSIZE];
//	int placeholder = 0;
//
//	start:
//	getline(getlinearray, MAXARRAYSIZE); //gets a line and then the program goes to process the line using getop() and switch cases. all of it is commented
//
//	ungets: //this label
//
//	while ((operator = getop(op)) != EOF)
//	{
//		switch (operator) {
//		case 'a':
//			if (a_def == NO)
//			{
//				if (index > 0)
//					a = pop(), a_def = YES;
//				else
//					a = 0;
//			}
//			else
//				push(a);
//			break;
//		case 'b':
//			if (b_def == NO)
//			{
//				if (index > 0)
//					b = pop(), b_def = YES;
//				else
//					b = 0;
//			}
//			else
//				push(b);
//			break;
//		case 'x':
//			if (x_def == NO)
//			{
//				if (index > 0)
//					x = pop(), x_def = YES;
//				else
//					x = 0;
//			}
//			else
//				push(x);
//			break;
//		case 'y':
//			if (y_def == NO)
//			{
//				if (index > 0)
//					y = pop(), y_def = YES;
//				else
//					y = 0;
//			}
//			else
//				push(y);
//			break;
//
//		case 'z': //undefine a variable using za zb zx zy. Then the next time the variable is used it either becomes the topmost value in the stack or 0 if the stack is empty
//			undef = getchar();
//			switch (undef) {
//			case 'a':
//				a_def = NO;
//				break;
//			case 'b':
//				b_def = NO;
//				break;
//			case 'x':
//				x_def = NO;
//				break;
//			case 'y':
//				y_def = NO;
//				break;
//			default: printf("Error: The character after z is supposed to be a variable. The variable are a, b, x, and y. The correct syntax to undefine a variable is za, zb, zx, and zy.\n");
//				break;
//			}
//			break;
//
//		case NUMBER: //stores the number that is stored in the array op into the stack values[index] using the function push() and atof()
//			push(atof(op));
//			break;
//
//		case '+': /* basic operations */
//			push(pop() + pop());
//			break;
//		case '*':
//			push(pop() * pop());
//			break;
//		case '-':
//			operator2 = pop();
//			push(pop() - operator2);
//			break;
//		case '/':
//			operator2 = pop();
//			if (operator2 != 0.0)
//				push(pop() / operator2);
//			else
//				printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//			break;
//		case '%':
//			operator2 = pop();
//			if (operator2 != 0)
//				push((int)pop() % (int)operator2);
//			else
//				printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//			break;
//
//		case 'm': //prints mrp
//			printf("%f\n", mrp);
//			break;
//		case 'p': //prints topmost value of the stack values[index]. useful if you want to define a variable
//			temp = pop();
//			push(temp);
//			printf("%f", temp);
//			break;
//		case 'd': //duplicated the topmost value in the stack values[index]
//			temp = pop();
//			push(temp);
//			push(temp);
//			break;
//		case 's': //switches the topmost 2 values in the stack values[index]
//			temp = pop();
//			temp2 = pop();
//			push(temp);
//			push(temp2);
//			break;
//		case 'c': //clears the stack values[index]
//			values[0] = '\0';
//			index = 0;
//			break;
//
//		case 'q': //sin(x)
//			push(sin(pop()));
//			break;
//		case 'w': //cos(x)
//			push(cos(pop()));
//			break;
//		case 'e': //power(x, y)
//			operator2 = pop();
//			push(pow(pop(), operator2));
//			break;
//
//		//case 'u': //ungets: 'u': places every character that has been read before 'u' into the array getlinearray[ix] being processed in getop() and creating evaluations of the switch cases
//		//		  //Example: 1 2 + u 1 \n should store 1 store 2 add 1 and 2 storing 3 then store 1 store 2 add 1 and 2 storing three store 1 then \n print out 1 and values 3 and 3 should be in values[index]
//		//		  //if two 'u' are in the array getlinearray() then this is a label for the operation ungets 'u' to repeat and replace the character 'u' with every character before it. Example: 1 2 u 3 u 1 \n should store 1 store 2 store 1 store 2 store 3 store 1 store 2 store 1 store 2 store 3 store 1 \n print 1
//		//		  //and values[index] should be 1 2 1 2 3 1 2 1 2 3
//		//moreungets: 
//		//	k = 0;
//		//	placeholder = ix - 1; //placeholder = ix - 1 is where 'u' is.
//		//	printf("%s\n", ungets_string); //prints out the ungets_string so I see what string is placed onto getlinearray[] processed by getop()
//		//	
//		//	while (getlinearray[placeholder] != '\0') //stores everything after 'u' into temp
//		//	{
//		//		temparray[k] = getlinearray[placeholder];
//		//		k++, placeholder++;
//		//	}
//		//	temparray[k] = '\0';
//
//		//	while (ungets_index >= 0) //inserts ungets_string[] into getlinearray[] beginning where 'u' was stored
//		//	{
//		//		getlinearray[placeholder] = ungets_string[ungets_index];
//		//		placeholder++, ungets_index--;
//		//	}
//		//	ungets_string[0] = '\0', ungets_index = 0; //resets ungets_string[] for next use 'u'
//
//		//	k = 0;
//		//	while (temparray[k] != '\0') //restores the rest of the array getlinearray[] before the insertion of ungets_string[]
//		//	{
//		//		getlinearray[placeholder] = temparray[k];
//		//		k++, placeholder++;
//		//	}
//		//	getlinearray[placeholder++] = '\0';
//
//		//	ix = 0;
//		//	while (getlinearray[ix] != '\0') //checks getlinerarray[] for any more 'u'
//		//	{
//		//		if (getlinearray[ix] == 'u') //IF 'u' is found repeat
//		//		{
//		//			ix++;
//		//			goto moreungets;
//		//		}
//		//		else						 //else store everything into ungets_string for the next time 'u' may be read. //ungets_string[] can be cleared with 'r'. 
//		//		{
//		//			ungets_string[ungets_index] = getlinearray[ix];
//		//			ix++, ungets_index++;
//		//		}
//		//	}
//		//	goto ungets;
//		//	break;
//		//case 'r': //clears ungets
//		//	ungets_string[0] = '\0', ungets_index = 0;
//		//	break;
//
//		case '\n': //prints the topmost value of the stack values[index], clears getlinearray[] so a new line can be read and processed and saves mrp.
//			mrp = pop();
//			printf("\t%.8f\n", mrp);
//			getlinearray[0] = '\0', ix = 0;
//			goto start;
//			break;
//		case '!': //terminates
//			goto terminate;
//		default: //default: error
//			printf("Error: The program read a character using getchar() that was not a digit or a character with a switch case defined. The character is %s.\n", op);
//			break;
//		}
//	}
//	terminate:
//	return 0;
//}
//void push(double OperandValue)
//{
//	if (index < MAXARRAYSIZE) //IF THERE IS SPACE IN THE STACK values[index] STORE THE VALUE SENT TO THE FUNCTION else error
//		values[index++] = OperandValue;
//	else
//		printf("Error: Stack full. Cannot push operand value %g.\n", OperandValue);
//}
//
//double pop(void)
//{
//	if (index > 0) //IF THERE IS A VALUE IN values[index] POP/RETURN THE VALUE TO THE FUNCTION CALL pop() else error
//		return values[--index];
//	else
//	{
//		printf("Error: There are 0 operands stored in the stack containing numbers.\n");
//		return 0.0;
//	}
//}
//
//int getop(char s[]) //processes getline(getlinearray[], MAXARRAYSIZE) and ungets
//{
//	int j = 0;
//
//	while (getlinearray[ix] == ' ' || getlinearray[ix] == '\t' || getlinearray[ix] == '\0') //skips white space
//		ix++;
//
//	if (getlinearray[ix] != '\n' && getlinearray[ix] != 'u') //save character or number into op "s[]" and ungets_string for ungets
//		s[j++] = ungets_string[ungets_index++] = getlinearray[ix];
//
//	else if (getlinearray[ix] == '\n' || getlinearray[ix] == 'u') //don't save 'u' and '\n' into ungets
//		ungets_string[ungets_index++] = ' ';
//
//	if (!isdigit(getlinearray[ix]) && getlinearray[ix] != '.' && getlinearray[ix] != '-') //return character
//	{
//		ungets_string[ungets_index++] = ' ';
//		return getlinearray[ix++];
//	}
//	if (getlinearray[ix] == '-' && !isdigit(getlinearray[ix + 1])) //return '-'
//	{
//		ungets_string[ungets_index++] = ' ';
//		return getlinearray[ix++];
//	}
//	else if (getlinearray[ix] == '-' && isdigit(getlinearray[ix+1])) //negative number
//	{
//		ix++;
//		s[j] = getlinearray[ix];								 //save digit
//		ungets_string[ungets_index] = getlinearray[ix];
//		j++, ungets_index++;
//	}
//
//	if (isdigit(getlinearray[ix + 1])) //save number
//	{
//		ix++;
//		ungets_string[ungets_index] = s[j] = getlinearray[ix];
//		ix++, j++, ungets_index++;
//		while (isdigit(getlinearray[ix]))
//		{
//			ungets_string[ungets_index] = s[j] = getlinearray[ix];
//			ix++, j++, ungets_index++;
//		}
//	}
//	if (getlinearray[ix] == '.') //save fractional part of number
//	{
//		ix++;
//		ungets_string[ungets_index++] = s[j++] = getlinearray[ix];
//		ix++;
//		while (isdigit(getlinearray[ix]))
//		{
//			ungets_string[ungets_index] = s[j] = getlinearray[ix];
//			ix++, j++, ungets_index++;
//		}
//	}
//	ix++;
//	s[j] = '\0';
//	ungets_string[ungets_index++] = ' ';
//	
//	return NUMBER; //return to getop() and store op[] into values[index] using atof()
//}
//
//double atofx(char s[]) //converts a string to a floating point number
//{
//	int i = 0;
//	int sign = 1;
//	int val = 0;
//	int power = 1;
//	int e = 0;
//	double exp = 0;
//	if (s[i] == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (s[i] == '+')
//		i++;
//	while (isdigit(s[i]))
//		val = val * 10 + (s[i++] - '0');
//	if (s[i] == '.')
//	{
//		i++;
//		while (isdigit(s[i]))
//		{
//			val = val * 10 + (s[i++] - '0');
//			power *= 10;
//		}
//	}
//	val = sign * val / power;
//	if (s[i] == 'e' || s[i] == 'E')
//	{
//		i++;
//		if (s[i] == '-')
//		{
//			i++;
//			while (isdigit(s[i]))
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val /= 10;
//			return val;
//		}
//		else if (s[i] == '+')
//		{
//			i++;
//			while (isdigit(s[i]))
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val *= 10;
//			return val;
//		}
//	}
//	else
//		return val;
//}
//
//int  getline(char s[], int lim) //stores characters into an array, ends with '\n' '\0'
//{
//	int c;
//	int i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		s[i++] = c;
//	if (c == '\n')
//		s[i++] = c;
//	s[i] = '\0';
//	return i;
//}

//#define NUMBER 1
//
//int getop(char[]); //processes data into a number that is pushed onto a stack or an operand
//void push(double); //stores argument into values[]
//double pop(void); //returns the top value in stack values[]
//int getchx(void); //reads from operator_or_error_overread[] if it has anything, else uses getchar()
//void ungetchx(int); //stores argument in operator_or_error_overread[]
//double atofx(char[]); //converts the string op[] into a number
//void cleararray(char[], int);
//
//int index = 0; //index of the stack of numbers
//double values[MAXARRAYSIZE]; //stack of numbers
//
//char ungets_string[MAXARRAYSIZE]; //an array used to push back an entire line of numbers and operands onto the input
//int ungets_index = 0; //index of the ungets array
//
//char operator_or_error_overread[MAXARRAYSIZE]; //stored overread characters: 1.2+ saves +, here. Then getc() reads from here first, instead of using getchar(). Also stores everything from ungets[], ungets 'u' pushes a string onto the input using this array that getc() reads from, instead of reading with getchar()
//int index_error = 0; //index of operator_or_error_overread[]
//
//
//main()
//{
//	int operator; //variable for holding a number popped from the stack of numbers values[index]
//	double operator2; //second variable for holding a number popped from the stack of numbers values[index]
//	double temp; //variable for holding a value temporarily
//	double temp2; //variable for holding a value temporarily
//	char op[MAXARRAYSIZE]; //array used to store numbers that may be negative and floating-point. Used with atof to produce a number that is pushed onto values[index]
//
//	double a = 0; /* variables for holding values and a flag to indicate if they have been defined*/
//	int a_def = NO;
//	double b = 0;
//	int b_def = NO;
//	double x = 0;
//	int x_def = NO;
//	double y = 0;
//	int y_def = NO;
//	int undef = 0; /* variables for holding values and a flag to indicate if they have been defined*/
//
//	double mrp = 0.0; //most recently printed value
//
//	int placeholder = 0; //used for multiple ungets 'u' in one line of input
//
//	while ((operator = getop(op)) != EOF)
//	{
//		switch (operator) {
//
//
//
//		case 'a':       /*define and undefine variables*/
//			if (a_def == NO)
//			{
//				if (index > 0)
//					a = pop(), a_def = YES;
//				else
//					a = 0;
//			}
//			else
//				push(a);
//			break;
//		case 'b':
//			if (b_def == NO)
//				b = pop(), b_def = YES;
//			else
//				push(b);
//			break;
//		case 'x':
//			if (x_def == NO)
//				x = pop(), x_def = YES;
//			else
//				push(a);
//			break;
//		case 'y':
//			if (y_def == NO)
//				y = pop(), y_def = YES;
//			else
//				push(a);
//			break;
//		case 'z': //assuming appropriate usage //undefine variable
//			undef = getchar();
//			switch (undef) {
//			case 'a':
//				a_def = NO;
//				break;
//			case 'b':
//				b_def = NO;
//				break;
//			case 'x':
//				x_def = NO;
//				break;
//			case 'y':
//				y_def = NO;
//				break;
//			default: printf("Error: The character after z is supposed to be a variable. The variable are a, b, x, and y. The correct syntax to undefine a variable is za, zb, zx, and zy.\n");
//				break;
//			}
//			break;      /*define and undefine variables*/
//
//
//
//		case NUMBER:
//			push(atof(op));
//			break;
//		case '+':
//			push(pop() + pop());
//			break;
//		case '*':
//			push(pop() * pop());
//			break;
//		case '-':
//			operator2 = pop();
//			push(pop() - operator2);
//			break;
//		case '/':
//			operator2 = pop();
//			if (operator2 != 0.0)
//				push(pop() / operator2);
//			else
//				printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//			break;
//		case '%':
//			operator2 = pop();
//			if (operator2 != 0)
//				push((int)pop() % (int)operator2);
//			else
//				printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//			break;
//		case 'q':
//			push(sin(pop()));
//			break;
//		case 'w':
//			push(cos(pop()));
//			break;
//		case 'e':
//			operator2 = pop();
//			push(pow(pop(), operator2));
//			break;
//
//
//
//		case 'm': //print mrp
//			printf("%f\n", mrp);
//			break;
//		case 'p': //print topmost value in stack values[]
//			temp = pop();
//			push(temp);
//			printf("%f", temp);
//			break;
//		case 'd': //duplicate topmost value in stack values[]
//			temp = pop();
//			push(temp);
//			push(temp);
//			break;
//		case 's': //swap topmost two values in stack values[]
//			temp = pop();
//			temp2 = pop();
//			push(temp);
//			push(temp2);
//			break;
//		case 'c': //clear values[]
//			cleararray(values, index);
//			index = 0;
//			break;
//
//
//
//		case 'u': //places everything before 'u' in the line of input where 'u' was
//			printf("%s\n", ungets_string);
//			placeholder = ungets_index;
//			while (ungets_index >= 0)
//				operator_or_error_overread[index_error++] = ungets_string[ungets_index--];
//			ungets_index = placeholder;
//			break;
//		case 'r': //clears ungets_string[]
//			printf("Cleared ungets_string[]: %s\n", ungets_string);
//			cleararray(ungets_string, ungets_index);
//			printf("Current ungets_string: %s\n", ungets_string);
//			ungets_index = 0;
//			break;
//		case 'v':
//			printf("%s\n", ungets_string);
//			break;
//
//		case '\n': //prints the topmost value of values[], saves mrp
//			mrp = pop();
//			printf("\t%.8f\n", mrp);
//			break;
//		case '!': //end program
//			goto terminate;
//			break;
//		default: //error
//			printf("Error: The program read a character using getchar() that was not a digit or a character with a switch case defined. The character is %s.\n", op);
//			break;
//		}
//	}
//	terminate:
//	return 0;
//}
//
//void push(double OperandValue) //stores argument into stack values[], else full
//{
//	if (index < MAXARRAYSIZE)
//		values[index++] = OperandValue;
//	else
//		printf("Error: Stack full. Cannot push operand value %g.\n", OperandValue);
//}
//double pop(void) //returns topmost value of values[], else error
//{
//	if (index > 0)
//		return values[--index];
//	else
//	{
//		printf("Error: There are 0 operands stored in the stack containing numbers.\n");
//		return 0.0;
//	}
//}
//
//int getop(char s[]) //process characters and return to the switch with a number or a character
//{
//	int c;
//	int d = 0;
//	int i = 0;
//
//	while ((s[i] = c = getchx()) == ' ' || c == '\t' || c == '\0') //skips white space by overwriting c into s[0] until an operand, operator, or error is read using getch() which reads an operand, operator, or error from getchar() overreading past any number onto a space or an operator 1.2+ or 1.2 .
//		;
//
//	if (s[i] != '\n' && s[i] != 'u')
//		ungets_string[ungets_index++] = s[i]; //saves all characters into ungets_string[] that are not '\n' and 'u'. '\n' would create printing errors and 'u' would create infinite ungets operations
//
//	else if (s[i] == '\n' || s[i] == 'u')
//		ungets_string[ungets_index++] = ' '; //spaces are used to avoid 'u' '\n' and '\0' repeating in ungets_string[].
//
//	i++; //increment op = s[i] to the next free space to save numbers and decimals
//
//	if (!isdigit(c) && c != '.' && c != '-') //saves character operand and returns character operand
//	{
//		return c;
//		ungets_string[ungets_index++] = ' ';
//	}
//
//	if (c == '-')
//		d = getchx();
//
//	if (c == '-' && !isdigit(d)) //saves negative '-' character and return character '-'
//	{
//		ungetchx(d);
//		ungets_string[ungets_index++] = ' ';
//		return c;
//	}
//	else if (c == '-' && isdigit(d)) //saves first digit after '-'
//	{
//		s[i++] = d;
//		ungets_string[ungets_index++] = d;
//	}
//
//	if (isdigit((c = getchx()))) //saves number
//	{
//		ungets_string[ungets_index++] = s[i++] = c;
//		while (isdigit(c = getchx()))
//			ungets_string[ungets_index++] = s[i++] = c;
//	}
//
//	if (c == '.') //saves decimals
//	{
//		ungets_string[ungets_index++] = s[i++] = c;
//		while (isdigit(c = getchx()))
//			ungets_string[ungets_index++] = s[i++] = c;
//	}
//
//	if (c != EOF) //ungets the overread character: 1.2+, ungets +, saves 1.2 in op[].
//		ungetchx(c);
//
//	s[i] = '\0';
//	ungets_string[ungets_index++] = ' '; //spaces are used to avoid 'u' '\n' and '\0' repeating in ungets_string[].
//
//	return NUMBER;
//}
//
//int getchx(void) //if there is a value in operator_or_error_overread[] read from it, else use getchar()
//{
//	return (index_error > 0) ? operator_or_error_overread[--index_error] : getchar();
//}
//void ungetchx(int operator_or_error) //if there is space in operator_or_error_overread[] store operator_or_error, else error
//{
//	if (index_error >= MAXARRAYSIZE)
//		printf("Error: Stack full. Cannot push character.\n");
//	else
//	{
//		if (operator_or_error == EOF)
//			operator_or_error_overread[index_error++] = '0';
//		else
//			operator_or_error_overread[index_error++] = operator_or_error;
//	}
//}
//
//double atofx(char s[]) //convert string to floating-point number
//{
//	int i = 0;
//	int sign = 1;
//	int val = 0;
//	int power = 1;
//	int e = 0;
//	double exp = 0;
//	if (s[i] == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (s[i] == '+')
//		i++;
//	while (isdigit(s[i]))
//		val = val * 10 + (s[i++] - '0');
//	if (s[i] == '.')
//	{
//		i++;
//		while (isdigit(s[i]))
//		{
//			val = val * 10 + (s[i++] - '0');
//			power *= 10;
//		}
//	}
//	val = sign * val / power;
//	if (s[i] == 'e' || s[i] == 'E')
//	{
//		i++;
//		if (s[i] == '-')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val /= 10;
//			return val;
//		}
//		else if (s[i] == '+')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val *= 10;
//			return val;
//		}
//	}
//	else
//		return val;
//}
//
//void cleararray(char array[], int endofdata) //clear array
//{
//	int i = 0;
//	while (i <= endofdata)
//	{
//		array[i] = '\0';
//		i++;
//	}
//}

//#define NUMBER 1
//
//int getop(char[]); //processes data into a number that is pushed onto a stack or an operand
//void push(double); //stores argument into values[]
//double pop(void); //returns the top value in stack values[]
//int getchx(void); //reads from operator_or_error_overread[] if it has anything, else uses getchar()
//void ungetchx(int); //stores argument in operator_or_error_overread[]
//double atofx(char[]); //converts the string op[] into a number
//void cleararray(char[], int);
//void cleararrayfrom_to(char[], int, int);
//int getline(char[], int);
//
//char getchxungetchx[MAXARRAYSIZE]; 
//int gi = 0;
//
//char op[MAXARRAYSIZE]; //array used to store numbers that may be negative and floating-point. Used with atof to produce a number that is pushed onto values[index]
//
//int index = 0; //index of the stack of numbers
//double values[MAXARRAYSIZE]; //stack of numbers
//
//char ungets_string[MAXARRAYSIZE]; //an array used to push back an entire line of numbers and operands onto the input
//int ungets_index = 0; //index of the ungets array
//char temparray[MAXARRAYSIZE];
//int ti = 0;
//
//char operator_or_error_overread[MAXARRAYSIZE]; //stored overread characters: 1.2+ saves +, here. Then getc() reads from here first, instead of using getchar(). Also stores everything from ungets[], ungets 'u' pushes a string onto the input using this array that getc() reads from, instead of reading with getchar()
//int index_error = 0; //index of operator_or_error_overread[]
//
//
//main()
//{
//	int operator; //variable for holding a number popped from the stack of numbers values[index]
//	double operator2; //second variable for holding a number popped from the stack of numbers values[index]
//	double temp; //variable for holding a value temporarily
//	double temp2; //variable for holding a value temporarily
//
//	double a = 0; /* variables for holding values and a flag to indicate if they have been defined*/
//	int a_def = NO;
//	double b = 0;
//	int b_def = NO;
//	double x = 0;
//	int x_def = NO;
//	double y = 0;
//	int y_def = NO;
//	int undef = 0; /* variables for holding values and a flag to indicate if they have been defined*/
//
//	double mrp = 0.0; //most recently printed value
//
//	int placeholder = 0; //used for multiple ungets 'u' in one line of input
//	int placeholder_gi = 0;
//	int u = 0;
//	
//	Start:
//	while (getline(getchxungetchx, MAXARRAYSIZE) > 0)
//	{
//		while ((operator = getop(op)) != '\0')
//		{
//			switch (operator) {
//
//			case 'a':       /*define and undefine variables*/
//				if (a_def == NO)
//				{
//					if (index > 0)
//						a = pop(), a_def = YES;
//					else
//						a = 0;
//				}
//				else
//					push(a);
//				break;
//			case 'b':
//				if (b_def == NO)
//					b = pop(), b_def = YES;
//				else
//					push(b);
//				break;
//			case 'x':
//				if (x_def == NO)
//					x = pop(), x_def = YES;
//				else
//					push(a);
//				break;
//			case 'y':
//				if (y_def == NO)
//					y = pop(), y_def = YES;
//				else
//					push(a);
//				break;
//			case 'z': //assuming appropriate usage //undefine variable
//				undef = getchar();
//				switch (undef) {
//				case 'a':
//					a_def = NO;
//					break;
//				case 'b':
//					b_def = NO;
//					break;
//				case 'x':
//					x_def = NO;
//					break;
//				case 'y':
//					y_def = NO;
//					break;
//				default: printf("Error: The character after z is supposed to be a variable. The variable are a, b, x, and y. The correct syntax to undefine a variable is za, zb, zx, and zy.\n");
//					break;
//				}
//				break;      /*define and undefine variables*/
//
//
//
//			case NUMBER:
//				push(atof(op));
//				break;
//			case '+':
//				push(pop() + pop());
//				break;
//			case '*':
//				push(pop() * pop());
//				break;
//			case '-':
//				operator2 = pop();
//				push(pop() - operator2);
//				break;
//			case '/':
//				operator2 = pop();
//				if (operator2 != 0.0)
//					push(pop() / operator2);
//				else
//					printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//				break;
//			case '%':
//				operator2 = pop();
//				if (operator2 != 0)
//					push((int)pop() % (int)operator2);
//				else
//					printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//				break;
//			case 'q':
//				push(sin(pop()));
//				break;
//			case 'w':
//				push(cos(pop()));
//				break;
//			case 'e':
//				operator2 = pop();
//				push(pow(pop(), operator2));
//				break;
//
//
//
//			case 'm': //print mrp
//				printf("%f\n", mrp);
//				break;
//			case 'p': //print topmost value in stack values[]
//				temp = pop();
//				push(temp);
//				printf("%f", temp);
//				break;
//			case 'd': //duplicate topmost value in stack values[]
//				temp = pop();
//				push(temp);
//				push(temp);
//				break;
//			case 's': //swap topmost two values in stack values[]
//				temp = pop();
//				temp2 = pop();
//				push(temp);
//				push(temp2);
//				break;
//			case 'c': //clear values[]
//				cleararray(values, index);
//				index = 0;
//				break;
//
//
//
//			case 'u': //places everything before 'u' in the line of input where 'u' was
//				printf("%s\n", ungets_string);
//
//				placeholder_gi = gi;
//
//				while (getchxungetchx[placeholder_gi] != '\n')
//				{
//					temparray[ti] = getchxungetchx[placeholder_gi];
//					ti++, placeholder_gi++;
//				}
//				
//				cleararrayfrom_to(getchxungetchx, gi - 1, MAXARRAYSIZE - 1);
//
//				temparray[ti] = '\n';
//
//				placeholder = ungets_index;
//				placeholder_gi = gi - 1;
//
//				u = 0;
//				while (u < placeholder)
//				{
//					getchxungetchx[placeholder_gi] = ungets_string[u];
//					placeholder_gi++;
//					u++;
//				}
//
//				ti = 0;
//
//				while (temparray[ti] != '\n')
//				{
//					getchxungetchx[placeholder_gi] = temparray[ti];
//					ti++, placeholder_gi++;
//				}
//
//				getchxungetchx[placeholder_gi] = '\n';
//
//				gi = gi - 1;
//				cleararray(temparray, ti);
//
//				printf("%sX\n", getchxungetchx);
//				break;
//			case 'r': //clears ungets_string[]
//				printf("Cleared ungets_string[]: %s\n", ungets_string);
//				cleararray(ungets_string, ungets_index);
//				printf("Current ungets_string: %s\n", ungets_string);
//				ungets_index = 0;
//				break;
//			case 'v':
//				printf("%s\n", ungets_string);
//				break;
//
//			case '\n': //prints the topmost value of values[], saves mrp
//				mrp = pop();
//				printf("\t%.8f\n", mrp);
//				cleararray(getchxungetchx, gi);
//				gi = 0;
//				goto Start;
//				break;
//			case '!': //end program
//				goto terminate;
//				break;
//			default: //error
//				printf("Error: The program read a character using getchar() that was not a digit or a character with a switch case defined. The character is %s.\n", op);
//				break;
//			}
//		}
//	}
//	terminate:
//	return 0;
//}
//
//void push(double OperandValue) //stores argument into stack values[], else full
//{
//	if (index < MAXARRAYSIZE)
//		values[index++] = OperandValue;
//	else
//		printf("Error: Stack full. Cannot push operand value %g.\n", OperandValue);
//}
//double pop(void) //returns topmost value of values[], else error
//{
//	if (index > 0)
//		return values[--index];
//	else
//	{
//		printf("Error: There are 0 operands stored in the stack containing numbers.\n");
//		return 0.0;
//	}
//}
//
////getchx with I, ungetchx with D
////array for op
//int getop(char s[]) //process characters and return to the switch with a number or a character
//{
//	int i = 0;
//
//	while ((s[i] = getchxungetchx[gi]) == ' ' || getchxungetchx[gi] == '\t') //skips white space by overwriting c into s[0] until an operand, operator, or error is read using getch() which reads an operand, operator, or error from getchar() overreading past any number onto a space or an operator 1.2+ or 1.2 .
//		gi++;
//
//	if (s[i] != '\n' && s[i] != 'u')
//		ungets_string[ungets_index++] = s[i]; //saves all characters into ungets_string[] that are not '\n' and 'u'. '\n' would create printing errors and 'u' would create infinite ungets operations
//	
//	else if (s[i] == 'u')
//		ungets_string[ungets_index++] = ' '; //spaces are used to avoid 'u' '\n' and '\0' repeating in ungets_string[].
//	
//	else if (s[i] == '\n')
//	{
//		gi++;
//		ungets_string[ungets_index++] = ' ';
//		return s[i];
//	}
//
//	if (!isdigit(s[i]) && s[i] != '.' && s[i] != '-') //saves character operand and returns character operand
//	{
//		gi++;
//		ungets_string[ungets_index++] = ' ';
//		return s[i];
//	}
//
//	if (s[i] == '-' && !isdigit(getchxungetchx[gi+1])) //saves negative '-' character and return character '-'
//	{
//		gi++;
//		ungets_string[ungets_index++] = ' ';
//		return s[i];
//	}
//	else if (s[i] == '-' && isdigit(getchxungetchx[gi+1])) //saves first digit after '-'
//	{
//		i++, gi++;
//		s[i] = getchxungetchx[gi];
//		ungets_string[ungets_index++] = s[i];
//	}
//
//	if (isdigit(getchxungetchx[gi])) //saves number
//	{
//		i++;
//		while (isdigit(getchxungetchx[++gi]))
//			ungets_string[ungets_index++] = s[i++] = getchxungetchx[gi];
//	}
//
//	if (getchxungetchx[gi] == '.') //saves decimals
//	{
//		i++, gi++;
//		ungets_string[ungets_index++] = s[i++] = getchxungetchx[gi];
//		while (isdigit(getchxungetchx[++gi]))
//			ungets_string[ungets_index++] = s[i++] = getchxungetchx[gi];
//	}
//
//	s[i] = '\0';
//	
//	ungets_string[ungets_index++] = ' '; //spaces are used to avoid 'u' '\n' and '\0' repeating in ungets_string[].
//	
//	return NUMBER;
//}
//
//int getchx(void) //if there is a value in operator_or_error_overread[] read from it, else use getchar()
//{
//	return (index_error > 0) ? operator_or_error_overread[--index_error] : getchar();
//}
//void ungetchx(int operator_or_error) //if there is space in operator_or_error_overread[] store operator_or_error, else error
//{
//	if (index_error >= MAXARRAYSIZE)
//		printf("Error: Stack full. Cannot push character.\n");
//	else
//	{
//		if (operator_or_error == EOF)
//			operator_or_error_overread[index_error++] = '0';
//		else
//			operator_or_error_overread[index_error++] = operator_or_error;
//	}
//}
//
//double atofx(char s[]) //convert string to floating-point number
//{
//	int i = 0;
//	int sign = 1;
//	int val = 0;
//	int power = 1;
//	int e = 0;
//	double exp = 0;
//	if (s[i] == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (s[i] == '+')
//		i++;
//	while (isdigit(s[i]))
//		val = val * 10 + (s[i++] - '0');
//	if (s[i] == '.')
//	{
//		i++;
//		while (isdigit(s[i]))
//		{
//			val = val * 10 + (s[i++] - '0');
//			power *= 10;
//		}
//	}
//	val = sign * val / power;
//	if (s[i] == 'e' || s[i] == 'E')
//	{
//		i++;
//		if (s[i] == '-')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val /= 10;
//			return val;
//		}
//		else if (s[i] == '+')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val *= 10;
//			return val;
//		}
//	}
//	else
//		return val;
//}
//
//void cleararray(char array[], int endofdata) //clear array
//{
//	int i = 0;
//	while (i <= endofdata)
//	{
//		array[i] = '\0';
//		i++;
//	}
//}
//
//int  getline(char s[], int lim) //stores characters into an array, ends with '\n' '\0'
//{
//	int c;
//	int i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		s[i++] = c;
//	if (c == '\n')
//		s[i++] = c;
//	if (c == EOF)
//		return -1;
//	s[i] = '\0';
//	return i;
//}
//
//void cleararrayfrom_to(char array[], int from, int to) //clear array
//{
//	int i = from;
//	while (i <= to)
//	{
//		array[i] = '\0';
//		i++;
//	}
//}

//#define NUMBER 1
//
//int getop(char[]); //processes data into a number that is pushed onto a stack or an operand
//void push(double); //stores argument into values[]
//double pop(void); //returns the top value in stack values[]
//int getchx(void); //reads from operator_or_error_overread[] if it has anything, else uses getchar()
//void ungetchx(int); //stores argument in operator_or_error_overread[]
//double atofx(char[]); //converts the string op[] into a number
//void cleararray(char[], int);
//void cleararrayfrom_to(char[], int, int);
//int getline(char[], int);
//
//char getchxungetchx[MAXARRAYSIZE];
//int gi = 0;
//
//char op[MAXARRAYSIZE]; //array used to store numbers that may be negative and floating-point. Used with atof to produce a number that is pushed onto values[index]
//
//int index = 0; //index of the stack of numbers
//double values[MAXARRAYSIZE]; //stack of numbers
//
//char ungets_string[MAXARRAYSIZE]; //an array used to push back an entire line of numbers and operands onto the input
//int ungets_index = 0; //index of the ungets array
//char temparray[MAXARRAYSIZE];
//int ti = 0;
//
//char operator_or_error_overread[MAXARRAYSIZE]; //stored overread characters: 1.2+ saves +, here. Then getc() reads from here first, instead of using getchar(). Also stores everything from ungets[], ungets 'u' pushes a string onto the input using this array that getc() reads from, instead of reading with getchar()
//int index_error = 0; //index of operator_or_error_overread[]
//
//
//main()
//{
//	int operator; //variable for holding a number popped from the stack of numbers values[index]
//	double operator2; //second variable for holding a number popped from the stack of numbers values[index]
//	double temp; //variable for holding a value temporarily
//	double temp2; //variable for holding a value temporarily
//
//	double a = 0; /* variables for holding values and a flag to indicate if they have been defined*/
//	int a_def = NO;
//	double b = 0;
//	int b_def = NO;
//	double x = 0;
//	int x_def = NO;
//	double y = 0;
//	int y_def = NO;
//	int undef = 0; /* variables for holding values and a flag to indicate if they have been defined*/
//
//	double mrp = 0.0; //most recently printed value
//
//	int placeholder = 0; //used for multiple ungets 'u' in one line of input
//	int placeholder_gi = 0;
//	int u = 0;
//
//Start:
//	while (getline(getchxungetchx, MAXARRAYSIZE) > 0)
//	{
//		while ((operator = getop(op)) != '\0')
//		{
//			switch (operator) {
//
//			case 'a':       /*define and undefine variables*/
//				if (a_def == NO)
//				{
//					if (index > 0)
//						a = pop(), a_def = YES;
//					else
//						a = 0;
//				}
//				else
//					push(a);
//				break;
//			case 'b':
//				if (b_def == NO)
//					b = pop(), b_def = YES;
//				else
//					push(b);
//				break;
//			case 'x':
//				if (x_def == NO)
//					x = pop(), x_def = YES;
//				else
//					push(a);
//				break;
//			case 'y':
//				if (y_def == NO)
//					y = pop(), y_def = YES;
//				else
//					push(a);
//				break;
//			case 'z': //assuming appropriate usage //undefine variable
//				undef = getchar();
//				switch (undef) {
//				case 'a':
//					a_def = NO;
//					break;
//				case 'b':
//					b_def = NO;
//					break;
//				case 'x':
//					x_def = NO;
//					break;
//				case 'y':
//					y_def = NO;
//					break;
//				default: printf("Error: The character after z is supposed to be a variable. The variable are a, b, x, and y. The correct syntax to undefine a variable is za, zb, zx, and zy.\n");
//					break;
//				}
//				break;      /*define and undefine variables*/
//
//
//
//			case NUMBER:
//				push(atof(op));
//				break;
//			case '+':
//				push(pop() + pop());
//				break;
//			case '*':
//				push(pop() * pop());
//				break;
//			case '-':
//				operator2 = pop();
//				push(pop() - operator2);
//				break;
//			case '/':
//				operator2 = pop();
//				if (operator2 != 0.0)
//					push(pop() / operator2);
//				else
//					printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//				break;
//			case '%':
//				operator2 = pop();
//				if (operator2 != 0)
//					push((int)pop() % (int)operator2);
//				else
//					printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//				break;
//			case 'q':
//				push(sin(pop()));
//				break;
//			case 'w':
//				push(cos(pop()));
//				break;
//			case 'e':
//				operator2 = pop();
//				push(pow(pop(), operator2));
//				break;
//
//
//
//			case 'm': //print mrp
//				printf("%f\n", mrp);
//				break;
//			case 'p': //print topmost value in stack values[]
//				temp = pop();
//				push(temp);
//				printf("%f", temp);
//				break;
//			case 'd': //duplicate topmost value in stack values[]
//				temp = pop();
//				push(temp);
//				push(temp);
//				break;
//			case 's': //swap topmost two values in stack values[]
//				temp = pop();
//				temp2 = pop();
//				push(temp);
//				push(temp2);
//				break;
//			case 'c': //clear values[]
//				cleararray(values, index);
//				index = 0;
//				break;
//
//
//
//			case 'u': //places everything before 'u' in the line of input where 'u' was
//				ungets_string[ungets_index] = '\0';
//
//				placeholder_gi = gi;
//
//				while (getchxungetchx[placeholder_gi] != '\0')
//				{
//					temparray[ti] = getchxungetchx[placeholder_gi];
//					ti++, placeholder_gi++;
//				}
//
//				cleararrayfrom_to(getchxungetchx, gi - 1, MAXARRAYSIZE - 1);
//
//				temparray[ti] = '\0';
//
//				placeholder = ungets_index -1;
//				placeholder_gi = gi - 1;
//				u = 0;
//
//				while (u < placeholder)
//				{
//					getchxungetchx[placeholder_gi] = ungets_string[u];
//					placeholder_gi++;
//					u++;
//				}
//
//				ti = 0;
//
//				while (temparray[ti] != '\0')
//				{
//					getchxungetchx[placeholder_gi] = temparray[ti];
//					ti++, placeholder_gi++;
//				}
//
//				gi = gi - 1;
//				cleararray(temparray, ti);
//				ti = 0;
//				break;
//			case 'r': //clears ungets_string[]
//				printf("Cleared ungets_string[]: %s\n", ungets_string);
//				cleararray(ungets_string, ungets_index);
//				printf("Current ungets_string: %s\n", ungets_string);
//				ungets_index = 0;
//				break;
//			case 'v':
//				printf("%s\n", ungets_string);
//				break;
//
//			case '\n': //prints the topmost value of values[], saves mrp
//				mrp = pop();
//				printf("\t%.8f\n", mrp);
//				cleararray(getchxungetchx, gi);
//				gi = 0;
//				goto Start;
//				break;
//			case '!': //end program
//				goto terminate;
//				break;
//			default: //error
//				printf("Error: The program read a character using getchar() that was not a digit or a character with a switch case defined. The character is %s.\n", op);
//				break;
//			}
//		}
//	}
//terminate:
//	return 0;
//}
//
//void push(double OperandValue) //stores argument into stack values[], else full
//{
//	if (index < MAXARRAYSIZE)
//		values[index++] = OperandValue;
//	else
//		printf("Error: Stack full. Cannot push operand value %g.\n", OperandValue);
//}
//double pop(void) //returns topmost value of values[], else error
//{
//	if (index > 0)
//		return values[--index];
//	else
//	{
//		printf("Error: There are 0 operands stored in the stack containing numbers.\n");
//		return 0.0;
//	}
//}
//
////getchx with I, ungetchx with D
////array for op
//int getop(char s[]) //process characters and return to the switch with a number or a character
//{
//	int i = 0;
//
//	while ((s[i] = getchxungetchx[gi]) == ' ' || getchxungetchx[gi] == '\t')//skips white space by overwriting c into s[0] until an operand, operator, or error is read using getch() which reads an operand, operator, or error from getchar() overreading past any number onto a space or an operator 1.2+ or 1.2 .
//	{
//		ungets_string[ungets_index++] = getchxungetchx[gi];
//		gi++;
//	}
//	if (s[i] != '\n' && s[i] != 'u')
//		ungets_string[ungets_index++] = s[i]; //saves all characters into ungets_string[] that are not '\n' and 'u'. '\n' would create printing errors and 'u' would create infinite ungets operations
//
//	else if (s[i] == '\n')
//	{
//		gi++;
//		return s[i];
//	}
//
//	if (!isdigit(s[i]) && s[i] != '.' && s[i] != '-') //saves character operand and returns character operand
//	{
//		gi++;
//		return s[i];
//	}
//
//	if (s[i] == '-' && !isdigit(getchxungetchx[gi + 1])) //saves negative '-' character and return character '-'
//	{
//		gi++;
//		return s[i];
//	}
//	else if (s[i] == '-' && isdigit(getchxungetchx[gi + 1])) //saves first digit after '-'
//	{
//		i++, gi++;
//		s[i] = getchxungetchx[gi];
//		ungets_string[ungets_index++] = s[i];
//	}
//
//	if (isdigit(getchxungetchx[gi])) //saves number
//	{
//		i++;
//		while (isdigit(getchxungetchx[++gi]))
//			ungets_string[ungets_index++] = s[i++] = getchxungetchx[gi];
//	}
//
//	if (getchxungetchx[gi] == '.') //saves decimals
//	{
//		i++, gi++;
//		ungets_string[ungets_index++] = s[i++] = getchxungetchx[gi];
//		while (isdigit(getchxungetchx[++gi]))
//			ungets_string[ungets_index++] = s[i++] = getchxungetchx[gi];
//	}
//
//	s[i] = '\0';
//
//	return NUMBER;
//}
//
//int getchx(void) //if there is a value in operator_or_error_overread[] read from it, else use getchar()
//{
//	return (index_error > 0) ? operator_or_error_overread[--index_error] : getchar();
//}
//void ungetchx(int operator_or_error) //if there is space in operator_or_error_overread[] store operator_or_error, else error
//{
//	if (index_error >= MAXARRAYSIZE)
//		printf("Error: Stack full. Cannot push character.\n");
//	else
//	{
//		if (operator_or_error == EOF)
//			operator_or_error_overread[index_error++] = '0';
//		else
//			operator_or_error_overread[index_error++] = operator_or_error;
//	}
//}
//
//double atofx(char s[]) //convert string to floating-point number
//{
//	int i = 0;
//	int sign = 1;
//	int val = 0;
//	int power = 1;
//	int e = 0;
//	double exp = 0;
//	if (s[i] == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (s[i] == '+')
//		i++;
//	while (isdigit(s[i]))
//		val = val * 10 + (s[i++] - '0');
//	if (s[i] == '.')
//	{
//		i++;
//		while (isdigit(s[i]))
//		{
//			val = val * 10 + (s[i++] - '0');
//			power *= 10;
//		}
//	}
//	val = sign * val / power;
//	if (s[i] == 'e' || s[i] == 'E')
//	{
//		i++;
//		if (s[i] == '-')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val /= 10;
//			return val;
//		}
//		else if (s[i] == '+')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val *= 10;
//			return val;
//		}
//	}
//	else
//		return val;
//}
//
//void cleararray(char array[], int endofdata) //clear array
//{
//	int i = 0;
//	while (i <= endofdata)
//	{
//		array[i] = '\0';
//		i++;
//	}
//}
//
//int  getline(char s[], int lim) //stores characters into an array, ends with '\n' '\0'
//{
//	int c;
//	int i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		s[i++] = c;
//	if (c == '\n')
//		s[i++] = c;
//	if (c == EOF)
//		return -1;
//	s[i] = '\0';
//	return i;
//}
//
//void cleararrayfrom_to(char array[], int from, int to) //clear array
//{
//	int i = from;
//	while (i <= to)
//	{
//		array[i] = '\0';
//		i++;
//	}
//}

//#define NUMBER 1
//
//int getop(char[]); //processes data into a number that is pushed onto a stack or an operand
//void push(double); //stores argument into values[]
//double pop(void); //returns the top value in stack values[]
//double atofx(char[]); //converts the string op[] into a number
//void cleararray(char[], int);
//void cleararrayfrom_to(char[], int, int);
//int getline(char[], int);
//
//char getchxungetchx[MAXARRAYSIZE];
//int gi = 0;
//
//char op[MAXARRAYSIZE]; //array used to store numbers that may be negative and floating-point. Used with atof to produce a number that is pushed onto values[index]
//
//int index = 0; //index of the stack of numbers
//double values[MAXARRAYSIZE]; //stack of numbers
//
//char ungets_string[MAXARRAYSIZE]; //an array used to push back an entire line of numbers and operands onto the input
//int ungets_index = 0; //index of the ungets array
//char temparray[MAXARRAYSIZE];
//int ti = 0;
//
//main()
//{
//	int operator; //variable for holding a number popped from the stack of numbers values[index]
//	double operator2; //second variable for holding a number popped from the stack of numbers values[index]
//	double temp; //variable for holding a value temporarily
//	double temp2; //variable for holding a value temporarily
//
//	double a = 0; /* variables for holding values and a flag to indicate if they have been defined*/
//	int a_def = NO;
//	double b = 0;
//	int b_def = NO;
//	double x = 0;
//	int x_def = NO;
//	double y = 0;
//	int y_def = NO;
//	int undef = 0; /* variables for holding values and a flag to indicate if they have been defined*/
//
//	double mrp = 0.0; //most recently printed value
//
//	int placeholder = 0; //used for multiple ungets 'u' in one line of input
//	int placeholder_gi = 0;
//	int u = 0;
//
//Start:
//	while (getline(getchxungetchx, MAXARRAYSIZE) > 0)
//	{
//		while ((operator = getop(op)) != '\0')
//		{
//			switch (operator) {
//
//			case 'a':       /*define and undefine variables*/
//				if (a_def == NO)
//				{
//					if (index > 0)
//						a = pop(), a_def = YES;
//					else
//						a = 0;
//				}
//				else
//					push(a);
//				break;
//			case 'b':
//				if (b_def == NO)
//					b = pop(), b_def = YES;
//				else
//					push(b);
//				break;
//			case 'x':
//				if (x_def == NO)
//					x = pop(), x_def = YES;
//				else
//					push(a);
//				break;
//			case 'y':
//				if (y_def == NO)
//					y = pop(), y_def = YES;
//				else
//					push(a);
//				break;
//			case 'z': //assuming appropriate usage //undefine variable
//				undef = getchar();
//				switch (undef) {
//				case 'a':
//					a_def = NO;
//					break;
//				case 'b':
//					b_def = NO;
//					break;
//				case 'x':
//					x_def = NO;
//					break;
//				case 'y':
//					y_def = NO;
//					break;
//				default: printf("Error: The character after z is supposed to be a variable. The variable are a, b, x, and y. The correct syntax to undefine a variable is za, zb, zx, and zy.\n");
//					break;
//				}
//				break;      /*define and undefine variables*/
//
//
//
//			case NUMBER:
//				push(atof(op));
//				break;
//			case '+':
//				push(pop() + pop());
//				break;
//			case '*':
//				push(pop() * pop());
//				break;
//			case '-':
//				operator2 = pop();
//				push(pop() - operator2);
//				break;
//			case '/':
//				operator2 = pop();
//				if (operator2 != 0.0)
//					push(pop() / operator2);
//				else
//					printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//				break;
//			case '%':
//				operator2 = pop();
//				if (operator2 != 0)
//					push((int)pop() % (int)operator2);
//				else
//					printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//				break;
//			case 'q':
//				push(sin(pop()));
//				break;
//			case 'w':
//				push(cos(pop()));
//				break;
//			case 'e':
//				operator2 = pop();
//				push(pow(pop(), operator2));
//				break;
//
//
//
//			case 'm': //print mrp
//				printf("%f\n", mrp);
//				break;
//			case 'p': //print topmost value in stack values[]
//				temp = pop();
//				push(temp);
//				printf("%f", temp);
//				break;
//			case 'd': //duplicate topmost value in stack values[]
//				temp = pop();
//				push(temp);
//				push(temp);
//				break;
//			case 's': //swap topmost two values in stack values[]
//				temp = pop();
//				temp2 = pop();
//				push(temp);
//				push(temp2);
//				break;
//			case 'c': //clear values[]
//				cleararray(values, index);
//				index = 0;
//				break;
//
//
//
//			case 'u': //places everything before 'u' in the line of input where 'u' was
//				ungets_string[ungets_index] = '\0';
//
//				placeholder_gi = gi;
//
//				while (getchxungetchx[placeholder_gi] != '\0')
//				{
//					temparray[ti] = getchxungetchx[placeholder_gi];
//					ti++, placeholder_gi++;
//				}
//
//				cleararrayfrom_to(getchxungetchx, gi - 1, MAXARRAYSIZE - 1);
//
//				temparray[ti] = '\0';
//
//				placeholder = ungets_index - 1;
//				placeholder_gi = gi - 1;
//				u = 0;
//
//				while (u < placeholder)
//				{
//					getchxungetchx[placeholder_gi] = ungets_string[u];
//					placeholder_gi++;
//					u++;
//				}
//
//				ti = 0;
//
//				while (temparray[ti] != '\0')
//				{
//					getchxungetchx[placeholder_gi] = temparray[ti];
//					ti++, placeholder_gi++;
//				}
//
//				gi = gi - 1;
//				cleararray(temparray, ti);
//				ti = 0;
//				break;
//			case 'r': //clears ungets_string[]
//				printf("Cleared ungets_string[]: %s\n", ungets_string);
//				cleararray(ungets_string, ungets_index);
//				printf("Current ungets_string: %s\n", ungets_string);
//				ungets_index = 0;
//				break;
//			case 'v':
//				printf("%s\n", ungets_string);
//				break;
//
//			case '\n': //prints the topmost value of values[], saves mrp
//				mrp = pop();
//				printf("\t%.8f\n", mrp);
//				cleararray(getchxungetchx, gi);
//				gi = 0;
//				goto Start;
//				break;
//			case '!': //end program
//				goto terminate;
//				break;
//			default: //error
//				printf("Error: The program read a character using getchar() that was not a digit or a character with a switch case defined. The character is %s.\n", op);
//				break;
//			}
//		}
//	}
//terminate:
//	return 0;
//}
//
//void push(double OperandValue) //stores argument into stack values[], else full
//{
//	if (index < MAXARRAYSIZE)
//		values[index++] = OperandValue;
//	else
//		printf("Error: Stack full. Cannot push operand value %g.\n", OperandValue);
//}
//double pop(void) //returns topmost value of values[], else error
//{
//	if (index > 0)
//		return values[--index];
//	else
//	{
//		printf("Error: There are 0 operands stored in the stack containing numbers.\n");
//		return 0.0;
//	}
//}
//
////getchx with I, ungetchx with D
////array for op
//int getop(char s[]) //process characters and return to the switch with a number or a character
//{
//	int i = 0;
//
//	while ((s[i] = getchxungetchx[gi]) == ' ' || getchxungetchx[gi] == '\t')//skips white space by overwriting c into s[0] until an operand, operator, or error is read using getch() which reads an operand, operator, or error from getchar() overreading past any number onto a space or an operator 1.2+ or 1.2 .
//	{
//		ungets_string[ungets_index++] = getchxungetchx[gi];
//		gi++;
//	}
//	if (s[i] != '\n' && s[i] != 'u')
//		ungets_string[ungets_index++] = s[i]; //saves all characters into ungets_string[] that are not '\n' and 'u'. '\n' would create printing errors and 'u' would create infinite ungets operations
//
//	else if (s[i] == '\n')
//	{
//		gi++;
//		return s[i];
//	}
//
//	if (!isdigit(s[i]) && s[i] != '.' && s[i] != '-') //saves character operand and returns character operand
//	{
//		gi++;
//		return s[i];
//	}
//
//	if (s[i] == '-' && !isdigit(getchxungetchx[gi + 1])) //saves negative '-' character and return character '-'
//	{
//		gi++;
//		return s[i];
//	}
//	else if (s[i] == '-' && isdigit(getchxungetchx[gi + 1])) //saves first digit after '-'
//	{
//		i++, gi++;
//		s[i] = getchxungetchx[gi];
//		ungets_string[ungets_index++] = s[i];
//	}
//
//	if (isdigit(getchxungetchx[gi])) //saves number
//	{
//		i++;
//		while (isdigit(getchxungetchx[++gi]))
//			ungets_string[ungets_index++] = s[i++] = getchxungetchx[gi];
//	}
//
//	if (getchxungetchx[gi] == '.') //saves decimals
//	{
//		i++, gi++;
//		ungets_string[ungets_index++] = s[i++] = getchxungetchx[gi];
//		while (isdigit(getchxungetchx[++gi]))
//			ungets_string[ungets_index++] = s[i++] = getchxungetchx[gi];
//	}
//
//	s[i] = '\0';
//
//	return NUMBER;
//}
//
//double atofx(char s[]) //convert string to floating-point number
//{
//	int i = 0;
//	int sign = 1;
//	int val = 0;
//	int power = 1;
//	int e = 0;
//	double exp = 0;
//	if (s[i] == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (s[i] == '+')
//		i++;
//	while (isdigit(s[i]))
//		val = val * 10 + (s[i++] - '0');
//	if (s[i] == '.')
//	{
//		i++;
//		while (isdigit(s[i]))
//		{
//			val = val * 10 + (s[i++] - '0');
//			power *= 10;
//		}
//	}
//	val = sign * val / power;
//	if (s[i] == 'e' || s[i] == 'E')
//	{
//		i++;
//		if (s[i] == '-')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val /= 10;
//			return val;
//		}
//		else if (s[i] == '+')
//		{
//			i++;
//			while (isdigit(s[i])) //atoi
//				e = e * 10 + (s[i] - '0');
//			while (e-- > 0)
//				val *= 10;
//			return val;
//		}
//	}
//	else
//		return val;
//}
//
//void cleararray(char array[], int endofdata) //clear array
//{
//	int i = 0;
//	while (i <= endofdata)
//	{
//		array[i] = '\0';
//		i++;
//	}
//}
//
//int  getline(char s[], int lim) //stores characters into an array, ends with '\n' '\0'
//{
//	int c;
//	int i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		s[i++] = c;
//	if (c == '\n')
//		s[i++] = c;
//	if (c == EOF)
//		return -1;
//	s[i] = '\0';
//	return i;
//}
//
//void cleararrayfrom_to(char array[], int from, int to) //clear array
//{
//	int i = from;
//	while (i <= to)
//	{
//		array[i] = '\0';
//		i++;
//	}
//}

//int getopwithoutungetch(char s[]) //getop without ungetch
//{
//	int c;
//	int d;
//	int i = 0;
//	static int ungetch = 0;
//	static int u = 0;
//
//	if (u == 1)
//	{
//		s[i] = ungetch;
//	}
//	else
//	{
//		while ((s[i] = c = getch()) == ' ' || c == '\t') //skips white space by overwriting c into s[0] until an operand, operator, or error is read using getch() which reads an operand or error from getchar() overreading past a number onto an operator 123.456+.
//			;
//	}
//	s[i++] = '\0';
//	if (!isdigit(c) && c != '.' && c != '-')
//		return c;
//	if (c == '-' && !isdigit(d = getch()))
//	{
//		ungetch = d;
//		return c;
//	}
//	else if (c == '-')
//		s[i++] = '-';
//	if (isdigit(c))
//		while (isdigit(s[i++] = c = getch()))
//			;
//	if (c == '.')
//	{
//		s[i++] = c;
//		while (isdigit(s[i++] = c = getch()))
//			;
//	}
//	s[i] = '\0';
//	if (c != EOF)
//	{
//		ungetch = c;
//		u = 1;
//	}
//	return NUMBER;
//}

//void recursive_itoa(int n, char s[])
//{
//	long long int pn = 0;
//	char digit;
//	static int i = 0;
//
//	if (n < 0)
//	{
//		pn = -n;
//		s[i++] = '-';
//	}
//	else
//		pn = n;
//
//	if (pn / 10 > 0)
//	{
//		digit = (pn % 10) - '0'; //digit 3 2
//		pn /= 10;	//123 12
//		recursive_itoa(pn, s);
//	}
//	else
//		digit = (pn % 10) - '0'; // 1 1
//
//	s[i++] = digit;
//}

//void recursive_reverse(char s[])
//{
//	static int i = 0;
//	static int j = 0;
//	char character;
//
//	while (s[i] != '\0' && s[i] != EOF)
//	{
//		character = s[i];
//		i++;
//		recursive_reverse(s);
//	}
//
//	if (s[i] == '\0' || s[i] == EOF)
//		;
//	else
//		s[j++] = character;
//}

//#define swap(t, x, y) t temp = x, x = y, y = temp;

//int getintegersfromastringonebyone(int *pn);
//
//int getintegersfromatextstreamonebyone(int *pn);

//int getintegersfromastringonebyoneandsavetheminanarray(int *pn);

//for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
//	;

//int getch(void);
//void ungetch(int );
//
//int getintegersfromatextsteamonebyoneandsavetheminanarray(int *pn)
//{
//	int c;
//	int sign = 1;
//
//	while (isspace(c = getch()))
//		;
//	if (!isdigit(c) && c != EOF && c != '+' && c != '-')
//		return 0;
//
//	if (c == '-')
//		sign = -1;
//
//	if (c == '-' || c == '+')
//		c = getch();
//
//	for (*pn = 0; isdigit(c); c = getch())
//		*pn = *pn * 10 + c - '0';
//
//	*pn = *pn * sign;
//
//	if (c != EOF)
//		ungetch(c);
//
//	return c;
//}

//int getintegersfromatextsteamonebyoneandsavetheminanarray(int* pn)
//{
//	int c;
//	int sign = 1;
//
//	while (isspace(c = getch()))
//		;
//	if (!isdigit(c) && c != EOF && c != '+' && c != '-')
//		return 0;
//
//	if (c == '-')
//		sign = -1;
//
//	if (c == '-' || c == '+')
//		c = getch();
//
//	if (!isdigit(c))
//		ungetch(c); //Exercise 5-1 Push such a character back onto the input.
//
//	for (*pn = 0; isdigit(c); c = getch())
//		*pn = *pn * 10 + c - '0';
//
//	*pn = *pn * sign;
//
//	if (c != EOF)
//		ungetch(c);
//
//	return c;
//}

//int getfloat(float *pn)
//{
//	int c;
//	int sign = 1;
//	int power = 1;
//
//	while (isspace(c = getchar()))
//		;
//
//	if (!isdigit(c) && c != EOF && c != '+' && c != '-')
//		return 0;
//
//	if (c == '-')
//		sign = -1;
//
//	if (c == '-' || c == '+')
//		c = getch();
//
//	for (*pn = 0.0; isdigit(c); c = getch())
//		*pn = *pn * 10.0 + c - '0';
//
//	if (c == '.')
//		c = getch();
//
//	for (; isdigit(c); c = getch())
//	{
//		*pn = *pn * 10.0 + c - '0';
//		power *= 10;
//	}
//
//	*pn = *pn * sign / power;
//
//	if (c != EOF)
//		ungetch(c);
//
//	return c;
//}
#define ALLOCSIZE 1000

//char *alloc(int);
//void afree(int *);
//
//static char allocbuf[ALLOCSIZE];
//static int *allocp = allocbuf;
//
//char *alloc(int n)
//{
//	if (allocbuf + ALLOCSIZE - allocp >= n) //if n = 1000 then allocbuf + ALLOCSIZE = 1000 so allocbuf + ALLOCSIZE - allocp >= n //pointer arithmetic allocbuf + ALLOCSIZE - allocp is allocbuf[1000] //char* alloc(int n) cannot use(ALLOCSIZE - allocp >= n) in the condition of the if statement because an integer minus a pointer produces garbageand the use of(allocbuf + ALLOCSIZE - allocp >= n) is legal.
//	{
//		allocp += n;
//		return allocp - n;
//	}
//	else
//		return 0;
//}
//
//void afree(int *initial_storage_element_location)
//{
//	if (initial_storage_element_location >= allocbuf && initial_storage_element_location < allocbuf + ALLOCSIZE) //if allocbuf added 1 then it would be at allocbuf[1] and 0 therefore if allocbuf added 1000 it would be at allocbuf[1000] and 0. //initial_storage_element_location >= allocbuf compares two array indeces, legally, while initial_storage_element_location >= 0 would be illegal.
//		allocp = initial_storage_element_location;
//}

//pointer arithmetic is legal for pointers to the same array. NULL may be used in pointer arithmetic. One element passed the last element of an array may be used in pointer arithmetic for loops used to initialize and array.

//void strcpy(char *s, char *t)
//{
//	while (*s++ = *t++)
//		;
//}
//
//size_t strcmp(char *s, char *t)
//{
//	while ((*s == *t) && *s != '\0' && *t != '\0')
//		s++, t++;
//	if (*s == '\0' && *t == '\0')
//		return 0;
//	else
//		return *s - *t;
//}
//
//size_t strcmp(char* s, char* t)
//{
//	for (; *s == *t; s++, t++)
//		if (*s == '\0')
//			return 0;
//	return *s - *t;
//}
//
//void strcat(char* s, char* t)
//{
//	while (*s != '\0')
//		s++;
//	while ((*s++ = *t++) != '\0')
//		;
//}
//
//void strend(char *s, char *t) //memory increase speed increase
//{
//	int is = strlen(s);
//	int it = strlen(t);
//
//	if (it < is)
//		return 0;
//
//	t -= is;
//
//	for (; (*t++ == *s++); )
//		if (*t == '\0')
//			return 1;
//
//	return 0;
//}
//
//void strcpyn(char *s, char *t, int n)
//{
//	int i = 0;
//	for (i = 0; i <= n; i++)
//		*s++ = *t++;
//}
//
//void strcatn(char* s, char* t, int n)
//{
//	int i = 0;
//	while (*s != '\0')
//		s++;
//	for (i = 0; i < n; i++)
//		*s++ = *t++;
//}
//
//void strcmpn(char* s, char* t, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (*s == *t)
//			continue;
//		else
//			return *s - *t
//	}
//	return *s - *t;
//}

//main()
//{
//	char *helloworldp;
//	helloworldp = "hello, world\n";
//	printf("1%s", helloworldp); //helloworldp hold the location to the first element of the string "hellow, world\n" stored in some block of code
//	//%s requested the address of a string
//}

//main()
//{
//	float fahr, celcius;
//	int lower, upper, step;
//	char *tempheadingp;
//	tempheadingp = "Fahrenheit\tCelcius\n";
//
//	lower = 0;
//	upper = 300;
//	step = 20;
//
//	fahr = lower;
//
//	printf("%s", tempheadingp);
//		while (fahr <= upper)
//		{
//			celcius = (5.0 / 9.0) * (fahr - 32.0); //5.0 for floating point number arithmetic
//			printf("%10.0f %12.1f\n", fahr, celcius);
//			fahr = fahr + step;
//		}
//	printf("\n\n\n\n\n\n\n\n\n\n\n");
//}
//

//main()
//{
//	int c;
//	int NumberOfNewLines = 0;
//	int NumberOfTabs = 0;
//	int NumberOfSpaces = 0;
//	char* stringp;
//
//	stringp = "hello, world\n";
//
//	while (stringp != EOF)
//	{
//		if (stringp == '\n')
//		{
//			NumberOfNewLines++;
//			stringp++;
//		}
//		else if (stringp == '\t')
//		{
//			NumberOfTabs++;
//			stringp++;
//		}
//		else if (stringp == ' ')
//		{
//			NumberOfSpaces++;
//			stringp++;
//		}
//	}
//
//	printf("Number of New Lines: %d\nNumber of Tabs: %d\nNumber of Spaces: %d\n", NumberOfNewLines, NumberOfTabs, NumberOfSpaces);
//}

//main()
//{
//	int c;
//	char *stringp;
//
//	stringp = "hello, world\n";
//
//	while (stringp != EOF)
//	{
//		if (stringp != '\n' && stringp != '\b' && stringp != '\t')
//		{
//			putchar(stringp);
//			stringp++;
//		}
//		else if (stringp == '\n')
//		{
//			printf("\\n");
//			stringp++;
//		}
//		else if (stringp == '\t')
//		{
//			printf("\\t");
//			stringp++;
//		}
//		else if (stringp == '\\')
//		{
//			printf("\\");
//			stringp++;
//		}
//		else if (stringp == '\b')
//		{
//			printf("backspace");
//			stringp++;
//		}
//	}
//}

//main()
//{
//	#define parameter 100
//	int c;
//	int NumberOfLetters[parameter];
//	int NumberOfLettersIndex = 0;
//	char* stringp;
//	int i = 0;
//
//	stringp = "hello, world\n";
//
//	for (i = 0; i < parameter; i++)
//	{
//		NumberOfLetters[i] = 0;
//	}
//
//	while (stringp != EOF && stringp != '\n')
//	{
//		if (stringp != ' ' && stringp != '\n')
//		{
//			NumberOfLetters[NumberOfLettersIndex]++;
//			stringp++;
//		}
//		if (stringp == ' ')
//		{
//			NumberOfLettersIndex++;
//			NumberOfLetters[NumberOfLettersIndex]++;
//			NumberOfLettersIndex++;
//			stringp++;
//		}
//	}
//
//	for (i = 0; i < parameter; i++)
//	{
//		if ((NumberOfLetters[i]) > 0)
//		{
//			while ((NumberOfLetters[i]) > 0)
//			{
//				printf("*");
//				NumberOfLetters[i]--;
//			}
//			printf("\n");
//		}
//		else if ((NumberOfLetters[i]) == 0)
//			break;
//	}
//}

//#define MAXSIZE 100
//#define IN 1
//#define OUT 0
//
//main()
//{
//	int c;
//	int MAXLETTERCOUNT = 0;
//	int WORDCOUNT = 0;
//	int i = 0;
//	int j;
//	int Array[MAXSIZE];
//	int State = OUT; //flag for whether in word or not
//	int Max[MAXSIZE];
//	char* stringp;
//
//	stringp = "hello, world\n";
//
//	for (i = 0; i < MAXSIZE; i++) //i < MAXSIZE
//	{
//		Array[i] = 0;
//		Max[i] = 1;
//	}
//
//	i = 0;//
//
//	while (stringp++ != EOF)
//	{
//		if (isalphanum(stringp)) //isalphanumerical
//		{
//			State = IN;
//			Array[i]++;
//			Max[i]++;
//			if (Array[i] >= MAXLETTERCOUNT)
//			{
//				MAXLETTERCOUNT = Array[i];
//			}
//		}
//		else if (State == IN && (stringp == ' ' || stringp == '\t' || stringp == '\n'))
//		{
//			WORDCOUNT++;
//			i++;
//			State = OUT;
//		}
//		else //does not count white spaces
//			continue;
//	}
//
//	for (i = MAXLETTERCOUNT + 1; i > 0; i--)
//	{
//		for (j = 0; j < WORDCOUNT; j++)
//		{
//			if (Max[j] == i)
//			{
//				printf("%5d", Max[j] - 1); //prints out letter count at the top of * in histogram as the histogram is printed line by line beginning at the MAXLETTERCOUNT and decrementing
//			}
//			else if (Array[j] == i)
//			{
//				printf("    *");
//				Array[j]--;
//			}
//			else
//			{
//				printf("     ");
//			}
//		}
//		printf("\n");
//	}
//	
//	for (i = 1; i <= WORDCOUNT; i++)
//		printf("%5d", i);
//	
//	printf("\n");
//}

//#define MAXSIZE 100
//#define IN 1
//#define OUT 0
//
//main()
//{
//	int c;
//	int MAXLETTERCOUNT = 0;
//	int i = 0;
//	int j;
//	int nl = 0;
//	int Array[MAXSIZE];
//	int State = OUT; //flag for whether in word or not
//	char *stringp;
//
//	stringp = "hello, world\n";
//
//	for (i = 0; i < MAXSIZE; i++) //i < MAXSIZE
//	{
//		Array[i] = 0;
//	}
//	
//	i = 0;
//
//	while (stringp != EOF)
//	{
//		if (isalphanum(stringp)) //isalphanumerical
//		{
//			State = IN;
//			nl++;
//			if (nl >= MAXLETTERCOUNT)
//			{
//				MAXLETTERCOUNT = nl;
//			}
//		}
//		else if (State == IN && (stringp == ' ' || stringp == '\t' || stringp == '\n'))
//		{
//			Array[nl]++;
//			nl = 0;
//			State = OUT;
//		}
//		else
//			continue;
//	}
//
//	for (i = 1; i <= MAXLETTERCOUNT; i++)
//		printf("%5d", Array[i]);
//
//	printf("\n");
//
//	for (i = 1; i <= MAXLETTERCOUNT; i++)
//		printf("%5d", i);
//
//	printf("\n");
//}
//
//void reverse(char *s)
//{
//	char temp[MAXARRAYSIZE];
//	int i = 0;
//	int j = 0;
//	int pointofreverse = 0;
//	while (*s != '\0' && *s != EOF)
//	{
//		while (*(s+i) != '\n' && *(s + i) != '\0' && s[i] != EOF)
//			i++;
//		pointofreverse = i - 1;
//		while (j < i)
//			temp[j++] = *(s + pointofreverse--);
//		temp[j++] = *(s + i);
//		if (*(s + i) != '\0')
//			i++;
//	}
//	temp[j] = '\0';
//	i = 0;
//	while ((*(s + i) = temp[i]) != '\0')
//		i++;
//}

//int getline(char *s, int lim) //stores characters into an array, ends with '\n' '\0'
//{
//	int c;
//	int i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		*(s+i) = c;
//	if (c == '\n')
//		*(s + i++) = c;
//	if (c == EOF)
//		return -1;
//	*(s + i) = '\0';
//	return i;
//}

//int atoi(char *s)
//{
//	int sign;
//	int i = 0;
//	int n = 0;
//	if (*(s + i) == '-')
//	{
//		sign = YES;
//		i++;
//	}
//	while (*(s + i)] != '\0')
//		n = n * 10 + (s[i++] - '0');
//	return n;
//}

//double atof(char *s)
//{
//	int i = 0;
//	int sign = 1;
//	int val = 0;
//	int power = 1;
//	int e = 0;
//	double exp = 0;
//	if (*(s + i) == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (*(s + i) == '+')
//		i++;
//	while (isdigit(*(s + i)]))
//		val = val * 10 + (*(s + i++) - '0');
//	if (*(s + i) == '.')
//	{
//		i++;
//		while (isdigit(*(s + i)))
//		{
//			val = val * 10 + (*(s + i++) - '0');
//			power *= 10;
//		}
//	}
//	val = sign * val / power;
//	if (*(s + i) == 'e' || *(s + i) == 'E')
//	{
//		i++;
//		if (*(s + i) == '-')
//		{
//			i++;
//			while (isdigit(*(s + i))) //atoi
//				e = e * 10 + (*(s + i) - '0');
//			while (e-- > 0)
//				val /= 10;
//			return val;
//		}
//		else if (*(s + i) == '+')
//		{
//			i++;
//			while (isdigit(*(s + i))) //atoi
//				e = e * 10 + (*(s + i) - '0');
//			while (e-- > 0)
//				val *= 10;
//			return val;
//		}
//	}
//	else
//		return val;
//}

//void itoa(int n, char *s)
//{
//	int i;
//	int sign;
//	long long int holdthepositivenumber;
//	if ((sign = n) < 0)
//		holdthepositivenumber = -n; //n = -n;
//	i = 0;
//	do {
//		*(s + i++) = n % 10 + '0';
//	} while ((n /= 10) > 0);
//	if (sign < 0)
//		*(s + i++) = '-';
//	*(s + i) = '\0';
//	reverse(s);
//}
//
//void itoawithpadding(int n, char *s, int padding)
//{
//	long long int carefulconversion;
//	int sign = NO;
//	int i = 0;
//	if (n < 0)
//	{
//		n = -n;
//		sign = YES;
//		padding = padding - 1;
//	}
//	while (n > 0)
//	{
//		*(s + i++) = n % 10;
//		n /= 10;
//		padding--;
//	}
//	if (sign == YES)
//		*(s + i++) = '-';
//	while (padding-- > 0)
//	{
//		*(s + i++) = ' ';
//	}
//	*(s + i) = '\0'; //this one character more than the minimum width padding
//	reverse(s);
//}

//void recursive_itoa(int n, char *s)
//{
//	long long int pn = 0;
//	char digit;
//	static int i = 0;
//
//	if (n < 0)
//	{
//		pn = -n;
//		*(s + i++) = '-';
//	}
//	else
//		pn = n;
//
//	if (pn / 10 > 0)
//	{
//		digit = (pn % 10) - '0'; //digit 3 2
//		pn /= 10;	//123 12
//		recursive_itoa(pn, s);
//	}
//	else
//		digit = (pn % 10) - '0'; // 1 1
//
//	*(s + i++) = digit;
//	*(s + i) = '\0';
//}
//
//void itob(int n, char *s, int b)
//{
//	int i = 0;
//	int nrc;
//	while (n > 0)
//	{
//		if ((nrc = n % b) >= 10)
//			*(s + i++) = (char) (nrc + 55);
//		else 
//			*(s + i++) = (char) (nrc + '0');
//		n /= b;
//	}
//	*(s + i) = '\0';
//	reverse(s);
//}


//void recursive_reverse(char *s)
//{
//	static int i = 0;
//	static int j = 0;
//	char character;
//
//	while (*(s + i) != '\0' && s[i] != EOF)
//	{
//		character = *(s + i);
//		i++;
//		recursive_reverse(s);
//	}
//
//	if (*(s + i) == '\0' || *(s + i) == EOF)
//		;
//	else
//		*(s + j++) = character;
//}

//int strindex(char *s, char *t)
//{
//	int i, j, k;
//
//	for (i = 0; *(s + i) != '\0'; i++) {
//		for (j = i, k = 0; *(t + k) != '\0' && *(s + j) == *(t + k); j++, k++)
//			;
//		if (k > 0 && *(t + k) == '\0')
//			return i;
//	}
//	return -1;
//}


//int getop(char *s) //process characters and return to the switch with a number or a character
//{
//	int i = 0;
//
//	while ((*(s + i) = getchxungetchx[gi]) == ' ' || getchxungetchx[gi] == '\t')//skips white space by overwriting c into s[0] until an operand, operator, or error is read using getch() which reads an operand, operator, or error from getchar() overreading past any number onto a space or an operator 1.2+ or 1.2 .
//	{
//		ungets_string[ungets_index++] = getchxungetchx[gi];
//		gi++;
//	}
//	if (*(s + i) != '\n' && *(s + i) != 'u')
//		ungets_string[ungets_index++] = s[i]; //saves all characters into ungets_string[] that are not '\n' and 'u'. '\n' would create printing errors and 'u' would create infinite ungets operations
//
//	else if (*(s + i) == '\n')
//	{
//		gi++;
//		return *(s + i);
//	}
//
//	if (!isdigit(*(s + i)) && *(s + i) != '.' && *(s + i) != '-') //saves character operand and returns character operand
//	{
//		gi++;
//		return *(s + i);
//	}
//
//	if (*(s + i) == '-' && !isdigit(getchxungetchx[gi + 1])) //saves negative '-' character and return character '-'
//	{
//		gi++;
//		return *(s + i);
//	}
//	else if (*(s + i) == '-' && isdigit(getchxungetchx[gi + 1])) //saves first digit after '-'
//	{
//		i++, gi++;
//		*(s + i) = getchxungetchx[gi];
//		ungets_string[ungets_index++] = *(s + i);
//	}
//
//	if (isdigit(getchxungetchx[gi])) //saves number
//	{
//		i++;
//		while (isdigit(getchxungetchx[++gi]))
//			ungets_string[ungets_index++] = *(s + i++) = getchxungetchx[gi];
//	}
//
//	if (getchxungetchx[gi] == '.') //saves decimals
//	{
//		i++, gi++;
//		ungets_string[ungets_index++] = *(s + i++) = getchxungetchx[gi];
//		while (isdigit(getchxungetchx[++gi]))
//			ungets_string[ungets_index++] = *(s + i++) = getchxungetchx[gi];
//	}
//
//	*(s + i) = '\0';
//
//	return NUMBER;
//}

//void strcpy2(char *, char *);
//
//main()
//{
//	char array123[4] = "123";
//	char array4[3] = "44"; //[3] works. [5] produces an error.
//	char *stringp1 = array123; 
//	char *stringp2 = array4;
//	char *stringp3 = array123;
//
//	printf("%s\n", stringp3);
//	strcpy2(stringp1, stringp2);
//	printf("%s", stringp1);
//	printf("\n");
//	printf("%s", stringp3);
//}
//
//void strcpy2(char *s, char *t)
//{
//	while (*s++ = *t++)
//		;
//}

//void strcpy2(char *, char *);
//
//main()
//{
//	char array123[4] = "123";
//	char array4[3] = "44"; //[3] works. [5] produces an error.
//	char *stringp1; 
//	char *stringp2;
//	char *stringp3;
//	stringp1 = array123;
//	stringp2 = array4;
//	stringp3 = array123;
//
//	printf("%s\n", stringp3);
//	strcpy2(stringp1, stringp2);
//	printf("%s", stringp1);
//	printf("\n");
//	printf("%s", stringp3);
//}
//
//void strcpy2(char *s, char *t)
//{
//	while (*s++ = *t++)
//		;
//}

//char *alloc(int);
//void afree(int *);
//void strcpy2(char *, char *);
//static char allocbuf[10];
//static char* allocp = allocbuf;
//
//main()
//{
//	char array4[5] = "4444";
//	char* cp = "overwritten";
//	char* copy = array4;
//	char* occupyalloc;
//
//	printf("cp: %s\n", cp); //"overwritten"
//	printf("copy: %s\n", copy); //"4444"
//
//	cp = "2"; //overwrite *cp = "overwritten" with *cp = "2"
//	printf("cp: %s\n", cp); //"2"
//
//	occupyalloc = alloc(4); //returns allocp 0, intended storage space is allocbuf[0] through allocbuf[3]
//
//	cp = alloc(3); //returns allocp 4, intended use is allocbuf[4] through allocbuf[6]
//	
//	strcpy2(cp, copy); //copies "4444" into *cp, specifically allocbuf[4] through allocbuf[7]
//
//	printf("cp: %s\n", cp); //"4444" , stored in allocbuf[4] through allocbuf[7] improperly
//	printf("allocbuf: %s\n", allocbuf); //prints allocbuf -- not working
//}
//
//char *alloc(int n)
//{
//	if (allocbuf + ALLOCSIZE - allocp >= n) 
//	{
//		allocp += n;
//		return allocp - n;
//	}
//	else
//		return 0;
//}
//
//void afree(int *initial_storage_element_location)
//{
//	if (initial_storage_element_location >= allocbuf && initial_storage_element_location < allocbuf + ALLOCSIZE) 
//		allocp = initial_storage_element_location;
//}
//
//void strcpy2(char *s, char *t)
//{
//	while (*s++ = *t++)
//		;
//}

//main()
//{
//	char* cp = "o";
//	char* copy;
//
//	printf("char pointer: %s\n", cp); //"o"
//
//	copy = cp;
//	printf("copy: %s\n", copy);
//	cp = "2";
//	printf("char pointer: %s\n", cp); //"2"
//	printf("copy: %s\n", copy);
//}

//memory leakage
//%s requires *lineptr because %s requires a string.
//a subarray may be passed with a + i or &a[i]
//#define ALLOCSIZE 10000
//#define MAXLINES 1000
//
//int getline(char*, int);
//void strcpy2(char*, char*);
//int readlines(char* lineptr[], int nlines, char dynamicmemorystorage[]);
//void writelines(char* lineptr[], int);
//int strcmp2(char*, char*);
//void swap(char* lineptr[], int, int);
//void arrayqsort(char* lineptr[], int left, int right);
//
//char* lineptr[MAXLINES];
//
//main()
//{
//	printf("test\n");
//	char dynamicmemoryallocationarray[MAXARRAYSIZE];
//	int nlines = 0;
//
//	if ((nlines = readlines(lineptr, MAXLINES, dynamicmemoryallocationarray)) >= 0) 
//	{
//		arrayqsort(lineptr, 0, nlines-1);
//		writelines(lineptr, nlines);
//		return 0;
//	}
//	else
//	{
//		printf("Error: Too many lines caused readlines to return a -1 instead of the number of lines.");
//		return 1; //standard style
//	}
//}
//
//int readlines(char* lineptr[], int maxlines, char dynamicmemoryallocationarray[])
//{
//	int dynamicmemoryallocationarrayindex = 0;
//	int len = 0;
//	char line[MAXARRAYSIZE];
//	int nlines = 0;
//	char* p;
//	while ((len = getline(line, MAXARRAYSIZE)) > 1)
//	{
//		if (nlines >= maxlines || len + dynamicmemoryallocationarrayindex > MAXARRAYSIZE)
//			return -1;
//		else
//		{
//			line[len - 1] = '\0';
//			strcpy2(dynamicmemoryallocationarray + dynamicmemoryallocationarrayindex, line); 
//			lineptr[nlines++] = dynamicmemoryallocationarray + dynamicmemoryallocationarrayindex;
//			dynamicmemoryallocationarrayindex += len;
//		}
//	}
//	return nlines; 
//}
//
//void arrayqsort(char* lineptr[], int left, int right)
//{
//	void swap(char* lineptr[], int i, int j);
//	int i = 0;
//	int last = 0;
//
//	if (left >= right)
//		return;
//
//	swap(lineptr, left, (left + right) / 2);
//	last = left;
//	for (i = left + 1; i <= right; i++)
//		if (strcmp2(lineptr[i], lineptr[left]) < 0)
//			swap(lineptr, ++last, i);
//	swap(lineptr, left, last);
//	arrayqsort(lineptr, left, last - 1);
//	arrayqsort(lineptr, last + 1, right);
//}
//
//void writelines(char* lineptr[], int nlines)
//{
//	int i = 0;
//	while (nlines-- > 0)
//		printf("%s\n", *lineptr++); 
//}
//
//int strcmp2(char* s, char* t)
//{
//	for (; *s == *t; s++, t++)
//		if (*s == '\0')
//			return 0;
//	return *s - *t;
//}
//
//void swap(char* lineptr[], int i, int j)
//{
//	char* temp;
//
//	temp = lineptr[i];
//	lineptr[i] = lineptr[j];
//	lineptr[j] = temp;
//}
//
//int getline(char* s, int lim)
//{
//	int c;
//	int i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		*(s + i++) = c;
//	if (c == '\n')
//		*(s + i++) = c;
//	*(s + i) = '\0';
//	if (c == EOF)
//		return -1;
//	return i;
//}
//
//void strcpy2(char *s, char* t)
//{
//	while (*s++ = *t++)
//		;
//}
//
//#define ALLOCSIZE 10000
//#define MAXLINES 1000
//
//int getline(char*, int); //gets a line, terminates it with '\n' and/or '\0', returns the element count. if return len > 0 then there was a line read by getline which works when the enter key is pressed and stops reading at '\n'.
//char* alloc(int); //
//void strcpy2(char*, char*);
//int readlines(char* lineptr[], int nlines);
//void writelines(char* lineptr[], int);
//void arrayqsort(char* lineptr[], int left, int right);
//int strcmp2(char*, char*);
//void swap(char* lineptr[], int, int);
//
//static char allocbuf[ALLOCSIZE];
//static int* allocp = allocbuf;
//
//char* lineptr[MAXLINES];
//
//main()
//{
//	int nlines = 0;
//
//	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) //readlines reads lines (getline) and stores every line (*line) in a pointer (char *p). Pointer p is saved
//	{
//		arrayqsort(lineptr, 0, nlines-1);
//		writelines(lineptr, nlines);
//		return 0;
//	}
//	else
//	{
//		printf("Error: Too many lines caused readlines to return a -1 instead of the number of lines.");
//		return 1;
//	}
//}
//
//int readlines(char* lineptr[], int maxlines)
//{
//	int len = 0;
//	char line[MAXARRAYSIZE];
//	int nlines = 0;
//	char* p;
//
//	while ((len = getline(line, MAXARRAYSIZE)) > 1) //waits for enter from the implementation of getchar() in getline(). CTRL+C CTRL+V data into console. //gets a line, terminates it with '\n' and/or '\0'. returns the elements count as it's function call. function call return > 0 means there was a line
//	{				//check max lines. check dynamic memory storage alloc function call return. Clever assignments followed by an evaluation like copy programs (*t++ = *s++) != '\0'
//		if (nlines >= maxlines || (p = alloc(len)) == NULL) //clever assignment followed by an evaluation like copy programs (*t++ = *s++) != '\0'
//			return -1;
//		else
//		{
//			line[len - 1] = '\0'; //deletes newline. Adheres to the operation of the incrementation of the dynamic memory storage index allocp.
//			strcpy2(p, line); //(*p++ = *line++) != '\0. This copies the contents of line into the dynamic memory storage located at the pointer returned by allocp from alloc(len). This maintains allocp ready for the next memory.
//			lineptr[nlines++] = p; //array of pointers. char *lineptr[x] stores the address of dynamically allocated memory, and retains this address after the char point char *p that was used to assign the dynamically allocated memory is assigned the memory address of new dynamically allocated memory storage. p is -> a[0] that address. *lineptr[0] is (a[0]).
//				//clever MAXLETTERCOUNT like counter of lines for printing like the vertical histogram exercises. nlines count counts input lines for sorting and printing
//				//lineptr[x] = points to the dynamic memory storage address stored in p, assigned to p using allocp from alloc(len).
//			//it stores the memory storage and it can store it in other pointers
//		}
//	}
//	return nlines; //MAXLETTERCOUNT like count of lines for printing like the vertical histogram exercise
//}
//
//void arrayqsort(char* lineptr[], int left, int right) //qsort using lexigraphical (strcmp) comparison and pointers replacing integers (lineptr[i] == *allocbuf[0] replacing arraynumbers[i] == 7)
//{
//	void swap(char* lineptr[], int i, int j);
//	int i = 0;
//	int last = 0;
//
//	if (left >= right)
//		return;
//
//	swap(lineptr, left, (left + right) / 2);
//	last = left;
//	for (i = left + 1; i <= right; i++)
//		if (strcmp2(lineptr[i], lineptr[left]) < 0)
//			swap(lineptr, ++last, i);
//	swap(lineptr, left, last);
//	arrayqsort(lineptr, left, last - 1);
//	arrayqsort(lineptr, last + 1, right);
//}
//
//void writelines(char* lineptr[], int nlines)
//{
//	int i = 0;
//
//	while (nlines-- > 0)
//		printf("%s\n", *lineptr++); //Awesomely prints the contents of the subarray starting at allocbuf[0] until '\0' is reached. It works.
//}
//
//int strcmp2(char* s, char* t)
//{
//	for (; *s == *t; s++, t++)
//		if (*s == '\0')
//			return 0;
//	return *s - *t;
//}
//
//void swap(char* lineptr[], int i, int j)
//{
//	char* temp;
//
//	temp = lineptr[i];
//	lineptr[i] = lineptr[j];
//	lineptr[j] = temp;
//}
//
//int getline(char* s, int lim) //stores characters into an array, ends with '\n' '\0'
//{
//	int c;
//	int i = 0;
//	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
//		*(s + i++) = c;
//	if (c == '\n')
//		*(s + i++) = c;
//	*(s + i) = '\0';
//	if (c == EOF)
//		return -1;
//	return i;
//}
//
//char* alloc(int n)
//{
//	if (allocbuf + ALLOCSIZE - allocp >= n) //if n = 1000 then allocbuf + ALLOCSIZE = 1000 so allocbuf + ALLOCSIZE - allocp >= n //pointer arithmetic allocbuf + ALLOCSIZE - allocp is allocbuf[1000] //char* alloc(int n) cannot use(ALLOCSIZE - allocp >= n) in the condition of the if statement because an integer minus a pointer produces garbageand the use of(allocbuf + ALLOCSIZE - allocp >= n) is legal.
//	{
//		allocp += n;
//		return allocp - n; //returns a pointer to old allocp //++, no this author deletes newlines at the end of each line from getline
//	}
//	else
//		return 0; //alloc memory full
//}
//
////doesnt implement afree. Doesnt have to because it reads all the lines of input sorts them then prints them in order. This programming does not require afree to free dynamic memory storage.
//
//void strcpy2(char* s, char* t)
//{
//	while (*s++ = *t++)
//		;
//}


//static char daytab[2][13] = {
//	{0 , 31 , 28, 31, 30, 31, 30, 31, 31, 30, 31, 31 },
//	{0, 31 , 29, 31, 30, 31, 30, 31, 31, 30, 31, 31}
//};
//
//static char *weekdayarray[7] = {"Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday"};

//int day_of_year(int year, int month, int day)
//{
//	int leap;
//	int dayofyear;
//	leap = year % 4 == 0 && year % 100 != 100 || year % 400 == 0;
//	for (i = 1; i < month; i++)
//		dayofyear += daytab[leap]i];
//	return dayofyear + day;
//}

//int day_of_year(int year, int month, int day)
//{
//	int leap;
//	int i;
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	day > 31 ? printf("Error: Day is > 31.\n"): '\0';
//	day < 0 ? printf("Error: Day is < 0.\n") : '\0';
//	month > 12 ? printf("Error: Month is > 12.\n") : '\0';
//	month < 0 ? printf("Error: Month is < 0.\n") : '\0';
//	daytab[leap][month] < day ? printf("Error: Day is not within month %d.\n", month) : '\0';
//	for (i = 1; i < month; i++)
//		day += daytab[leap][i];
//		return day;
//	//could return season, week, holidays, etc
//}
//
//void month_and_day(int year, int yearday, int* m, int* d)
//{
//	int leap;
//	int i;
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	switch (leap)
//	{
//		case 1: yearday > 366 ? printf("Error: Yearday is > 366.\n") : '\0';
//				break;
//		case 0: yearday > 365 ? printf("Error: Yearday is > 365.\n") : '\0';
//				break;
//	}
//	for (i = 1; yearday > daytab[leap][i]; i++)
//		yearday -= daytab[leap][i];
//	*m = i;
//	*d = yearday;
//}
//
//void month_and_day(int year, int yearday, int* m, int* d, char *w)
//{
//	int leap;
//	int i;
//	int weekday;
//	weekday = yearday % 7;
//	*w = weekdayarray[i];
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	leap ? (yearday > 366 ? printf("Error: Yearday is > 366.\n") : '\0'): (yearday > 365 ? printf("Error: Yearday is > 366.\n") : '\0');
//	for (i = 1; yearday > daytab[leap][i]; i++)
//		yearday -= daytab[leap][i];
//	*m = i;
//	*d = yearday;
//}

//static char daytab[2][13] = {
//	{0 , 31 , 28, 31, 30, 31, 30, 31, 31, 30, 31, 31},
//	{0, 31 , 29, 31, 30, 31, 30, 31, 31, 30, 31, 31}
//};
//
//static char *weekdayarray[7] = {"tuesday", "wednesday", "thursday", "friday", "saturday", "sunday", "monday"};
//bn
//int day_of_year(int year, int month, int day)
//{
//	int leap;
//	int i;
//	char* p;
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	day > 31 ? printf("error: day is > 31.\n"): '\0';
//	day < 0 ? printf("error: day is < 0.\n") : '\0';
//	month > 12 ? printf("error: month is > 12.\n") : '\0';
//	month < 0 ? printf("error: month is < 0.\n") : '\0';
//	daytab[leap][month] < day ? printf("error: day is not within month %d.\n", month) : '\0';
//	p = daytab[leap]; //using pointers instead of indexing
//	for (i = 1; i < month; i++)
//		day += *(p+i);
//		return day;
//	//could return season, week, holidays, etc
//}
//
//void month_and_day(int year, int yearday, int* m, int* d, char *w)
//{
//	int leap;
//	int i;
//	int weekday;
//	char* p;
//	weekday = yearday % 7;
//	*w = weekdayarray[i];
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	leap ? (yearday > 366 ? printf("error: yearday is > 366.\n") : '\0'): (yearday > 365 ? printf("error: yearday is > 366.\n") : '\0');
//	p = daytab[leap];
//	for (i = 1; yearday > *(p+i); i++)
//		yearday -= *(p+i);
//	*m = i;
//	*d = yearday;
//}

//echo command-line arguments: array and indexing verision
//main(int argc, char* argv[])
//{
//	int i;
//	for (i = 1; i < argc; i++)
//		printf("%s%s", argv[i], (i < argc - 1) ? " " : "");
//	printf("\n");
//	return 0;
//} 
//echo command-line arguments: pointer arithmetic verison
//main(int argc, char* argv[])
//{
//	int i;
//
//	while (--argc > 0)
//		printf("%s%s", *(++argv), argc > 1 ? " " : "");
//	printf("\n");
//	return 0;
//}
//printf can have arguments
//main(int argc, char* argv[])
//{
//	int i;
//
//	while (--argc > 0)
//		printf((argc > 1) ? "%s " : "%s", *(++argv));
//	printf("\n");
//	return 0;
//}

//find -n -x: find command-line arguments and arguments that are flags
//main(int argc, char* argv[])
//{
//	int i;
//	int c;
//	int except = 0; //
//	int number = 0; //optional flag(s)
//
//	char line[MAXARRAYSIZE];
//
//	int lineno = 0;
//
//	while (--argc > 0 && *(++argv)[0] == '-')
//		while (c = *++argv[0])
//			switch (c) 
//			{
//				case 'x':
//					except = 1;
//					break;
//				case 'n':
//					number = 1;
//					break;
//				default:
//					pritnf("Error: unknown operator %c\n", c);
//					argc = 0; //
//					break; //
//			}
//
//	if (argc != 1)
//		printf("Usage: find -x -n pattern\n");
//	else
//	{
//		while (getline(line, MAXARRAYSIZE) > 0)
//		{ //
//			lineno++;
//				if (except)
//				{
//					if (strstr(line, *argv) == NULL)
//					{
//						if (number)
//							printf("%d" "." "%s", lineno, line);
//						else
//							printf("%s", line);
//					}
//				}
//				else
//				{
//					if (strstr(line, argv) != NULL)
//					{
//						if (number)
//							printf("%d" "." "%s", lineno, line);
//						else
//							printf("%s", line);
//					}
//				}
//		}//
//	}
//}

//main(int argc, char* argv[])
//{
//	int i;
//	int c;
//	int except = 0; //
//	int number = 0; //optional flag(s)
//
//	char line[MAXARRAYSIZE];
//
//	int lineno = 0;
//
//	while (--argc > 0 && *(++argv)[0] == '-')
//		while (c = *++argv[0])
//			switch (c)
//			{
//			case 'x':
//				except = 1;
//				break;
//			case 'n':
//				number = 1;
//				break;
//			default:
//				pritnf("Error: unknown operator %c\n", c);
//				argc = 0; //
//				break; //
//			}
//
//	if (argc != 1)
//		printf("Usage: find -x -n pattern\n");
//	else
//	{
//		while (getline(line, MAXARRAYSIZE) > 0)
//		{ //
//			lineno++;
//			if ((strstr(line, //*argv) != NULL) != except)
//			{
//					if (number)
//						printf("%d" "." "%s", lineno, line);
//					else
//						printf("%s", line);
//			}
//		}//
//	}
//}

//main(int argc, char* argv[])
//{
//	int i;
//	int c;
//	int except = 0; //
//	int number = 0; //optional flag(s)
//
//	char line[MAXARRAYSIZE];
//
//	int lineno = 0;
//
//	int found = 0;
//
//	while (--argc > 0 && *(++argv)[0] == '-')
//		while (c = *++argv[0])
//			switch (c)
//			{
//			case 'x':
//				except = 1;
//				break;
//			case 'n':
//				number = 1;
//				break;
//			default:
//				pritnf("Error: unknown operator %c\n", c);
//				argc = 0; //
//				found = -1; //K&R proper style
//				break; //
//			}
//
//	if (argc != 1)
//		printf("Usage: find -x -n pattern\n");
//	else
//	{
//		while (getline(line, MAXARRAYSIZE) > 0)
//		{ //
//			lineno++;
//			if ((strstr(line, *argv) != NULL) != except)
//			{
//				if (number)
//					printf("%d" ".", lineno);
//				printf("%s", line);
//				found++;
//			}
//		}//
//	}
//	return found;
//} 
//copy and paste old code and compare differences to debug efficiently and effectively
//#define NUMBER 1
//#define ERROR 2
//double atof(char*);
//void push(double);
//double pop(void);
//int index = 0;
////double values[MAXARRAYSIZE];
//int getop(char *);
////int argc, char* argv[]
//main()
//{
//	char *argv[] = { "expr", "1", "2", "3", "+", "+" };
//	int c;
//	while ((c = getop(*++argv)) > -1)
//	{
//		switch (c)
//		{
//		case NUMBER:
//			push(atof(*argv)); //*(argv + i) saved
//			break;
//		case ERROR:
//			printf("Error found in argument %s\n", *argv);
//			break;
//		case '+':
//			push(pop() + pop());
//			break;
//		case '*':
//			push(pop() * pop());
//			break;
//		case 0:
//			pop();
//			break;
//		}
//	}
//		
//}
//
//int getop(char *s)
//{
//	int c;
//	int d;
//	int i = 0;
//
//	while (s[i] == ' ' || s[i] == '\t') //skips white space
//		i++;
//	if (s[i] == EOF)
//		return -1;
//	if (!isdigit(s[i]) && s[i] != '.' && s[i] != '-' && (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i] != '\n' || s[i] != '\0' || s[i] != EOF))
//		return s[i];
//	if (s[i] == '-' && !isdigit(s[i+1]) && (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i] != '\n' || s[i] != '\0' || s[i] != EOF))
//		return s[i];
//	else if (s[i] == '-' && isdigit(s[i+1]))
//		i++;
//	if (isdigit(s[i]))
//		while (isdigit(s[i++]))
//			;
//	if (s[i] == '.')
//	{
//		i++;
//		while (isdigit(s[i++]))
//			;
//	}
//	if (s[i] != '-' || s[i] || s[i] != '+' || s[i] != '*' || s[i] != '/' || isalpha(s[i]) || s[i] != ' ' || s[i] != '\t' || s[i] != '\n' || s[i] != '\0' || s[i] != EOF) //to retrieve '-' from -123.4- we would have to use a stack stack[index] = *argv[i]
//		return ERROR;
//	return NUMBER;
//}
//
//void push(double OperandValue)
//{
//	if (index < MAXARRAYSIZE)
//		values[index++] = OperandValue;
//	else
//		printf("Error: Stack full. Cannot push operand value %g.\n", OperandValue);
//}
//
//double pop(void)
//{
//	if (index > 0)
//		return values[--index];
//	else
//	{
//		printf("Error: There are 0 operands stored in the stack containing numbers.\n");
//		return 0.0;
//	}
//}
//
//double atof(char *s)
//{
//	int i = 0;
//	int sign = 1;
//	int val = 0;
//	int power = 1;
//	int e = 0;
//	double exp = 0;
//	if (*(s + i) == '-')
//	{
//		sign = -1;
//		i++;
//	}
//	else if (*(s + i) == '+')
//		i++;
//	while (isdigit(*(s + i)))
//		val = val * 10 + (*(s + i++) - '0');
//	if (*(s + i) == '.')
//	{
//		i++;
//		while (isdigit(*(s + i)))
//		{
//			val = val * 10 + (*(s + i++) - '0');
//			power *= 10;
//		}
//	}
//	val = sign * val / power;
//	if (*(s + i) == 'e' || *(s + i) == 'E')
//	{
//		i++;
//		if (*(s + i) == '-')
//		{
//			i++;
//			while (isdigit(*(s + i))) //atoi
//				e = e * 10 + (*(s + i) - '0');
//			while (e-- > 0)
//				val /= 10;
//			return val;
//		}
//		else if (*(s + i) == '+')
//		{
//			i++;
//			while (isdigit(*(s + i))) //atoi
//				e = e * 10 + (*(s + i) - '0');
//			while (e-- > 0)
//				val *= 10;
//			return val;
//		}
//	}
//	else
//		return val;
//}

//Documentation
//Proj1

//ch.1 p1.c
//helloworld program (A)
//int main(int argc, char* argv[])
//{
//	printf("Hello, World");
//} //end main function (A)

//ch.1 p1.c
//add two numbers (A)
//int main (int argc, char *argv[])
//{
//	int integer1;
//	int integer2;
//
//	printf("Enter first integer\n");
//	scanf_s( "%d", &integer1 ); //scanf_s over scanf
//
//	printf("Enter second integer\n");
//	scanf_s( "%d", &integer2 );
//
//	int sum;
//	sum = integer1 + integer2;
//
//	printf("Sum is %d\n", sum);
//} //end main function (A)

//ch.1 p1.c
//compare numbers (A)
//int main(int argc, char* argv[])
//{
//	printf("Enter two numbers, and I will tell you\n");
//	printf("the relationship they satisfy: ");
//
//	int num1;
//	int num2;
//
//	scanf_s(" %d %d", &num1, &num2);
//
//	if (num1 == num2)
//	{
//		printf("%d is equal to %d", num1, num2);
//	}//end if
//
//}

//puts("Welcome to C!");
//printf("%s", "Welcome ");


//ch.3 p1.c
//scanf_s %d%d test puts escape argument finding (A)
//int main (int argc, char *argv[])
//{
//	int integer1;
//	int integer2;
//
//	puts("Enter two integers");
//	scanf_s( "%d %d", &integer1, &integer2); //scanf_s over scanf //scanf_s waits for input that is different than \n. scanf_s accepts any data. scanf_s behaves as experience has learned.
//	printf("Integer 1: %d      Integer 2: %d", integer1, integer2);
//} //end main function (A)

//char string2[20];
//scanf_s("%19s", string2); //scanf_s will stop scanning at space, tab, newline, or End-of-file indicator
//The characters of a string argument, %s, are printed until a terminating null character is reached in printf

//scanf_s("%19s", myString, 20);

//int main(int argc, char* argv[])
//{
//	char myString[20];
//	int myString2[20] = {0};
//	puts("Enter a string \"Hello World\":");
//	//scanf_s("%s%s", myString, 20, myString2, 20);
//	scanf_s("%s", myString, 20);
//	printf("myString: %s.\n", myString);
//	printf("myString2: %d.\n", myString2[19]);
//}

//int main()
//{
//	char* s1 = "Welcome", * s2 = "Students";
//	char* p1, * p2;
//
//	printf("%s%s\n", s1, s2); //WelcomeStudents
//	printf("%s\n", s1 + 3);//come
//	printf("%c\n", *(s1 + 1));
//	printf("%c\n", s1 + 1);//passes char * to %c and prints error
//	printf("%c\n", *s1 + 1);//X
//	printf("done");
//}


#define INF 1024
#define NOPATHS 255
#define WALL 9
#define MAXDIST 14

int NodeList[256][5]; /*Node Identification Numbers: 1 - 256*/ /*Heuristic Distance*/ /*Backpath*/ /*0||1*/ /*PathList*/

int PathList[256][3]; /*Front path*/ /*Right path*/ /*Left path*/ /*NIN 0 is used to distinguish NIN from no path like INF is used to distinguish nodes and unknown nodes*/

int orientation = 0; /*0 Up, 1 Down, 2 Right 3 Left*/

char Q1[1000] = "1a2a";
char Q2[1000] = "";
char Q3[1000] = "";
char Q4[1000] = "";

//Motherboard
int main()
{
	nodeInitialization();
	scan();
}

//Initializes node list
void nodeInitialization()
{
	int i;
	for (i = 0; i < 256; i++)
	{
		NodeList[i][0] = i + 1;//
		NodeList[i][1] = INF;
		//Backpath = 0
		//Explorable/Not = 0
		NodeList[i][4] = NOPATHS;
	}

	/*Node Identification Number*/ /*Heuristic Distance*/ /*Backpath*/ /*0||1*/ /*PathList*/
	NodeList[0][0] = 1;//
	NodeList[0][1] = MAXDIST; /*7 inward + 7 inward*/
	NodeList[0][2] = 1; /*NULL == 0*/
	NodeList[0][3] = 1; /*0 = Corner/Unexplorable || 1 = Explorable*/ //non-explorable
	NodeList[0][4] = 0;/*PathList[0]*/
}//end initialization
//confused Nodelist priority queue

//Scans the maze
void scan()
{
	int nextmove; //First move

	/*S*/
	int nodeClass = nodeClassification(1, PathList[1]); //1: StackInsert
	NIN = 1;

	/*Choice*/
	while (NIN != endGoal)
	choice(NIN); //StackInsert //S B A //2

		   //while not node move forward and navigate corners
		   //gather options, place node in priority queue
		   //return() //orientation tricky   	 		 /*StackInsert*and then 0/1 return()*/ /*explore all options*/
		   //choose node [h] //3: 
		   //arrive at node NIN = NodeID
		   //while (NIN != endGoal)


	//while (nodeClass == 0) //waits until there is a node detected
	//{
	//	API_moveForward();
	//	dist++; //this needs to be replaced with motor functions to determie wall lengths traveled
	//	nodeClass = nodeCheck();
	//}
	//int nodeID = getID(direction, dist, position);

				  // Node B repeat path choice /*Deadend or node-to-node*/ pick one
				//while not node move forward and navigate corners
			//gather options, place node in priority queue
		   //return /*explore all options*/
		   //choose node [h]
		   //arrive at node

		   //END

	//Classification
	//choice
	//[h] until END

	//

	/*Orientation*/

	//to next node.

		/*Cont. Scan*/
		while (nodeClass == 0)
		{
			moveForward();
			stepDistance++;
			nodeClass = nodeClassification(NIN, PathList[NIN]);
		}
}//end scan

	/*-1 = Deadend || 0 = Clear Path || 1 = Explorable Node || 2 = Corner/Unexplorable Node*/
//Classifies every node
int nodeClassification(int NIN, int PathList[])
{
	int class, pathsAvailable = 3;

	/*Classify node by available paths*/
	if (wallFront()) /*Front*/
	{
		pathsAvailable--;
	}
	else
	{
		PathList[0] = NIN + 16;
	}

	if (wallRight()) /*Right*/
	{
		pathsAvailable--;
	}
	else
	{
		PathList[1] = NIN + 1;
	}

	if (wallLeft()) /*Left*/
	{
		pathsAvailable--;
	}
	else
	{
		PathList[2] = NIN - 1;
	}

	switch (pathsAvailable) /*Return classification of node*/
	{
	case 0: return class = -1; /*Deadend*/
		break;
	case 1: class = 0; /*Clear Path*/
		if (wallFront())
		{
			return class = 2; /*Corner/Unexplorable Node*/
		}
		break;
	case 2:
	case 3: return class = 1; /*Explorable Node*/
		break;
	default: return class = -2; /*Should never happen*/
		break;
	}
}//end classification

/*Choice*/
int choice(int NIN)
{
	int i;
	int min;
	int minimum = MAXDIST;
	int choices;
	int option1;
	int option2;
	int orientationoption1;
	int orientationoption2;
	int optimalchoice = -1;
	int suboptimalchoice = -1;
	int leastoptimalchoice = -1;

	for (i = 0; i < 2; i++) /*Heuristic Remaining Distance to Goal*/
	{
		if (PathList[NIN][i] != 0) /*Adjacent accessible coordinate*/
		{
			min = calculate_heuristic_distance(PathList[NIN][i]); //Calculate heuristic remaining distance

			if (min < minimum) /*Optimal choice*/
			{
				minimum = min;
				leastoptimalchoice = suboptimalchoice;
				suboptimalchoice = optimalchoice;
				optimalchoice = i;

				if (PathList[NIN][i] == NIN + 16)
				{
					orientationoption1 = 0;
					option1 = i;
				}
				else if (PathList[NIN][i] == NIN - 16)
				{
					orientationoption1 = 1;
					option1 = i;
				}
				else if (PathList[NIN][i] == NIN + 1)
				{
					orientationoption1 = 2;
					option1 = i;
				}
				else if (PathList[NIN][i] == NIN - 1)
				{
					orientationoption1 = 3;
					option1 = i;
				}
			}

			else if (min == minimum) /*Equidistant paths evaluated based on orientation*/
			{
				if (PathList[NIN][i] == NIN + 16)
				{
					orientationoption2 = 0;
					option2 = i;
				}
				else if (PathList[NIN][i] == NIN - 16)
				{
					orientationoption2 == 1;
					option2 = i;
				}
				else if (PathList[NIN][i] == NIN + 1)
				{
					orientationoption2 == 2;
					option2 = i;
				}
				else if (PathList[NIN][i] == NIN - 1);
				{
					orientationoption2 = 3;
					option2 = i;
				}
				leastoptimalchoice = suboptimalchoice;
				if (orientation == orientationoption1)
				{
					optimalchoice = option1;
					suboptimalchoice = option2;
				}
				else if (orientation == orientationoption2)
				{
					optimalchoice = option2;
					suboptimalchoice = option1;
				}
			}

			else /*Suboptimal and least optimal choice*/
			{
				if (suboptimalchoice != -1)
				{
					leastoptimalchoice = i; //not evaluating orientation not in the mood
				}
				else
				{
					suboptimalchoice = i;
				}
			}

		}
	}//optimal choice


	/*Count choices*/
	if (suboptimalchoice != -1)
	{
		choices++;
	}
	if (leastoptimalchoice != -1)
	{
		choices++;
	}

	/*Explore all choices*/
	for (i = 0; i < choices; i++)
	{

	}
	if (optimalchoice == 0)
	{
		choseForward();
	}
	else if (optimalchoice == 1)
	{
		choseRight();
	}
	else if (optimalchoice == 2)
	{
		choseLeft();
	}

	//after it explores all 3

	//choose [h]

	//after [h] return to main	
}//end choice

/*Movement*/
//void return()
//{
//	;
//}

void choseForward()
{
	API_moveForward();
	//while node
	//motorR(1), motorL(1);
	//turnleft
	//turnright
	//distancefromS++;
}//end forward movement

void choseRight()
{
	turnRight();
	if (orientation == 0) /*Maintain orientation*/
	{
		orientation = 2;
	}
	else if (orientation == 1)
	{
		orientation = 3;
	}
	else if (orientation == 2)
	{
		orientation = 1;
	}
	else if (orientation == 3)
	{
		orientation = 0;
	}
	choseForward();
}
void turnRight() //int deg for diagonals. void for now
{
	API_turnRight();
	//if (deg == 45)
	//motorR(-.5), motorL(.5); //#define HALF .5
	//if (deg == 90)
	//motorR(-1), motorL(1); //#define FULL 1
	//distancefromS++ sqrt2
	;
}//end right turn

void choseLeft()
{
	turnLeft();
	if (orientation == 0) /*Maintain orientation*/
	{
		orientation = 3;
	}
	else if (orientation == 1)
	{
		orientation = 2;
	}
	else if (orientation == 2)
	{
		orientation = 0;
	}
	else if (orientation == 3)
	{
		orientation = 1;
	}
	choseForward();

}

void turnLeft(int deg)
{
	API_turnLeft();
	//if (deg == 45)
	//motorR(.5), motorL(-.5); //#define HALF .5
	//if (deg == 90)
	//motorR(-1), motorL(1); //#define FULL 1
	//distancefromS++ sqrt2
	;
}//end left turn

/*Heuristic*/
int calculuate_heuristic_distance(int NIN)
{
	char NINstr[1000] = itoa(NIN);
	int distanceToGoal;
	int goal;

	strcat(NINstr, "a");

	if (strcmp(NINstr, Q3))
	{
		goal = 120 - NIN;
		while (goal >= 16)
		{
			distanceToGoal++;
			goal -= 16;
		}
		while (goal > 0)
		{
			distanceToGoal++;
			goal--;
		}
		return distanceToGoal;
	}
	else if (strcmp(NINstr, Q4))
	{
		goal = 121 - NIN;
		while (goal > 0)
		{
			distanceToGoal++;
			goal -= 16;
		}
		while (goal < 0)
		{
			distanceToGoal++;
			goal++;
		}
		return distanceToGoal;
	}
	else if (strcmp(NINstr, Q2))
	{
		goal = 136 - NIN;
		while (goal <= -16 || goal < 0)
		{
			distanceToGoal++;
			goal += 16;
		}
		while (goal > 0)
		{
			distanceToGoal++;
			goal--;
		}
		return distanceToGoal;
	}
	else if (strcmp(NINstr, Q1))
	{
		goal = 137 - NIN;
		while (goal <= -16)
		{
			distanceToGoal++;
			goal += 16;
		}
		while (goal < 0)
		{
			distanceToGoal++;
			goal++;
		}
		return distanceToGoal;
	}
}//end heuristic distance

/*Sensor*/
int sensorFront;
int wallFront()
{
	//int walldist = (IRV / analogRead(sensorFront));
	//if (walldist > WALL)
	//{
	//	return 1; //using 1 instead of 0
	//}
	//else
	//{
	//	return 0; //using 0 instead of 1
	//}
}//end front wall sensor

int sensorRight;
int wallRight()
{
	API_wallRight();
	//int walldist = (IRV / analogRead(sensorRight));
	//if (walldist > WALL)
	//{
	//	return 1; //using 1 instead of 0
	//}
	//else
	//{
	//	return 0; //using 0 instead of 1
	//}
}//end right wall sensor

int sensorLeft;
int wallFront()
{
	API_wallLeft();
	//int walldist = (IRV / analogRead(sensorLeft));
	//if (walldist > WALL)
	//{
	//	return 1; //using 1 instead of 0
	//}
	//else
	//{
	//	return 0; //using 0 instead of 1
	//}
}//end left wall sensor
/*End Sensor*/

//if (nodeClass == -1) //if deadend
//
//{
//
//	simLog("\t\tNode class: Dead-end\n\t\tReturning to previous node...");
//
//	API_setColor(position[0], position[1], 'R');
//
//}
//
//if (nodeClass == 1) //if maze node
//
//{
//
//	simLog("\t\tNode class: Path node\n\t\tRecording node information...");
//
//	API_setColor(position[0], position[1], 'B');
//
//
//
//	int nodeCurrent[4] = {}; //stores all information on current node
//
//	nodeCurrent[0] = nodeID; //node ID
//
//	nodeCurrent[1] = dist; //distance traveled
//
//	nodeCurrent[2] = nodePrevious; //backpath
//
//	nodeCurrent[3] = 1; //is an explorable node
//
//	nodePrevious = nodeID; //current node will be the next one's backpath
//
//	stackInsert(nodeCurrent); //inserts the node into the stack
//
//}
//
//if (nodeClass == 2) //if corner
//
//{
//
//	simLog("\t\tNode class: Corner\n\t\tRecording node information...");
//
//	API_setColor(position[0], position[1], 'G');
//
//	int nodeCurrent[4] = {};
//
//	nodeCurrent[0] = nodeID;
//
//	nodeCurrent[1] = dist;
//
//	nodeCurrent[2] = nodePrevious;
//
//	nodeCurrent[3] = 0; //is NOT an explorable node
//
//	nodePrevious = nodeID;
//
//	stackInsert(nodeCurrent);
//
//}
//
//
//int translate(int x, int y) //translates values from cartesian system used in simulator to 16x16 matrix node IDs
//
//{
//
//	int nodeID = (x + (y * 16) + 1); //conversion from cartesian to matrix
//
//	fprintf(stderr, "\t\tNode ID: %d\n", nodeID);
//
//	fflush(stderr);
//
//	return nodeID;
//
//}
//
//
//
//int getID(int direction, int dist, int position[2])
//
//{
//
//	//determine change based on direction
//
//	if (direction == 0) //if facing up
//
//		position[1] += dist; //y position increased (normally, this would be incremented in accordance to the matrix by recorded traveled distance)
//
//	if (direction == 1) //if facing down
//
//		position[1] -= dist;
//
//	if (direction == 2) //if facing right
//
//		position[0] += dist; //x position increased
//
//	if (direction == 3) //if facing left
//
//		position[0] -= dist;
//
//
//
//	//translate to matrix format, this can be removed once outside of simulator
//
//	return translate(position[0], position[1]);
//
//}