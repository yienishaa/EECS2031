/***************************************
* 22S – Lab01 *
* Author: Abeyratne, Yienisha *
* Email: yienisha@my.yorku.ca *
* eecs_username: Your eecs login user name *
* York Student #: 218462515
****************************************/

#include<stdio.h>

int main(int argc, char const ** argv)
{
	int Month, Day, Year;

	printf("Enter month, day and year separated by spaces: ");

	scanf("%d %d %d",&Month,&Day,&Year);

	printf("The input '%d %d %d' is reformatted as %d/%d/%d and %d-%d-%d\n",Month,Day,Year,Year,Month,Day,Year,Month,Day);


	return 0;
}