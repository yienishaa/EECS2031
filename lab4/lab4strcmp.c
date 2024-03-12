//programme for mystrcmp()
//your info goes below
/***************************************
* 22S - Lab4 *
* Author: Abeyratne, Idame *
* Email: yienisha@my.yorku.ca *
* eecs_username: yienisha *
* York Student #: 218462515
************************************** **/ 

#include<stdio.h>
#include<string.h>

#define SIZES 30

int my_strcmp(char a[], char b[]);

int main(){
   char a[SIZES];
   char b[SIZES];
   
   scanf("%s", a); 
   scanf("%s",b);
    
   while ( (strcmp(a,"xxx") != 0) || (strcmp(b,"xxx") !=0) ){
      int resu = strcmp(a,b); 
      
      if (resu<0) 
         printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if ( resu>0 ) 
         printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else 
         printf("\"%s\" and \"%s\" are same\n", a, b);
      
      int resu2 = my_strcmp(a,b);
      
      if ( resu2<0 ) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if ( resu2>0 ) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" are same\n\n", a,b);

      scanf("%s", a); 
      scanf("%s",b);

   }
}

// your own version of implementation goes here
int my_strcmp(char a[], char b[])
{
   
   int compare =0;
   int i = 0;

   int loop;



   while(a[i]!='\0' || b[i]!='\0')
   {
      if(a[i]=='\0' && b[i] != '\0')
      {
         compare--;
      }
      else if(a[i]=='\0' && b[i] != '\0')
      {
         compare++;
      }
      
      if(a[i] > b[i])
      {
         compare++;
      }
      else if(a[i] < b[i])
      {
         compare--;
      }
      i++;
   }

return compare;

}





















