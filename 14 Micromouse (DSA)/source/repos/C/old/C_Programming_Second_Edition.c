#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>
#include <iostream>
/*main()
{
	printf("Hello World!\n");
}
*/

/*
main() //Exercise2_Temperature_Conversion Fehrenheit to Celcius using int value type and a heading
{
	int fehrenheit, celcius;
	int lower, upper, step;

	lower = 0;		//literals//
	upper = 200;
	step = 20;

	fehrenheit = lower; //"fehrenheit" is the identifier of a variable initialized by the literal "lower"

	printf("fehrenheit\tcelcius\n"); //prints a header
	while (fehrenheit <= upper) //fehrenheit is set to 0. fehrenheit is being compared to the literal upper. the statements in the while loop will execute while the comparison of the arguments is true
	{
		celcius = 5 * (fehrenheit - 32) / 9; //celcius to fehrenheit conversion
		printf("%10d\t%7d\n", fehrenheit, celcius); //text printing operation of a celsius temperature and the equivalent fehrenheit temperature which forms a list using "\n"//
		fehrenheit += 20;
	}
}
*/

/*
main() //Exercise3_Temperature_Conversion Fehrenheit to Celcius using float value type and a heading (including data type promotion from int to float various times)
{
	float fehrenheit, celcius;
	int lower, upper, step;

	lower = 0;		//literals//
	upper = 200;
	step = 20;

	fehrenheit = lower; //"fehrenheit" is the identifier of a variable initialized by the literal "lower"

	printf("fehrenheit\tcelcius\n"); //prints a header
	while (fehrenheit <= upper) //fehrenheit is set to 0. fehrenheit is being compared to the literal upper. the statements in the while loop will execute while the comparison of the arguments is true
	{
		celcius = 5 * (fehrenheit - 32) / 9; //celcius to fehrenheit conversion
		printf("%10.1f\t%7.3f\n", fehrenheit, celcius); //text printing operation of a celsius temperature and the equivalent fehrenheit temperature which forms a list using "\n"//
		fehrenheit += 20;
	}
}
*/
/*
main() //Exercise4_Temperature_Conversion Celcius to Fehrenheit using float value type and a heading (including data type promotion from int to float various times) and the other file o.o :)
{
	float fehrenheit, celcius;
	int lower, upper, step;

	lower = 0;		//literals//
	upper = 200;
	step = 20;

	fehrenheit = lower; //"fehrenheit" is the identifier of a variable initialized by the literal "lower"

	printf("Fehrenheit\tCelcius\n"); //prints a header
	while (fehrenheit <= upper) //fehrenheit is set to 0. fehrenheit is being compared to the literal upper. the statements in the while loop will execute while the comparison of the arguments is true
	{
		celcius = 5 * (fehrenheit - 32) / 9; //celcius to fehrenheit conversion
		printf("%10.1f\t%7.3f\n", fehrenheit, celcius); //text printing operation of a celsius temperature and the equivalent fehrenheit temperature which forms a list using "\n"//
		fehrenheit += 20;
	}

	celcius = lower;

	printf("\nCelcius   Fehrenheit\n");
	while (celcius <= upper) //celcius is set to 0. celcius is being compared to the literal upper. the statements in the while loop will execute while the comparison of the arguments is true
	{
		fehrenheit = (((9 * (celcius)) / 5) + 32);
		printf("%7.1f   %10.3f\n", celcius, fehrenheit); //text printing operation of a celsius temperature and the equivalent fehrenheit temperature which forms a list using "\n"//
		celcius += 20;
	}
}
*/

/*
main() //F to C, from 300 to 0, using for
{
	float fehrenheit;
	//printf
	for (fehrenheit = 300; fehrenheit >= 0; fehrenheit -= 20)
	{
		printf("%5.1f\t%7.3f\n", fehrenheit, ((fehrenheit - 32.0) * (5.0 / 9.0)));
	}
}
*/

/*
#define LOWER 0
#define UPPER upper
#define STEP 20
main() //use of labels and integration of symbolic constants using #define name replacement text
{
	float fehrenheit;
	float upper; //test

	upper = 300;

	//printf
	for (fehrenheit = UPPER; fehrenheit >= LOWER; fehrenheit -= STEP)
	{
		printf("%5.1fF\t%7.3fC\n", fehrenheit, ((fehrenheit - 32.0) * (5.0 / 9.0))); //ALT numpad2+numpad4+numpad8 for ° edit: ° does not work in console
	}
}
*/

/*
main()
{
 //getchar() != EOF is either true (1) or false (0), the while loop will exit if there argument is 0. the while loop will continue if the argument is 1.
}
*/

/*main()
{
	printf("%d", EOF); //EOF is -1 idk
}
*/

/*
main()
{
	int c;

	while ((c = getchar()) != EOF)) //getchar() and putchar() using while
		putchar(c);
}
*/

/*
main()
{
	int c;
	int result; //variable declaration


	result = ((c = getchar()) != EOF); //returns 1 or 0 != is a boolean expression
	printf("%d", result); //prints 1 or 0 based //may update to loop
}
*/

/*
main()
{
	double nc; //variable representing the total number of characters including each enter key

	for (nc = 0; getchar() != EOF; ++nc)
		;
		printf("%.0f\n", nc); //0 decimal places

}
*/

//cin and getline appeared in my search

/*
main() //count characters
{
	double nc, c;
	double counter;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			++counter;
	printf("%f\n", nc - counter); //improved with counter for subtraction of enter key input(s)
}
*/
/*
main() //count new lines
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
	printf("%d\n", nl);
}
*/


/*
main()
{
	int c; //variable for character
	int nc = 0; //counter for c
	int nl = 0; //counter for nl
	int b = 0; //counter for blanks
	int t = 0; // counter for tabs

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
			++nl;
		else if (c == '\t')
			++t;
		else if (c == ' ')
			++b;
		else
			++nc;
	}
	printf("%d characters %d new lines %d tabs %d blanks\n", nc, nl, t, b);
}
*/

/*
main()
{
	int c;
	int death = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c == ' ') && (death < 1))
		{
			putchar(c);
			++death;
		}
		else if (c != ' ')
			putchar(c);

		if (c == '\n')
			--death;
	}
}
*/

//code that replaces two or more blanks with one
/*main()
{
	int c;
	int death = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (death < 1)
			{
				putchar(c);
				++death;
			}
		}
		else
		{
			putchar(c);
			death = 0;
		}
	}
}
*/

/*
main() //word counter
{
	int c;
	float wc = 0;
	int death = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c == 'a') || (c == 'b') || (c == 'c') || (c == 'd') || c == ('e') || (c == 'f') || (c == 'g') || (c == 'h') || (c == 'i') || (c == 'j') || (c == 'k') || (c == 'l') || (c == 'm') || (c == 'n') || c == ('o') || (c == 'p') || (c == 'q') || (c == 'r') || (c == 's') || (c == 't') || (c == 'u') || (c == 'v') || (c == 'w') || c == ('x') || (c == 'y') || (c == 'z'))
		{
			++death;
		}
		if (death > 0)
		{
			if ((c == ' ') || (c == '\n'))
			{
				++wc;
				death = 0;
			}
		}
	}
	printf("%f", wc);
}
*/

/*
main() //prints one word at a time
{
	int c;
	float wc = 0;
	int death = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c == 'a') || (c == 'b') || (c == 'c') || (c == 'd') || c == ('e') || (c == 'f') || (c == 'g') || (c == 'h') || (c == 'i') || (c == 'j') || (c == 'k') || (c == 'l') || (c == 'm') || (c == 'n') || c == ('o') || (c == 'p') || (c == 'q') || (c == 'r') || (c == 's') || (c == 't') || (c == 'u') || (c == 'v') || (c == 'w') || c == ('x') || (c == 'y') || (c == 'z'))
		{
			++death;
			putchar(c);
		}
		if (death > 0)
		{
			if ((c == ' ') || (c == '\n'))
			{
				printf("\n");
				death = 0;
			}
		}
	}
}
*/

