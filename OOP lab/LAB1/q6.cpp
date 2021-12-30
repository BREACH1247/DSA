#include<iostream>
using namespace std;
void prime(int N,int E){
    int i,j,flag;
    for(i=N;i<=E;i++){
        flag =1;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                flag =0;
                break;
            }
        }
        if(flag)
        cout<<i<<endl;
    }
}
int main(){
    int N,E;
    cout<<"enter the range"<<endl;
    cin>>N;
    cin>>E;
    prime(N,E);
}