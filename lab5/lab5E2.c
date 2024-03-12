//your info goes here
/***************************************
* 22S - Lab05 *
* Author: Abeyratne, Idame *
* Email: yienisha@my.yorku.ca *
* eecs_username: yienisha *
* York Student #: 218462515
************************************** **/


/* Passing an array to a function. */

#include <stdio.h>

#define MAX_INPUT 22
 
void display(int *, int);
int largest(int *, int);

 int main(int argc, char *argv[])
 {
     int array[MAX_INPUT], count;

     /* Input MAX_INPUT values from the stdin keyboard. */
     int i;  count=0;
     
     while ( scanf("%d", &i) != EOF){
        *(array+count) = i;  // store in array[count] without using []
        count++;
     }

      /* Call function and display the return value. */
      printf("Inputs: ");
      display(array,count);

     
     
     printf("\nLargest value: %d\n", largest(array,count));
     
     return 0;
 }
 
 /* displays the content of int array */
 void display(int *arr, int count)
 {
   int i=0;

   for(i=0;i<count;i++)
   {
      printf("%d ",*(arr+i));
      
   }
   
 }


/* This function returns the largest value */
/* in the int array */
 int largest(int * arr, int count)
 {

   int i=0,largest= *arr;

   for(i=0;i<count;i++)
   {
      if(*(arr+i) > largest)
      {
         largest = *(arr+i);
      }

     
   }

   return largest;

 }

