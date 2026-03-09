#include<iostream>
using namespace std;
class candy
{
    string color;
    int points;
    public:
    candy();
    candy(string clr);
    candy(string clr,int points);
    void setcandy(string,int);
    void displaycandy();
    void loosepoints();
    void gainpoints();
    void reducedspecificpoints(int lpoint);
    void gainspecificpoints(int gpoint);

};
void candy::loosepoints()
{
    points-=2;
}
void candy::reducedspecificpoints( int point)
{
    points-=point;
}
void candy::gainpoints()
{
    points+=2;
}
 void candy::gainspecificpoints(int gpoint)
 {
    points+=gpoint;
 }
candy::candy()
{
    color="black";
    points=0;
}
candy::candy(string clr)
{
    color=clr;points=0;
}
candy::candy(string clr,int p)
{
    color=clr;points=p;
}
void candy::setcandy(string c,int p)
{
    color=c;points=p;
}
void candy::displaycandy()
{
    cout<<"\n Color:"<<color;
    cout<<"\n Points:"<<points;
}
int main()
{
    candy c1("blue",50),c2("red",34);
    //c1.setcandy("Red",35);
    //c2.setcandy("Blue",45);
    
    c1.displaycandy();
    c2.displaycandy();
    c1.gainpoints();
    c2.reducedspecificpoints(21);
    cout<<"\nAfter results";
    c1.displaycandy();
    c2.displaycandy();
    return 0;
}