#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    void print()
    {
        cout<<"complex no:"<<a<<"+i"<<b<<endl;
    }
    complex(int x,int y)   //with constructor
    {
        a=x;
        b=y;
    }
    complex()
    {

    }
    complex add (complex &o)
    {
        complex temp;
        temp.a=a+o.a;
        temp.b=b+o.b;
        return temp;
    }
};

int main()
{
    complex o1(5,6),o2(6,3),o3;
    o3=o1.add(o2);
    o1.print();
    o2.print();
    o3.print();
    return 0;
}
