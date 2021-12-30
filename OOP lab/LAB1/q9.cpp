#include<iostream>
using namespace std;
struct student
{
    int roll;
    string name;
    float marks;
};
int main(){
    struct student *s;
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    s=new struct student[n];
    int i;
    for(i=0;i<n;i++){
        cout<<"Enter the details of student "<<i+1<<endl;
        cin>>s[i].roll;
        cin>>s[i].name;
        cin>>s[i].marks;
    }
   cout<<"The list of students according to their rank is: "<<endl;
    int j,t;
    string temp;
    for (i = 0; i < n-1; i++)     
 
       for (j = 0; j < n-i-1; j++)
           if (s[j].marks < s[j+1].marks)
           {
               t=s[j].marks;
               s[j].marks=s[j+1].marks;
               s[j+1].marks=t;

               t=s[j].roll;
               s[j].roll=s[j+1].roll;
               s[j+1].roll=t;

               temp=s[j].name;
               s[j].name=s[j+1].name;
               s[j+1].name=temp;

           }
    cout<<"Roll"<<"\t"<<"name"<<"\t\t"<<"marks"<<"\t"<<"rank"<<endl;
    for(i=0;i<n;i++){
        cout<<s[i].roll<<"\t"<<s[i].name<<"\t\t"<<s[i].marks<<"\t"<<i+1<<endl;
    }
    delete(s);    
    
}