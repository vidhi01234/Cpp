 #include<iostream>
 using namespace std;

 class academic
 {
     int roll;
     string name;
 protected:
    int m1,m2,m3;
 public:
    void getinfo()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter rollno."<<endl;
        cin>>roll;
        cout<<"Enter marks:"<<endl;
        cin>>m1>>m2>>m3;
    }
    void showinfo()
    {
        cout<<"Name is:"<<name<<endl;
        cout<<"roll no:"<<roll<<endl;
    }
 };

 class curri
 {
 protected:
     int gp,sport;
 public:
    void getm()
    {
        cout<<"Enter Gp marks and sport marks:"<<endl;
        cin>>gp>>sport;
    }
 };

 class total:private academic,protected curri
 {
     int total;
 public:
    void gettotal()
    {
        getinfo();
        showinfo();
        getm();
        total=m1+m2+m3+gp+sport;
        cout<<"total :"<<total;
    }

 };

 int main()
 {
     total t1;
     t1.gettotal();
     return 0;
 }