/* word length counter
main()
{
	int c;
	int nc = 0;
	int death = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c == 'a') || (c == 'b') || (c == 'c') || (c == 'd') || c == ('e') || (c == 'f') || (c == 'g') || (c == 'h') || (c == 'i') || (c == 'j') || (c == 'k') || (c == 'l') || (c == 'm') || (c == 'n') || c == ('o') || (c == 'p') || (c == 'q') || (c == 'r') || (c == 's') || (c == 't') || (c == 'u') || (c == 'v') || (c == 'w') || c == ('x') || (c == 'y') || (c == 'z'))
		{
			++nc;
			++death;
		}
		if (death > 0)
		{
			if ((c == ' ') || (c == '\n'))
			{
				printf("%d ", nc);
				death = 0;
				nc = 0;
			}
		}
	}
}
*/

//horizontal word histogram although it can be changed to output each word of varying letter amounts and the book has not introduced strings or cin and cout to hold and produce words/
/*
main()
{
	int c;
	int arraywl[10];
	int i = 0;
	int nc = 0;
	int wc;
	int death = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		arraywl[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if ((c == 'a') || (c == 'b') || (c == 'c') || (c == 'd') || c == ('e') || (c == 'f') || (c == 'g') || (c == 'h') || (c == 'i') || (c == 'j') || (c == 'k') || (c == 'l') || (c == 'm') || (c == 'n') || c == ('o') || (c == 'p') || (c == 'q') || (c == 'r') || (c == 's') || (c == 't') || (c == 'u') || (c == 'v') || (c == 'w') || c == ('x') || (c == 'y') || (c == 'z'))
		{
			++death;
			++nc;
		}
		if (death > 0)
		{
			if ((c == ' ') || (c == '\n'))
			{
				++arraywl[nc];
				death = 0;
				nc = 0;
			}
		}
	}

	for (i = 1; i < 10; i++)
	{
		while (arraywl[i] > 0)
		{
			if (j < 1)
			{
				printf("%d ", i);
				j++;
			}
			printf("*");
			--arraywl[i];
			++death;
		}

		if ((arraywl[i] == 0) && (death == 0))
		{
			printf("%d", i);
		}
		printf("\n");
		j = 0;
		death = 0;
	}
}
*/

//can change these to more than 10 letters as a maximum

/*main() //vertical yet upside down, words can be incorportated a aa aaa
{
	int c;
	int arraywl[10];
	int i = 0;
	int nc = 0;
	int death = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		arraywl[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if ((c == 'a') || (c == 'b') || (c == 'c') || (c == 'd') || c == ('e') || (c == 'f') || (c == 'g') || (c == 'h') || (c == 'i') || (c == 'j') || (c == 'k') || (c == 'l') || (c == 'm') || (c == 'n') || c == ('o') || (c == 'p') || (c == 'q') || (c == 'r') || (c == 's') || (c == 't') || (c == 'u') || (c == 'v') || (c == 'w') || c == ('x') || (c == 'y') || (c == 'z'))
		{
			++death;
			++nc;
		}
		if (death > 0)
		{
			if ((c == ' ') || (c == '\n'))
			{
				++arraywl[nc];
				death = 0;
				nc = 0;
			}
		}
	}

	for (j = 1; j < 10; j++)
	{
		for (i = 1; i <= 10; i++)
		{
			if (arraywl[i] > 0)
			{
				printf("*");
				--arraywl[i];
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
*/

/*
main() //vertical yet upside down, words can be incorportated a aa aaa
{
	int c;
	int arraywl[10];
	int i = 0;
	int nc = 0;
	int death = 0;
	int j = 0;
	int max = 0;
	int maximum = 0;

	for (i = 0; i < 10; i++)
	{
		arraywl[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if ((c == 'a') || (c == 'b') || (c == 'c') || (c == 'd') || c == ('e') || (c == 'f') || (c == 'g') || (c == 'h') || (c == 'i') || (c == 'j') || (c == 'k') || (c == 'l') || (c == 'm') || (c == 'n') || c == ('o') || (c == 'p') || (c == 'q') || (c == 'r') || (c == 's') || (c == 't') || (c == 'u') || (c == 'v') || (c == 'w') || c == ('x') || (c == 'y') || (c == 'z'))
		{
			++death;
			++nc;
		}
		if (death > 0)
		{
			if ((c == ' ') || (c == '\n'))
			{
				++arraywl[nc];
				death = 0;
				nc = 0;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		max = arraywl[i];
		if (max > maximum)
		{
			maximum = max;
		}
	}

	printf("  123456789\n");
	for (j = 10; j > 0; j--)
	{
		if ((death == 0) && (j == 10))
		{
			printf("%d", j);
		}
		else if (death == 0)
		{
			printf(" %d", j);
		}

		for (i = 1; i < 10; i++)
		{
			death++;
			if (arraywl[i] != j)
			{
				printf(" ");
			}
			else
			{
				printf("*");
				--arraywl[i];
			}
		}
		printf("\n");
		death = 0;
	}
}
*/

/*
main() //vertical yet upside down, words can be incorportated a aa aaa
{
	int c;
	int arraywl[100];
	int i = 0;
	int nc = 0;
	int death = 0;
	int j = 0;
	int max = 0;
	int maxwords = 0;
	int maxletters = 0;

	for (i = 0; i < 100; i++)
	{
		arraywl[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if ((c == 'a') || (c == 'b') || (c == 'c') || (c == 'd') || c == ('e') || (c == 'f') || (c == 'g') || (c == 'h') || (c == 'i') || (c == 'j') || (c == 'k') || (c == 'l') || (c == 'm') || (c == 'n') || c == ('o') || (c == 'p') || (c == 'q') || (c == 'r') || (c == 's') || (c == 't') || (c == 'u') || (c == 'v') || (c == 'w') || c == ('x') || (c == 'y') || (c == 'z'))
		{
			++death;
			++nc;
		}
		if (death > 0)
		{
			if ((c == ' ') || (c == '\n'))
			{
				if (nc > maxletters)
				{
					maxletters = nc;
				}
				++arraywl[nc];
				death = 0;
				nc = 0;
			}
		}
	}

	for (i = 0; i < 100; i++)
	{
		max = arraywl[i];
		if (max > maxwords)
		{
			maxwords = max;
		}
	}

	printf("   ");
	for (i = 1; i <= maxletters; i++)
	{
		printf("%2d ", i);
		if (i == maxletters)
		{
			printf("\n");
		}
	}
	for (j = maxwords; j > 0; j--)
	{
		if ((death == 0) && (j == maxwords))
		{
			printf("%3d", j);
		}
		else if (death == 0)
		{
			printf("%3d", j);
		}

		for (i = 1; i <= maxletters; i++)
		{
			death++;
			if (arraywl[i] != j)
			{
				printf("   ");
			}
			else
			{
				printf(" * ");
				--arraywl[i];
			}
		}
		printf("\n");
		death = 0;
	}
}
*/

//if for while printf getchar putchar

//rewrite temperature conversion to use functions
/*
main()
{
	int c = 0;
	int f = 0;

	while (c < 100)
	{
		printf("%4d %4d\n", c, cF(c, f));
		c = c + 10;
	}
	return 0;
}

int cF(int c, int f)
{
	f = (((9 * c) / 5) + 32);
	return f;
}
*/

//function prototype


//call by value allows for temporary variables that do not alter the actual argument
//arrays can be passed as arguments AND THEY ALLOW FOR ALTERATION OF ANY ELEMENT

