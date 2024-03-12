#include <stdio.h>

int main()
{
	int c;
	c = getchar();

	while(c != EOF)
	{
		if(c >= 'a' && c <='z' )
		{
			c = c - ('a' - 'A');
		}
		else if(c >= '0' && c <='9')
		{
			if(c < '5')
			{
				c = '-';
			}
			else if(c > '5')
			{
				c = '+';
			}
		}
		putchar(c);
		c = getchar ();
	}

	return 0;
}