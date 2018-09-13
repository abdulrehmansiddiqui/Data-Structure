#include <stdio.h>
#include <string.h>
int main (){

	char *abdul , rehman[9999];
		printf("Enter the sentence you want to do strtok  = ");
	gets(rehman);

			abdul = strtok (rehman," ,.-");

        printf("\t Here you Go \n");
        
	while (abdul != NULL){
    	printf ("\t %s\n",abdul);
    		abdul = strtok (NULL, " ,.-");
	}
	
	return 0;
}
