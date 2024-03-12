/***************************************
* 22SU - Lab01 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
****************************************/

#include <stdio.h> 

main(){
  int c;
  int count = 0;
  
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    
    if(c != '\n')
    {
      count++; //include spaces and '\n'
    }

    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);

}

