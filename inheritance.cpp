#include<iostream>
using namespace std;

class student
{
    int roll;
    string name;
public:
    getinfo()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter roll"<<endl;
        cin>>roll;
    }
    showinfo()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"roll:"<<roll<<endl;
    }
};

class marks:private student
{
protected:
    int m1,m2,m3,m4,m5;
public:
    getmarks()
    {
        getinfo();
        showinfo();
        cout<<"Enter marks:"<<endl;
        cin>>m1>>m2>>m3>>m4>>m5;
    }
};

class result:protected marks
{
    int total,sportm;
public:
    getotal()
    {
        getmarks();
        cout<<"Enter sports marks:"<<endl;
        cin>>sportm;
        total=m1+m2+m3+m4+m5+sportm;
    }
    showtotal()
    {
        cout<<"total marks:"<<total<<endl;
    }


};
int main()
{
    result r1;
    r1.getotal();
    r1.showtotal();
    return 0;
}
