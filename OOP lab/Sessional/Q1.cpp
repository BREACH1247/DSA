#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    void getdetails()
    {
        cout << "Enter the name and age of the person: ";
        cin >> name >> age;
    }
};

class Student : public Person
{
public:
    int roll_no;
    void info()
    {
        getdetails();
        cout << "Roll number: ";
        cin >> roll_no;
    }
};

class Teacher : public Person
{
public:
    int salary;
    string subject;
    void Teacherinfo()
    {
        void getdetails();
        cout << "Teachers Teaching Subject: \n";
        cin >> subject;
        cout << "Teachers Salary: \n";
        cin >> salary;
    }

    void displaydetails()
    {

        cout << "teachers salary: "
             << salary<<endl;

        cout << "teachers subject "
             << subject<<endl;
    };
};

class CollegeStudent : public Student
{
public:
    int year;
    string major;
    void CollegeInfo()
    {
        void info();
        cout << "Students Current College Year:  ";cin >> year;
        cout << "Students College Major:  ";cin >> major;
    }

    void Printdetails()
    {

        cout << "Students Current year:  "<< year<<endl;

        cout << "Students Subject major:  "<< major<<endl;
    };
};

int main()
{
    Teacher T;
    CollegeStudent C;
    T.Teacherinfo();
    T.displaydetails();
    C.CollegeInfo();
    C.Printdetails();
}