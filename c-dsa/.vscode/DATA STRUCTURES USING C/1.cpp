#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        long long D,d,p,q;

        cin>> D>>d>>p>>q;
        long long z = D/d;
        if(D%d==0){
            long long result = d*z*p+q*(z-1)*(z)*d/2;
            cout<<result<<"\n";

        }
        else{
            long long result = d*z*p + q*(z-1)*(z)*d/2;
            long long reminder = D%d;
            result = result + reminder*(p+z*q);

            cout<<result<<"\n";
        }
        return 0;
    }
    
}