#include<iostream>
using namespace std;
class XYZ;
class ABC 
 {
 public: 
 ABC() : numA(12) {}
 private:
 int numA;
 friend int add(ABC, XYZ);
 };
class XYZ 
 {
 public:
 XYZ() : numB(1) {}
 private:
 int numB;
 friend int add(ABC, XYZ);
 };
int add(ABC objectA, XYZ objectB) {
 return (objectA.numA + objectB.numB);
}
int main()
{
 ABC objectA;
 XYZ objectB;
 cout << "Sum: " << add(objectA, objectB);
 return 0;
 }