//newline \n has a character length of 1
//getline & modifyable character arrays to save the longest word

//function (calls) and void and define

//int getline(char currentline[], int maxline);
//void copy(char to[], char from[]);
//arrays passed as arguments send the beginning of the array not individual subscripts
//the argument line in the function call and the argument s in the function are the same memory location so when s is modified in the function the contents of line in the function call are also updated

/*
#define MAXLINE 1000    // maximum input line size //

int getline(char line[], int maxline);
void copy(char to[], char from[]);
*/

/* //print longest input line
main()
{
	int len;                // current line length 			//
	int max;                // maximum length seen so far 	//
	char line[MAXLINE];     // current input line 			//
	char longest[MAXLINE];  // longest line saved here 		//

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)            // there was a line //
		printf("%s", longest);
	return 0;
}

// getline: read a line into s, return length //
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// copy: copy 'from' into 'c'; assume to is big enough //
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
*/
/*
#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);
main() //prints longest line and character count per line
{
	int len;                // current line length 			//
	int max;                // maximum length seen so far 	//
	char line[MAXLINE];     // current input line 			//
	char longest[MAXLINE];  // longest line saved here 		//

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)            // there was a line //
		printf("%s", longest);
	return 0;
}

// getline: read a line into s, return length //
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
		if (i > 1)
		{
			printf("%d", i);
		}
	}
	s[i] = '\0';
	return i;
}

// copy: copy 'from' into 'c'; assume to is big enough //
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}


/*
int nc = 0;
main() //prints lines greater than 80
{
	int len;                // current line length 			//
	int max;                // maximum length seen so far 	//
	char line[MAXLINE];     // current input line 			//
	char longest[MAXLINE];  // longest line saved here 		//

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > 80)
		{
			max = len;
			copy(longest, line);
		}
	if (max > 0)            // there was a line //
		printf("%s", longest);
	return 0;
}

// getline: read a line into s, return length //
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// copy: copy 'from' into 'c'; assume to is big enough //
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[nc] = from[i]) != '\0')
	{
		++i;
		++nc;
	}
}
*/

/*
int nc = 0;
main() //fixes blanks and tabs
{
	int len;                // current line length 			//
	int max;                // maximum length seen so far 	//
	char line[MAXLINE];     // current input line 			//
	char longest[MAXLINE];  // longest line saved here 		//

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > 0) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)
	{
		// there was a line //
		if (longest[0] != '\t')
		{
			printf("%s", longest);
		}
		if (longest[0] == '\t')
		{
			if (longest[1] != '\n')
			{
				printf("%s", longest);
			}
		}
	}
	return 0;
}

// getline: read a line into s, return length //
int getline(char s[], int lim)
{
	int c, i;
	int m = 0;

	for (i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
	{
		if ((c != ' ') && (c != '\t'))
		{
			s[i] = c;
			m = 1;
		}
		else if ((c == ' ') && ((m == 1) || (m = 4))
		{
			s[i] = c;
			m = 2;
		}
		else if ((c == '\t') && ((m == 1) || (m == 2) || (m == 0)))
		{
			s[i] = c;
			m = 4;
		}
		else
		{
			i--;
		}
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// copy: copy 'from' into 'c'; assume to is big enough //
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[nc] = from[i]) != '\0')
	{
		++i;
		++nc;
	}
}
*/
/*
#define MAXLINE 1000
int getline(char line[], int maxline);
void copy(char to[], char from[]);
int nc = 0;
main() //reverse
{
	int len;                // current line length 			//
	int max;                // maximum length seen so far 	//
	char line[MAXLINE];     // current input line 			//
	char longest[MAXLINE];  // longest line saved here 		//

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > 0) {
			max = len;
			copy(longest, line);
			printf("%s\n", longest);
		}
	return 0;
}

// getline: read a line into s, return length //
int getline(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// copy: copy 'from' into 'c'; assume to is big enough //
void copy(char to[], char from[])
{
	int i;
	int nc;

	nc = -1;
	i = 0;

	while (from[i] != '\0')
	{
		i++;
		nc++;
	}
	i = 0;
	while (nc > 0)
	{
		to[i] = from[(nc - 1)];
		--nc;
		++i;
		to[i] = '\0';
	}
}
*/
/*
main() //replaces tabs with spaces
{
	int c;
	int i = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c != '\t') && (c != '\n'))
		{
			putchar(c);
			i++;
			if (i == 8)
			{
				i = 0;
			}
		}
		if ((i == 0) && (c == '\t'))
		{
			printf("        ");
			i = 0;
		}
		if ((i == 1) && (c == '\t'))
		{
			printf("       ");
			i = 0;
		}
		if ((i == 2) && (c == '\t'))
		{
			printf("      ");
			i = 0;
		}
		if ((i == 3) && (c == '\t'))
		{
			printf("     ");
			i = 0;
		}
		if ((i == 4) && (c == '\t'))
		{
			printf("    ");
			i = 0;
		}
		if ((i == 5) && (c == '\t'))
		{
			printf("   ");
			i = 0;
		}
		if ((i == 6) && (c == '\t'))
		{
			printf("  ");
			i = 0;
		}
		if ((i == 7) && (c == '\t'))
		{
			printf(" ");
			i = 0;
		}
		if (c == '\n')
		{
			printf("\n");
			i = 0;
		}
	}
}
*/
/*
main() //splits programs
{
	int c;
	int n = 0;
	int j = 0;
	while ((c = getchar()) != EOF)
	{
		if (n == 40 && (c == ' ') || (c == '\t') || (c == '\n'))
		{
			printf("\n");
			n = 0;
		}
		else if (n == 40 && (c != ' ') && (c != '\t') && (c != '\n'	))
		{
			printf("-\n");
			n = 0;
		}
		else if (c == '\n')
		{
			printf('\n');
			n = 0;
		}
		else if (c != '\n')
		{
			putchar(c);
			n++;
		}
	}
}
*/
/*
#define MAXLINE 1000

int getline(char newprogram[], int maxlength);
void copy(char oldprogram[], char newprogram[]);

main() //deletes comments
{
	int len;                // current line length 			//
	char line[MAXLINE];     // current input 			//
	char longest[MAXLINE];  // NEW saved here 		//

	getline(line, MAXLINE);
	copy(longest, line);
	printf("%s", longest);
	return 0;
}

int getline(char s[], int lim)
{
	int c;
	int i = 0;
	int j;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF; ++i)
	{
		if (c != '/')
		{
			s[i] = c;
		}
		if (c == '/')
		{
			c = getchar();
			if ((c != '*') && (c != '/'))
			{
				s[i] = '/';
				i++;
				s[i] = c;
			}
			else
			{
				while ((c = getchar()) != '/')
				{
					c = getchar();
				}
				s[i] = ' ';
			}
		}
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
*/
/*
#define MAXLINE 1000

int getline(char newprogram[], int maxlength);
void copy(char oldprogram[], char newprogram[]);
int l;
int m = 0;
int L1 = 0;
int R1 = 0;
int L2 = 0;
int R2 = 0;
int E1 = 0;
int E2 = 0;
int E3 = 0;
int L4 = 0;
int R4 = 0;
main()
{
	int len;                // current line length 			//
	int max;                // maximum length seen so far 	//
	char line[MAXLINE];     // current input line 			//
	char longest[MAXLINE];  // longest line saved here 		//

	getline(line, MAXLINE);
	printf("%d", m);

	return 0;
}

// getline: read a line into s, return length //
int getline(char s[], int lim)
{
	int c, i;
	//if i am reading a line count
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		if (c == "(")
		{
			L1++;
		}
		if (c == ")")
		{
			R1++;
		}
		if (c == "[")
		{
			L2++;
		}
		if (c == "]")
		{
			R2++;
		}
		if (c == "\'")
		{
			E1++;
		}
		if (c == "\"")
		{
			E2++;
		}
		if (c == "/") //check
		{
			E3++;
			c = getchar();
			if ((c != '*') && (c != '/'))
			{
				E3++;
			}
			else
			{
				E3--;
			}
		}

	}
	if (c == '\n')
	{
		l++;
		if (L1 != R1)
		{
			m = 1;
			if (L2 != R2)
			{
				m = 110;
				if (E1 % 2)
				{
					m = 121;
					if (E2 % 2)
					{
						m = 131;
						if (E3 % 2)
						{
							m = 141;
						}
					}
					if (E3 % 2)
					{
						m = 132;
					}
				}
				if (E2 % 2)
				{
					m = 122;
					if (E3 % 2)
					{
						m = 133;
					}
				}
				if (E3 % 2)
				{
					m = 123;
				}
			}
			if (E1 % 2)
			{
				m = 111;
				if (E2 % 2)
				{
					m = 231;
					if (E3 % 2)
					{
						m = 241;
					}
				}
				if (E3 % 2)
				{
					m = 232;
				}
			}
			if (E2 % 2)
			{
				m = 112;
				if (E3 % 2)
				{
					m = 332;
				}
			}
			if (E3 % 2)
			{
				m = 113;
			}
		}
		if ((L2 != R2) && (L1 == R1))
		{
			m = 2;
			if (L2 != R2)
			{
				m = 410;
				if (E1 % 2)
				{
					m = 411;
					if (E2 % 2)
					{
						m = 412;
						if (E3 % 2)
						{
							m = 413;
						}
					}
					if (E3 % 2)
					{
						m = 414;
					}
				}
				if (E2 % 2)
				{
					m = 415;
					if (E3 % 2)
					{
						m = 416;
					}
				}
				if (E3 % 2)
				{
					m = 417;
				}
			}
			if (E1 % 2)
			{
				m = 418;
				if (E2 % 2)
				{
					m = 419;
					if (E3 % 2)
					{
						m = 420;
					}
				}
				if (E3 % 2)
				{
					m = 421;
				}
			}
			if (E2 % 2)
			{
				m = 422;
				if (E3 % 2)
				{
					m = 423;
				}
			}
			if (E3 % 2)
			{
				m = 424;
			}
		}
		if ((E1%2) && (L2 == R2))
		{
			m = 3;
			if (E2 % 2)
			{
				m = 500;
				if (E3 % 2)
				{
					m = 501;
				}
			}
			if (E3 % 2)
			{
				m = 502;
			}
		}
		if ((E2%2) && (E1%2 == 0))
		{
			m = 4;
			if (E3 % 2)
			{
				m = 601;
			}
		}
		if (E3%2 && (E2%2 == 0))
		{
			m = 5;
		}
		return m;
	}

	/*for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != 'Z'; i++) //for the program
	{
		if (c == "{")
		{
			c = getchar;
			if (c == "{")
			{

			}
			if ()
			L4++;
		}
		if (c == "}")
		{
			R4++;
		}
	}
	if (L4 != R4)
	{
		return m5, ;
	}
}
*/
/*
// copy: copy 'from' into 'c'; assume to is big enough //
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
*/

