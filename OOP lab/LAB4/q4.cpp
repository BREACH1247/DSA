#include <iostream>
using namespace std;
class student
{
private:
    char name[50];
    int roll_no;
    char gender[10];
    int marks[3];

public:
    inline void getname();
    inline void getroll();
    inline void getgender();
    void getmarks();
    float getaverage();
};
float student::getaverage()
{
    int sum = 0.0;
    float avg;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum / 3.0;

    return avg;
}

void student::getname()
{
    cin >> name;
}

void student::getroll()
{
    cin >> roll_no;
}
void student::getgender()
{
    cin >> gender;
}
void student::getmarks()
{

    for (int i = 0; i < 3; i++)
    {
        cout << "enter the marks " << i + 1 << endl;

        cin >> marks[i];
    }
    cout << endl
         << "the averge of all marks is: " << getaverage();
}
int main()
{
    student s[3];

    for (int i = 0; i < 3; i++)
    {
        cout << endl
             << "enter the name " << endl;
        s[i].getname();
        cout << "enter the gender " << endl;
        s[i].getgender();
        cout << "enter the rollno." << endl;
        s[i].getroll();
        cout << "enter the average of 3 marks" << endl;
        s[i].getmarks();
    }
}
