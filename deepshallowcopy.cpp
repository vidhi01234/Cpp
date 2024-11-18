#include<iostream>
using namespace std;

class student
{
public:
    string name;
    float* cgpaptr;
    float cgpa;

    student(string n,float cgpa)
    {
        name=n;
        cgpaptr=new float;
        *cgpaptr=cgpa;
    }
    student(student &ob)
    {
        name=ob.name;
        cgpaptr=new float;//for deep copy
        *cgpaptr=*ob.cgpaptr;
    }
    void getinfo()
    {
        cout<<"name"<<name<<endl;
        cout<<"cgpa"<<*cgpaptr<<endl;
    }
};
int main()
{
    student s1("vidhi",9.5);
    s1.getinfo();
    student s2(s1);
    s2.name="Neha";
    *(s2.cgpaptr)=9.8;//shallow copy
    s1.getinfo();
    s2.getinfo();
    return 0;
}