/*
//print out the error and the line number
int c;
int p = 0;
int sq = 0;
int dq = 0;
int pL = 0;
int pR = 0;
int bL = 0;
int bR = 0;

main()
{
	while ((c = getchar()) != EOF)
	{
		if ((c == '/') || (c == '*'))
		{
			p++;
		}

		if (c == '\'')
		{
			sq++;
		}

		if (c == '"')
		{
			dq++;
		}

		if (c == '(')
		{
			pL++;
		}

		if (c == ')')
		{
			pR++;
		}

		if (c == '{')
		{
			bL++;
		}

		if (c == '}')
		{
			bR++;
		}

		if (c == '\n')
		{
			if ((p % 2) != 0)
			{
				printf("uneven comments ");
			}

			if (bL != bR)
			{
				printf("uneven brackets ");
			}

			if (pL != pR)
			{
				printf("uneven parenthesis ");
			}

			if ((sq % 2) != 0)
			{
				printf("uneven sq ");
			}

			if ((dq % 2) != 0)
			{
				printf("uneven dq ");
			}

			printf("\n");
			p = 0;
		}
	}
}
*/

//2.2 Data Types and Sizes 6/9/2019 C Programming Language
//exercise 2.1'
/*
main()
{
	unsigned char Unsigned_char = 0;
	unsigned char Unsigned_char_MAX = 0;
	//print unsigned char min then max, char, unsigned char
	while (Unsigned_char >= 0)
	{
		Unsigned_char++;
		printf("%d", Unsigned_char); //"overloads" and wraps to 0 from 255
	}
	while ((Unsigned_char >= 0) && (Unsigned_char >= Unsigned_char_MAX))
	{
		Unsigned_char++;
		if (Unsigned_char > Unsigned_char_MAX)
		{
			Unsigned_char_MAX = Unsigned_char;
		}
	}
	printf("%d Max Unsigned char\n", Unsigned_char_MAX);

	char Char = 0;
	char Char_MAX = 0;
	char Char_MIN = 0;
	char Char2 = 0;

	while ((Char >= 0) && (Char >= Char_MAX))
	{
		Char++;
		if (Char > Char_MAX)
		{
			Char_MAX = Char;
		}
	}
	printf("%d Max char\n", Char_MAX);
	while ((Char2 <= 0) && (Char2 <= Char_MIN))
	{
		Char2--;
		if (Char2 < Char_MIN)
		{
			Char_MIN = Char2;
		}
	}
	printf("%d Min char\n", Char_MIN);

	signed char Signed_char = 0;
	signed char Signed_char_MAX = 0;
	signed char Signed_char_MIN = 0;
	signed char Signed_char2 = 0;

	while ((Signed_char >= 0) && (Signed_char >= Signed_char_MAX))
	{
		Signed_char++;
		if (Signed_char > Signed_char_MAX)
		{
			Signed_char_MAX = Signed_char;
		}
	}
	printf("%d Max Signed char\n", Signed_char_MAX);
	while ((Signed_char2 <= 0) && (Signed_char2 <= Signed_char_MIN))
	{
		Signed_char2--;
		if (Signed_char2 < Signed_char_MIN)
		{
			Signed_char_MIN = Signed_char2;
		}
	}
	printf("%d Min Signed char\n", Signed_char_MIN);
	//print unsigned short, short, signed short max and min
	unsigned short Unsigned_short = 0;
	unsigned short Unsigned_short_MAX = 0;
	while ((Unsigned_short >= 0) && (Unsigned_short >= Unsigned_short_MAX))
	{
		Unsigned_short++;
		if (Unsigned_short > Unsigned_short_MAX)
		{
			Unsigned_short_MAX = Unsigned_short;
		}
	}
	printf("%d Max Unsigned short\n", Unsigned_short_MAX);

	short Short = 0;
	short Short_MAX = 0;
	short Short_MIN = 0;
	short Short2 = 0;

	while ((Short >= 0) && (Short >= Short_MAX))
	{
		Short++;
		if (Short > Short_MAX)
		{
			Short_MAX = Short;
		}
	}
	printf("%d Max short\n", Short_MAX);
	while ((Short2 <= 0) && (Short2 <= Short_MIN))
	{
		Short2--;
		if (Short2 < Short_MIN)
		{
			Short_MIN = Short2;
		}
	}
	printf("%d Min short\n", Short_MIN);

	signed short Signed_short = 0;
	signed short Signed_short_MAX = 0;
	signed short Signed_short_MIN = 0;
	signed short Signed_short2 = 0;

	while ((Signed_short >= 0) && (Signed_short >= Signed_short_MAX))
	{
		Signed_short++;
		if (Signed_short > Signed_short_MAX)
		{
			Signed_short_MAX = Signed_short;
		}
	}
	printf("%d Max Signed short\n", Signed_short_MAX);
	while ((Signed_short2 <= 0) && (Signed_short2 <= Signed_short_MIN))
	{
		Signed_short2--;
		if (Signed_short2 < Signed_short_MIN)
		{
			Signed_short_MIN = Signed_short2;
		}
	}
	printf("%d Min Signed short\n", Signed_short_MIN);

	unsigned int ui = 0;
	ui--;
	printf("%u Unsigned int\n", ui);

	int Int = 0;
	int Int_MAX = 0;
	int Int_MIN = 0;
	int Int2 = 0;

	while (Int >= Int_MAX)
	{
		Int++;
		if (Int > Int_MAX)
		{
			Int_MAX = Int;
		}
	}
	printf("%d Max int\n", Int_MAX);
	while ((Int2 <= 0) && (Int2 <= Int_MIN))
	{
		Int2--;
		if (Int2 < Int_MIN)
		{
			Int_MIN = Int2;
		}
	}
	printf("%d Min int\n", Int_MIN);

	signed int Signed_int = 0;
	signed int Signed_int_MAX = 0;
	signed int Signed_int_MIN = 0;
	signed int Signed_int2 = 0;

	while ((Signed_int >= 0) && (Signed_int >= Signed_int_MAX))
	{
		Signed_int++;
		if (Signed_int > Signed_int_MAX)
		{
			Signed_int_MAX = Signed_int;
		}
	}
	printf("%d Max Signed int\n", Signed_int_MAX);
	while ((Signed_int2 <= 0) && (Signed_int2 <= Signed_int_MIN))
	{
		Signed_int2--;
		if (Signed_int2 < Signed_int_MIN)
		{
			Signed_int_MIN = Signed_int2;
		}
	}
	printf("%d Min Signed int\n", Signed_int_MIN);

	unsigned long Long = 0;
	Long--;
	printf("%u Max Unsigned Long\n", ui);

	long Long2 = 0;
	long LongMAX = 0;
	long LongMIN = 0;
	long Long3 = 0;

	while ((Long2 >= 0) && (Long >= LongMAX))
	{
		Long2++;
		if (Long2 > LongMAX)
		{
			LongMAX = Long2;
		}
	}
	printf("%d Max Long\n", LongMAX);
	while ((Long3 <= 0) && (Long3 <= LongMIN))
	{
		Long3--;
		if (Long3 < LongMIN)
		{
			LongMIN = Long3;
		}
	}
	printf("%d Min Long\n", LongMIN);

	signed long Signed_Long = 0;
	signed long Signed_LongMAX = 0;
	signed long Signed_LongMIN = 0;
	signed long Signed_Long2 = 0;

	while ((Signed_Long >= 0) && (Signed_Long >= Signed_LongMAX))
	{
		Signed_Long++;
		if (Signed_Long > Signed_LongMAX)
		{
			Signed_LongMAX = Signed_Long;
		}
	}
	printf("%d Max Signed Long\n", Signed_LongMAX);
	while ((Signed_Long2 <= 0) && (Signed_Long <= Signed_LongMIN))
	{
		Signed_Long2--;
		if (Signed_Long2 < Signed_LongMIN)
		{
			Signed_LongMIN = Signed_Long2;
		}
	}
	printf("%d Min Signed Long\n", Signed_LongMIN);
}//could do this for float and double */
//%u hold unsigned value
//2.6 Data Types and Sizes 6/11/2019 C Programming Language
//exercise 2.2
/*main()
{
	int i = 0;
	const int lim = 1000;
	int c;
	for (i = 0; i < lim-1; i++)
	{
		if ((c = getchar()) != '\n')
		{
			if (c != EOF)
			{

			}
		}
	}
}*/
//exercise 2.3
/*main()
{
	char LONG[1000];
	int c;
	int i = 0;
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			LONG[i] = c;
			i++;
		}
		else if (c == 'A' || c == 'a')
		{
			LONG[i] = '1';
			i++;
			LONG[i] = '0';
			i++;
		}
		else if (c == 'B' || c == 'b')
		{
			LONG[i] = '1';
			i++;
			LONG[i] = '1';
			i++;
		}
		else if (c == 'C' || c == 'c')
		{
			LONG[i] = '1';
			i++;
			LONG[i] = '2';
			i++;
		}
		else if (c == 'D' || c == 'd')
		{
			LONG[i] = '1';
			i++;
			LONG[i] = '3';
			i++;
		}
		else if (c == 'E' || c == 'e')
		{
			LONG[i] = '1';
			i++;
			LONG[i] = '4';
			i++;
		}
		else if (c == 'F' || c == 'f')
		{
			LONG[i] = '1';
			i++;
			LONG[i] = '5';
			i++;
		}
		else
		{
			LONG[i] = c;
			i++;
		}
	}
	LONG[i] = '\0';
	printf("%s", LONG);
}*/
/*
unsigned long int next = 1;
int rand(void);
void srand(unsigned int);

main()
{
	int Rnumber = getchar();
	srand(Rnumber);
	rand();
	printf("%d seeded from %d/n", next, Rnumber);
}

int rand(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed)
{
	next = seed;
}
*/
/*
//Exercise2-4
//void squeeze(char one, char two);
char line1[100];
char line2[100];
int i = 0;
int j = 0;
int c;
main()
{
	while ((c = getchar()) != EOF && (c != '\n'))
	{
		line1[i] = c;
		i++;
	}
	line1[i] = '\0';
	while ((c = getchar()) != EOF && (c != '\n'))
	{
		line2[j] = c;
		j++;
	}
	i = j = 0;
	while (line1[i] != '\0')
	{
		if (line1[i] == line2[j])
		{
			line1[i] = '\b';
		}
		i++;
		j++;
	}
	printf("%s\n", line1);
}
/*
void squeeze(char lineOne, char lineTwo)
{
	int i = 0;
	int j = 0;
	while (lineOne[i++] != '\0')
	{
		if (lineOne[i++] == lineTwo[j++])
		{
			lineOne[i] = '\b';
		}
	}
}
*/
/*
//Exercise2-5
//void any(char one, char two);
char line1[100];
char line2[100];
int i = 0;
int j = 0;
int k = 0;
int c;
main()
{
	while ((c = getchar()) != EOF && (c != '\n'))
	{
		line1[i] = c;
		i++;
	}
	line1[i] = '\0';
	while ((c = getchar()) != EOF && (c != '\n'))
	{
		line2[j] = c;
		j++;
	}
	i = j = 0;
	while (line1[i] != '\0')
	{
		if (line1[i] == line2[j])
		{
			printf("postion %d\n", i);
			k++;
		}
		i++;
		j++;
	}
	if (k == 0)
	{
		printf("-1\n");
	}
}
*/
//Bitwise Operators
//Exercise2-6 //learned something//mask//notes
/*unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	return ((~(~0u << n) & y) << p) | ((~(~(~0u << n) << p)) & x);
}

int main(void) {
	// Example test cases:
	// First scenario:
	// x = 100 ->           0110 0100
	// y = 5 ->             0000 0101
	// p = 4
	// n = 3
	// Expected outcome:    0101 0100  (84)
	// Second scenario:
	// x = 94 ->            0101 1110
	// y = 195 ->           1100 0011
	// p = 0
	// n = 3
	// Expected outcome:    0101 1011  (91)
	// Third scenario:
	// x = 94 ->            0101 1110
	// y = 195 ->           1100 0011
	// p = 6
	// n = 4
	// Expected outcome:    1101 1110  (222)

	printf("%d\n", setbits(100, 4, 3, 5));
	printf("%d\n", setbits(94, 0, 3, 195));
	printf("%d\n", setbits(94, 6, 4, 195));

	return 0;
}*/
/*
unsigned invert(unsigned x, int p, int n)
{
	return (~(~0u << n) << p) ^ x;
}

main()
{
	printf("%d\n", invert(97, 6, 1));
}*/
/*
unsigned rightrot(unsigned x, int n)
{
	return ((((~(~0u << n)) & x) << (8 - n)) | (x >> n));
}

main()
{
	printf("%d\n", rightrot(167, 2));
}
*/

