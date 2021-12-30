#include <iostream>
using namespace std;


void swap(int *a, int *b);

void segregateEvenOdd(int arr[], int size)
{
	
	int left = 0, right = size-1;
	while (left < right)
	{
		
		while (arr[left] % 2 == 0 && left < right)
			left++;

		while (arr[right] % 2 == 1 && left < right)
			right--;

		if (left < right)
		{
		
			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
	}
}


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
 int n,i;
    cout<<"enter the size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enther the value of array \n";
    for(int i=0;i<n;i++)
    {  
        cin>>arr[i];
    }

	segregateEvenOdd(arr, n);

	cout <<"Array after segregation ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}