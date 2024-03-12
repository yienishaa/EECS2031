/***************************************
* 22S - Lab03 *
* Author: Abeyratne, Yienisha
* Email: yienisha@my.yorku.ca
* eecs_username: yienisha
* Yorku Student #: 218462515
************************************** **/

#include <stdio.h>
#include <stdlib.h>  // for atoi

#define SIZE 10

int my_atoi (char c[], int base);
int isQuit(char c[]);
 
int main(){
  int a,b;
  char arr [SIZE];
  int base;

  printf("Enter a word of positive number and base, or 'quit': " );
  scanf("%s %d", arr , &base);
  while(isQuit(arr)!=1)
  {
    printf("%s\n", arr);

    //a = atoi(arr);
    //printf("atoi:    %d (%#o, %#X)\t%d\t%d\n", a,a,a, a*2, a*a);

    b = my_atoi(arr,base);
    printf("my_atoi: %d (%#o, %#X)\t%d\t%d\n", b,b,b, b*2, b*b);

    printf("Enter a word of positive number and base, or 'quit': " );
    scanf("%s %d", arr , &base);

   
  }

  return 0;

}

/* convert an array of digit characters into a decimal int */

/* Recommended textbook scans from left to right.
 Here you should scan from right to left. This is a little more complicated 
 but more straightforward (IMHO) */

int my_atoi (char c[], int base)
{ 

    int i, n, units;
    n=0;
    units = 1;
    printf("%d\n",base);

    for(i=10; i>=0; i--)
    {
        if(c[i]>='0' && c[i]<=('0'+(base-1)))
        {
            n = n + (((1 * (units)) * (c[i] - '0')));
            
            units = units * (base);
        }
        
    }
    return n;

}

int isQuit(char c[])
{
    if(c[0]=='q' && c[1]=='u' && c[2]=='i' && c[3]=='t' && c[4]=='\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
