//ones compliment, two's compliment, binary, divide up, multiply down hexadecimal16 octal decimal
/*
int improvedbitcounts (unsigned x)
{
	int b;
	while ((x &= (x-1)) != 0)
	{
	b++;
	}
	return b;
}
*/
//2.10 Assignment Operators &=
//2.11 Conditional Expressions ? :
//Exercise 2-10;
/*
main()
{

	char c;
	while ((c = getchar()) != EOF && c != '\n')
	{
		printf("%c", c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c);
		//printf("%c", c >= 65 && c <= 90 ? c + 32 : c);
		//printf("%c", ((c == 'A') ? 'a' : ((c == 'B') ? 'b' : c)));
	}

}*/
//2.12 Precedence and Order of Evaluation
//Chapter 3: Control Flow
//Exercise 3-1
/**
main()
{
	int flag = 0;
	char Array[5] = {'D', 'C', 'B', 'A', 'S'};
	int i = 0;
	int c;
	c = getchar();

	while (i <= 4)
	{
		if (c == Array[i])
		{
			printf("%c position %d\n", Array[i], i);
			flag++;
			return 0;
		}
		i++;
	}
	if (flag == 0)
	{
		printf("input was not found in Array\n");
	}
}
*/

//char copytoslash(char from[], char to[]);
//char copytoreal(char f[], char t[]);
/**
void copytoslash(char from[], char to[]);
void copytoreal(char f[], char t[]);
main()
{
	int c;
	int i = 0;
	char og[100];
	char new[100];
	char new2[100];
	while ((c = getchar()) != EOF)
	{
		og[i] = c;
		i++;
	}
	og[i] = '\0';
	copytoslash(og, new);
	printf("original\n%s\nnew\n%s\n", og, new);
	copytoreal(new, new2);
	printf("original\n%s\nnew\n%s\n", new, new2);
}

void copytoslash(char from[], char to[])
{
	int i = 0;
	int n = 0;
	int cond = 0;
	while (from[i] != '\0')
	{
		if (from[i] == '\t')
		{
			cond = 1;
		}
		else if (from[i] == '\n')
		{
			cond = 2;
		}
		else
			cond = 3;

		switch (cond)
		{
		case 1:
		{
			to[n] = '\\';
			++n;
			to[n] = 't';
			break;
		}
		case 2:
		{
			to[n] = '\\';
			++n;
			to[n] = 'n';
			break;
		}
		case 3:
			to[n] = from[i];
		}
		i++;
		n++;
	}
	to[n] = '\0';
}
void copytoreal(char f[], char t[])
{
	int i = 0;
	int n = 0;
	int cond = 3;
	while (f[i] != '\0')
	{
		if (f[i] == '\\')
		{
			i++;
			if (f[i] == 't')
				cond = 1;
			else if (f[i] == 'n')
				cond = 2;
			else
				cond = 3;
		}
		else
			cond = 3;
		switch (cond)
		{
		case 1:
		{
			t[n] = '\t';
			break;
		}
		case 2:
		{
			t[n] = '\n';
			break;
		}
		case 3:
			t[n] = f[i];
		}
		i++;
		n++;
	}
	t[n] = '\0';
}
*/
/*
void shellsort(int v[], int n)
{
	int gap, i, j, temp;

	for (gap = n/2; gap > 0; gap /= 2)
	{
		for (i = gap; i < n; i++)
		{
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
			{
				temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
			}
		}
	}
}*/
/*
void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1: i <j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		or
		c = s[i], s[i] = s[j] , s[j] = c;
	}
}
*/
//Exercise 3-3
/**
void expand(char s1[], char s2[]);
int main()
{
	char from[100];
	char to[100];
	int c;
	int i = 0;

	while ((c = getchar()) != EOF)
	{
		from[i] = c;
		i++;
	}
	from[i] = '\0';
	expand(from, to);
}
//11a12-14a15-z15-e-z
void expand(char s1[], char s2[])
{
	int i = 0;
	int d1 = 0;
	int d2 = 0;
	int num = 0;
	int num2 = 0;
	char l = 0;
	char l2 = 0;

	while (s1[i] != EOF)
	{
		Start:
		if (s1[i] == '\n')
		{
			goto End;
		}
		else if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			Start1:
			l = s1[i];
			printf("%c", s1[i]);
			i++;
			if (s1[i] == '-')
			{
				goto LetterArray;
			}
			else if (s1[i] >= '0' && s1[i] <= '9')
			{
				goto Start2;
			}
			else if (s1[i] == '\n')
			{
				goto End;
			}
			else if (s1[i] >= 'a' && s1[i] <= 'z')
			{
				goto Start1;
			}
			else
			{
				printf("%c", s1[i]);
				goto Start;
			}
		}
		//
		else if (s1[i] >= '0' && s1[i] <= '9')
		{
			Start2:
			d1 = s1[i] - '0';
			printf("%c", s1[i]);
			i++;
			if (s1[i] == '-')
			{
				num = d1;
				goto NumberArray;
			}
			else if (s1[i] >= '0' && s1[i] <= '9')
			{
				d2 = s1[i] - '0';
				printf("%c", s1[i]);
				i++;
				if (s1[i] == '-')
				{
					num = ((10 * d1) + d2);
					goto NumberArray;
				}
				else if (s1[i] >= 'a' && s1[i] <= 'z')
				{
					goto Start1;
				}
				else
				{
					goto Start;
				}
			}
			else if (s1[i] == '\n')
			{
				goto End;
			}
			else if (s1[i] >= 'a' && s1[i] <= 'z')
			{
				goto Start1;
			}
			else
			{
				printf("%c", s1[i]);
				i++;
				goto Start;
			}
		}
		else
		{
			printf("%c", s1[i]);
			i++;
			goto Start;
		}

		NumberArray:

		{
			i++;
			if (s1[i] >= 'a' && s1[i] <= 'z')
			{
				printf("-");
				goto Start1;
			}
			else if (s1[i] == '-')
			{
				printf("-%c", s1[i]);
				i++;
				goto Start;
			}
			else if (s1[i] >= '0' && s1[i] <= '9')
			{
				d1 = s1[i] - '0';
				i++;
				if (s1[i] >= '0' && s1[i] <= '9')
				{
					d2 = s1[i] - '0';
					num2 = ((10 * d1) + d2);
					i++;
					goto Print;
				}
				else
				{
					num2 = d1;
					goto Print;
				}
			}
			else
			{
				printf("-%c", s1[i]);
			}
			//
			Print:
			if (num2 > num)
			{
				while (num < num2)
				{
					printf(", %d", num + 1);
					num++;
				}
				goto Start;
			}
			else if (num2 < num)
			{
				while (num2 < num)
				{
					printf(", %d", (num - 1));
					num--;
				}
				goto Start;
			}
			if (s1[i] >= 'a' && s1[i] <= 'z')
			{
				goto Start1;
			}
			else
			{
				printf("%c", s1[i]);
				i++;
				goto Start;
			}
		}

		LetterArray:
		{
			i++;
			if (s1[i] >= 'a' && s1[i] <= 'z')
			{
				l2 = s1[i];
				goto Print2;
			}
			else if (s1[i] == '-')
			{
				printf("-%c", s1[i]);
				i++;
				goto Start;
			}
			else if (s1[i] >= '0' && s1[i] <= '9')
			{
				goto Start2;
			}
			else
			{
				printf("-%c", s1[i]);
			}
			//
			Print2:
			if (l2 > l)
			{
				while (l2 > l)
				{
					printf(", %c", (l+1));
					l++;
				}
				i++;
				goto Start;
			}
			else if (l2 < l)
			{
				while (l2 < l)
				{
					printf(", %c", (l-1));
					l--;
				}
				i++;
				if (s1[i] == '-')
				{
					l2 = l;
					goto LetterArray;
				}
				goto Start;
			}
		}
		End:
		break;
	}
}
*/
//Exercise 3-4 two's complement overflow solution: hold the positive integer in a long int or by changing the (n /= 10) > 0 to (n /= 10) != 0 or use |abs|

