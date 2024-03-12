/***************************************
* 22S - Lab03 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* Yorku Student #: Your student number
************************************** **/

#include <stdio.h>

float func_IF(int op1, char operator, float op2);
float func_II(int op1, char operator, int op2);
float func_FF(float op1, char operator, float op2);


main(){

 int op1; float op2;  char operator;
 float resu, resu2, resu3;
 
 float a = 9/2;
 float b = 9*1.0/2;  // force 9 to be converted before /
 float c = 9/2*1.0;  // force 2 to be converted before /, but not working
 float c2 = 9/(2*1.0); // force 2 to be converted before /  
 float d = (float)9/2;  // cast 9 before /
 float e =  9/(float)2; // cast 2 before /
 float f = (float) (9/2); // cast after /, nope
 printf("9/2=%f  9*1.0/2=%f  9/2*1.0=%f   9/(2*1.0)=%f\n\n", a, b, c, c2);
 printf("(float)9/2=%f  9/(float)2=%f  (float)(9/2)=%f\n\n", d, e, f);
  
 // conversion in arithemetic
 printf("3.0*9/2/4=%f  9/2*3.0/4=%f  9*3/2*3.0/4=%f\n\n", 3.0*9/2/4, 9/2*3.0/4, 9/2*3.0/4);
 
 // conversion in assignment
 float f2  = 3.96;
 float f3 = 3.03;
 int i = f2; int j = f3;
 printf("i: %d  j: %d\n", i, j);


 //Answers start here

        printf("Enter operand_1 operator operand_2 seperated by blanks> ");
        scanf("%d %c %f",&op1,&operator,&op2);

 while(op1 >-1 && op2>-1)
 {
        
        resu = func_IF(op1,operator,op2);
        resu2 = func_FF(op1,operator,op2);
        resu3 = func_II(op1,operator,op2);

        printf("Your input '%d %c %f' result in\n",op1,operator,op2);
        printf("%f (func_IF)\n",resu);
        printf("%f (func_II)\n",resu3);
        printf("%f (func_FF)\n",resu2);

        printf("\nEnter operand_1 operator operand_2 seperated by blanks> ");
        scanf("%d %c %f",&op1,&operator,&op2);
 }
 

}
 
float func_IF(int op1, char operator, float op2)
{

   if(operator=='+')
   {
        return (op1 + op2);
   }
   else if(operator=='-')
   {
        return (op1 - op2);
   }
   else if(operator=='*')
   {
        return (op1 * op2);
   }
   else if(operator=='/')
   {
        return (op1 / op2);
   }
}

float func_II(int op1, char operator, int op2)
{  
    if(operator=='+')
   {
        return (op1 + op2);
   }
   else if(operator=='-')
   {
        return (op1 - op2);
   }
   else if(operator=='*')
   {
        return (op1 * op2);
   }
   else if(operator=='/')
   {
        return (op1 / op2);
   }
}

float func_FF(float op1, char operator, float op2)
{
   if(operator=='+')
   {
        return (op1 + op2);
   }
   else if(operator=='-')
   {
        return (op1 - op2);
   }
   else if(operator=='*')
   {
        return (op1 * op2);
   }
   else if(operator=='/')
   {
        return (op1 / op2);
   }
}

 
/*  your explanations 

We get the user input as 
op1 = int
op2 = float

the func_IF variables which gets(catches) the values which are sent from the main function uses the same variable types
as the variables that hold the user inputs.

func_FF is even better as it uses float as the function variables, which hold much more accurate data. (wider than int)

however the func_II uses int for its function variables, so the accuracy of the float variable is lost, because the int variable
does not hold values after the decimal point. 

*/
