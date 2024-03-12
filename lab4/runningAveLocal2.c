// programme for runningAveLocal2()
// your information goes below
/***************************************
* 22S - Lab4 *
* Author: Abeyratne, Idame *
* Email: yienisha@my.yorku.ca *
* eecs_username: yienisha *
* York Student #: 218462515
************************************** **/

#include <stdio.h>

void r_avg(int);

int main(int argc, char *argv[])
{
	
   int input;  
   printf("Enter number (-1 to quit): ");
   scanf("%d", &input);

   while (input != -1){
        r_avg(input);

        printf("\nEnter number (-1 to quit): ");
        scanf("%d", &input); // reads inputs again
    }
	
    return 0;
}

void r_avg(int input)
{
    static double count;
    count++;
    double resu = input / count;
    printf("running average is %d / %lf = %lf\n", input,count,resu);   

}
