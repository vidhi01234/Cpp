#include<iostream>
using namespace std;

class B;
class A
{
    int value1;
public:
    void setdata(int data)
    {
        value1=data;
    }
    void showdata()
    {
        cout<<value1<<endl;
    }
    friend void swapp(A &,B &);
};

class B
{
    int value2;
public:
    void setdata(int data)
    {
        value2=data;
    }
    void showdata()
    {
        cout<<value2<<endl;
    }
    friend void swapp(A &,B &);
};

void swapp(A &o1,B &o2)
{
    int temp;
    temp=o1.value1;
    o1.value1=o2.value2;
    o2.value2=temp;
}

int main()
{
    A o1;
    B o2;
    o1.setdata(10);
    o2.setdata(20);
    o1.showdata();
    o2.showdata();
    swapp(o1,o2);
    cout<<"swap value of A is :"<<endl;
    o1.showdata();
    cout<<"swap value of B is :"<<endl;
    o2.showdata();
    return 0;
}
