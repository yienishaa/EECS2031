/* your info here */
/***************************************
* 22S - Lab06 *

************************************** **/

/* Reads in a list of strings from the keyboard, re-organize them */
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAX_LINES 35
 #define MAX_COLS  50 

void print2D(char [][MAX_COLS], int );
void exchange2D(char [][MAX_COLS], int );


 main()
 {
    int current_row=0;
    char temp[MAX_COLS];
     char inputs[MAX_LINES][MAX_COLS];
     printf("sizeof inputs: %d\n\n", sizeof(inputs));
 
     /* Read in the lines from the keyboard now, using function fgets() */
     printf("Enter string: ");
     fgets(inputs[current_row],MAX_COLS,stdin);

     
     while (strcmp(inputs[current_row],"xxx\n\0")!=0)
     {
        current_row++;
        printf("Enter string: ");
        fgets(inputs[current_row],MAX_COLS,stdin);
     }
     printf("\n");
     
     // display the array by calling function print2D(...)
     print2D(inputs,current_row);

     // swap the first and second row here
     strcpy(temp,inputs[1]);
     strcpy(inputs[1],inputs[0]);
     strcpy(inputs[0],temp);
  
     // call sub-function exchange2D() to swap some other rows
     exchange2D(inputs,current_row);

     printf("\n== after swapping ==\n");
     
     // display the exchanged array by calling function print2D() 
     print2D(inputs,current_row);
	 
     
     return 0;
 }


 // do exchange of rows. have to involve data movement 
 void exchange2D(char p[][MAX_COLS], int n)
 {
    char temp[MAX_COLS];
    int i=0;

    for (i = 2; i < n-1; i=i+2)
    {
        strcpy(temp,p[i+1]);
        strcpy(p[i+1],p[i]);
        strcpy(p[i],temp);
    }
 }

 // print the 2D array, row by row
 void print2D(char p[][MAX_COLS], int n)
 {
    int i;

    for (i = 0; i < n; ++i)
    {
        printf("[%d]: %s",i,p[i]);
    }
 }                        

