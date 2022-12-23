#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <iostream>
#include <stdarg.h>
//Preface
/*C has gained popularity. C has implemented changes. Compilers have been written by groups not involved in the design. In less words: C has evolved. Appendix A is a reference manual covering the essentials of the standard in a smaller place. Appendix B is a summary of the facilities of the standard library.*/
//Preface to the First Edition
/*Learning C is grown during reading, writing and revising examples. Beyond effective use of C language programming, useful algorithms, good style, and sound design are taught. The book writes, access to a more knowledgeable colleague will help. A mentor will help. The book has written twice, C "wears well as one's experience with it grows."*/
//Introduction
/*Conditional code execution tested at the top: while, for. Conditional code execution tested at the bottom: do. Variables within brackets are created anew with each invocation. Variables may be declared in nested blocks, structures, and unions. Seperately compiled source files are directly accesible to eachother. A preprocessing step performs macro subtitution on program text, inclusion of other source files, and conditional compilation. C provides no operations to deal directly with composite objects except for copying structures. C does not define any storage allocation other than static definition and the stack provided by the local variables of a function. There are no input/read or output/write and no built-n file access methods, so to perform these tasks explicitly called fuctions must be used. Macros are defined within stdarg for the use of variable size argument lists.*/
//Chapter 1
/*Supplement programming by writing original programs.*/
/*1.1*/
////Program "hello, world\n"
//void main()
//{
//	printf("hello, world\n");
//}
//Programs consists of functions and variables. Functions contains statements that specify the computation. Data is communication between function calls and functions is performed through arguments. Functions contain function lists within ( ), each argument must have a date type in it's function argument declaration. Escape sequences begin with backslash and end with a character.
//Escape sequence \t \n \r \b \a \\ \? \' \"
//Keywords
//	auto	double	int	    struct
//	break	else	long	switch
//	case	enum	while	typedef
//	char	extern	return	union
//	const	float	short	unsigned
//	static	for		signed	register
//	default	goto	sizeof	volatile
//	do	    if	    void	continue
//Program escape sequences
//void main()
//{
//	printf("\n\t.\r.\bdone");
//}
/*1.2*/
//formatted output
//Program temperature conversion
//void main()
//{
//	int temp_in_F = 0; //declared and initialized
//	int temp_in_c; //declared
//	
//	while (temp_in_F <= 212)
//	{
//		printf("%4d\t%4d\n", temp_in_F, (5 * (temp_in_F - 32)) / 9);
//		temp_in_F += 1;
//	}
//}
//bit 1 or 0
//char 8 bits	int 16 bits   float 32 bits
//				short 8 bits  double 64 bits
//				long 16 bits
//unsigned 11111111  128
//signed   11111111 -127
//Program temperature conversion
//void main()
//{
//	float temp_in_f = 0; //declared and initialized
//	float temp_in_c; //declared
//	
//	while (temp_in_f <= 212)
//	{
//		printf("%4.3f\t%4.3f\n", temp_in_f, (5.0 * (temp_in_f - 32.0)) / 9.0);
//		temp_in_f += 1.0;
//	}
//}
/*1.3*/
//Last instance of an expression as an argument in printf is and instance of a general rule - in any context where it is permissible to use the value of a variable of some type, you can use a more complicated expression of that type.
/*1.4*/
//#define
/*1.5*/
//getchar() get the next input character from a text stream and returns that is its value.
//putchar() prints the contents of the integer variable argument as a character.
/*1.5.1*/
/*1.5.2*/
//; null statement
/*1.5.3*/
//'character constant 'A' including the single quotes and A represents the integer value equal to the numerical value of the character in this machine's character set.
/*1.5.4*/
/*1.6*/
//Arrays contain some data type of information in some number of subsets beginning at 0.
/*1.7*/
//power(m,n)
//The names used by power for its parameters are local to its function.
//Parameter is for a variable names in the parenthesized list in a function definition. Argument for the value used in a call of the function. Formal and actual, respectively.
//Parameter names are optional in the prototype. A data type is required for each parameter.
/*1.8*/
//Function arguments are passed by value. Arrays are different because they pass their location or address to the function.
/*1.9*/
/*1.10*/
//External functions can be used instead of an argument list. The external variable must be declared as extern within the function that wants to access it, unless it has been declared in the source file before being used by a particular function. Usual practice consists of collecting external variables in a header that is included at the top of each source file with #include <header>. void must be used for empty argument lists in function prototypes.
//Function power
//int power(int base, int n)
//{
//	int i, p;
//	
//	p = 1;
//	for (i - 1; i <= n; ++i)
//		p = p * base;
//	return p;
//}
//Function getline
//int getline(char s[], int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//		s[i] = c;
//	if (c == '\n') {
//		s[i] = c;
//		++i;
//	}
//	s[i] = '\0';
//	return i;
//}
//
//Function copy
//void copy(char to[], char from[])
//{
//	int i;
//
//	i = 0;
//	while ((to[i] = from[i]) != '\0')
//		++i;
//}
//
//Function getline
//int getline(void)
//{
//	int c, i;
//	extern char line[]; //redundant
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
//		line[i] = c;
//	if (c == '\n') {
//		line[i] = c;
//		++i;
//	}
//	line[i] = '\0';
//	return i;
//}
//
//Function copy
//void copy(void)
//{
//	int i;
//  extern char line[], longest[]
//
//	i = 0;
//	while ((longest[i] = line[i]) != '\0')
//		++i;
//}
//Chapter 2
//Declarations list the variables to be used. The type of an object determines the set of values it can have and what operations can be performed on it.
/*2.1*/
/*2.2*/
/*2.3*/
//Program string length
//int strlen(char s[])
//{
//	int i;
//
//	i = 0;
//	while (s[i] != '\0')
//		++i;
//	return i;
//}
//Enumeration provide a convinient way to associate names with constant values. Names in different enumerations must be distinct. Values may be repeated. Enumerations provide the chance of checking.
/*2.4*/
/*2.5*/
//Modulus produces the remainder after division
//void main()
//{
//	printf("%d", 10 % 3); 
//	printf("%d", 15 % 4);
//}
//Program Leap year (qualification code)
//if ((year %4 == 0 && year % 100 != 0) || year % 400 = 0)
//	printf("%d is a leap year\n", year;)
//else
//  printf("%d is not a leap year\n", year;)
/*2.6*/
//Expressions connected by logical operators are read from left to right. The precedence of && is higher than that of ||, and both are lower than relational and equality operators. But since the precedence of != is higher than assignment parentheses are needed.
/*2.7*/
//Program converts a string of digits into its numerical equivalent
//int atoi(char s[])
//{
//	int i, n;
//
//	n = 0;
//	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) c >= '0' && c <= '9' is replaced by isdigit(c)
//		n = 10 * n + (s[i] - '0');
//	return n;
//}
//Program maps a single character to lower case for the ASCII character set. If the character is not an upper case letter, lower returns it unchanged;
//int lower(int c)
//{
//	if (c >= 'A' && c <= 'Z')
//		return c + 'a' - 'A';
//	else
//		return c;
//}
//Relational expressions like i > j and logical expressions connected by && and || are defined to have value 1 if true, and 0 if false.
//Conversions take place across assignements.
//Type conversions can be forced with a cast. Arguments declared in a function prototype automatically coerce arguments in the function call.
//Program psuedo-random number generator
//unsigned long int next = 1;
//
//int rand(void)
//{
//	next = next * 1103515245 + 12345;
//	return (unsigned int)(next / 65536) % 32768;
//}
//Program initializing the seed
//void srand(unsigned int seed)
//{
//	next = seed;
//}
/*2.8*/
//Program remove all occurences of character c from s
//void squeeze(char s[], int c)
//{
//	int i, j;
//
//	for (i = j = 0; s[i] != '\0'; i++)
//		if (s[i] != c)
//			s[j++] = s[i];
//	s[j] = '\0';
//}
//Program concatenates the string t to the end of the string s
//void strcat(char s[], char t[])
//{
//	int i, j;
//
//	i = j = 0;
//	while (s[i] != '\0')
//		i++;
//	while ((s[i++] = t[j++]) != '\0')
//		;
//}
/*2.9*/
/*2.10*/
/*2.11*/
/*2.12*/
//The order of operands with the same precedence is not ensured.
//Chapter 3
/*3.1*/
//Variables can be declared inside any block.
/*3.2*/
//Use braces with if.
/*3.3*/
//Program binary search function that determines if a particular value x occurs in a sorted array v. The elements of v must be in increasing order. The function returns the position of x in v or -1.
//int binsearch(int x, int v[], int n)
//{
// int low, mid, high;
//
// low = 0;
// high = n - 1;
//
// while (low <= high) {
//  mid = (low + high) / 2;
//  if (x < v[mid]) {
//   high = mid - 1;
//  }
//  else if (x > v[mid]) {
//   low = mid + 1;
//  }
//  else
//   return mid;
// }
// return -1;
//}
/*3.4*/
//Program test switch constant integer value case and fall through and input
//void main()
//{
//	char c;
//	while ((c = getchar()) != '0')
//	{
//		switch (c)
//		{
//			case 2:
//				printf("2\n");
//				break;
//			case '3':
//				printf("3\n");
//				break;
//			case '\n':
//				printf("\n");
//			default:
//				printf("alien detected\n");
//		}
//	}
//	printf("done\n");
//}
/*3.5*/
//Program more general atoi
//int atoi(char s[])
//{
//	int i, n, sign;
//
//	for (i = 0; isspace(s[i]); i++)
//		;
//	sign = (s[i] == '=') ? -1 : 1;
//	if (s[i] == '+' || s[i] == '-')
//		i++;
//	for (n = 0; isdigit(s[i]); i++)
//		n = 10 * n + (s[i] - '0');
//	return sign * n;
//}
//Program shell sort switches elements seperated by a gap amounts and increments up to the maximum allowable compa
//void shellsort(int v[], int n);
//
//void main()
//{
//	int v[4] = {-2, -3, -1, 7};
//	int n = sizeof(v) / sizeof(v[0]);
//	int i = 0;
//	shellsort(v, n);
//	while (i <= 3)
//	{
//		printf("%d ", v[i]);
//		i++;
//	}
//}
//
//void shellsort(int v[], int n)
//{
//	int gap, i, j, temp;
//
//	for (gap = n/2; gap > 0; gap /= 2)
//		for (i = gap; i < n; i++)
//			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
//			{
//				temp = v[j];
//				v[j] = v[j + gap];
//				v[j + gap] = temp;
//			}
//}
/*3.6*/
//Program converts a number to a character string
//void itoa(int n, char s[])
//{
// int i, sign;
//
// if ((sign = n) < 0)
//  n = -n;
// i = 0;
// do {
//  s[i++] = n % 10 + '0'
// } while ((n /= 10) > 0);
//  if (sign < 0)
//   s[i++] = '-';
//  s[i] = '\0';
//  reverse(s);
//}
/*3.7*/
//Program removes trailing blanks, tabs, and newlines from the end of a string
//int trim(char s[])
//{
// int n;
//
// for (n = stren(s) - 1; n >= 0; n--)
//  if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
//   break;
// s[n + 1] = '\0';
// return n;
//}
//Continue causes the next iteration of the enclosing loop to execute. For while and do while the test statement is excecuted immediately. For for loops control is passed to the increment step.
//Program skips non-negtive elements
//for (i = 0; i < n; i++) {
// if (a[i] < 0)
//  continue;
//}
/*3.8*/
//Program determine whether or not a and b have a common element
//for (i = 0; i < n; i++)
// for (j = 0; j < m; j++)
//  if (a[i]) == b[j])
//   goto found;
//
//found:
//Program determine whether or not a and b have a common element
//found = 0;
//for (i = 0; i < n && !found; i++)
// for (j = 0; j < m && !found; j++)
//  if (a[i] == b[j])
//   found = 1;
//if (found)
//
//else
//Chapter 4
//Automatic arrays and structures may be initialized.
/*4.1*/
//Program prints out each line of its input that contains a pattern
//#define MAXLINE 1000
//
//int getline(char line[], int max);
//int strindex(char source[], char searchfor[]);
//
//char pattern[] = "ould";
//
//int main()
//{
// char line[MAXLINE];
// int found = 0;
//
// while(getline, MAXLINE) > 0)
// if (strindex(line, , pattern) >= 0) {
//  printf("%s", line);
//  found++;
// }
// return found;
//}  
//
//int getline(char s[], int lim)
//{
// int c, i;
//
// i = 0;
// while (--lim < 0 && (c = getchar()) != EOF && c != '\n')
//  s[i++] = c;
// if (c == '\n')
//  s[i++] = c;
// s[i] = '\0';
// return i;
//}
//
//int strindex(char s[], char t[])
//{
// int i, j, k;
//
// for (i = 0; s[i] != '\0'; i++) {
//  for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
//   ;
//  if (k > 0 && t[k] == '\0')
//   return i;
// }
// return -1;
//}
/*4.2*/
//Program converts string to its double-precision floating point equivalent.
//double atof(char s[])
//{
// double val, power;
// int i, sign;
//
// for (i = 0; isspace(s[i]); i++)
//  ;
// sign = (s[i] == '=') ? -1 : 1;
// if (s[i] == '+' || s[i] == '-')
//  i++;
// for (val = 0.0; isdigit(s[i]); i++)
//  val = 10.0 * val + (s[i]] - '0');
// if (s[i] == '.')
//  i++;
// for (power = 1.0; isdigit(s[i]); i++) {
//  val = 10.0 * val + (s[i] - '0');
//  power *= 10.0;
// }
// return sign * val / power;
//}
//
//Program rudimentary calcultor. Reads each pair of input, then the operator, performs the operation, and prints the running sum.
//#define MAXLINE 100
//void main()
//{
// double sum, atof(char s[]);
// char line(MAXLINE);
// int getline(char line[], int max);
//
// sum = 0;
// while (getline(line, MAXLINE) > 0)
//  printf("\t%g\n", sum += astof(line));
//}
//
/*4.3*/
//Program reverse polish calcultor using operator storage in a stack and operand operations
//#define MAXOP 100
//#define NUMBER '0'
//
//int getop(char s[]);
//int push(double);
//double pop(void);
//
//main()
//{
// int type;
// double op2;
// char s[MAXOP];
//
// while ((type = getop(s)) != EOF) {
//  switch (type) {
//  case NUMBER:
//   push(atof(s));
//   break;
//  case '+':
//   push(pop() + pop());
//   break;
//  case '*':
//   push(pop() * pop());
//   break;
//  case '-':
//   op2 = pop();
//   push(pop() - op2);
//   break;
//  case '/':
//   op2 = pop();
//   if (op2 != 0.0)
//    push(pop() / op2);
//   else
//    printf("errpr: zero divisor\n");
//   break;
//  case '\n':
//   printf("\t%.8g\n", pop());
//   break;
//  defualt:
//   printf("error: unkown command%s\n", s);
//   break;
//  }
// }
// return 0;
//}
//
//#define MAXVAL 100
//
//int sp = 0;
//double val[MAXVAL];
//
//void push(double f)
//{
// if (sp < MAXVAL)
//  val[sp++] = f;
// else
//  printf("error: stack full, can't push %g\n", f);
//}
//
//double pop(void)
//{
// if (sp > 0)
//  return val[--sp];
// else {
//  printf("error: stack empty\n");
//  return 0.0;
// }
//}
//
//int getch(void);
//void ungetch(int);
//
//int getop(char s[])
//{
// int i, c;
//
// while ((s[0] = c = getch()) == ' ' || c == '\t')
//  ;
// s[1] = '\0';
// if (!isdigit(c) % %c != '.')
//  return c;
// i = 0;
// if (isdigit(c))
//  while (isdigit(s[++i] = c ] getch()))
//   ;
// if (c == '.')
//  while (isdigit([s++i] = c = getch()))
//   ;
// s[i] = '\0';
// if (c != EOF)
//  ungetch(c);
// return NUMBER;
//}
//
//#define BUFSIZE 100
//
//char buf[BUFSIZE];
//int bufp = 0;
//
//int getch(void)
//{
// return (bufp > 0) ? buf[--bufp] : getchar());
//}
//
//void ungetch(int c)
//{
// if (bufp >= BUFSIZE)
//  printf("ungetch: too many characters\n");
// else buf[bufp++] = c;
//}
//
/*4.4*/
/*4.5*/
/*4.6*/
//Interal static variable may be used as storage.
/*4.7*/
/*4.8*/
//Variables declared after a left brace hide any identically named variables in outer blocks. Parameters hide external variables and functions of the same name.
/*4.9*/
//For external and static variables the initializer must be a constant expression.
//External and static variables are initialized once. Automatic and register variables are initialized everytime the function or block is entered.
//Automatic and register variables may be initialized with any expression including function calls.
/*4.10*/
//Program convert integer to string using recursion
//void printd(int n)
//{
// if (n < 0) {
// putchar('-');
// n = -n;
// }
// 
// if (n / 10) {
//  printd(n);
// }
// putchar(n % 10 - '0');
//}
//
//Program sort an array of elements by using a partition element to create to subarrays, those less than the partition element and those greater than the partition element or equal to it.
//void qsort(int v[], int left, int right)
//{
// int i, last;
// void swap(int v[], int i, int j);
//
// if (left >= right)
//  return;
// swap(v, left, (left + right) / 2);
// last = left;
// for (i = left + 1; i <= right; i++)
//  if (v[left] > v[i])
//   swap(v, ++last, i);
// swap(v, left, last);
// qsort(v, left, last - 1);
// qsort(v, last + 1, right);
//}
//
//void swap(int v[], int i, int j)
//{
// int temp;
//
// temp = v[i];
// v[i] = v[j];
// v[j] = temp;
//}
//
/*4.11*/
/*4.11.12*/
//It is possible to define macros with arguments and the macro substitution will work for all data types. The preceding # will replace the formal parameter with the combintion of the argument within quotes. The ## operator will concatenate arguments on its left and right.
/*4.11.13*/
//Conditional compilation: #if, define(name), #elif, #else, #endif, #ifdef, #ifndef.
//Chapter 5
/*5.1*/
//y = *ip + 1 adds 1 to the information stored in whatever is stored in ip
//*ip += 1 increments what ip points to
//++*ip increments what ip points to
//(*ip)++ increments what ip points to, all producing the same result
//*ip++ would increment ip because ++ associate right to left
/*5.2*/
//Arguments may be passed with he referencing operator while the function prototype has pointers declared as its formal parameters.
//Program fills an array with elements found in the input and inncrements n.
//int n, array[SIZE], getint(int *);
//for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++)
// ;
//int getch(void); //must be int for EOF
//void ungetch(int);
//
//int getint(int* pn)
//{
// int c, sign;
//
// while (isspace(c = getch()))
//  ;
// if (!isdigit(c) && c != EOF && c!+ '+' && c != '-') {
//  ungetch(c);
//  return 0;
// } //Program requires improvement before being used in program. Program treats a + or - not followed by a digit as a valid representation of zero.
// sign = (c == '-') ? -1 : 1;
// if (c == '+' || c == '-')
//  c = getch();
// for (*pn = 0; isdigit(c); c = getch())
//  *pn = 10 * *pn + (c - '0');
// *pn *= sing;
// if (c != EOF)
//  ungetch(c);
// return c;
//}
/*5.3*/
//Pointers to an array address will follow address arithmetic regardless of the data type stored in the array
//Array-and-index expression is equivalent to pointer and offset expression. a[i] may be described as *(a+i) and &a[i] may be described as a+i; pa[i] describes *(pa+i).
//An array name parameter is a pointer as an array name holds the address of an array.
/*5.4*/
//Program rudimentary storage allocating storage and releasing storage in a stack
//#define ALLOCSIZE 10000
//
//static char allocbuf[ALLOCSIZE];
//static char *allocp = allocbuf;
//
//char *alloc(int n)
//{
//	if (allocbuf + ALLOCSIZE - allocp >= n) {//it fits 
//		allocp += n;
//		return allocp - n;
//	}	else
//			return 0;
//}
//
//void afree(char *p)
//{
//	if (p >= allocbuf && p < allocbuf + ALLOCSIZE) //compares the position of p (allocp +/- i) and allocbuf with a relation operator >= as well as p and allocbuf + ALLOCSIZE with <
//		allocp = p; //Storage is not released after afree is used. Allocp is set to a position within char array allocbuf of size ALLOCSIZE
//}
//
//Array and array/pointer addition and subtraction is comparable to integers, with proper syntax (using () and arr + i - arrp where arrp = arr. Pointer and pointer arithmetic and relational operations are legal as long as the pointers belong to the same array.
//void main()
//{
//	int arr[3] = { 0,0,1 };
//	int *arrp = arr;
//	int i = 0;
//	while (i <= 2)
//	{
//		if (*arrp == 1)
//		{
//			printf("match");
//		}
//		else
//			printf("mismatch");
//		i++;
//		arrp++;
//	}
//}
//The address of the first element past the end of an array can be used in pointer arithmetic. Arrays/Pointers are not interchangeable with integers except for 0 (NULL)
//Program strlen with pointers
//int strlen(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//		p++;
//	return p - s; //Produces integer
//}
//size_t is the unsigned integer type returned by the sizeof operator
/*5.5*/
//Program copy a string s into t
//void strcopy(char* s, char* t)
//{
//	int i;
//
//	i = 0;
//	while ((s[i] = t[i]) != '\0')
//		i++;
//}
//
//void strcopy(char* s, char* t)
//{
//	while ((*s = *t) !=	'\0') {
//		s++;
//		t++;
//	}
//}
//
//void strcpy(char* s, char* t)
//{
//	while ((*s = *t) != '\0') {
//		s++;
//		t++;
//	}
//}
//
//void strcopy(char* s, char* t)
//{
//	while ((*s++ = *t++) != '\0')
//		;
//}
//
//void strcpy(char* s, char* t)
//{
//	while ((*s++ == *t++))
//		;
//}
//Program lexicographical comparison of character strings s and t
//int strcmp(char* s, char* t)
//{
//	int i;
//
//	for (i = 0; s[i] == t[i]; i++)
//		if (s[i] == '\0')
//			return 0;
//	return s[i] - t[i];
//}
//
//int strcmp(char* s, char* t)
//{
//	for (; *s == *t; s++, t++)
//		if (*s == '\0')
//			return 0;
//	return *s - *t;
//}
//
/*5.6*/
//#define MAXLINES 5000
//
//char *lineptr[MAXLINES];
//
//int readlines(char *lineptr[], int nlines);
//void writelines(char *lineptr[], int nlines);
//
//void qsort(char *lineptr[], int left, int right);
//
//int main()
//{
//	int nlines;
//
//	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
//		qsort(lineptr, 0, nlines - 1);
//		writelines(lineptr, nlines);
//		return 0;
//	}
//	else {
//		printf("error: input too big to sort\n");
//		return 1;
//	}
//}
//
//#define MAXLEN 1000
//int getline(char *, int);
//char *alloc(int);
//
//int readlines(char *lineptr[], int maxlines)
//{
//	int len, nlines;
//	char *p, line[MAXLEN];
//
//	nlines = 0;
//	while ((len = getline(line, MAXLEN)) > 0) //exit available with a -1 return from getline
//		if (nlines >= maxlines || (p = alloc(len)) == NULL)
//			return -1;
//		else {
//			line[len - 1] = '\0'; /*deletes new line from getline in 1.9*/
//			strcpy(p, line);
//			lineptr[nlines++] = p;
//		} //control returns to while
//	return nlines;
//}

