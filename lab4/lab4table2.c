//programme for lab4table2()
//your information goes below
/***************************************
* 22S - Lab4 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
************************************** **/


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


#define numROWS 20
#define numCOLUMNS 30

int main(int argc, char *argv[])
{
     char input_table[numROWS][numCOLUMNS];
     int current_row=0, row=0,  temprow=0, ageI, i=0, tempcol=0;
     char name[10]; char ageS[10]; char rateS[10];
     char subString[numCOLUMNS];
     float rateF;
  	
     printf("Enter name, age and rate: ");
     fgets(input_table[current_row], 30, stdin);   // read into table row directly. add a \n.  Don't change this line
	 
     while(input_table[current_row][0]!='x' && input_table[current_row][1]!='x' && input_table[current_row][2]!='x')      
     {    
	 /* now, may need to 'tokenize' the current line input  */	    
          

          sscanf(input_table[current_row],"%s %s %s",name,ageS,rateS);
          
          current_row++;
          

          while(name[i]!='\0')
          {
                input_table[current_row][tempcol] = toupper(name[i]);
                tempcol++;
                i++;
          }

           input_table[current_row][tempcol] = ' ';
           tempcol++;

           i=0;

          ageI = atoi(ageS) +10;
          sprintf(ageS, "%d", ageI);

           while(ageS[i]!='\0')
           {
               
                input_table[current_row][tempcol] = ageS[i];
                tempcol++;
                i++;
           }

           input_table[current_row][tempcol] = ' ';
           tempcol++;

           i=0;

          rateF = atof(rateS) + (atof(rateS))/2;
          sprintf(rateS, "%.2f", rateF);

           while(rateS[i]!='\0')
           {
               
                input_table[current_row][tempcol] = rateS[i];
                tempcol++;
                i++;
           }
           i=0;

           input_table[current_row][tempcol] = '\n';
           input_table[current_row][tempcol+1] = '\0';

           current_row++;
          
           tempcol = 0;
          

          printf("Enter name, age and rate: ");
          fgets(input_table[current_row], 30, stdin);


     }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row-by-row */
	for(row=0;row<current_row;row++)
     {
        printf("row[%d]:\t%s",row,input_table[row]);
        
     }

     return 0;
}

