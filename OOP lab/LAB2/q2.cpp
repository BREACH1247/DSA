#include <iostream>
using namespace std;
void insertion(int arry[],int n);
int main(){
    int n;
    cin>>n;

    int arr[n];
    for (int v = 0; v < n; v++)
    {
        cin>>arr[v];
    }
    
    insertion(arr,n);
   
    cout<<endl;
}

void insertion(int arry[], int n){
     for (int i = 0; i < n-1 ; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if (arry[i]>arry[j])
            {
                int temp = arry[j];
                arry[j] = arry[i];
                arry[i] = temp;
            }
            
        }
        
    }
    for (int i =0;i<n;i++){
        cout<<arry[i]<<" ";
    }
}