//Exercise 3-5

//void itob(int num, int re, int base);
//void reverse(char s[]);
/**
main()
{
	int s = 0;
	itob(4735, s, 16);
	//reverse(s);
	printf("%d", s);
}
void itob(int num, int re, int base)
{
	int i = 0;
	int d = 0;
	int r = 0;

	d = num / base;
	while (d > 0)
	{
		r = (num - (d * base));
		//only for hexa
		if (r == 15)
		{
			r = 'F';
			//re[i] = r;
			printf("%d", r);
		}
		else if (r == 14)
		{
			r = 'E';
			//re[i] = r;
			printf("%d", r);
		}
		else if (r == 13)
		{
			r = 'D';
			//re[i] = r;
			printf("%d", r);
		}
		else if (r == 12)
		{
			r = 'C';
			//re[i] = r;
			printf("%d", r);
		}
		else if (r == 11)
		{
			r = 'B';
			//re[i] = r;
			printf("%d", r);
		}
		else if (r == 10)
		{
			r = 'A';
			//re[i] = r;
			printf("%d", r);
		}
		else
		{
			//re[i] = r;
			printf("%d", r);
		}
		num = d;
		d = num / base;
		//i++;
	}
	//re[i] = '\0';
}

void reverse(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s) - 1 ; i < j; i++, j--)
	{
			c = s[i], s[i] = s[j], s[j] = c;
	}
}
*/
//continue
/**
int main()
{
	printf("b");
}
*/
//Chapter 4 Functions and Program Structure
/**
#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main()
{
	char line[MAXLINE];
	int found = 0;

	while (getline(line, MAXLINE) > 0)
	{
		if (strindex(line, pattern) >= 0)
		{
			printf("%s", line);
			found++;
		}
		//return found;
	}
}

int getline(char s[], int lim)
{
	int c, i;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i++] = '\0';
	return i;
}

int strindex(char s[], char t[])
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
}
*/
//Exercise 4-1
//input would could
//output position 6 word could
/*
#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int max);
int strindex(char source[], char searchfor[], int p);

char pattern[] = "ould";

int main()
{
	char line[MAXLINE];
	int found = 0;
	int pos = 0;
	int end = 0;

	while (getline(line, MAXLINE) > 0)
	{
		if (strindex(line, pattern, pos) >= 0)
		{
			printf("position %d word ", pos);
			while (line[pos] != '\0')
			{
				printf("%c", line[pos]);
				found++;
				pos++;
			}
			//printf("\n");
		}
		//return found;
	}
}

int getline(char s[], int lim)
{
	int c, i;
	c = 0;
	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i++] = '\0';
	return i;
}

int strindex(char s[], char t[], int p1)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) //would
			;
		if (k > 0 && t[k] == '\0')
		{
			p1 = i;
		}
	}
	if (p1 > 0)
	{
		return p1;
	}
	else
	{
		return -1;
	}
}
*/
//Exercise 4.2
/**
#include <ctype.h>

int main()
{
	int c;
	char line[100];
	int i = 0;
	while ((c = getchar()) != EOF && c != '\n')
	{
		line[i++] = c;
	}
	printf("%g", atof(line));
}
double powerup(double base, double n)
{
	double p;
	int flag2 = 0;
	if (n < 0)
	{
		flag2++;
		n = n * -1;
	}
	for (p = 1; n > 0; --n)
	{
		p = p * base;
		return p;
	}
	if (flag2 > 0)
	{
		p = 1 / p;
	}
}
double atof(char s[])
{
	double val, power, exp;
	int i, sign, sign2;
	int flag = 0;
	for (i = 0; isspace(s[i]); i++)
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '-' || s[i] == '+')
	{
		i++;
	}
	for (val = 0.0; isdigit(s[i]); i++) //isspace isdigit function calls that save memory
	{
		val = 10.0 * val + (s[i] - '0'); //num = 10 * num + (c - '0');
	}
	if (s[i] == 'e' || s[i] == 'E')
	{
		flag++;
		i++;
		sign2 = (s[i] == '-') ? -1 : 1;
		for (exp = 0.0; isdigit(s[i]); i++)
		{
			exp = 10.0 * val + (s[i] - '0');
		}
	}
	if (s[i] == '.')
	{
		i++;
	}
	for (power = 1.0; isdigit(s[i]); i++)
	{
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	if (flag > 0)
	{
		return (sign * val / power) * (powerup(10, (sign2*exp)));
	}
	else
	{
		return sign * val / power;
	}
}
*/

