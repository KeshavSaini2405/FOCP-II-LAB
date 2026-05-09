
#include<iostream>
using namespace std;

int main(){
float celsius,fahrenheit;

cout<<"enter temp in fehrenheit :";

cin>>fahrenheit;

celsius=((fahrenheit-32)*5)/9;
cout<<" in celsius : "<<celsius;
return 0;
}