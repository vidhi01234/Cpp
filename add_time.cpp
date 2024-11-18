#include<iostream>
using namespace std;

class time
{
    int h,m,s;
public:
    time(int hr,int min,int sec)
    {
        h=hr;
        m=min;
        s=sec;
    }
    void getdata()
    {
        cout<<"Enter hr,min,sec:";
        cin>>h>>m>>s;
    }

    void display()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }

    void add(time &ob)
    {
        s=s+ob.s;
        m=m+ob.m+s/60;
        h=h+ob.h+m/60;
        s=s%60;
        m=m%60;
        h=h%24;
    }
    time(){}
};

int main()
{
    time t1,t2;
    t1.getdata();
    t2.getdata();
    cout<<"Time 1:";
    t1.display();
    t1.add(t2);
    cout<<"Time 2:";
    t2.display();
    cout<<"Total time:";
    t1.display();
    return 0;
}
