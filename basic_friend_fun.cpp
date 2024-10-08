#include<iostream>
using namespace std;
class triangle
{
    int a;
    float area,circum;
public:
    void get(int length)
    {
        a=length;
        area=(1.73*a*a)/4;
        circum=a*3;
    }
    friend void show(triangle);//friend function access private var:
    friend class homework;     //friend fun for classes:
};
class homework
{
public:
    void showdata(triangle t1)
    {
        cout<<t1.area<<endl;
        cout<<t1.circum<<endl;
    }
};
void show(triangle t1)
    {
        cout<<"area is:"<<t1.area<<endl;
        cout<<"circum is:"<<t1.circum<<endl;
    }
int main()
{
    triangle t1;
    homework h1;
    t1.get(2);
    show(t1);
    h1.showdata(t1);
    return 0;
}

