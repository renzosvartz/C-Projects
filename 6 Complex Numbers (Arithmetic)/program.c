//Renzo Alejo Moron-Svartz
//Project 6
//Project 6 allows the user to use a menu-driven program to handle complex numbers

/*cn stands for complex number*/
/*pn stands for polar number*/

/*Function includes and defines*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "complexNumberHeader.h"

#define PI 3.14
#define CONV (180 / PI)

//main function allocates memory and makes calls to the rest of the program, allowing the user to choose an option from a menu
int main()
{
	/*Element number*/
	int n = 0;

	/*Menu decision*/
	int option = 0;

	/*Complex number structures*/
	complexNumber *cn = (complexNumber *) malloc(2 * sizeof(complexNumber));

	/*Welcome*/
	puts("");
	fprintf(stdout, "Welcome to the complex number calculator.\n");\
	puts("");

	/*Get complex number*/
	while(n < 2)
	{
		getComplexNumber(cn+n, n + 1);
		n++;
	}

	/*Prompt user*/
	displayOptions();
	
	/*Menu-driven user functions*/
	while (option != 8)
	{
		/*Gather user choice*/
	        option = getOption();

		/*Feedback*/
		fprintf(stdout, "? %d\n\n", option);

		switch (option)
		{
			case 1:displayComplex(cn);
				break;
			case 2:polarComplex(cn);
				break;
			case 3:conjugateComplex(cn);
				break;
			case 4:addComplex(cn);
				break; 
			case 5:subComplex(cn);
				break;
			case 6:multiplyComplex(cn);
				break;
			case 7:divideComplex(cn);
				break;
			case 8: fprintf(stdout, "Exitted program.\n");
				exit(0);
				break;
			default:fprintf(stdout, "Error: Option invalid. Try again.\n");
				break;
		}
		/*Error-handling*/
		clearLine();

		/*Prompt user*/
		displayOptions();		
	}
		
}//end main

//conjugateComplex prints the conjugate of complex number arguments
void conjugateComplex(complexNumber cn[])
{
	int i = 0; //counter

	/*Print*/
       	while (i < 2)
        {
                fprintf(stdout, "%.3lf %c %.3lfi\n", cn[i].real, (cn[i].imag == 0 ? '+' : (cn[i].imag < 0 ? '+' : '-')), (cn[i].imag != 0 ? (cn[i].imag < 0 ? cn[i].imag * -1 : cn[i].imag) : 0));
                i++;
        }	
	puts("");
}//end conjugateComplex

//divideComplex calculates the quotient of two complex numbers and prints the result
void divideComplex(complexNumber cn[])
{
	/*Calculate*/
        double real = ((cn[0].real * cn[1].real) + (cn[0].imag * cn[1].imag)) / ((cn[1].real * cn[1].real) + (cn[1].imag * cn[1].imag));
        double imag = ((cn[0].real * cn[1].imag * -1) + (cn[0].imag * cn[1].real)) / ((cn[1].real * cn[1].real) + (cn[1].imag * cn[1].imag));
        
	/*Print*/
	fprintf(stdout, "%.3lf %c %.3lfi\n", real, (imag == 0 ? '+' : (imag < 0 ? '-' : '+')), (imag != 0 ? (imag < 0 ? imag * -1 : imag) : 0));
	puts("");
}//end divideComplex

//multiplyComplex calculates the product of two complex numbers and prints the result
void multiplyComplex(complexNumber cn[])
{
	/*Calculate*/
        double real = cn[0].real * cn[1].real;
        double imag = cn[0].imag * cn[1].imag;
	
	/*Print*/
	fprintf(stdout, "%.3lf %c %.3lfi\n", real, (imag == 0 ? '+' : (imag < 0 ? '-' : '+')), (imag != 0 ? (imag < 0 ? imag * -1 : imag) : 0));
	puts("");
}//end multiplyComplex


//subComplex calculates the subtraction of two complex numbers and prints the result
void subComplex(complexNumber cn[])
{
	/*Calculate*/
        double real = cn[0].real - cn[1].real;
        double imag = cn[0].imag - cn[1].imag;
	
	/*Print*/
	fprintf(stdout, "%.3lf %c %.3lfi\n", real, (imag == 0 ? '+' : (imag < 0 ? '-' : '+')), (imag != 0 ? (imag < 0 ? imag * -1 : imag) : 0));
	puts("");
}//end subComplex


//addComplex calculates the addition of two complex numbers and prints the result
void addComplex(complexNumber cn[])
{
	/*Calculate*/
	double real = cn[0].real + cn[1].real;
	double imag = cn[0].imag + cn[1].imag;
	
	/*Print*/
	fprintf(stdout, "%.3lf %c %.3lfi\n", real, (imag == 0 ? '+' : (imag < 0 ? '-' : '+')), (imag != 0 ? (imag < 0 ? imag * -1 : imag) : 0));
	puts("");
}//end addComplex

