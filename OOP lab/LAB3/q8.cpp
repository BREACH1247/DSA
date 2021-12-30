#include<iostream>  
using namespace std;
void Senior( float P ,float R ,float T){
      
      float  SI  = (P*R*T)/100;   
        cout<<"\n Simple Interest is : "<< SI; 
}
void Junior( float P ,float R ,float T){
       
      float  SI  = (P*R*T)/100;   
        printf("\n\n Simple Interest is : %f", SI); 
}

int main()   
    {   
        float P , R , T , SI ;  
        int a;
        cout<<"Enter age: "; 
        
        cin>>a;
        cout<<"Enter principle: "; 
        
        cin>>P;
        cout<<"Enter time: "; 
        
        cin>>T;

    
        if(a<60){
            Junior(P,R=10,T);
        }else{
            Senior(P,R=12,T);
        }

        return (0);  
    }  