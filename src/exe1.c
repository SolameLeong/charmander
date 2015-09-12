//后缀表达式
#include <stdio.h>
int main()
{
    char number = 0;
    int ops[255];
    int top = 0;

    printf("Please enter an equation end with '=': ");
    while ((number = getchar()) != '#')
    {
	while (number != '=') //入栈和输出
	{
	    if (number >= 0 && number <= 9)
	    	putchar(number);
 	    else if (top == 0)
	    {
	    	ops[top] = number;
	    	top ++;
	    }
	    else 
  	    	switch (number)
	    	{
		    case '(' : 
		    	ops[top] = number;
		    	top ++;
		    	break;
	            case '+':
		    case '-':
		    	while(top != 0 || ops[top - 1] != '(')
		    	{
			    putchar(ops[top - 1]);
			    top --;
		    	}
		    	ops[top] = number;
		    	top ++;
		    	break;
	    	    case '*':
	    	    case '/': 
		   	 if (ops[top - 1] == '+' || ops[top - 1] == '-')
		    	    {
		    	    	ops[top] = number;
		    	    	top ++;
		    	    }
		    	else
		    	{
		    	    putchar(ops[top - 1]);
		    	    number = ops[top - 1];
		    	}
		    	break;
	    	    case ')':
		    	if (ops[top - 1] != '(')
		    	{
		    	    putchar(ops[top - 1]);
		    	    top --;
			    continue;
		    	}
		    	else
		    	{
			    ops[top - 1] = ' ';
			    top --;
		    	}
			break;
	        }
	    	number = getchar();
	}
	while (top != 0)
	{
	    putchar(ops[top - 1]);
	    top --;
	}
	printf("\nPlease enter...: ");
	number = getchar();
    }
    return 0;
}

