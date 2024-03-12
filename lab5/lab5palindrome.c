// your info goes here
/***************************************
* 22S - Lab05 *
* Author: Abeyratne, Idame *
* Email: yienisha@my.yorku.ca *
* eecs_username: yienisha *
* York Student #: 218462515
************************************** **/

#include <stdio.h>
#include <string.h>

#define SIZE 36

//... more headers, declarations, if needed
int isPalindrome (char *);
void printReverse(char *);


int main ()
{   
   int result;  char c; int i;  int count=0;
   char arr[SIZE];
  
   fgets(arr,SIZE,stdin);
   while (strcmp(arr,"quit\n")!=0)
   {
      
      *(arr+strlen(arr)-1) ='\0';    // remove the trailing manually \n

      // print backward
      printReverse(arr);
   
      if (isPalindrome (arr)) 
         printf ("\nIs a palindrome.\n\n");
      else 
         printf ("\nNot a palindrome.\n\n");
 
      fgets(arr,SIZE,stdin);
    }
    return 0;
}


// assume char \n has already been removed manually
int isPalindrome (char * str)
{

   char * strEnd = str+strlen(str)-1;
   int i=0;
   int match=0;
   
   for(i=0;i<strlen(str);i++)
   {
      if(*(str+i) == *(strEnd-i))
      {
         match=match+1;
      }
      else
      {
         return 0;
      }
      
   }

   return match;

}

// assume char \n has already been removed manually
void printReverse(char * str)
{
   int i=strlen(str);

   for(i=strlen(str);i>=0;i--)
   {
      printf("%c",*(str+i));
   }

}

