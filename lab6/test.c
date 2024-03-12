#include <stdio.h>
#include <string.h>

main(){

char * arr[] = {"Hello", "good", "morning", "everyone"};

printf("%d", strlen (*arr+2)  );

//printf("%d", strlen( **(arr+2) ) );

//printf("%s", strlen( *(arr+2) ) );

printf("%d", strlen ( &arr[2]) );

printf("%d", strlen(arr[2]));

printf("%d", strlen( *(arr[2]) ) );

}