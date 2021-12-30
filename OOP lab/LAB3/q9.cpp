#include<iostream>
using namespace std;

int main()
{
	float cbd_Length, cbd_Width, cbd_Height, cbd_sa, cbd_Volume, cbd_LSA;
	
	cout << "\nPlease Enter the Length of a Cuboid = ";
	cin >> cbd_Length;
	
	cout << "\nPlease Enter the Width of a Cuboid = ";
	cin >> cbd_Width;
	
	cout << "\nPlease Enter the Height of a Cuboid = ";
	cin >> cbd_Height;
	
	
	cbd_Volume = cbd_Length * cbd_Width * cbd_Height;
	
	
	
	cout << "\nThe Volume of a Cuboid                =  " << cbd_Volume;
	
		
 	return 0;
}