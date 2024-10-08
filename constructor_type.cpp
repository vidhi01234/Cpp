#include<iostream>
using namespace std;

class demo
{
    int x,y;
public:
    demo()             //default constructor
    {
        x=0;
        y=8;
    }
    void showinfo()
    {
        cout<<"x is:"<<x<<endl;
        cout<<"y is:"<<y<<endl;
    }
    demo(int a,int b)
    {
        x=a;
        y=b;
       // cout<<"a is:"<<a<<endl;
       // cout<<"b is:"<<b<<endl;
    }
    demo(demo &d)
    {
        x=d.x;
        y=d.y;
    }
};

int main()
{
    demo d,d1(10,20);
    demo d2(d1);
    d.showinfo();
    d1.showinfo();
    d2.showinfo();
    return 0;
}
