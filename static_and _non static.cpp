#include<iostream>
using namespace std;

class demo
{
    int var;
    static int static_var;
public:
    demo(int value)
    {
        var=value;
    }
    void non_static()
    {
        cout<<"Hii im non static function"<<endl;
        cout<<"static var:"<<var<<endl;
        cout<<"i also access static var seee"<<endl;           //also access static var
        cout<<"static var:"<<static_var<<endl;
    }
    static void static_fun()
    {
        cout<<"Hii im static function"<<endl;
        cout<<"static var:"<<static_var<<endl;           //only access static var
    }
};

int demo::static_var=100;     //initialization of static

int main()
{
    demo::static_fun();             // no need for objects for calling
    demo ob(200);
    ob.non_static();
    return 0;
}
