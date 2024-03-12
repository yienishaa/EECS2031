#include <stdio.h>

int main()
{
	int c;
	int counter[10] = {0,0,0,0,0,0,0,0,0,0};
	int X=0;

	c = getchar();

	while(c != EOF)
	{
		if(c >= '0' && c <='9')
		{

			counter[c - '0']++;
		}
		else
		{
			X++;
		}
		
		c = getchar ();
	}

	for(int i=0; i<10;i++)
	{
		printf("%d: %d\n",i, counter[i]);
	}

	printf("X: %d\n",X);

	return 0;
}