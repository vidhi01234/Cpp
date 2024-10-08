#include<iostream>
using namespace std;

class complex
{
    int a;
public:
    complex(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<"value is:"<<a<<endl;
    }
    friend complex operator++(complex &o);
    complex(){};
    friend complex operator++(complex &o1,int);
    };

complex operator++(complex &o)
{
    complex t;
    t.a=++o.a;
    return t;
}
complex operator++(complex &o1,int)
{
    complex temp;
    temp.a=o1.a++;
    return temp;
}

int main()
{
    complex c1(10),c2;
    c2=++c1;
    c1.show();
    c2.show();
    c2=c1++;
    c1.show();
    c2.show();
    return 0;
}
