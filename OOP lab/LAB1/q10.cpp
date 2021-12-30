#include<iostream>
using namespace std;
struct employee
{
    string name;
    string id;
    string dob;
    float basic;
    
};
int main(){
    struct employee *e;
    int n;
    cout<<"Enter the number of employees: "<<endl;
    cin>>n;
    e=new struct employee[n];
    int i;
    for(i=0;i<n;i++){
        cout<<"Enter the details of employee "<<i+1<<endl;
        cin>>e[i].name;
        cin>>e[i].id;
        cin>>e[i].dob;
        cin>>e[i].basic;
    }

    float t;
    int j;
    string temp;
    for (i = 0; i < n-1; i++)     
 
       for (j = 0; j < n-i-1; j++)
           if (e[j].basic < e[j+1].basic)
           {
               t=e[j].basic;
               e[j].basic=e[j+1].basic;
               e[j+1].basic=t;


               temp=e[j].name;
               e[j].name=e[j+1].name;
               e[j+1].name=temp;

               temp=e[j].id;
               e[j].id=e[j+1].id;
               e[j+1].id=temp;

               temp=e[j].dob;
               e[j].dob=e[j+1].dob;
               e[j+1].dob=temp;

           }

    cout<<"Employee having highest basic is: "<<endl;
    cout<<"id"<<"\t"<<"name"<<"\t\t"<<"date of birth"<<"\t"<<"Basic"<<endl;
  cout<<e[0].id<<"\t"<<e[0].name<<"\t\t"<<e[0].dob<<"\t"<<e[0].basic<<endl;  
}