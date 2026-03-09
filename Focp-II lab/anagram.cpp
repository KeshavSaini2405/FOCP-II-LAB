#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string a,b;
    cout<<"enter two strings";
    cin>>a;
    cin>>b;
    int count[26]={0};
    for(int i=0;i<a.length();i++)
    {
         count[a[i]-'a']++;
         count[b[i]-'a']--;

    }
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
        cout<<" not Anagram";
       
        }
    }
    cout<<" Anagram";
    return 0;
   
}