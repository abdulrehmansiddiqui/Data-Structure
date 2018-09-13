#include<stdio.h>
#include<string.h>
main(){
	
	char first[9999] , last[9999] ;
	printf("Enter first pra:");
		gets(first);
	
	printf("Enter last pra:");
		gets(last);
	
	strcat(strcat(first, " ") , last) ;
	printf("\n combine : %s" ,first ) ;
		 
}
