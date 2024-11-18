#include <iostream>
using namespace std;

namespace math
{
    int add (int a,int b)
    {
        return a+b;
    }
    int subtract (int a,int b)
    {
        return a-b;
    }
}

int main()
{
    int sum=math::add(10,20);
    int sub=math::subtract(11,5);

    cout<<sum<<endl;
    cout<<sub;
    return 0;
}
