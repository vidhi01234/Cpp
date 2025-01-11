#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[10],i,n;
    ofstream out;
    out.open("sample1.txt",ios::app);
    cout<<"Enter no. of records to enter:";
    cin>>n;
    cout<<"Enter data:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    out<<"Unsorted array:\n";
    for(i=0;i<n;i++)
    {
        out<<arr[i]<<" ";
    }
    out<<"\nSorted array\n";
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        out<<arr[i]<<" ";
    }
    out.close();

    ifstream in;
    in.open("sample1.txt");
    string str;
    while(getline(in,str))
    {
        cout<<str;
    }
    in.close();
    return 0;
}
