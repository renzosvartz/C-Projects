//Renzo Alejo Moron-Svartz
//Project 5 Dynamically Managing Arrays of Vectors
//Project 5 manages an array of 4 variable-length vectors, defined by the user,
//and allows the user to calculate several values using one or two vectors.

/*Dynamic Vector Operations Header file "vector.h" includes other includes stdio.h, etc*/
#include "vector.h"

//main function allocates memory and makes calls to all functions
int main(void)
{
	int flag = 0;//exit flag
	int op1;//operand 1
	int op2;//operand 2
							 /*storage*/
	char *command = (char *)malloc(4 * sizeof(char));//command storage
	double **vectors = (double **)malloc(4 * sizeof(double *));// vector storage
	int *lengths = (int *)malloc(4 * sizeof(int)); //length of vectors storage
	
	do {
                fprintf(stdout, "calc> ");//prompt    
		fscanf(stdin, "%s", command);//collect command
            	
		/*evaluate command*/

                if (strcmp(command, "A") == 0)
                {
			printf("Creating A\n");
                        vector_new(vectors, lengths, 0);
                }//end create A
		else if (strcmp(command, "B") == 0)
                {
			printf("Creating B\n");
                        vector_new(vectors, lengths, 1);
                }//end create B
		else if (strcmp(command, "C") == 0)
                {
			printf("Creating C\n");
                        vector_new(vectors, lengths, 2);
                }//end create C
		else if (strcmp(command, "D") == 0)
                {
			printf("Creating D\n");
                        vector_new(vectors, lengths, 3);
                }//end create D
                else if (strcmp(command, "bye") == 0)
                {
			printf("Exit.");
                        flag = 1;
                }//end exit program
                else if (strcmp(command, "neg") == 0)
                {
                       	vector_neg(vectors, lengths);
                }//end negate a vector
                else if (strcmp(command, "add") == 0)
                {
                        vector_add(vectors, lengths);
                }//end add 2 vectors
                else if (strcmp(command, "rms") == 0)
                {
			vector_rms(vectors, lengths);
                }//end calculate RMS of a vector
                else if (strcmp(command, "sum") == 0)
                {
			vector_sum(vectors, lengths);
                }//end sum the elements of a vectors
                else if (strcmp(command, "sub") == 0)
                {
			vector_sub(vectors, lengths);
                }//end subtract 2 vectors
                else if (strcmp(command, "mul") == 0)
                {
			vector_mul(vectors, lengths);
                }//end multiply 2 vectors
		else if (strcmp(command, "prn") == 0)
                {       op1 = getop();
                        if (op1 != -1)
                        {
                                if (lengths[op1] == 0)
                                {
                                        fprintf(stderr, "Vector %c has not been created yet.\n", op1 + 65);
                                }
                                else
                                {
                                        fprintf(stdout, "Vector %c\n", op1 + 65);
                                        vector_prn(*(vectors + op1), lengths[op1]);
                                }
                                clearline();
                        }
                }//end print a vector
                else
                {
                        fprintf(stderr, "Invalid input. Try again.\n");
			clearline();
                }//end error catching
	}	while (flag != 1);       
	fprintf(stdout, "\n");
	return 0;
}//end main

//creates new vector A, B, C, or D
void vector_new(double **vectors, int *lengths, int k)
{
	int length;//length
	int c;//error-catching

	/*error-catching*/
	while ((c = getc(stdin)) == ' ' || c == '\t')
		;
	ungetc(c, stdin);
	
	if ((c = getc(stdin)) == '\n' || c == EOF)
        {
                fprintf(stderr, "Error: String length missing.\n");
		return;
        }
	else
	{
		ungetc(c, stdin);
	}
	/*error-catching*/

	fscanf(stdin, "%d", &length);//collect length of vector
	
	if (length <= 0 || length > 10)
        {
               	fprintf(stderr, "Error: String length was invalid.\n");
		clearline();
       	}//error-catching

	/*collect vector elements*/
	else
	{
		int i;//counter
		fprintf(stdout, "length: %d\n", length);//feedback: length
		
		/*free previously allocated memory*/	
		if (lengths[k] != 0)
		{
			fprintf(stdout, "Vector %c was previously initialized to sizeof(%d)\n", k + 65, lengths[k] * sizeof(double));
			free(*(vectors+k));
		}

		lengths[k] = length;//store vector length
		*(vectors+k) = (double *)malloc(lengths[k] * sizeof(double));//allocated memory	
		if (*(vectors+k) == NULL)
		{
			fprintf(stderr, "Error: Memory could not be allocated for Vector %c. Fatal error.\n", k + 65);
			exit(1);
		}//end fatal error no memory available
		
		for (i = 0; i < length; i++)
		{
			/*error-catching*/
			while ((c = getc(stdin)) == ' ' || c == '\t')
		                ;
        		ungetc(c, stdin);
			/*error-catching*/

			/*error-catching*/
		 	if ((c = getc(stdin)) == '\n' || c == EOF || isalpha(c) || ispunct(c))
			{
				
				if (isalpha(c))
				{
					fprintf(stderr, "Error: Letter read. Incomplete vector assignment(s). Vector %c unitialized.\n", k + 65);
                                        free(*(vectors+k));
                                        lengths[k] = 0;
                                        clearline();
                                        break;
				}
				else if (ispunct(c))
				{
					fprintf(stderr, "Error: Symbole read. Incomplete vector assignment(s). Vector %c unitialized.\n", k + 65);
                                        free(*(vectors+k));
                                        lengths[k] = 0;
                                        clearline();
                                        break;	
				}
				else
				{
					fprintf(stderr, "Error: Incomplete vector assignment(s). Vector %c unitialized.\n", k + 65); //get space in between information
                                	free(*(vectors+k));
                                        lengths[k] = 0;
					break;
				}
			}
			/*error-catching*/

			else
			{
				ungetc(c, stdin);

              	                fscanf(stdin, "%lf", (*(vectors+k))+i);//collect vector elements
				fprintf(stdout, "Vector %c element [%d] of [%d]: %.2lf\n", k + 65, i + 1, length,(*(vectors+k))[i]);//feedback vector element
				if (i == length - 1)
				{
					clearline();//error-catching
				}
			}	
		}
	}
}//end vector_new

