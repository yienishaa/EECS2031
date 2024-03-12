// your info goes here
/***************************************
* 22S - Lab05 *
* Author: Abeyratne, Idame *
* Email: yienisha@my.yorku.ca *
* eecs_username: yienisha *
* York Student #: 218462515
************************************** **/

#include <stdio.h>
#include <math.h>

double my_pow(double base, double power);

int main(int argc, char *argv[])
{
	
   double base; 
   int expon;  
   printf("enter base and power: ");
   scanf("%lf %d", &base, &expon);

   while (base != -1000)
   {
          double res1 = pow(base, expon);
          double res2 = my_pow(base, expon);
          printf("pow:    %.4f\n", res1);
          printf("my_pow: %.4f\n", res2);


          printf("enter base and power: ");
          scanf("%lf %d", &base, &expon);



    }
	
    return 0;
}

// This function shall be a RECURSIVE function
// i.e., in function should not use any loop(s) here
double my_pow(double base, double power)
{
    
     if(power==0)
     {
          return 1;
     }
     else if(power==1)
     {
          return base;
     }
     else if(power>1)
     {
          return base*my_pow((base), (power-1));
     }
     else
     {    printf("%lf, %lf\n",base,power);
          return (1/(base*my_pow((base), ((power*-1)-1))));
     }

     
}
