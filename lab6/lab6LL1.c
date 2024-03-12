/* add your info here */
/***************************************
* 22S - Lab06 *
* Author: Last name, first name *
* Email: Your email address *
* eecs_username: Your eecs login user name *
* York Student #: Your student number
************************************** **/

#include <stdio.h>
#include <stdlib.h>

void insertBegining(int);
int len();
int get(int);

struct node { 
   int data;
   struct node * next;
};

struct node * head; 

main()
{
   head = NULL;

   insertBegining(100);
   insertBegining(200);
   insertBegining(300);
   insertBegining(400);   
   insertBegining(500);

   int i; 
   struct node * cur;
   for(cur= head; cur != NULL; cur= cur->next)
     printf("%d ", cur->data);
   printf("\n");

   printf("len: %d\n", len() );
   printf("get(0): %d\n", get(0));
   printf("get(1): %d\n", get(1));
   printf("get(3): %d\n", get(3));

}   

/* insert at the begining of the list*/
void insertBegining(int dat){
   struct node newNode;
   newNode.data = dat;

   newNode.next = head;
   
   head = &newNode;

}

/*  'length' info of the list */
int len(){ 
   return 0;
}

/* get value at index 'index' */
int get(int index){
   return 0;
}
