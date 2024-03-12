// programme for runningAveLocal()
// your information goes below
/***************************************
* 22S - Lab4 *
* Author: Abeyratne, Idame *
* Email: yienisha@my.yorku.ca *
* eecs_username: yienisha *
* York Student #: 218462515
************************************** **/

#include <stdio.h>


void r_avg(int, int);


int main(int argc, char *argv[])
{
	
      int input; int count=0; int sum=0;
      

      printf("Enter number (-1 to quit):  ");
      scanf("%d", &input);

      while(input != -1)
      {
          count++;
          sum  = sum + input;

          r_avg(sum, count);
 	     
          printf("\nEnter number (-1 to quit):  ");
          scanf("%d", &input);
	
       }  
	
       return 0;
}

void r_avg(int sum, int count)
{
   
   double resu = ((double)sum/(double)count);
   printf("running average is %d / %d = %lf\n", sum,count,resu);   
}
