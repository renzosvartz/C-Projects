//Renzo Alejo Moron-Svartz
//
//Project 3 Testing of Vector Calculator
//
//Project 3 completes unit testing of the
//vector calculator made for project 2.

//program includes and symbolic definitions
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAXARRAYSIZE 10

//function prototypes
void fillVectors(int, double VectorX[], double VectorY[]);
void displayVectors(int, double VectorX[], double VectorY[]);
void displaySumVectorElements(int, double VectorX[], double VectorY[]);
void displayLengthOfVectors(int, double VectorX[], double VectorY[]);
void displayNegate(int, double VectorX[], double VectorY[]);
void displaySum(int, double VectorX[], double VectorY[]);
void displaySub(int, double VectorX[], double VectorY[]);
void displayInnerProduct(int, double VectorX[], double VectorY[]);

//global variable declaration
double X[10]; //Vector X
double Y[10]; //Vector Y

//main function informs the user of the functionality of this program, obtains the dimensions of the vectors, and makes function calls
//to fillVectors, displayVectors, displaySumVectorElements,displayLengthofVector, displayNegate, displaySum, displaySub, and displayInnerProduct
int main(void)
{
	//variable declarations and initializations
	int length = 0; //length of X and Y
	int option = 0; //variable for user's option choice
	int rv = 0; //return value
	int trash = 0;
	
	//introduce the programs function
	puts("----------------------------------------------------------------------");
	puts("Please enter one dimension for two vectors X and Y.");
	puts("The vector length must be at least 1 and at most 10.");
	puts("Any non-numerical input will be ignored by the function's");
	puts("input evaluation. Numbers outside of the bounds");
	puts("1 and 10 will produce an error message and exit");
	puts("the program.");
	puts("This program initializes the length used in reference with vectors X and Y as 0.");
	puts("-----------------------------------------------------------------------");
	
	//obtain dimensions including error checking
	puts("Please enter the length of vectors X and Y: ");
	
	rv = scanf("%d", &length);
	
	if (length == 0 && rv == 1)
	{
		fprintf(stderr, "You entered 0. The vectors may not have length 0.\n");
		exit(1);
	}
	else if (length < 0 && rv == 1)
	{
		fprintf(stderr, "You entered a negative number. The vectors may not have a negative length.\n");
		exit(1);
	}
	else if (length > 10 && rv == 1)
	{
		fprintf(stderr, "You entered a number greater than 10. The vectors may not have a length greater than 10.\n");
		exit(1);
	}
	else if (rv == 1)
	{
		//inform user the dimensions of their matrix
		printf("You entered length: %d\n", length);
	}
	else
	{
		fprintf(stderr, "Improper use of program. Program exit.\n");
		exit(1);
	}//end input evaluation and error checking
	
	//function call to fill vectors with integers
	fillVectors(length, X, Y);
	
	//prompt user with options
	do
	 {	
		option = 8;
	
		puts("");
		puts("Menu: Select an option using numbers 1-8. Non-numerical input will be ignored and you will have another chance to input an integer");
                puts("1. Display vectors X and Y");
                puts("2. Calculate and print the sum of all of the elements of vectors X and Y");
				puts("3. Display length of vectors");
                puts("4. Display the negation of vectors X and Y");
                puts("5. Display the addition of vectors X and Y");
                puts("6. Display the subtraction of vectors X and Y");
                puts("7. Calculuate the inner-product of vectors X and Y");
                puts("8. Exit the program");
		
		rv = scanf("%d", &option);
		
		if (rv == 0)
		{
			puts("Error: Input was not between 1 and 8");
		}	
		else
		{	
			if (option != 8)
			{
				printf("You Entered %d.\n", option);
			}
			switch (option)
			{
				case 1: displayVectors(length, X, Y);
						break;
				case 2: displaySumVectorElements(length, X, Y);
						break;
				case 3:	displayLengthOfVectors(length, X, Y);
						break;
				case 4: displayNegate(length, X, Y);
						break;
				case 5: displaySum(length, X, Y);
						break;
				case 6: displaySub(length, X, Y);
						break;
				case 7: displayInnerProduct(length, X, Y);
						break;
				case 8:	puts("Program exited.");
						exit(1);
						break;
				default: printf("You entered %d. Invalid number. Try again\n.", option);
						break;
			}
		}
	}
	while(option != 8);
}//end main

void displayInnerProduct(int elements, double VectorX[], double VectorY[])
{
        int counter = 0;
	double sum = 0;

        printf("%s", "The inner product of X and Y is  ");

        while (counter < elements)
        {
                sum += VectorX[counter] *  VectorY[counter];
                counter++;
        }//calculate the inner product of X and Y

	printf("%.2lf\n", sum);
}//end displayInnerProduct


void displaySub(int elements, double VectorX[], double VectorY[])
{
        int counter = 0;

        printf("%s", "X - Y: ");

        while (counter < elements)
        {
                printf("%.2lf%s", VectorX[counter] - VectorY[counter], (counter < elements - 1 ? ", " : ""));
                counter++;
        }//print X-Y
	puts("");
}//end displaySub


void displaySum(int elements, double VectorX[], double VectorY[])
{
        int counter = 0;

        printf("%s", "X + Y: ");

        while (counter < elements)
        {
                printf("%.2lf%s", VectorX[counter] + VectorY[counter], (counter < elements - 1 ? ", ": ""));
		counter++;
        }//print X+Y
	puts("");	
}//end displaySum


