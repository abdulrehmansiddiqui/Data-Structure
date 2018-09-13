#include <stdio.h>
#include <string.h>
int main(){
	
	int x , l;
    char y[20] , z[20];

		printf("Input what word you want to copy = ");
    		gets(y);

    	printf("How many time you want to print = ");
   			scanf( "%d" , &l   )  ;

    		strcpy(z,y);
    	
		printf("Here you are = \n");
    		for(  x = 1 ;  x <= l ; x++){
    			puts(z);
			}
    		
    return 0;
}


