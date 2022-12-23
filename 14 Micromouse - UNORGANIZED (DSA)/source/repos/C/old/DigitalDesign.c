//#include <stdio.h>
//#include <limits.h>
//#include <float.h>
//#include <string.h>
//#include <ctype.h>
//#include <math.h>
//#include <iostream>
//#include <stdarg.h>
////
////int atoi(int []);
////int pow(int, int);
////
////void main()
////{
////	int decimal_number_array[7];
////	int decimal_number;
////	int bits[20];
////	int c;
////	int n = 0;
////	int i = 0, j = 0;
////
////
////	while ((c = getchar()) != '\n')
////	{
////		decimal_number_array[i] = c;
////		i++;
////	}
////	decimal_number_array[i] = '\0';
////
////	decimal_number = atoi(decimal_number_array);
////	printf("%d = ", decimal_number);
////	
////	for (n = 20; n >= 0; n--)
////	{
////		if ((decimal_number - pow(2, n)) < 0)
////			;
////		else if ((decimal_number - pow(2, n)) > 0)
////		{
////			decimal_number -= pow(2, n);
////			printf("2^%d +", n);
////		}
////		else if ((decimal_number -= pow(2, n)) == 0)
////		{
////			printf("2^%d\n", n);
////			break;
////		}
////	}
////}
////
////
////int pow(int base, int n)
////{
////	int i, p;
////	
////	p = 1;
////	for (i = 1; i <= n; ++i)
////		p = p * base;
////	return p;
////}
////
////
////int atoi(int decimal_number_array[])
////{
////	int a = 0;
////	int i = 0;
////
////	while (decimal_number_array[i] != '\0')
////	{
////		a = 10 * a + (decimal_number_array[i] - '0');
////		i++;
////	}
////
////	return a;
////}
//#define MAXLINES 1000
//#define MAXLEN 1000
//#define ALLOCSIZE 10000
//int readlines(char *lineptr[], int nlines);
//void writelines(char *lineptr[], int nlines);
//int getline(char *, int);
//char *alloc(int);
//void qsort(char *lineptr[], int left, int right);
//void swap(char* lineptr[], int i, int j);
//static char allocbuf[ALLOCSIZE];
//static char *allocp = allocbuf;
//char *lineptr[MAXLINES];
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
//void writelines(char* lineptr[], int nlines)
//{
//	while (nlines-- > 0)
//		printf("%s\n", *lineptr++);
//}
//
//int getline(char *s, int lim)
//{
//	int c, i;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) //getchar buffers all input. this can be modified by adjusting the terminal settings of the program using stty... system (stty/raw) and stty/cooked on stackoverflow
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
//void swap(char *lineptr[], int i, int j)
//{
// char *temp; //since any variable of lineptr is a pointer, temp must be a pointer of the same type
//
// temp = lineptr[i];
// lineptr[i] = lineptr[j];
// lineptr[j] = temp;
//}