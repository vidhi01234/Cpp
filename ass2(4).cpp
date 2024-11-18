#include<iostream>
using namespace std;

class Publication
{
protected:
    string title;
public:
    Publication(string t)
    {
        title=t;
    }
    void showdata()
    {
        cout<<"Title:"<<title<<endl;
    }
};
class Book: virtual public Publication
{
protected:
    int acc_no;
public:
    Book(int ac_no,string t):Publication(t),acc_no(ac_no){}
    void showinfo()
    {
        cout<<"accession no:"<<acc_no<<endl;
    }
};
class Magazine : virtual public Publication
{
protected:
    int vol;
public:
    Magazine(int volume,string t):Publication(t),vol(volume){}
    void show()
    {
        cout<<"volume:"<<vol<<endl;
    }
};
class Journal:public Book,public Magazine
{
public:
    Journal(string t,int ac_no,int v):Publication(t),Book(ac_no,t),Magazine(v,t){}
    void showall()
    {
        showdata();
        showinfo();
        show();
    }

};
int main()
{
    Journal j("RDSharma",600,50);
    j.showall();
    return 0;
}
