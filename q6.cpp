#include<iostream>
using namespace std;

int main (){

int s1,s2,s3;
float b1,b2,b3;
cout<<"enter salaries of 3 employees :";
cin>>s1>>s2>>s3;

cout<<"\nafter bonus :";
b1=s1+s1*0.12;
b2=s2+s2*0.12;
b3=s3+s3*0.12;
cout<<"\nsalary of 1st : "<<b1<<"\nsalary of 2nd : "<<b2<<"\nsalary of 3rd : "<<b3;
return 0;
}