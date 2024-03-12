/***************************************
* 22S - Lab4 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
************************************** **/
#include <stdio.h>

// define global variables and a function
int sum;
int count;
double resu;
extern int input;




void r_avg (void)
{
    sum  = sum + input;
    count++;
    resu =  sum / count;
    printf("running average is %d / %d = %lf\n", sum,count,resu);
}

