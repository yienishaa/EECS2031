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
  int a = 0;
 
  c = getchar();
  while(c != EOF) /* no end of file*/
  { 
    count++; //include spaces and '\n'
    if(c == 'a')
    {
      a++;
    }

    c = getchar(); /* read next */
  }
  printf("# of chars: %d\n",count);
  printf("# of char 'a': %d\n",a);


}

