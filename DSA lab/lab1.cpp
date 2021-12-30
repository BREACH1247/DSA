#include<iostream>

using namespace std;

int main(){
    int smallest, secondsmallest;
  int array[10], size, i;
  printf("\n Total elements: ");
  scanf("%d", &size);
  printf("\nEnter %d elements: ", size);
  for (i = 0 ; i < size; i++)
    scanf("%d", &array[i]);
  if (array[0] < array[1]) {
    smallest = array[0];
    secondsmallest = array[1];
  }
  else {
    smallest = array[1];
    secondsmallest = array[0];
  }
  for (i = 2; i < size; i++) {
    if (array[i] < smallest) {
        secondsmallest = smallest;
        smallest = array[i];
    }
    else if (array[i] < secondsmallest) {
        secondsmallest = array[i];
    }
  }
  printf(" \nSecond smallest element is %d", secondsmallest);
  printf(" \n smallest element is %d", smallest);

    

}