/*
int strlen(char s[])
{
int i;

i=0;
while (s[i] != '\0')
	i++;
return i;
}
*/

/*
int atoi(char s[])
{
int i, n;

n = 0;
for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
	n = 10 * n + (s[i] - '0');
return n;
}
*/

/*
int atoi(char s[])
{
int i, n, sign;

n = 0;
for(i = 0; sispace(s[i]); ++i)
	;
sign = (s[i] == '-') ? -1 : 1;
if (s[i] == '+' || s[i] == '-')
	i++;
for (n = 0; isdigit(s[i]); i++) 
	n = 10 * n + (s[i] - '0');
return sign * n;
}
*/

/*
void strcat(char s[], char t[])
{
int i, j;

i = j = 0;
while (s[i] != '\0')
	i++;
while ((s[i++] = t{j++]) != '\0')
	;
}
*/

/*
void itoa(int n, char s[])
{
int i, sign;

if ((sign = n) < 0)
	n = -n;
i = 0;
do
{
s[i++] = n % 10 + '0';
}
while ((n/= 10) > 0;
if (sign < 0)
	s[i++] = '-';
s[i] = '\0';
reverse(s);
}
*/

/*
int trim(char s[])
{
int n;

for (n = strlen(s)-1; n >= 0; n--)
	if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
		break;
s[n+1] = '\0';
return n;
}
*/

/*
for (i = 0; i < n; i+=)
{
if (a[i] < 0)
	continue;
	//do positive elements
}
*/

/*
for (i = 0; i < n; i++)
	for (j = 0; j <m; j++)
		if (a[i] == b[j]
			goto found;
//didn't find any common element
found:
*/

/*
main()
{
double sum, atof(char []);
char line[MAXLINE];
int getline(char line[], int max);

sum = 0;
while (getline(line, MAXLINE) > 0)
	printf("\t%g\n", sum += atof(line));
return 0;
}
*/

