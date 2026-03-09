/*
#include<iostream>
//using namespace std;
int main()
{
   int a;float f;char c; 
    std::string name;
    std::cout<<"\nenter a";
    std::cin>>a;
    std::cout<<"\nenter f";
    std::cin>>f;
    std::cout<<"\nenter c";
    std::cin>>c;
    std::cout<<"\nEnter the name";
    std::cin>>name;//if not reading use cin.ignore() to clear the buffer
    std::cout<<"The value of a="<<a;// getline(std::cin,name){another way to read}
    std::cout<<"\nthe value of f="<<f<<std::endl<<"the value of c="<<c;
    std::cout<<"\nthe name is "<<name;
    return 0;
}
    */
#include<iostream>
using namespace std;
int main()
{
    int a;float f;char c; 
    string name;
    cout<<"\nenter a";
    cin>>a;
    cout<<"\nenter f";
    cin>>f;
    cout<<"\nenter c";
    cin>>c;
    cout<<"\nEnter the name";
    cin>>name;//if not reading use cin.ignore() to clear the buffer
    cout<<"The value of a="<<a<<endl;// getline(std::cin,name){another way to read}
    cout<<"the value of f="<<f<<endl<<"the value of c="<<c;
    cout<<endl<<"the name is "<<name;
    return 0;
}