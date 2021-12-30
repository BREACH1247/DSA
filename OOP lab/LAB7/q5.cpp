#include <bits/stdc++.h>
using namespace std;

#define ll long long

class String
{
public:
    char data[100];

    String()
    {
    }
    String(char s[])
    {
        strcpy(data, s);
    }

    String operator+(String &str)
    {
        String res;
        strcpy(res.data, strcat(data, str.data));
        return res;
    }
    String operator=(String &str)
    {
        String res;
        strcpy(res.data, str.data);
        return res;
    }
    void operator+=(String &str)
    {
        
        string s = data;
        string s2 = str.data;

        if (s.compare(s2) != 0)
        {
            if (s2.compare(s) > 0)
            {
                cout << s2<< " is greater than "<< s << endl;
            }
            else
            {
                cout << s2 << " is greater than "<< s << endl;
            }
        }
        else
            cout << s2 << " is equal to " << s << endl;
    }

    int Length()
    {
        string temp = data;
        
        cout<<temp.length()<<endl;

        return temp.length();
    }
};

int main()
{
    char str1[] = "ABC";
    char str2[] = "DEFG";
    String s1(str1);
    String s2(str2);
    String temp(str1);
    
    s1+=s2;
    String ans = s1 + s2;
    String ans2 = ans;

    cout<<ans2.data<<endl;
    temp+=ans;

    ans2.Length();

    return 0;
}