//rectToPolar converts complex number arguments to polar numbers and returns the polar number
void rectToPolar(complexNumber cn, polarNumber *pn)
{
	/*Calculate*/
	pn->radius = sqrt(pow(cn.real, 2) + pow(cn.imag, 2));
	pn->theta = (cn.real == 0 ? 
			(cn.imag == 0 ? 0 : (cn.imag < 0 ? 270 : 90)) 
			: (cn.real < 0 ? (atan(cn.imag/cn.real)) * CONV + 180 : (atan(cn.imag/cn.real))* CONV)); 
}//end rectToPolar

//displayComplex prints out complex number arguments
void displayComplex(complexNumber cn[])
{
	int i = 0; //counter

	/*Print*/
	while (i < 2)
	{
		fprintf(stdout, "%.3lf %c %.3lfi\n", cn[i].real, (cn[i].imag == 0 ? '+' : (cn[i].imag < 0 ? '-' : '+')), (cn[i].imag != 0 ? (cn[i].imag < 0 ? cn[i].imag * -1 : cn[i].imag) : 0));
		i++;
	}
	puts(""); 
}//end displayComplex

//polarComplex prints out complex numbers converted to polar form
void polarComplex(complexNumber cn[])
{
        int i = 0; //counter
	polarNumber pn[2]; //local memory allocation

	/*Convert*/
	while (i < 2)
	{
		rectToPolar(cn[i], pn+i);
		i++;
	}

	i = 0;

	/*Print*/
        while (i < 2)
        {
                fprintf(stdout, "%.3lf units %.3lf degree(s)\n", pn[i].radius, pn[i].theta);
		i++; 
       	}
	puts("");
}//end polarComplex

//inputErrorChecking checks input for errors and prints feedback
void inputErrorChecking()
{
	int c; //trash

	/*Error checking*/
        while (((c = getc(stdin)) == ' ' || c == '\t' || c == '\n' || isalpha(c) || ispunct(c)) &&  c != '-')
        {
              	if (isalpha(c))
		{
			fprintf(stderr, "Error: Found text in the input. Try again.\n");
		}
		else if (ispunct(c))
		{
			fprintf(stderr, "Error: Found symbols in the input. Try again.\n");
		}
        }
        ungetc(c, stdin); //returns character to input buffer that may be information the program is searching for

}//end inputErrorChecking

//getOption gathers the users option choice and checks for errors
int getOption(void)
{
	int option = 0;

	/*Recoverable data collection*/
	while (option < 1 || option > 8)
	{
		/*Error-checking*/
		inputErrorChecking();
		
		/*Collect choice*/
		fscanf(stdin, "%d", &option);
		
		/*Error-checking*/
		if (option < 1 || option >8)
		{
			fprintf(stderr, "Error: Invalid option. Try again.\n\n");
		}
	}
	return option;
}//end getOptions

//displayOptions prints out menu
void displayOptions(void)
{
        fprintf(stdout, "Type 1-8 to select an option.\n");
        fprintf(stdout, "1. Display two complex numbers\n");
        fprintf(stdout, "2. Show the polar format of each complex number\n");
        fprintf(stdout, "3. Show the conjugate of each complex number\n");
        fprintf(stdout, "4. Calculate and display the addition of two complex numbers\n");
        fprintf(stdout, "5. Calculate and display the subtraction of two complex numbers\n");
        fprintf(stdout, "6. Calculate and display the multiplication of two complex numbers\n");
        fprintf(stdout, "7. Calculate and display the division of two complex numbers\n");
        fprintf(stdout, "8. Exit the program\n");
}//end displayOptions


//getComplexNumber collects complex numbers and check for errors
void getComplexNumber(complexNumber *cn, int n)
{
	int flag = 0;
	int c; //trash

	/*Real number*/
	while (flag != 1)
        {
                /*Prompt user*/
                fprintf(stdout, "Enter real part and imaginary part of complex number C%d: \n", n);

                /*Error-checking*/
		inputErrorChecking();
		
                if (isdigit((c = getc(stdin))) || c == '-') //
                {
                        ungetc(c, stdin);
		
                        /*Collect real number*/
                        fscanf(stdin, "%lf", &(cn->real));
                        
			flag = 1;
			/*Print feedback*/
			fprintf(stdout, "Complex Number %d real part: %.3lf\n", n, cn->real);
                }
                else
                {
			/*Print feedback*/
                        fprintf(stderr, "Error: Invalid real number. Try again.\n\n");
                }
        }
	/*Imaginary number*/
	while (flag != 0)
        {
                /*Error-checking*/
		inputErrorChecking();

                if (isdigit((c = getc(stdin))) || c == '-') //
                {
                        ungetc(c, stdin);

                        /*Collect imaginary number*/
                        fscanf(stdin, "%lf", &(cn->imag));

                        flag = 0;
			/*Print feedback*/
			fprintf(stdout, "Complex Number %d imaginary part: %.3lf\n\n", n, cn->imag);
                }
                else
                {
			/*Print feedback*/
                        fprintf(stderr, "Error: Invalid imaginary number. Try again.\n");
                }
        }
	clearLine();
}//end getComplexNumber

//clearLine clears lines up until newline or end-of-file to prevent errors
void clearLine()
{
	int c; //trash
	while ((c = getc(stdin)) != '\n' && c != EOF)
		;
}//end clearLine
