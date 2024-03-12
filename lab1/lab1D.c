/***************************************
* 22SU - Lab01 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
****************************************/

#include <stdio.h>

void greet(int);
float sum(float,float);

int main()
{  
   int a = 2031;
   greet(a);
   int b = 1012;
   greet(b);
   float x, y;

   printf("Enter two float numbers separated by ##: ");
   scanf("%f##%f",&x,&y);
   
   float su= sum(x,y);
   printf( "%f + %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i + j;             
}

/* modify this function */
void greet(int i){
  printf("Hello %d!\n",i);
}