/*
int atoi(char s[])
{
double atof(char s[]);

return (int) atof(s);
}
*/
/*
#include <stdlib.h>
#include <ctype.h>
#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
#define BUFSIZE 100
#define PI 3.14159 
#define DEG2RAD (PI/180) 

char buf[BUFSIZE];
int bufp = 0;
double val[MAXVAL];
int bufflag = 0;
double getop(char []);
void push(double);
double pop(void);
int sp = 0;
int up = 0;
int i = 0;
double x;
int DoesXhavesomethingSavedtoIT;
int weRePlus = 0;
double ungets[MAXVAL];
int main()
{

	int type;
	double op2;
	char s[MAXOP];
	double duplifier, s1, s2;
//Start:
	while ((type = getop(s)) != EOF)
	{
		switch (type)
		{
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				weRePlus = 1;
				ungets[up++] = '+';
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			case '%':
				op2 = pop();
				if (op2 != 0.0)
					push((int)pop() % (int)op2); //success
				else
					printf("error: zero divisor\n");
				break;
			case '=':
				printf("\t%.8g\n", val[--sp]);
				break;
			case '\n':
				ungets[up++] = '\n';
				break;
			case 'p':
				printf("\t%.8g\n", val[--sp]);
				++sp;
				break;
			case 'c':
				Do:
				if (sp > 0)
				{
					printf("\t%.8g\n", val[--sp]);
					goto Do;
				}
				break;
			case 'd':
				duplifier = val[--sp];
				push(duplifier);
				push(duplifier);
				break;
			case 's':
				s1 = val[--sp];
				s2 = val[--sp];
				push(s1);
				push(s2);
				break;
			case 'f':
				push(sin(pop() * DEG2RAD));
				break;
			case 'v':
				push(cos(pop() * DEG2RAD));
				break;
			case 'r':
				op2 = pop();
				push(pow(pop(), op2));
				break;
			case 'x':
				if (x == 0)
				{
					std::cin >> x;
				}
				else
					push(x);
			case 'u': //success
				ungets[up] = '\0';
				up = 0;
				i = 0;
				while (ungets[up] != '\0')
				{
					if (ungets[up] == 32)
					{
						//s[i++] = ungets[up];
						printf(" ");
						up++;
					}
					else if (ungets[up] == 43)
					{
						//push(pop() + pop());
						//s[i++] = ungets[up];
						printf("+");
						ungets[up++] = '+';
						push(ungets[up - 2] + ungets[up++]);
						up++;
						printf("%g", ungets[up]);
					}
					else if (ungets[up] == 10)
					{
						//s[i++] = ungets[up];
						printf("\n");
						up++;
					}
					else
					{
						//push(ungets[up]);
						//s[i++] = ungets[up];
						printf("%g", ungets[up]);
						push(ungets[up]);
						up++;
					}
				}
				//up = 0;
				//getop(ungets);
				printf("\n");
				while (up > 0)
					ungets[up--];
				/*
				buf[bufp] = '\0';
				if (bufflag > 0)
				{
					up = 0;
					while (unget[up] != '\0')
					{
						printf("%g ", unget[up++]); //ascii to string
						push(unget[--up]);
						up++;
					}
					bufflag = 0;
					memset(&unget[0], 0, sizeof(unget));
					if (bufp > 0)
					{
						bufp = 0;
						while (buf[bufp] != '\0')
						{
							printf("%d ", buf[bufp++]);
						}
					}
					memset(&buf[0], 0, sizeof(buf));
					printf("\n");
					break;
				}

				else
				{
					up = 0;
					while (unget[up] != '\0')
					{
						printf("%g ", unget[up++]);
						push(unget[--up]);
						up++;
					}
					printf("\n");
					memset(&unget[0], 0, sizeof(unget));
					break;
				}
				
				break;
			//default:
			//printf("error: unkown command %s\n", s);
			//break;
		}
	}
	return 0;
}

void push(double f) //push f onto stack and update the position at the end of the stack
{
	if (sp < MAXVAL)
	{
		if (weRePlus)
		{
			val[sp++] = f;
			weRePlus = 0;
		}
		else
		{
			ungets[up++] = f;//number
			val[sp++] = f;
		}
	}
	else
		printf("error: stack full, can't push%g\n", f);
}

double pop(void) //pop and return top value of stack understood
{
	if (sp > 0)
		return val[--sp];
	else
	{
		printf("error: stack empty\n");
		return 0.0;
	}
}

int getch(void);
void ungetch(int);

double getop(char s[]) //gets operands and operators
{
	i = 0;
	int c;
	
	while ((s[0] = c = getch()) == ' ' || c == '\t')
		ungets[up++] = c; //skips spaces by overwriting them
	
	s[1] = '\0';
	
	if (!isdigit(c) && c != '.' && c != '-' && c != 'p')//not a number
	{
		return c;
	}

	if (c == '+')
	{
		ungets[up++] == c;
	}
	
	if (c == 'p')
	{
		return c;
	}
	
	if (c == '-') //checks minus versus negative
	{
		if ((isdigit(s[++i] = c = getch()))) //success
		{
			--i;
			s[i] = '-'; //-1
			s[++i] = c;
			goto Num;
		}
		else
		{
			i--;	//-\n
			ungetch(c);	//success
			c = '-';
			return c;
		}
	}
	
	if (c == 'd')
	{
		return c;
	}
	if (c == 'f')
	{
		return c;
	}
	if (c == 'r')
	{
		return c;
	}
	if (c == 'v')
	{
		return c;
	}
	
	if (c == 'x')
	{

		if (!DoesXhavesomethingSavedtoIT)
		{
			x = pop();
			DoesXhavesomethingSavedtoIT++;
			return c;
		}
		return c;
	}
	
	Num:
	if (isdigit(c))
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.') //saves fraction
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
	return c;
}
//ungetch puts things buffer, getch checks buffer and then uses getchar if nothings in buffer
int getch(void) //check for character in buffer and returns it or gets a character using getchar
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) //checks if buffer is full and if it isn't, puts a character in it, and updates the position of the end of the buffer
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
	{
		buf[bufp++] = c;
		bufflag++;
	}
}
*/
/*
#define MAXOP    100  // max size of operand or operator
#define NUMBER   '0'  // signal that a number was found
#define MAXLINE 1000

int getop(char[]);
void push(double);
double pop(void);
int getline(char[], int);

char line[MAXLINE];
int line_i;

// reverse Polish calculator
int main(void)
{
	int type;
	double op2;
	char s[MAXOP];

	while (getline(line, MAXLINE) != 0)
	{
		line_i = 0;
		while ((type = getop(s)) != '\0')
		{
			switch (type)
			{
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command \'%s\'\n", s);
				break;
			}
		}
	}

	return 0;
}

#define MAXVAL   100  // maximum depth of val stack

int sp = 0;          // next free stack position
double val[MAXVAL];   // value stack

// push:  push f onto value stack 
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

// pop:  pop and return top value from stack 
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else
		printf("error: stack empty\n");

	return 0.0;
}

// getline:  get line into s, return length 
int getline(char s[], int lim)
{
	int c, i;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';

	return i;
}

#include <ctype.h>

// getop:  get next character or numeric operand 
int getop(char s[])
{
	int i, c;

	while ((s[0] = c = line[line_i++]) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;      // not a number
	i = 0;
	if (isdigit(c))    // collect integer part
		while (isdigit(s[++i] = c = line[line_i++]))
			;
	if (c == '.')      // collect fraction part
		while (isdigit(s[++i] = c = line[line_i++]))
			;
	s[i] = '\0';
	line_i--;

	return NUMBER;
}
*/

//Chapter 4.4 Scope Rules
//Recursion 4.10
/*
void printd(int n)
{
	if (n < 0) {
		putchar('-');
		n = -n;
	}
	if (n / 10)
		printd(n / 10);
	putchar(n % 10 + '0');
}
*/
/*
void qsort(int v[], int i, int j)
{
	int i, last;
	void swap(int v[], int left, int right);

	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}

void swap(int v[], int i, int j)
{
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
*/ //choosing to skip recursion examples because i don't feel the urge to practice recursion problems on my path to electrical engineering, as i continue reading...

//#define max(a, B) ((A) > (B) ? (A) : (B))
//#define swap(t,x,y) do{t z=x;x=y;y=z}while(0)

//#if #elif #endif #ifndef #define #include


//Chapter 5 Pointers and Arrays
