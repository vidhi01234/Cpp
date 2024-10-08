#include<iostream>
using namespace std;
class employee
{
    int sal;
    string name,depart;
public:
    int id;
    void getinfo()
    {
        getchar();
        cout<<"Enter name:";
        getline(cin,name);
        //getchar();
        cout<<"ENTER id:";
        cin>>id;
        getchar();
        cout<<"Enter Department:";
        getline(cin,depart);
        //getchar();
        cout<<"enter salary";
        cin>>sal;
    }
    void showinfo()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Emp id:"<<id<<endl;
        cout<<"Department is:"<<depart<<endl;
        cout<<"salary:"<<sal<<endl;
    }
};
int main()
{
    employee emp[3];
    int i,n,idd;
    cout<<"Enter number:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        emp[i].getinfo();
    }
    cout<<"Enter idd:";
    cin>>idd;
    cout<<"Information data"<<endl;
    for(i=0;i<n;i++)
    {
        if(emp[i].id==idd)
            emp[i].showinfo();
    }
    return 0;
}