//add two vectors
void vector_add(double **vectors, int *lengths)
{
	int op1;//operand 1
	int op2;//operand 2

	op1 = getop(); //get vector 1

	if (op1 != -1)
	{
		if (lengths[op1] == 0)
		{
			fprintf(stderr, "Error: Vector %c has not be created.\n", op1 + 65);
			return ;
		}//end error-catching
		else
		{
			op2 = getop(); //get vector 2
		}
	}
	else
	{
		return ;
	}//end error-checking
	
	if (op2 != -1 && lengths[op1] == lengths[op2])
	{
		int i;//counter

		fprintf(stdout, "Adding Vector %c and %c\n", op1 + 65, op2 + 65);//feedback vectors being added
		fprintf(stdout, "(");

		while (i < lengths[op1])
		{
			fprintf(stdout, "%.2lf%s", ((*(vectors+op1))[i]) + ((*(vectors+op2))[i]), (i < lengths[op1] - 1) ? ", " : "");
			i++;
		}//end print each element of vector addition
		puts(")");
		clearline();
	}//end adding vectors
	else if (lengths[op2] == 0)
	{
		fprintf(stderr, "Error: Vector %c has not been created.\n", op2 + 65);
		clearline();
		return ;
	}//end error-checking
	else if (lengths[op1] != lengths[op2])
        {
                fprintf(stderr, "Error: Vector lengths do not match\n");
		clearline();
                return ;
        }//end error-checking
}//end vector_add

//subtract 2 vectors
void vector_sub(double **vectors, int *lengths)
{
        int op1;//operand 1
        int op2;//operand 2

        op1 = getop(); //get vector 1

        if (op1 != -1)
        {
                if (lengths[op1] == 0)
                {
                        fprintf(stderr, "Error: Vector %c has not be created.\n", op1 + 65);
                        return ;
                }//end error-checking
                else
                {
                        op2 = getop(); //get vector 2
                }
        }
        else
        {
                return ;
        }//end error-checking

        if (op2 != -1 && lengths[op1] == lengths[op2])
        {
                int i;

                fprintf(stdout, "Subtracting Vector %c and %c\n", op1 + 65, op2 + 65);//feedback vectors being subtracted
                fprintf(stdout, "(");

                while (i < lengths[op1])
                {
                        fprintf(stdout, "%.2lf%s", ((*(vectors+op1))[i]) - ((*(vectors+op2))[i]), (i < lengths[op1] - 1) ? ", " : "");
                        i++;
                }//print each element of vector subtraction
                puts(")");
		clearline();
        }//end subtracting vectors
        else if (lengths[op2] == 0)
        {
                fprintf(stderr, "Error: Vector %c has not been created.\n", op2 + 65);
		clearline();
                return ;
        }//end error-checking
        else if (lengths[op1] != lengths[op2])
        {
              	fprintf(stderr, "Error: Vector lengths do not match\n");
         	clearline();
	      	return ;
        }//end error-checking
}//end vector_sub

