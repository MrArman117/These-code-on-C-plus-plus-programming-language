#include<iostream>
using namespace std;
class A
{
    int a;      ///private
public:
    void getValue_a(int a);
    int putValue_a();
};
class B:public A
{
    int b,c;
public:
    void getValue_b(int b);
    void add();
    void display();
};
void A::getValue_a(int x)
{
    a=x;
}
int A::putValue_a()
{
    return a;
}
void B::getValue_b(int x)
{
    b=x;
}
void B::add()
{
    c=putValue_a();
    c=c+b;
}
void B::display()
{
    cout<<"value of a="<<putValue_a()<<endl;
    cout<<"Value of b="<<b<<endl;
    cout<<"value of c="<<c<<endl;
}
main()
{
    int x,y;
    B obj;
    cout<<"Enter the value of a: ";
    cin>>x;
    cout<<"Enter the value of b: ";
    cin>>y;
    obj.getValue_a(x);
    obj.getValue_b(y);
    obj.add();
    obj.display();
}
