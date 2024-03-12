#include <stdio.h>


int isLeap(int year);
int countDays(int month, int day, int isLeap);


int main () 
{
	int year,month,day,daysPassed;

	printf("Enter date ('YYYY MM DD'): ");
	scanf("%d %d %d",&year,&month,&day);


	while(year > 0)
	{
		daysPassed = countDays(month,day,isLeap(year));

		if(isLeap(year))
		{
			printf("%d days of year %d have elapsed [leap year]\n",daysPassed,year);

		}
		else
		{
			printf("%d days of year %d have elapsed\n",daysPassed,year);
		}
		printf("Enter date ('YYYY MM DD'): ");
		scanf("%d %d %d",&year,&month,&day);
	}
return 0;

}

int isLeap(int year)
{
	if((year%4 ==0 && year%100 !=0) || (year % 400 ==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int countDays(int month, int day, int isLeap)
{
	int JAN=31,MAR=31,MAY=31,JULY=31,AUG=31,OCT=31,DEC = 31;
	int APRIL=30,JUNE=30,SEP=30,NOV = 30;
	int FEB;
	int i=1;

	if(isLeap==1)
	{
		FEB = 29;
	}
	else
	{
		FEB = 28;
	}

	int MONTHS[12] = {JAN,FEB,MAR,APRIL,MAY,JUNE,JULY,AUG,SEP,OCT,NOV,DEC};

	int daysPassed = 0;

	

	for(i=0;i<month; i++)
	{

		if(i==(month - 1) && day<29)
		{
			daysPassed = daysPassed + day;
		}
		else
		{
			daysPassed = daysPassed + MONTHS[i];

		}

	}

	return daysPassed;
}












