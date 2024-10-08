#include<iostream>
using namespace std;

class demo
{
    int x,y;
public:
    demo (int a,int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"value of x :"<<x<<endl;
        cout<<"value of y :"<<y<<endl;
    }

    friend void swapp (demo &d);
};

void swapp(demo &ob)
{
    int t;
    t=ob.x;
    ob.x=ob.y;
    ob.y=t;
}
int main()
{
    demo d(100,200);
    d.display();
    swapp(d);
    d.display();
    return 0;
}
