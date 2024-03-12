/***************************************
* 22SU - Lab01 *
* Author: Abeyratne, Yienisha *
* Email: yienisha@my.yorku.ca *
* eecs_username: Your eecs login user name *
* York Student #: 218462515
****************************************/

#include <stdio.h> 

main(){
  int c;
  int count = 0;
  int spaces = 0;
  int lines = 0;
  
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    
    if(c != '\n')
    {
      count++; //include spaces and '\n'
    }

    if(c == ' ')
    {
      spaces++;
    }

    if(c == '\n')
    {
      lines++;
    }

    c = getchar(); /* read next */
  }
  printf("# of chars: %d (# of blanks: %d)\n",count,spaces);
  printf("# of lines: %d\n",lines);

}