void displayNegate(int elements, double VectorX[], double VectorY[])
{
        int counter = 0;

        printf("%s", "-X: ");

        while (counter < elements)
        {	
		if (VectorX[counter] == 0)
		{
			printf("%.2lf%s", VectorX[counter++], (counter < elements - 1 ? ", " : ""));
		}
		else
		{
                	printf("%.2lf%s", -1.0 * VectorX[counter++], (counter < elements - 1 ? ", " : ""));
		}
        }//print -X

        puts("");

        counter = 0;

        printf("%s", "-Y: ");

        while (counter < elements)
        {
		if (VectorY[counter] == 0)
		{
			printf("%.2lf%s", VectorY[counter++], (counter < elements - 1 ? ", " : ""));
		}	
		else
		{
               		printf("%.2lf%s", -1.0 * VectorY[counter++], (counter < elements - 1 ? ", " : ""));
		}
        }//print -Y
	puts("");
}//end displayNegate


void displayLengthOfVectors(int elements, double VectorX[], double VectorY[])
{
        double length = 0;
	double sum = 0;
	int counter = 0;

        printf("%s", "Length of X: ");

        while (counter < elements)
        {
                sum += pow(VectorX[counter++], 2);
        }//calculate the sum of X elements squared
	
	length = sqrt(sum); //compute the length of X

        printf("%.2lf\n", length);

        sum = 0;

        counter = 0;

        printf("%s", "Length of Y: ");

        while (counter < elements)
        {
                sum += pow(VectorY[counter++], 2);
        }//calculate the sum of Y elements squared

        length = sqrt(sum); //compute the length of Y

        printf("%.2lf\n", length);
}//end displayLengthOfVectors


void displaySumVectorElements(int elements, double VectorX[], double VectorY[])
{
	double sum = 0;
	int counter = 0;
	
	printf("%s", "Sum of X: ");

        while (counter < elements)
        {
                sum += VectorX[counter++];
        }//calculate the sum of X
	
	printf("%.2lf\n", sum);
	
	sum = 0;

        counter = 0;

        printf("%s", "Sum of Y: ");

        while (counter < elements)
        {
                sum += VectorY[counter++];
        }//calculate the sum of Y

        printf("%.2lf\n", sum);
}//end displaySumVectorElements

void displayVectors(int elements, double VectorX[], double VectorY[])
{
	int counter = 0;
	
	printf("%s", "X: ");

	while (counter < elements)
	{
		printf("%.2lf%s", VectorX[counter++], (counter < elements - 1 ? ", " : ""));
	}//print X

	puts("");

	counter = 0;

	printf("%s", "Y: ");

        while (counter < elements)
        {
             printf("%.2lf%s", VectorY[counter++], (counter < elements - 1 ? ", " : ""));
        }//print Y
	puts("");
}//end displayVectors


//This function fills vector X and vector Y, passed to it with the length, with integers, and includes error checking
void fillVectors(int elements, double VectorX[], double VectorY[])
{
	int elecounter = 0;
	int trash = 0;
	int rv = 0;//return value
	const int limit = ((pow(2147483647, (1.0 / 2))) / elements);//maximum integer for every matrix argument


	//inform the user of appropriate operation
	puts("----------------------------------------------------------------------");
	puts("Enter the integers of Vector X, element by element, beginning at the first element");
	puts("The first number detected by the program's input evaluation will be");
	printf("evaluated to determine if it is less than %d because numbers greater\n", limit);
	printf("than or equal to %d may exceed the storage capability of integers on this machine.\n", limit);
	puts("Non-numerical input will be ignored by the program's input evaulation.");
	puts("You will always be given another opportunity to enter an integer to fill your matrix");
	puts("If the program reaches the end-of-file, the program will produce an error");
	puts("message and terminate.");
	puts("----------------------------------------------------------------------");
	
	for (elecounter = 0; elecounter < elements; elecounter++)
	{
		do
		{
			rv = 0;//test condition

			printf("Please enter integer Vector X[%d]:\n", elecounter);

			rv = scanf("%lf", &VectorX[elecounter]); //ignors non-numerical input
			if (VectorX[elecounter] == -0)
			{
				VectorX[elecounter] = 0;
			}	

			while ((trash = getchar()) != '\n')
			{
				if (trash == EOF)
				{
					fprintf(stderr, "End-of-file reached.\n");
					exit(1);
				}
			}//end input evaluation and error checking
		
			//feedback
			if (rv == 1)
			{
				printf("Vector X[%d]: %.2lf\n", elecounter, VectorX[elecounter]);
			}
			else if (rv == 0)
			{
				fprintf(stderr, "Error: No number detected by this program's input evaluation. Try entering an integer again.\n");
			}
		}
		while (rv != 1);
	}//end input into vector x
	
	elecounter = 0;

	for (elecounter = 0; elecounter < elements; elecounter++)
        {
                do
                {
                        rv = 0;//test condition

                        printf("Please enter integer Vector Y[%d]:\n", elecounter);

                        rv = scanf("%lf", &VectorY[elecounter]); //ignors non-numerical input
						if (VectorY[elecounter] == -0)
            			{
                			VectorY[elecounter] = 0;
						}

                        while ((trash = getchar()) != '\n')
                        {
                                if (trash == EOF)
                                {
                                        fprintf(stderr, "End-of-file reached.\n");
                                        exit(1);
                                }
                        }//end input evaluation and error checking

                        //feedback
                        if (rv == 1)
                        {
                        	printf("Vector Y[%d]: %.2lf\n", elecounter, VectorY[elecounter]);
                        }
			else if (rv == 0)
                        {
				fprintf(stderr, "Error: No number detected by this program's input evaluation. Try entering an integer again.\n");
                        }
		}                                                                                                                                                                                                              while (rv != 1);
        }//end input into vector Y

	printf("%s", "-------------------------------------------------------------");
}//end fillVectors
