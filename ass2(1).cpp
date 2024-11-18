#include<iostream>
#include<string>
using namespace std;

class OverLoad
{
    string str1,str2,str3;
public:

    OverLoad(string s1,string s2)
    {
        str1=s1;
        str2=s2;
    }

    OverLoad(string s3)
    {
        str3=s3;
    }

    void merge(string str1,string str2)
    {
        int i;
        string s1,vow="",con="";

        s1=str1+str2;

        for(i=0;i<s1.length();i++)
        {
            if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
            {
                vow+=s1[i];
            }
            else{
                con+=s1[i];
            }
        }

        cout<<vow<<" "<<con<<endl;
    }

    int merge (string str3)
    {
        int i,sum=0;
        for(i=0;i<str3.length();i++)
        {
            if(isdigit(str3[i]))
                sum+=str3[i]-'0';
        }
        return sum;
    }
};
int main()
{
    string str1,str2,str3;
    int temp;
    cout<<"Enter string1 and 2:";
    cin>>str1>>str2;
    OverLoad o1(str1,str2);
    o1.merge(str1,str2);
    cout<<"Enter string 2: ";
    cin>>str3;
    OverLoad o2(str3);
    temp=o2.merge(str3);
    cout<<temp;
    return 0;

}
