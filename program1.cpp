#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    string branch;
    string subject;
    string year;
    string result;
};
int main()
{
    Student s1;
    s1.name="Tarushi";
    s1.branch="ENTC";
    s1.subject="C++";
    s1.result="8.6";
    s1.year="2nd Year";
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Branch: "<<s1.branch<<endl;
    cout<<"Subject: "<<s1.subject<<endl;
    cout<<"Result: "<<s1.result<<endl;
    cout<<"Year: "<<s1.year<<endl;
    
}
/*output:
Name: Tarushi
Branch: ENTC
Subject: C++
Result: 8.6
Year: 2nd Year
*/