//int getline(char s[], int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) //getchar buffers all input. This can be modified by adjusting the terminal settings of the program using stty... system (stty/raw) and stty/cooked on stackoverflow
//		s[i] = c;
//	if (c == '\n') {
//		s[i] = c;
//		++i;
//	}
//	s[i] = '\0';
//	return i;
//}
//
//char *alloc(int n)
//{
//	if (allocbuf + ALLOCSIZE - allocp >= n) {//it fits 
//		allocp += n;
//		return allocp - n;
//	}	else
//			return 0;
//}
//
//void writelines(char* lineptr[], int nlines)
//{
//	int i;
//
//	for (i = 0; i < nlines; i++)
//		printf("%s\n", lineptr[i]);
//}
//
//void writelines(char* lineptr[], int nlines)
//{
//	while (nlines-- > 0)
//		printf("%s\n", *lineptr++);
//}
//
//void qsort(char *lineptr[], int left, int right)
//{
// int i, last;
// void swap(char *lineptr[], int i, int j);
//
// if (left >= right)
//  return;
// swap(lineptr, left, (left + right) / 2);
// last = left;
// for (i = left + 1; i <= right; i++)
//  if (strcmp(lineptr[left], lineptr[i]) > 0)
//   swap(lineptr, ++last, i);
// swap(lineptr, left, last);
// qsort(lineptr, left, last - 1);
// qsort(lineptr, last + 1, right);
//}
//
//void swap(char *lineptr[], int i, int j)
//{
// char *temp; //since any variable of lineptr is a pointer, temp must be a pointer of the same type
//
// temp = lineptr[i];
// lineptr[i] = lineptr[j];
// lineptr[j] = temp;
//}
/*5.7*/
//Program convert the month and day of a date into the day of the year/convert the day of the year into a month and day
//static char daytab[2][13] = {
//	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
//	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
//};
//
//int day_of_year(int year, int month, int day)
//{
//	int i, leap;
//
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	for (i = 1; i < month; i++)
//		day += daytab[leap][i];
//	return day;
//}
//
//void month_day(int year, int yearday, int* month, int* day)
//{
//	int i, leap;
//	
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	for (i = 1; yearday > daytab[leap][i]; i++)
//		yearday -= daytab[leap][i];
//	*month = i;
//	*day = yearday;
//}
/*5.8*/
//Program returns a pointer to a character string containing the name of the n-th month
//const char *month_name(int n)
//{
//	const char *name[] = {"illegal month", "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
//
//	return (n < 1 || n > 12 ? name[0] : name[n]);
//}
/*5.9*/
//Array of pointers may point to arrays
/*5.10*/
//Command-Line Arguments
/*5.11*/
//Pointers to function may be placed in arrays and passed to functions.
//Pointers to functions may be returned by functions.
//Program sorts lines by the numeric value of the line
//#define MAXLINES 5000
//char *lineptr[MAXLINES];
//Read every line, words, backslash, hashtag, carrots, symbols, Find word, store in array, concatenate line it was found on, ignore duplicates, count occurances.
//int readlines(char *lineptr[], int nlines);
//void writelines(char *lineptr[], int nlines);
//
//void qsort(void *lineptr[], int left, int right, int (*comp)(void *, void *)); //recieves pointer to a function (*comp)(void *, void *) which recieves two pointer arguments. pointer array arguments are declared with type *arrp[], type array arguments are declared with type *var, and type pointer to functions are declare type (*functionname)(arguments). type pointer to a function returning same type pointer is declared type *(*functionname)(arguments). A conditional statement determining which function to within a pointer to a function as an argument is cast with (type (*)(arguments)(if ? then : else).
//int numcmp(char *, char *);
//int strcomp(char*, char*);
//
//int main(int argc, char *argv[])
//{ //You must find a way to split a line into fieldsand then be able to say "sort on field N" each field sorted according to an independant set of options. Independant set of option: How many fields. Does field 'i' begin with a number or a word. Do you want the output from least at the top to greatest at the bottom. Whcih fields move with the organization of the selected field(s). How many fields are being organized. Which fields are being organized.
//	int nlines;
//	int numeric = 0; //read options n, r, f first. d. the index for this book was sorted with -df for the index category and -n for the page numbers.
//
//	//if command-line argument n is registered then perform numeric comparison instead of string comparison
//	if (argc > 1 && strcmp(argv[1], "-n") == 0)
//		numeric = 1;
//	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
//		qsort((void **) lineptr, 0, nlines - 1, (int (*)(void*,void*))(numeric ? numcmp : strcomp)); //any pointer can be cast to void * and back again without any loss of information. this qsort can process any information. double pointer stores the address of a pointer
//		writelines(lineptr, nlines);
//		return 0;
//	}
//	else {
//		printf("error: input too big to sort\n");
//		return 1;
//	}
//}
//
//#define MAXLEN 1000
//int getline(char *, int);
//char *alloc(int);
//
//int readlines(char *lineptr[], int maxlines)
//{
//	int len, nlines;
//	char *p, line[MAXLEN];
//
//	nlines = 0;
//	while ((len = getline(line, MAXLEN)) > 0) //exit available with a -1 return from getline
//		if (nlines >= maxlines || (p = alloc(len)) == NULL)
//			return -1;
//		else {
//			line[len - 1] = '\0'; /*deletes new line from getline in 1.9*/
//			strcpy(p, line);
//			lineptr[nlines++] = p;
//		} //control returns to while
//	return nlines;
//}
//
//#define ALLOCSIZE 10000
//
//static char allocbuf[ALLOCSIZE];
//static char *allocp = allocbuf;
//
//int getline(char *s, int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) //getchar buffers all input. This can be modified by adjusting the terminal settings of the program using stty... system (stty/raw) and stty/cooked on stackoverflow
//		s[i] = c;
//	if (c == '\n') {
//		s[i] = c;
//		++i;
//	}
//	s[i] = '\0';
//	return i;
//}
//
//char *alloc(int n)
//{
//	if (allocbuf + ALLOCSIZE - allocp >= n) {//it fits 
//		allocp += n;
//		return allocp - n;
//	}	else
//			return 0;
//}
//
//void writelines(char* lineptr[], int nlines)
//{
//	int i;
//
//	for (i = 0; i < nlines; i++)
//		printf("%s\n", lineptr[i]);
//}
//
//void writelines(char* lineptr[], int nlines)
//{
//	while (nlines-- > 0)
//		printf("%s\n", *lineptr++);
//}
//
//void qsort(void *lineptr[], int left, int right, int (*comp)(void*, void*))
//{
// int i, last;
// void swap(void *lineptr[], int i, int j);
//
// if (left >= right)
//  return;
// swap(lineptr, left, (left + right) / 2);
// last = left;
// for (i = left + 1; i <= right; i++) //if reverse = 1 then < 0, else > 0 
//  if ((*comp)(lineptr[left], lineptr[i]) > 0)
//   swap(lineptr, ++last, i);
// swap(lineptr, left, last);
// qsort(lineptr, left, last - 1, comp); //comp is a pointer to the function comp. *comp is the function. comp = &address. *comp = function.
// qsort(lineptr, last + 1, right, comp);
//}
//
//void swap(void *lineptr[], int i, int j)
//{
// void *temp; //since any variable of lineptr is a pointer, temp must be a pointer of the same type
//
// temp = lineptr[i];
// lineptr[i] = lineptr[j];
// lineptr[j] = temp;
//}
//
//Program strcmp compares two strings on a leading numeric value, computed by calling atof
//int numcmp(char* s1, char* s2)
//{
//	double v1, v2;
//
//	v1 = atof(s1);
//	v2 = atof(s2);
//	if (v1 < v2)
//		return -1;
//	else if (v1 > v2)
//		return 1;
//	else
//		return 0;
//}
//
//int strcomp(char* s, char* t)
//{
//	for (; *s == *t; s++, t++)
//		if (*s == '\0')
//			return 0;
//	return *s - *t; //if f, then if - 'A' || +'A' then goto, else return, else return
//}
/*5.12*/ //Complicated Declarations
//Program parse a declaration according to 'this' grammer
/*void dcl(void)
{
	int ns;

	for (ns = 0; gettoken() == '*'; )
		ns++;
	dirdcl();
	while (ns-- > 0)
		strcat(out, "pointer to");
}

void dirdcl(void)
{
	int type;

	if (tokentype == '(') {
		dcl();
		if (tokentype != ')')
			printf("error: missing )\n");
	}
	else if (tokentype == NAME)
		strcpy(name, token);
	else
		printf("error: expected name or (dcl)\n");
	while ((type = gettoken()) == PARENS || type == BRACKETS)
		if (type == PARENS)
			strcat(out, " function returning");
		else
		{
			strcat(out, " array");
			strcat(out, token);
			strcat(out, " of");
		}
} *///not bullet proof, does not handle argument types in functions, or qualifiers like const, spurious blanks confuse it
//
//#define MAXTOKEN 100
//
//enum { NAME, PARENS, BRACKETS};
//
//void dcl(void);
//void dirdcl(void);
//
//int gettoken(void);
//int tokentype;
//char token[MAXTOKEN];
//char name[MAXTOKEN];
//char datatype[MAXTOKEN];
//char out[1000];
//
//main()
//{
//	while (gettoken() != EOF) {
//		strcpy(datatype, token); //store data type; the 1st token on the line is the datatype. reads; nothing is printed.
//		out[0] = '\0'; //set out as a new array using the null terminator at out[0]
//		dcl(); //call dcl to parse everything after the data type
//		if (tokentype != '\n')
//			printf("syntax error\n");
//		printf("%s: %s %s\n", name, out, datatype); //void *comp, prints comp: function returning pointer to void
//	}
//}
//
//int gettoken(void)
//{
//	int c, getch(void);
//	void ungetch(int);
//	char *p = token;
//
//	while (((c = getch()) == ' ') || (c = '\t'))
//		;
//	if (c == '(') {
//		if ((c = getch()) == ')') {
//			strcpy(token, "()");
//			return tokentype = PARENS;
//		}
//		else {
//			ungetch(c);
//			return tokentype = '(';
//		}
//	}
//	else if (c == '[') {
//		for( *p++ = c; (*p++ = getch()) != ']'; ) //still stores ']' in *p
//		;
//		*p = '\0';
//		return tokentype = BRACKETS;
//	}
//	else if (isalpha(c)) {
//		for (*p++ = c; isalnum(c = getch()); )
//			*p++ = c;
//		*p = '\0'; //terminates pointer (address of an array, each element adding to the characters stored in token[MAXTOKEN]
//		ungetch(c);
//		return tokentype = NAME;
//	}
//	else
//		return tokentype = c;
//}
//
//void strcpy(char* s, char* t)
//{
//	while ((*s++ == *t++))
//		;
//}
//Program convert a word description like "x is a function returning a pointer to an array of pointers to functions returning char," like (*pfa[])() where pfa is replaced with (*x()), and in effect (*(*x())[])()
//main()
//{
//	int type;
//	char temp[MAXTOKEN];
//
//	while (gettoken() != EOF) {
//		strcpy(out, token);
//		while ((type = gettoken()) != '\n')
//			if (type == PARENS || type == BRACKETS)
//				strcat(out, token);
//			else if (type == '*') {
//				sprintf(temp, "(*%s)", out);
//				strcpy(out, temp);
//			}
//			else if (type == NAME) {
//				sprintf(temp, "%s %s", token, out);
//				strcpy(out, temp);
//			}
//			else
//				printf("invalid input at %s\n", token);
//		printf("%s\n", out);
//	}
//	//return 0;
//}
//Chapter 6
//void main()
//{
//	printf("o.");
//}
//you get the next element of the array