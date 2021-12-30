#include <iostream>
using namespace std;
class Distance
{
private:
    float dist1;
    float dist2;
    

public:
    void read();
  
    void display();
 
    void add();
  
      void substract();
  
};
    void Distance::read()
    {
        cout << "enter the first distance in metres" << endl;
        cin >> dist1;
        cout << "enter the second distance in metres" << endl;
        cin >> dist2;
        
    }
    void Distance::display()
    {
        
        cout << "the value of  first distance= " << dist1 <<"metres"<< endl;
         cout << "the value of  second distance= " << dist2 <<"metres"<< endl;
        
    }
    void Distance::add()
    {
         float sum=dist1+dist2;
        cout<<"The sum of distances are: "<<sum<<endl;
    }
      void Distance::substract()
    {
         float sub;
         if (dist1>dist2)
          sub=dist1-dist2;
          else
          sub=dist2-dist1;
        cout<<"The sum of distances are: "<<sub;
    }

int main()
{
Distance d;
d.read();
d.display();
d.add();
d.substract();

}