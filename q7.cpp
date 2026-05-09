#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 3 numbers : ";
    cin>>a>>b>>c;

    if(a>b){
        if(b>c){
            cout<<"winner is a = "<<a;
        }
        else if(a>c){
            cout<<" winner is a= "<<a;
        }
        else
            cout<<" winner is c ="<<c;
        }
    else if(b>a){
        if(b>c)
        cout<<" winner is b ="<<b;
        else
         cout<<" winner is c ="<<c;
    }
    return 0;
    }
