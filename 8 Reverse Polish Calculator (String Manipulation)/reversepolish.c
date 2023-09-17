//#define NUMBER 1
//
//int getop(char[]); //processes data into a number that is pushed onto a stack or an operand
//void push(double); //stores argument into values[]
//double pop(void); //returns the top value in stack values[]
//int getchx(void); //reads from operator_or_error_overread[] if it has anything, else uses getchar()
//void ungetchx(int); //stores argument in operator_or_error_overread[]
//double atofx(char[]); //converts the string op[] into a number
//void cleararray(char[], int);
//
//int index = 0; //index of the stack of numbers
//double values[MAXARRAYSIZE]; //stack of numbers
//
//char ungets_string[MAXARRAYSIZE]; //an array used to push back an entire line of numbers and operands onto the input
//int ungets_index = 0; //index of the ungets array
//
//char operator_or_error_overread[MAXARRAYSIZE]; //stored overread characters: 1.2+ saves +, here. Then getc() reads from here first, instead of using getchar(). Also stores everything from ungets[], ungets 'u' pushes a string onto the input using this array that getc() reads from, instead of reading with getchar()
//int index_error = 0; //index of operator_or_error_overread[]
//
//
//main()
//{
//	int operator; //variable for holding a number popped from the stack of numbers values[index]
//	double operator2; //second variable for holding a number popped from the stack of numbers values[index]
//	double temp; //variable for holding a value temporarily
//	double temp2; //variable for holding a value temporarily
//	char op[MAXARRAYSIZE]; //array used to store numbers that may be negative and floating-point. Used with atof to produce a number that is pushed onto values[index]
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
//
//	while ((operator = getop(op)) != EOF)
//	{
//		switch (operator) {
//
//
//
//		case 'a':       /*define and undefine variables*/
//			if (a_def == NO)
//			{
//				if (index > 0)
//					a = pop(), a_def = YES;
//				else
//					a = 0;
//			}
//			else
//				push(a);
//			break;
//		case 'b':
//			if (b_def == NO)
//				b = pop(), b_def = YES;
//			else
//				push(b);
//			break;
//		case 'x':
//			if (x_def == NO)
//				x = pop(), x_def = YES;
//			else
//				push(a);
//			break;
//		case 'y':
//			if (y_def == NO)
//				y = pop(), y_def = YES;
//			else
//				push(a);
//			break;
//		case 'z': //assuming appropriate usage //undefine variable
//			undef = getchar();
//			switch (undef) {
//			case 'a':
//				a_def = NO;
//				break;
//			case 'b':
//				b_def = NO;
//				break;
//			case 'x':
//				x_def = NO;
//				break;
//			case 'y':
//				y_def = NO;
//				break;
//			default: printf("Error: The character after z is supposed to be a variable. The variable are a, b, x, and y. The correct syntax to undefine a variable is za, zb, zx, and zy.\n");
//				break;
//			}
//			break;      /*define and undefine variables*/
//
//
//
//		case NUMBER:
//			push(atof(op));
//			break;
//		case '+':
//			push(pop() + pop());
//			break;
//		case '*':
//			push(pop() * pop());
//			break;
//		case '-':
//			operator2 = pop();
//			push(pop() - operator2);
//			break;
//		case '/':
//			operator2 = pop();
//			if (operator2 != 0.0)
//				push(pop() / operator2);
//			else
//				printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//			break;
//		case '%':
//			operator2 = pop();
//			if (operator2 != 0)
//				push((int)pop() % (int)operator2);
//			else
//				printf("Error: Operator 2 is 0. Cannot divide by 0.\n");
//			break;
//		case 'q':
//			push(sin(pop()));
//			break;
//		case 'w':
//			push(cos(pop()));
//			break;
//		case 'e':
//			operator2 = pop();
//			push(pow(pop(), operator2));
//			break;
//
//
//
//		case 'm': //print mrp
//			printf("%f\n", mrp);
//			break;
//		case 'p': //print topmost value in stack values[]
//			temp = pop();
//			push(temp);
//			printf("%f", temp);
//			break;
//		case 'd': //duplicate topmost value in stack values[]
//			temp = pop();
//			push(temp);
//			push(temp);
//			break;
//		case 's': //swap topmost two values in stack values[]
//			temp = pop();
//			temp2 = pop();
//			push(temp);
//			push(temp2);
//			break;
//		case 'c': //clear values[]
//			cleararray(values, index);
//			index = 0;
//			break;
//
//
//
//		case 'u': //places everything before 'u' in the line of input where 'u' was
//			printf("%s\n", ungets_string);
//			placeholder = ungets_index;
//			while (ungets_index >= 0)
//				operator_or_error_overread[index_error++] = ungets_string[ungets_index--];
//			ungets_index = placeholder;
//			break;
//		case 'r': //clears ungets_string[]
//			printf("Cleared ungets_string[]: %s\n", ungets_string);
//			cleararray(ungets_string, ungets_index);
//			printf("Current ungets_string: %s\n", ungets_string);
//			ungets_index = 0;
//			break;
//		case 'v':
//			printf("%s\n", ungets_string);
//			break;
//
//		case '\n': //prints the topmost value of values[], saves mrp
//			mrp = pop();
//			printf("\t%.8f\n", mrp);
//			break;
//		case '!': //end program
//			goto terminate;
//			break;
//		default: //error
//			printf("Error: The program read a character using getchar() that was not a digit or a character with a switch case defined. The character is %s.\n", op);
//			break;
//		}
//	}
//	terminate:
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
//int getop(char s[]) //process characters and return to the switch with a number or a character
//{
//	int c;
//	int d = 0;
//	int i = 0;
//
//	while ((s[i] = c = getchx()) == ' ' || c == '\t' || c == '\0') //skips white space by overwriting c into s[0] until an operand, operator, or error is read using getch() which reads an operand, operator, or error from getchar() overreading past any number onto a space or an operator 1.2+ or 1.2 .
//		;
//
//	if (s[i] != '\n' && s[i] != 'u')
//		ungets_string[ungets_index++] = s[i]; //saves all characters into ungets_string[] that are not '\n' and 'u'. '\n' would create printing errors and 'u' would create infinite ungets operations
//
//	else if (s[i] == '\n' || s[i] == 'u')
//		ungets_string[ungets_index++] = ' '; //spaces are used to avoid 'u' '\n' and '\0' repeating in ungets_string[].
//
//	i++; //increment op = s[i] to the next free space to save numbers and decimals
//
//	if (!isdigit(c) && c != '.' && c != '-') //saves character operand and returns character operand
//	{
//		return c;
//		ungets_string[ungets_index++] = ' ';
//	}
//
//	if (c == '-')
//		d = getchx();
//
//	if (c == '-' && !isdigit(d)) //saves negative '-' character and return character '-'
//	{
//		ungetchx(d);
//		ungets_string[ungets_index++] = ' ';
//		return c;
//	}
//	else if (c == '-' && isdigit(d)) //saves first digit after '-'
//	{
//		s[i++] = d;
//		ungets_string[ungets_index++] = d;
//	}
//
//	if (isdigit((c = getchx()))) //saves number
//	{
//		ungets_string[ungets_index++] = s[i++] = c;
//		while (isdigit(c = getchx()))
//			ungets_string[ungets_index++] = s[i++] = c;
//	}
//
//	if (c == '.') //saves decimals
//	{
//		ungets_string[ungets_index++] = s[i++] = c;
//		while (isdigit(c = getchx()))
//			ungets_string[ungets_index++] = s[i++] = c;
//	}
//
//	if (c != EOF) //ungets the overread character: 1.2+, ungets +, saves 1.2 in op[].
//		ungetchx(c);
//
//	s[i] = '\0';
//	ungets_string[ungets_index++] = ' '; //spaces are used to avoid 'u' '\n' and '\0' repeating in ungets_string[].
//
//	return NUMBER;
//}
//
//int getchx(void) //if there is a value in operator_or_error_overread[] read from it, else use getchar()
//{
//	return (index_error > 0) ? operator_or_error_overread[--index_error] : getchar();
//}
//void ungetchx(int operator_or_error) //if there is space in operator_or_error_overread[] store operator_or_error, else error
//{
//	if (index_error >= MAXARRAYSIZE)
//		printf("Error: Stack full. Cannot push character.\n");
//	else
//	{
//		if (operator_or_error == EOF)
//			operator_or_error_overread[index_error++] = '0';
//		else
//			operator_or_error_overread[index_error++] = operator_or_error;
//	}
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
