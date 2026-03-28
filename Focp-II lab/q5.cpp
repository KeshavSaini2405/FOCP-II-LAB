/*#include<iostream>
using namespace std;
int main()//by third variable
{
    int a,b;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"swapped a and b is=:"<<a <<b;
    return 0;

}
*/
#include<iostream>
using namespace std;
int main()//using arithmetic
{
    int a=4,b=5;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a;
    cout<<endl<<b;
}
