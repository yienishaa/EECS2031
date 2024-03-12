/***************************************
* 22S - Lab2 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
************************************** **/

#include <stdio.h>

#define SIZE 10
int isPrime(int n);

main ()
{
  int i;
  int e=0;
  int p=0;
  int arr[SIZE];
  int arrEven[SIZE];
  int arrPrime[SIZE];

  srand(time(0));
  for( i = 0; i<SIZE; i++)
  {
    int ran = rand()%41 ;   // random number in range of [0,40] inclusive
    arr[i] = ran;
  }

  // display array
  printf("array [ ");
  for(i=0;i<SIZE;i++) 
  {
    printf("%d ",arr[i]);
  } 
  printf("]\n");

  // scan the array to find even and prime numbers, and put them in corresponding arrays
  // create two arrays of same size of arr, to hold even and prime numbers; you may add other variables as needed
  
  for(i=0;i<SIZE;i++)
  {
    if((arr[i]%2)==0)
    {
      arrEven[e] = arr[i];
      e++;
    }
    else
    {
      int isPrimeNum = isPrime(arr[i]);
      if(isPrimeNum==1 && arr[i]!=1)
      {
        arrPrime[p]= arr[i];
        p++;
      }
    }
  }

  
  // output even numbers
printf("%d even numbers: ",e);
  for(i=0; i<e;i++)
  {
    
	   printf("%d ",arrEven[i]);
  }

  printf("\n");
printf("%d prime numbers: ",p);

  for(i=0;i<p;i++)
    {
      
      printf("%d ",arrPrime[i]);
    }

  printf("\n");
  

  // output prime numbers

}

int isPrime(int n)
{
  int i=n;
  int j=2;

  for(j=2;j<i;j++)
  {
    if(n%j==0)
    {
      return 0;
    }
  }
  return 1;
}























