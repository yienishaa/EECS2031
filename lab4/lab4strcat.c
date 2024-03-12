//programme for my_strcat()
//your information goes below
/***************************************
* 22S - Lab4 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
************************************** **/

#include<stdio.h>
#include<string.h>

#define SIZES 30

void my_strcat(char a[], char b[]);

int main(){
   char a[SIZES];
   char b[SIZES];
   char c[SIZES];
   char d[SIZES];

   scanf("%s",a);
   scanf("%s",b);
   while ((strcmp(a,"xxx") != 0) || (strcmp(b,"xxx") !=0) )
   {
    
      strcpy(c,a); strcpy(d,b);

      strcat(a,b);
      my_strcat(c,d);
      
      printf("strcat:   %s\n", a); 
      printf("mystrcat: %s\n\n", c);



      scanf("%s",a);
      scanf("%s",b);

 
   }
}

//your own version of implmentation goes here
void my_strcat(char a[], char b[]){

   int i=0, j=0;

   while(a[i]!='\0')
   {
      i++;
   }

   while(b[j]!='\0')
   {
      a[i] = b[j];
      j++;
      i++;
   }
   a[i] = '\0';


}






















