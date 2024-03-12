/***************************************
* 22S – Lab01 *
* Author: Abeyratne, Yienisha *
* Email: yienisha@my.yorku.ca *
* eecs_username: Your eecs login user name *
* York Student #: 218462515
****************************************/


#include<stdio.h>


int main(int argc, char** argv)
{
	int a,b,c;

	printf("Please enter a number: \n");

	scanf("%d",&a);

	b = a*2;
	c = a*3;

	printf("Hi, input is %d. Double and triple of %d is %d and %d, respectively.\n",a,a,b,c);


	return 0;
}