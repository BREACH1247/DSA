#include <iostream>
using namespace std;
class Student
{
public:
string name;
int roll_num;
void getdetails()
{
cout << "Enter the name and roll number of the student: ";
cin >> name >> roll_num;
}
};
class Exam : virtual public Student
{
public:
int e_grades;
void e_getgrades()
{
getdetails();
cout << "enter the exam marks: ";
cin >> e_grades;
}
};
class Sports : public Student
{
public:
int s_grades;
void s_getgrades()
{
cout << "enter the sports marks: ";
cin >> s_grades;
}
};
class Result : public Sports, public Exam
{
public:
char fr;
void getresult()
{
int m = e_grades + s_grades;
m = m / 2;
if (m >= 90)
fr = 'O';
else if (m >= 80 && m < 90)
fr = 'E';
else if (m >= 70 && m < 80)
fr = 'A';
else if (m >= 60 && m < 70)
fr = 'B';
else if (m >= 50 && m < 35)
fr = 'C';
else
fr = 'D';
}
void display()
{ 
    cout << "The final grade of the student is: " << fr << endl; 
    
}
};
int main()
{
Result r;
r.e_getgrades();
r.s_getgrades();
r.getresult();
r.display();
}
