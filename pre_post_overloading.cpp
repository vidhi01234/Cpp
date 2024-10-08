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
        cout<<a<<endl;
    }


    complex operator++()
    {
        complex temp;
        temp.a=++a;
        return temp;
    }
    complex(){}

    complex operator++(int)
    {
        complex t;
        t.a=a++;
        return t;
    }
};

int main()
{
    complex c1(10),c2;
    c2=++c1;//c2=c1.operator
    c1.show();
    c2.show();
    c2=c1++;
    c1.show();
    c2.show();
    return 0;
}
