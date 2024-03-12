/* your info here */
/***************************************
* 22S - Lab06 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
************************************** **/

/* Reads in a list of strings from the keyboard, re-organize them */
 /* and then displays them on the screen. */

 #include <stdlib.h>
 #include <stdio.h>
 #include <string.h>

 #define MAX_LINES 35
 #define MAX_COLS  50 

 main()
 {
     char inputs[MAX_LINES][MAX_COLS];
     printf("sizeof inputs: %d\n\n", sizeof inputs);
 
     /* Read in the lines from the keyboard now, using function fgets() */
     ....
     
     while (  )
     {
     
     }
     printf("\n");
     
     // display the array by calling function print2D(...)

     // swap the first and second row here
  
     // call sub-function exchange2D() to swap some other rows

     printf("\n== after swapping ==\n");
     
     // display the exchanged array by calling function print2D() 

	 
     
     return 0;
 }


 // do exchange of rows. have to involve data movement 
 void exchange2D(char p[][MAXCOLS], int n)
 {
 }

 // print the 2D array, row by row
 void print2D(char p[][MAXCOLS], int n)
 {
 }                        

