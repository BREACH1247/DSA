#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, *ptr, sum = 0;
  int first,second;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  ptr = (int*) malloc(n * sizeof(int));
 
  if(ptr == NULL) {
    printf("Error! memory not allocated.");
    exit(0);
  }

  printf("Enter elements: ");
  for(i = 0; i < n; ++i) {
    scanf("%d", &ptr[i]);
   
  }

  first = second = 0;  
	   
	for (i = 0; i < n; i++)
	{
		if(ptr[i] > first)
		{
			second = first;
			first = ptr[i];
		}
		else if(ptr[i] > second && ptr[i] < first)
		{
			second = ptr[i];
		}	
	}
	printf("\n The Largest Number in this Array =  %d", first);
	printf("\n The Second Largest Number in this Array =  %d", second);
	
}