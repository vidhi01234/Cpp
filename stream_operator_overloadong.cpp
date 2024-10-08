#include<iostream>
using namespace std;

class dummy
{
    string name;
    int age;
public:
    dummy(){};
    friend void operator>>(istream &in,dummy &o);
     friend void operator <<(ostream &out,dummy &o);
};

void operator>>(istream &in,dummy &o)
{
    in>>o.name>>o.age;
}

void operator <<(ostream &out,dummy &o)
{
     out<<o.name<<endl;
     out<<o.age<<endl;
}

int main()
{
    dummy ob;
    cout<<"Enter the name and age:"<<endl;
    cin>>ob;
    cout<<"details are:"<<endl;
    cout<<ob;
    return 0;
}
