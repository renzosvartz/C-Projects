#ifndef _complex_h 
#define _complex_h 
 
/* Structure for complex number */
typedef struct 
{
	double real;
	double imag;
} complexNumber; 

/*Structure for a polar number*/
typedef struct 
{
	double radius;
	double theta;
} polarNumber;
 
/* Function to display a complex number */
void displayComplex(complexNumber *c); 
 
/* Function to calculate and display the polar format of a complex number */
void polarComplex(complexNumber *c); 
 
/* Function to calculate and returns the conjugate of a complex number */
void conjugateComplex(complexNumber *c); 
 
/* Function to calculate and returns addition of two complex numbers */
void addComplex(complexNumber *c); 
 
/* Function to calculate and returns subtraction of two complex numbers */
void subComplex(complexNumber *c); 
 
/* Function to calculate and returns multiplication of two complex numbers */
void multiplyComplex(complexNumber *c); 
 
/* Function to calculate and returns division of two complex numbers */
void divideComplex(complexNumber *c); 
 
/*Function to convert complex number to polar number*/
void rectToPolar(complexNumber c, polarNumber *p);

/*Function to check for input errors*/
void inputErrorChecking(void);

/*Function to get option*/
int getOption(void);

/*Function to display options*/
void displayOptions(void);

/*Function to get complex number*/
void getComplexNumber(complexNumber *c, int n);

/*Function to clear input line */
void clearLine(void);

#endif 
