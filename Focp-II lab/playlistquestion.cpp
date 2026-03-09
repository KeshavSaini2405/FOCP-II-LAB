#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter the number of songs in playlist";
    cin>>n;
    int a[]={};
    int count=0;
    for(int i=1;i<=n;i++)
    {
        cout<<"songs:"<<a[i];
    }
    for(int i=1;i<sizeof(a);i++)
    {
        cout<<"enter the song number to play";
        cin>>i;
        count++;
    }

}
