/* your info below*/
/***************************************
* 22S - Lab06 *

************************************** **/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getSum(char *[], int);
int getDiff(char *[], int);

main(int argc, char *argv[])
{
	int i,sum=0,diff=0;
	printf("There are %d arguments (excluding \"%s\")\n",argc-1,argv[0]);

	if(strcmp(argv[1],"sum")==0)
	{

		for (i = 2; i < argc; ++i)
		{
			if(i==(argc-1))
			{
				printf("%s\n",argv[i]);
			}
			else
			{
				printf("%s + ",argv[i]);
			}
			
		}

		sum = getSum(argv,argc);
		printf("= %d\n",sum);
	}
	else if(strcmp(argv[1],"diff")==0)
	{

		for (i = 2; i < argc; ++i)
		{
			if(i==(argc-1))
			{
				printf("%s\n",argv[i]);
			}
			else
			{
				printf("%s - ",argv[i]);
			}
			
		}

		diff = getDiff(argv,argc);
		printf("= %d\n",diff);
	}

}

int getSum(char *p[], int n)
{
	int sum=0, i;

	for (i = 2; i < n; ++i)
	{
		sum = sum + atoi(p[i]);
	}

	return sum;
}

int getDiff(char *p[], int n)
{
	int diff = atoi(p[2]);
	int i;

	for (i = 3; i < n; ++i)
	{
		diff = diff - atoi(p[i]);
	}

	return diff;
}














