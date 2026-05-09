#include<iostream>
using namespace std;

int main(){
    int mark1,mark2,mark3;
    float average;
cout<<"enter three numbers : ";

cin>>mark1>>mark2>>mark3;

cout<<"mark 1 is : "<<mark1<<"\nmark 2 is : "<<mark2<<"\nmark3 is : "<<mark3;
int sum= mark1+mark2+mark3;
float avg= sum/3;
cout<<"\n average is "<<avg;
return 0;
}