//multiply 2 vectors
void vector_mul(double **vectors, int *lengths)
{
        int op1;//operand 1
        int op2;//operand 2

        op1 = getop(); //get vector 1

        if (op1 != -1)
        {
                if (lengths[op1] == 0)
                {
                        fprintf(stderr, "Error: Vector %c has not be created.\n", op1 + 65);
                        return ;
                }//end error-checking
                else
                {
                        op2 = getop(); //get vector 2
                }
        }
        else
        {
                return ;
        }//end error-checking

        if (op2 != -1 && lengths[op1] == lengths[op2])
        {
                int i;//counter

                fprintf(stdout, "Multiplying Vector %c and %c\n", op1 + 65, op2 + 65);//feedback vectors being multiplied
                fprintf(stdout, "(");

                while (i < lengths[op1])
                {
                        fprintf(stdout, "%.2lf%s", ((*(vectors+op1))[i]) * ((*(vectors+op2))[i]), (i < lengths[op1] - 1) ? ", " : "");
                        i++;
                }//print each element of vector multiplication
                puts(")");
		clearline();
        }//end multiplying vectors
        else if (lengths[op2] == 0)
        {
                fprintf(stderr, "Error: Vector %c has not been created.\n", op2 + 65);
		clearline();
                return ;
        }//end error-checking
        else if (lengths[op1] != lengths[op2])
        {
                fprintf(stderr, "Error: Vector lengths do not match\n");
		clearline();
                return ;
        }//end error-checking
}//end vector_add

//sum all elements of a vector
void vector_sum(double **vectors, int *lengths)
{
        int i;//counter
        int op1;//operand 1
	double sum;//sum

        op1 = getop();//get vector 1

        if (op1 != -1)
        {
		if (lengths[op1] == 0)
                {
                	fprintf(stderr, "Vector %c has not been created yet.\n", op1 + 65);
                }//end error-checking
                else
                {
		
			fprintf(stdout, "Sum of Vector %c: ", op1 + 65);
                	while (i < lengths[op1])
               		{
				sum += (*(vectors+op1))[i];
                        	i++;
                	}//calculate sum of vector elements
			fprintf(stdout, "%.2lf\n", sum);//print sum
		}
		clearline();
        }
}//end vector_sum

//calculate rms of vector elements
void vector_rms(double **vectors, int *lengths)
{
        int i;//counter
        int op1;//operand 1
        double rms;//root-mean-squared

        op1 = getop();//get vector 1

        if (op1 != -1)
        {
		if (lengths[op1] == 0)
                {
                        fprintf(stderr, "Vector %c has not been created yet.\n", op1 + 65);
                }//end error-checking
                else
                {
	                fprintf(stdout, "RMS of Vector %c: ", op1 + 65);
			/*calculate rms*/
        	        while (i < lengths[op1])
               		{
               	        	rms += pow((*(vectors+op1))[i],2);
               	        	i++;
                	}
			rms /= lengths[op1];
			rms = sqrt(rms);
			/*calculate rms*/
                	fprintf(stdout, "%.2lf\n", rms);//print rms
		}
		clearline();
        }
}//end vector_rms

//print negation of vector elements
void vector_neg(double **vectors, int *lengths)
{
	int i;//counter
	int op1;//operand 1

	op1 = getop(); //get vector 1

	if (op1 != -1)
	{
		if (lengths[op1] == 0)
                {
                        fprintf(stderr, "Vector %c has not been created yet.\n", op1 + 65);
                }//end error-checking
                else
                {

			fprintf(stdout, "(");
	
	        	while (i < lengths[op1])
       			{
               			fprintf(stdout, "%.2lf%s",((*(vectors + op1))[i] == 0) ? (*(vectors + op1))[i] : (*(vectors + op1))[i] * -1, (i < lengths[op1] - 1 ? ", " : ""));
                		i++;
        		}//print negation of vector elements
        		puts(")");	
		}
		clearline();//error-handling
	}
}//end vector_neg

//print vector
void vector_prn(double *vector, int length)
{
	int i = 0;//counter

	fprintf(stdout, "(");

	while (i < length)
	{
		fprintf(stdout, "%.2lf%s",vector[i], (i < length - 1 ? ", " : ""));
		i++;
	}//print vector elements
	puts(")");
}//end vector_prn

//error-handling clears lines
void clearline()
{
	int c; //trash
	while ((c = getchar()) != '\n' && c != EOF)
        	;//clear lines
}//end clearline

//obtains vectors A, B, C, or D
int getop(void)
{
	char *op = (char *)malloc(2 * sizeof(char));//operand
	int c;//error-checking
	
	/*error-checking*/
	while ((c = getc(stdin)) == ' ' || c == '\t')
		;
	ungetc(c, stdin);

	if ((c = getc(stdin)) == '\n' || c == EOF)
	{
		fprintf(stderr, "Error: Missing vector argument.\n");
		return -1;
	}
	else
	{
		ungetc(c, stdin);
	}
	/*error-checking*/

	fscanf(stdin, "%s", op);//collect vector argument
        if (strcmp(op, "A") == 0)
        {
           	return 0;
        }//return A
        else if (strcmp(op, "B") == 0)
        {
		return 1;
        }//return B
        else if (strcmp(op, "C") == 0)
        {
		return 2;
        }//return C
        else if (strcmp(op, "D") == 0)
        {
		return 3;
        }//return D
        else
        {
                fprintf(stderr, "Error: Invalid vector argument.\n");
		clearline();
                return -1;
        }//end error-checking
}//end getop
