#include <iostream>
using namespace std;
class BBC;

class KBC{
    private:
    	int a,b;
    	friend void compare(KBC n1,BBC n2);
    public:
        
        void getData(){
            cout<<"Enter the value of a: ";
            cin>>a;
            cout<<"\nEnter the value of b: ";
            cin>>b;
        }
    	
};


class BBC {
    private:
    	int c;
    	friend void compare(KBC n1,BBC n2);
    public:
        void getData(){
                cout<<"\nEnter the value of c: ";
                cin>>c;
            }
        void max(){
            
        }
};


void compare(KBC n1,BBC n2) {
    if(n1.a >= n1.b && n1.a >= n2.c)
        cout << "Largest number: " << n1.a;

    if(n1.b >= n1.a && n1.b >= n2.c)
        cout << "Largest number: " << n1.b;
    
    if(n2.c >= n1.a && n2.c >= n1.b)
        cout << "Largest number: " << n2.c;
}
int main (){
    KBC n1;
    BBC n2;
    n1.getData();
    n2.getData();
    compare(n1,n2);
	return 0;
}