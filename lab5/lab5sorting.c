//your info goes here

/***************************************
* 22S - Lab05 *
* Author: Abeyratne, Idame *
* Email: yienisha@my.yorku.ca *
* eecs_username: yienisha *
* York Student #: 218462515
************************************** **/


#include <stdio.h>
#include <string.h>

#define SIZE 46 

void sortArr(char *);
void sortArr2(char *);

int main()
{
   char arr[SIZE]; char arrB[SIZE];
   fgets(arr,SIZE,stdin);
   while (strcmp(arr,"quit\n")!=0)
   {
       *(arr+strlen(arr)-1) ='\0'; // manually remove the trailing \n
       
       
       strcpy(arrB, arr);
       
       sortArr(arr);
       printf("%s\n", arr);

       sortArr2(arrB);
       printf("%s\n\n", arrB);

       fgets(arr,SIZE,stdin);

    }
   return 0;
}

void sortArr(char *ptr)
{
   /*bubble sort */

   int length = strlen(ptr);
   int i=0,j=0;
   char temp;

   for(i=0;i<=length-2;i++)
   {
      for(j=length-1;j>=i+1;j--)
      {
         if(*(ptr+j) < *(ptr+(j-1)))
         {
            temp = *(ptr+j);

            *(ptr+j) = *(ptr+(j-1));
            *(ptr+(j-1)) = temp;
         }
      }
   }
}

void sortArr2(char *ptr2)
{
   /*selection sort */

   int length = strlen(ptr2);
   int i=0,j=0;
   char temp,smallest;

   for(i=0;i<=length-2;i++)
   {
      smallest = i;

      for(j=i+1;j<=length-1;j++)
      {
         if(*(ptr2+j) < *(ptr2+smallest))
         {
            
            smallest = j;
         }

         
      }

      temp = *(ptr2+i);

      *(ptr2+i) = *(ptr2+smallest);
      *(ptr2+smallest) = temp;

      
      
   }

}
























