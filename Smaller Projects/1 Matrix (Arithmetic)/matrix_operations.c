//Renzo Alejo Moron-Svartz
//
//Project 1
//
//Project 1 creates an user-defined [m x n] matrix,
//produces the transpose of the matrix,
//computes the product of both matrices,
//and displays each matrix. The program is robust
//with error-checking and recoverability.

//program includes and symbolic definitions
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAXCOL 10
#define MAXROW 10

//function prototypes
void fillMatrix(unsigned int, unsigned int, int Matrix[][MAXCOL]); //leaving the rows, [], empty allows the compiler to decide storage needed
void printMatrix(unsigned int, unsigned int, int Matrix[][MAXCOL]);
void createTranspose(unsigned int, unsigned int, int Matrix[][MAXCOL], int MatrixTranspose[][MAXCOL]);
void multiplyMatrices(unsigned int, unsigned int, int Matrix[][MAXCOL], int MatrixTranspose[][MAXCOL], int MatrixProduct[][MAXCOL]);

//global variable declaration
int matrix[MAXROW][MAXCOL];
int matrixTranspose[MAXROW][MAXCOL];
int matrixProduct[MAXROW][MAXCOL];

//main function informs the user of the functionality of this program, obtains the dimensions of the matrix, and makes function calls
//to fillMatrix(), createTranspose(), and printMatrix()
int main(void)
{
	//variable declarations and initializations
	unsigned int rows = 0; //dimension m of [m x n] matrix
	unsigned int columns = 0; //dimension n of [m x n] matrix
	int trash = 0;

	//introduce the programs function
	puts("-----------------------------------------------------------------------");
	puts("Please enter the dimensions of an [m x n] matrix.");
	puts("The matrix must be at most 10 rows and 10 columns.");
	puts("Any non-numerical input will be ignored by the function's");
	puts("input evaluation. Numbers outside of the bounds");
	puts("1 and 10 will produce an error message and exit");
	puts("the program.");
	puts("By default the program set the dimensions of this matrix as 0 x 0.");
	puts("-----------------------------------------------------------------------");
	
	//obtain dimensions including error checking
	while (rows <= 0 || rows > 10)
	{
		printf("%s", "Please enter dimension m: ");
		scanf("%u", &rows);
		if (rows == 0)
		{
			puts("You entered 0. The matrix may not have any dimension size 0.");
			exit(1);
		}
		else if (rows < 0)
		{
			puts("You entered a negative number. The matrix may not have any dimension of negative size.");
			exit(1);
		}
		else if (rows > 10)
		{
			puts("You entered a number greater than 10. The matrix may not have any dimension of size greater than 10.");
			exit(1);
		}

		while ((trash = getchar()) != '\n')
                {
                	if (trash == EOF)
                       	{
                       		puts("End-of-file reached.");
                                exit(1);
                        }
                }//end input evaluation and error checking

	}//end input dimension m (rows)

	while (columns <= 0 || columns > 10)
        {
                printf("%s", "Please enter dimension n: ");
                scanf("%u", &columns);
		if (columns == 0)
                {
                        puts("You entered 0. The matrix may not have any dimension size 0.");
                        exit(1);
                }
                else if (columns < 0)
                {
                        puts("You entered a negative number. The matrix may not have any dimension of negative size.");
                        exit(1);
                }
                else if (columns > 10)
                {
                        puts("You entered a number greater than 10. The matrix may not have any dimension of size greater than 10.");
                        exit(1);
                }

		while ((trash = getchar()) != '\n')
                {
                        if (trash == EOF)
                        {
                                puts("End-of-file reached.");
                                exit(1);
                        }
                }//end input evaluation and error checking

        }//end input dimension n (columns)

	//inform user the dimensions of their matrix
	printf("You entered m: %u and n: %u.\n", rows, columns);
	printf("Your matrix will be an [%u x %u] matrix\n", rows, columns);
	
	//fill [m x n] matrix and print the matrix
	fillMatrix(columns, rows, matrix);//function call to fill matrix

	puts("Your matrix is:");
	puts("-----------------------------------------------------------------------");

	//print [m x n] matrix
	printMatrix(columns, rows, matrix);//function call to print matrix

	puts("\nYour matrix tranpose is:");
	puts("-----------------------------------------------------------------------");

	//create transpose of matrix
	createTranspose(columns, rows, matrix, matrixTranspose);
	
	//print [n x m] matrix transpose
	printMatrix(rows, columns, matrixTranspose);

	//produce product of matrix and matrix transpose
	multiplyMatrices(rows, columns, matrix, matrixTranspose, matrixProduct);

	
	puts("\nThe product of your matrices is:");
	puts("-----------------------------------------------------------------------");

	//print product of matrix and matrix transpose
	printMatrix(rows, rows, matrixProduct);

}//end main

