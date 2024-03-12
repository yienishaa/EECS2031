//programme for runningAveGlobal()
//your infomation goes below
/***************************************
* 22S - Lab4 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
************************************** **/


void r_avg (void);
printf();
scanf();

int main(int argc, char *argv[])
{
    int input;

    printf("Enter number (-1 to quit): ");
    scanf("%d", &input);
	
    while(input != -1){	
      
      r_avg();

      printf("Enter number (-1 to quit): ");
      scanf("%d", &input);
	
     }
	 
     return 0;
}

