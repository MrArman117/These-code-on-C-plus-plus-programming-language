#include <iostream>
using namespace std;
class circle
{
    float x,y;
    int r;
    public:
    circle();
    int area();
    float circumference();
};
circle::circle()
{
    cout<<"x : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;
    cout<<"r : ";
    cin>>r;
}
int circle::area()
{
    return x*x+y*y==r*r;
}
float circle ::circumference()
{
    float const pi=3.1416;
    return pi*r*r;
    cout<<"NOW circle is represented ";
}
int main()
{
    circle a;
    a.circumference();
    a.area();
    cout<<a.area()<<"\n";
    cout<<a.circumference();
}
