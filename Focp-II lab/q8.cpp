#include<iostream>
using namespace std;
int main()
{
    int n;int unid;string tag;
    cout<<"enter n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<endl<<"Enter unique id:";
        cin>>unid;
        if(unid%3==0)
        {
            tag="BUZZ";
            cout<<tag;
        }
        else if(unid%5==0)
        {
            tag="FUZZ";
            cout<<endl<<tag;
        }
        else if(unid%3==0&&unid%5==0)
        {
            tag="BUZZFUZZ";
            cout<<endl<<tag;
        }
        else
        {
            cout<<endl<<"GET LOST";
        }
    }
    return 0;
}