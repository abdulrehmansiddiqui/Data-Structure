#include <stdio.h>
int main()
{
  int n, array[1000], c, d, t;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
	for (c = 0; c < n; c++) {
    	scanf("%d", &array[c]);
  	}
  
	for (c = 1 ; c <= n - 1; c++) {
		while ( c > 0 && array[c] < array[c-1]) {
    	  t          = array[c];
    	  array[c]   = array[c-1];
    	  array[c-1] = t;
    	  c--;    }  }
  printf("Sorted list in ascending order:\n");
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);}
  return 0;}

