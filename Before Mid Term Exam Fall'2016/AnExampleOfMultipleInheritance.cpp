                        ///Multiple Inheritance
#include<iostream>
using namespace std;
class A
{
protected:
    int a;
public:
    void getValue_a(int x)
    {
        a=x;
    }
};
class B
{
protected:
    int b;
public:
    void getValue_b(int y)
    {
        b=y;
    }
};
class C:public A, public B
{
private:
    int p;
public:
    void add()
    {
        p=a+b;
    }
    void display()
    {
    cout<<"\nYou Enter value of a is:  "<<a<<endl;
    cout<<"You Enter value of b is: "<<b<<endl;
    cout<<"\nvalue of p,(Addition Result) is: "<<p<<endl;
    }
};
main()
{   int x,y;
    C obj;
    cout<<"Enter 'a' value: "; cin>>x;
    cout<<"Enter 'b' value: "; cin>>y;
    obj.getValue_a(x);
    obj.getValue_b(y);
    obj.add();
    obj.display();
}
