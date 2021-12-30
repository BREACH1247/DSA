#include<iostream>  
#include<bits/stdc++.h>
using namespace std;
double factorial(int);  
void   calc(float, float*);  
  
int main()  
{  
    int   x;  
    float radian, result = 0;  
  
    cout<<"Enter value of x in degrees\n";  
    cin>>x;   
  
    radian = x * (3.14159 / 180.0);  
  
    calc(radian, &result);  
    cout<<"Sin(%d) = %f\n"<<x<<result;
    return 0;  
}  
  
void calc(float num, float *res)  
{  
    int count, n = 1, sign = 1;  
  
    for(count = 1; (n <= 10); count += 2)  
    {  
       *res  +=  sign * ( pow(num, count) / factorial(count) );  
        n    +=  1;  
        sign *= -1;  
    }  
}  
  
double factorial(int num)  
{  
    int    count;  
    double sum = 1;  
  
    for(count = 1; count <= num; count++)  
    {  
        sum *= count;  
    }  
    return(sum);  
} 