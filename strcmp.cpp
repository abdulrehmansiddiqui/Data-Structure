#include <stdio.h>
#include <string.h>
int main(){
	
    char abdul[9999] , rehman[9999];
     
     	printf("Input 1st Character =");
     		scanf("%s", abdul);
     	printf("Input 2nd Character =");
     		scanf("%s", rehman);
     
    if (strcmp(abdul, rehman) ==0){
    	printf("\n  Are equal :)");
    }
	else{
        printf("\n Not equal :( ");
    }
	return 0;
}
