#include<iostream>
using namespace std;

int main(){
int item,price,amount,discount;

cout<<"enter items and price : ";
cin>>item>>price;

amount=item*price;
cout<<" amount is : "<<amount;
discount=amount*0.90;

if(amount>1000){
    cout<<"\n10% discount is applicable and price after discount is :"<<discount;
}
else
cout<<"\nno discount available";
return 0;
}