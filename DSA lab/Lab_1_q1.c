#include <iostream>

using namespace std;

void removeodd(int arr[],int& number)//{1,2,3,6,7,9,5,8};
{int count=0;
    for(int i=0; i<number; i++)
    {
        if(arr[i]%2!=0)
        {   
            int j=i+1;
            for(int k=i;k<number; k++)
        {
            arr[k]=arr[j]; 
            j++;
        }
            count++;
        }
    }
    number=number-count;
    for(int i=0; i<number; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size=8;
    int ary[8]={1,2,3,6,7,9,5,8};

    removeodd(ary, size);

    return 0;
}

output of the code above is 2 6 9 8