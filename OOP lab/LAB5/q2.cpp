#include<iostream>
using namespace std;
class Fraction{
    private :
    int numerator;
    int denominator;

    public:
    Fraction(int numerator,int denominator){
        this ->numerator = numerator;
        this ->denominator = denominator;
    }
    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
    Fraction add(Fraction const  f2){
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x*numerator +(y*f2.numerator);
        Fraction fNew(num,lcm);
        return fNew;

    }
    Fraction substract(Fraction const  f2){
        int lcm = denominator * f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num = x*numerator -(y*f2.numerator);
        Fraction fNew(num,lcm);
        return fNew;
    }
    Fraction multiply(Fraction const &f2){
        int n = numerator *f2.numerator;
        int d = denominator*f2.denominator;
        Fraction fNew(n,d);
        return fNew;
    }
    
};
int main(){
        Fraction f1(10,2);
        Fraction f2(15,4);
        Fraction f3 = f1.add(f2);
        Fraction f4 = f1.substract(f2);
        Fraction f5 = f1.multiply(f2);
        f3.print();
        f4.print();
        f5.print();
    }