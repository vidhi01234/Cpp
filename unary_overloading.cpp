#include<iostream>
using namespace std;
class dummy
{
    int a,b;
public:
    dummy(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }

    dummy operator-()
    {
        dummy ob;
        ob.a=-a;
        ob.b=-b;
        return ob;
    }
    dummy(){}

};
int main()
{
    dummy c1(5,6),c2;
    c2=c1.operator-();
    c1.display();
    c2.display();
    return 0;
}

