#include<iostream>
using namespace std;

class complex
{
    int a,b;
public:
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<"+i"<<b<<endl;
    }
    complex(){}
    friend complex operator-(complex &o1,complex &o2);
};

complex operator-(complex &o1,complex &o2)
{
    complex temp;
    temp.a=o1.a-o2.a;
    temp.b=o1.b-o2.b;
    return temp;
}
int main()
{
    complex c1(21,10),c2(4,5),c3;
    c3=c1-c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
