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