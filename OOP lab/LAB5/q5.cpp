#include <iostream>
using namespace std;
 
#define MAX 10
 
class faculty
{
    private:
        char  name[30];
        char  department[30];

    public:
        //member function to get student's details
        void getDetails(void);
        //member function to print student's details
        void putDetails(void);
};
 
//member function definition, outside of the class
void faculty::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter the department";
    cin >> department;
    
}
 
//member function definition, outside of the class
void faculty::putDetails(void){
    cout << "Faculty details:\n";
    cout << "Name:"<< name << ",Department:" << department ;
}
 
int main()
{
    faculty std[MAX];       //array of objects creation
    int n,loop;
     
    cout << "Enter total number of faculty: ";
    cin >> n;
     
    for(loop=0;loop< n; loop++){
        cout << "Enter details of faculty " << loop+1 << ":\n";
        std[loop].getDetails();
    }
     
    cout << endl;
     
    for(loop=0;loop< n; loop++){
        cout << "Details of faculty " << (loop+1) << ":\n";
        std[loop].putDetails();
    }
     
    return 0;
}