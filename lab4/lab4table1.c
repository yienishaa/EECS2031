/*programme for lab4table1()
your information goes below */
/***************************************
* 22S - Lab4 *
* Author: Abeyratne, Idame *
* Email: yienisha@my.yorku.ca *
* eecs_username: yienisha *
* York Student #: 218462515
************************************** **/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

 
#define numROWS 20
#define numCOLUMNS 30

int main(int argc, char *argv[])
{
    char inputs_table [numROWS][numCOLUMNS];
    char name[10]; char ageS[10]; char rateS[10]; char tempname[10];
    int  temprow=0,tempcol=0,row=0,col=0, ageI;
    float rateF;
		
    printf("Enter name, age and rate: ");
    scanf("%s %s  %s", name, ageS, rateS); 
       
    while (strcmp(name,"xxx")!=0)        
    {  
	   int j=0;

       for(j=0;j<2;j++)
       {
            int i=0;

            if(j==1)
            {
                while(name[i]!='\0')
                {
                    name[i] = toupper(name[i]);
                    i++;
                }

                ageI = atoi(ageS) +10;
                sprintf(ageS, "%d", ageI);

                rateF = atof(rateS) + (atof(rateS))/2;
                sprintf(rateS, "%.2f", rateF);

                i=0;

            }
            while(name[i]!='\0')
           {
                inputs_table[temprow][tempcol] = name[i];
                tempcol++;
                i++;
           }

           inputs_table[temprow][tempcol] = ' ';
           tempcol++;

           i=0;
           while(ageS[i]!='\0')
           {
                inputs_table[temprow][tempcol] = ageS[i];
                tempcol++;
                i++;
           }

           inputs_table[temprow][tempcol] = ' ';
           tempcol++;

           i=0;

           while(rateS[i]!='\0')
           {
                inputs_table[temprow][tempcol] = rateS[i];
                tempcol++;
                i++;
           }
           
           inputs_table[temprow][tempcol] = '\0';

           temprow++;
           tempcol = 0;

           
       }
       


       /* now read inputs again using function scanf(%s %s %s) */ 
        printf("Enter name, age and rate: ");
        scanf("%s %s  %s", name, ageS, rateS); 
           
    }
    
     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the input_table row-by-row */      
	
    for(row=0;row<temprow;row++)
    {
        printf("row[%d]:\t%s\n",row,inputs_table[row]);
        col++;
    }

     return 0;
}

