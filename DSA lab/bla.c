#include <stdio.h>
void merge(int arr[], int l, int mid, int r)
{
int n1 = mid - l + 1;
int n2 = r - mid;
int a[n1];
int b[n2]; // temp array
for (int i = 0; i < n1; i++)
{
a[i] = arr[l + i];
}
for (int i = 0; i < n2; i++)
{
b[i] = arr[mid + 1 + i];
}
int i = 0;
int j = 0;
int k = l;
while (i < n1 && j < n2)
{
if (a[i] <= b[j])
{
arr[k] = a[i];
i++;
}
else
{
arr[k] = b[j];
j++;
}
k++;
}
if (j >= n2)
{
while (i < n1)
{
arr[k] = a[i];
i++;
k++;
}
}
else
{
while (j < n2)
{
arr[k] = b[j];
j++;
k++;
}
}
}
void mergeSort(int arr[], int l, int r)
{
if (l >= r)
{
return;
}
int mid = (l + r) / 2;
mergeSort(arr, l, mid);
mergeSort(arr, mid + 1, r);
merge(arr, l, mid, r);
}
void printArray(int a[], int size)
{
for (int i = 0; i < size; i++)
printf("%d ", a[i]);
}
int main()
{
int n;
printf("Enter the size of array : ");
scanf("%d", &n);
printf("\n");
int arr[n];
printf("Enter the elements of unsorted array : ");
for (int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
mergeSort(arr, 0, n - 1);
printArray(arr, n);
return 0;
}