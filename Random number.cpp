#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int c, n , e , m;
	printf("Enter the number of random numbers you want\n");
	scanf("%d", &e);

	printf("Enter the maximum value of random number\n");
	scanf("%d", &m);

	printf("Ten random numbers in 1 to 100\n");
 
		for (c = 1; c <= e; c++){
			n = rand() % m + 1;
    		printf("%d\n", n);
  }
 
  return 0;
}