//This function multiples an [m xn] matrix with an [n x m] matrices without error checking because the program would never send it
//matrices that would not evaluate with matrix algebra.
void multiplyMatrices(unsigned int row, unsigned int col, int Matrix[][MAXCOL], int MatrixTranspose[][MAXCOL], int MatrixProduct[][MAXCOL])
{
	int i = 0;//loop increment index
	int j = 0;
	int k = 0;

	int RowCounter = 0; //matrix index
	int ColCounter = 0;
	int TransposeRowCounter = 0;
	int TransposeColCounter = 0;
	int ProductRow = 0;
	int ProductCol = 0;	

	int sum = 0;

	for (k = 0; k < row; k++)
	{
		for(i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				sum += Matrix[RowCounter][ColCounter++] * MatrixTranspose[TransposeRowCounter++][TransposeColCounter];
			}
			ColCounter = 0;
			TransposeRowCounter = 0;
			TransposeColCounter++;
			MatrixProduct[ProductRow][ProductCol++] = sum;
			sum = 0;
		}
		RowCounter++;
		TransposeColCounter = 0;
		ProductCol = 0;
		ProductRow++;
	}//end matrix algebra
}//end multplyMatrices

//This function creates the transpose of a matrix, passed to it with dimensions, using a previously defined 2D array
void createTranspose(unsigned int col, unsigned int row, int Matrix[][MAXCOL], int Matrix_Transpose[][MAXROW])
{
	unsigned int rowcounter = 0;
	unsigned int colcounter = 0;
	for (rowcounter = 0; rowcounter < row; rowcounter++)
	{
		for(colcounter = 0; colcounter < col; colcounter++)
		{
			Matrix_Transpose[colcounter][rowcounter] = Matrix[rowcounter][colcounter];
		}
	}
}//end createTranspose

//This function fills a matrix, passed to it with dimensions, with integers, and includes error checking
void fillMatrix(unsigned int col, unsigned int row, int Matrix[][MAXCOL])
{
	unsigned int rowcounter = 0;
	unsigned int colcounter = 0;
	int trash = 0;
	int rv = 0;//return value
	const unsigned int limit = ((pow(2147483647, (1.0 / 2))) / col);//maximum integer for every matrix argument


	//inform the user of appropriate operation
	puts("----------------------------------------------------------------------");
	printf("Enter the integers of the [%u x %u] matrix, row by row, beginning at row 1\n" , row, col);
	printf("assigning values to column 1 through column %u and press Enter after every\n", col);
	puts("integer. The first number detected by the program's input evaluation will be");
	printf("evaluated to determine if it is less than %d because numbers greater\n", limit);
	printf("than or equal to %d may exceed the storage capability of integers on this machine.\n", limit);

	puts("Non-numerical input will be ignored by the program's input evaulation.");

	puts("You will always be given another opportunity to enter an integer to fill your matrix");

	puts("If the program reaches the end-of-file, the program will produce an error");
	puts("message and terminate.");
	puts("----------------------------------------------------------------------");
	
	for (rowcounter = 0; rowcounter < row; rowcounter++)
	{
		for (colcounter = 0; colcounter < col; colcounter++)
		{
			do 
			{
				rv = 0;//test condition

				printf("Please enter integer Matrix[%u, %u]: ", rowcounter + 1, colcounter + 1);
				rv = scanf("%d", &Matrix[rowcounter][colcounter]); //ignors non-numerical input
				puts("");
		
				while ((trash = getchar()) != '\n')
				{
					if (trash == EOF)
					{
						puts("End-of-file reached.");
						exit(1);
					}
				}//end input evaluation and error checking
				
				//feedback
				if (rv == 1)
				{
					printf("Matrix[%u,%u]: %d\n", rowcounter, colcounter, Matrix[rowcounter][colcounter]);
				}
				else if (rv == 0)
				{
					puts("Error: No number detected by this program's input evaluation. Try entering an integer again.");
				}
			}
			while (rv != 1);
		}
	}//end input into matrix
	puts("");
}//end fillMatrix

//This function prints a matrix with headings
void printMatrix(unsigned int col, unsigned int row, int Matrix[][MAXCOL])
{
	unsigned int rowcounter = 0;
	unsigned int colcounter = 0;
	
	printf("      ");
	for(colcounter = 0; colcounter < col; colcounter++)
	{
		printf("%s", " Column");
		printf("%3d", colcounter + 1);
	}//end print Column Heading
	puts("");
	for (rowcounter = 0; rowcounter < row; rowcounter++)
	{
		printf("%s", "Row ");
		printf("%2d ", rowcounter + 1);
		for (colcounter = 0; colcounter < col; colcounter++)
		{
			printf("%10d", Matrix[rowcounter][colcounter]);
		}
		puts("");
	}//end print Row Heading and Matrix
	puts("");
}//end printMatrix
