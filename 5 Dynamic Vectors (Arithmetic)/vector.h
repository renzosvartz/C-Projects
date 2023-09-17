/*Dynamic Vector Operations Header file "vector.h"*/
/*Program includes*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*The number of vectors A, B, C, D */
#define SIZE 4

/*The maximum size of vectors*/
#define MAX_VEC_SIZE 10

/*Create a new vector. Read the length of the vector, followed by value of each element of the vector. Error not full. If length is invalid, display the informative error message and return to the main program. Integer k (0, 1, 2 , 3, or 3) correspeonds to vector A, B, C, D */
void vector_new(double **p, int *n, int k);

/* Add two vectors, Read names of two vectors from standard input. Display the resulting vector to the screen. If vector is invalid or not set yet, or the lengths of two vectors are not the same, display the error message and return to the main program.*/
void vector_add(double **p, int *n);

/*Subtract two vectors. Read names of two vectors from standard input. Display the resulting vector to the screen.*/
void vector_sub(double **p, int *n);

/* Multiply two vectors.*/
void vector_mul(double **p, int *n);

/*Calculate and display the sum of all the elements of a vector.*/
void vector_sum(double **p, int *n);

/*Calculate and display the rms value of a vector.*/
void vector_rms(double **p, int *n);

/*Display the negation of the vector*/
void vector_neg(double **p, int *n);

/*Display a vector on the screen*/
void vector_prn(double *vector, int length);

/*Clears buffer*/
void clearline(void);

/*Gets vectors*/
int getop(void);
