#include <stdio.h>

#define SIZE 10

//int isPrime(int n);

main ()
{
  int i;
  int arr[SIZE];
  srand(time(0));
  for( i = 0; i<SIZE; i++){
    int ran = rand()%41 ;   // random number in range of [0,40] inclusive
    arr[i] = ran;
  }

  // display array
  printf("array [ ");
  for(i=0; i<SIZE; i++){
    printf("%d ",arr[i]);
  }
      printf("]\n");

 
  // scan the array to find even and prime numbers, and put them in corresponding arrays
  // create two arrays of same size of arr, to hold even and prime numbers; you may add other variables as needed

      //      int k [41]= {1,10};

   int primeArr[SIZE]; int prime=0;
   int evenArr[SIZE];   int even=0;

  for(i=0; i<SIZE; i++){
    int value = arr[i];
    if(value %2 == 0){
      evenArr [even] = value;
      even++;
  }
    if(isPrime(value))
{

      primeArr[prime] = value;
        prime++;
     }

  // output even numbers
         printf("%d even numbers: ", even);
    for(i = 0; i< even; i++)
      printf("%d ", evenArr[i]);
 
 
  // output prime numbers

     printf("\n");
    printf("%d prime numbers: ", even);
     for(i=0; i<prime; i++)
       //for(i=2; i <=prime/2; i++)
      printf("%d ", primeArr[i]);
     printf("\n");
  }

}
int isPrime(int n);

if(n <= 1)
  return 0;
 
int i;
for(i =2; i <= n/2; i++)
  if(n%i == 0)
     return 0;

return 1;
}