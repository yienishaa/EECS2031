// program for lab4fgets()
// your information goes below
/***************************************
* 22S - Lab4 *
* Author: Abeyratne, Idame *
* Email: yienisha@my.yorku.ca *
* eecs_username: yienisha *
* York Student #: 218462515
************************************** **/

#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include <math.h>

#define SIZES 10
#define SIZES2 40

int main(int argc, char *argv[])
{
     char resu[SIZES2];
     char input[SIZES2];    
     char name[SIZES];  
     int age;
     float rate;
	
     printf("Enter name, age and rate (or \"exit\"): ");
     fgets(input, 40, stdin);
     while (strcmp(input,"exit\n")!=0)
     {    
       /*output original input using two IO functions.*/
       printf("%s", input);  // no \n is needed 
       fputs(input, stdout); 

       sscanf(input,"%s %d %f",name, &age,&rate);

       name[0] = toupper(name[0]);
       age = age +10;
       rate = rate * 2;

       printf("%s-%d-%.3f-[%d,%d]\n\n",name,age,rate,(int)floor(rate),(int)ceil(rate));
      
       printf("Enter name, age and rate (or \"exit\"): ");
       fgets(input, 40, stdin);

       /* now use fgets() to read inputs again */

     } 
      return 0;
}
