#include<stdio.h>

#define SIZE 32

/* start of functions */

int isDigit(char c)
{
    if(c >= '0' && c <='9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isLetter(char c)
{
    if((c >= 'a' && c <='z' ) || (c >= 'A' && c <='Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isOperator(char c)
{
    if(c == '+' || c =='-'  || c == '*' || c =='/' || c == '%')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/* end of functions */

int main()
{
    int dataInt;
    char dataChar;
    int result=0;


while(1)
{   // while true inifinte loop
    printf("Enter an integer and a character separated by blank: ");
    scanf("%d %c", &dataInt,&dataChar);

	if (dataInt == -10000)
	{
	    break;
	}
    
    if(isDigit(dataChar))
    {
        
        int sum = dataInt + (dataChar-'0');

        printf("Character '%c' represents a digit. Sum of %d and %c is %d\n",dataChar, dataInt, dataChar, sum);
    }
    else if(isLetter(dataChar))
    {
        printf("Character '%c' represent a letter\n",dataChar);
    }
    else if(isOperator(dataChar))
    {
        printf("Character '%c' represents an operator\n",dataChar);
    }
    else
    {
        printf("Character '%c' represents others\n",dataChar);
    }

}
 return 0;
}


