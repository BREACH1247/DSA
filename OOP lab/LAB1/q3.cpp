#include<iostream>
#include<cstdlib>
using namespace std;

bool test(int x, int y)
        {
            return abs(x % 10) == abs(y % 10);
        }
        
int main() 
 {
  cout << test(123, 456) << endl;  
  cout << test(12, 512) << endl;  
  cout << test(7, 87) << endl;  
  cout << test(12, 45) << endl;  
  return 0;    
}