#include<iostream>
using namespace std;

int main(){
int item_no,quantity;
float unit_price,amount,final;
cout<<"enter item no. , quantity , unit price : ";
cin>>item_no>>quantity>>unit_price;

amount=unit_price*quantity;
final=(amount*80)/100;

cout<<"amount : "<<amount;
cout<<"\nfinal amount after discount : "<<final;

return 0;
}