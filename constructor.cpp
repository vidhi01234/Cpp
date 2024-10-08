#include<iostream>
using namespace std;
class teacher
{
   // int sal;
public:
    int salary;
    string name;
    string subject;
    int marks;
    teacher(int a,string b,string c,int d)
    {
        cout<<"hii i am paramater constructor:"<<endl;
        salary=a;
        name=b;
        subject=c;
        marks=d;

    }

    teacher(teacher &ob)  //coustum copy constructor
    {
        cout<<"hii im coustum copy constructor:"<<endl;
        salary=ob.salary;
        name=ob.name;
        subject=ob.subject;
        marks=ob.marks;
    }
  /*  void get()
    {
        cout<<"enter sal:";
        cin>>sal;
    }*/

    void show()
    {
       // cout<<"print sal:";
        cout<<salary<<endl;
        cout<<name<<endl;
        cout<<subject<<endl;
        cout<<marks<<endl;
    }
};
int main()
{
    teacher t1(2500,"vidhi","maths",50);
    t1.show();
    teacher t2(t1);//default copy constructor
    //t2.get();
    t2.show();
    return 0;
}
