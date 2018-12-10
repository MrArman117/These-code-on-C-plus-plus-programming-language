                    /// An Example On Friend Function
#include<iostream>
using namespace std;
class  B;
class A
{
    int a;
public:
    void getdata_a(int x)
    {
        a=x;
    }
    void display_a()
    {
        cout<<"value of a "<<a<<endl;
    }
friend void add(A obj1, B obj2 );
};
class B
{
    int b;
public:
    void getdata_b(int y)
    {
       b=y;
    }
    void display_b()
    {
        cout<<"value of b "<<b<<endl;
    }
    friend void add(A obj1, B obj2);
};
void add(A obj1,B obj2)
    {
        cout<<"Addition of a & b = "<<obj1.a+obj2.b<<endl;
    }

int main()
{
    A obj1;
    B obj2;
    obj1.getdata_a(20);
    obj1.display_a();
    obj2.getdata_b(30);
    obj2.display_b();
    add(obj1,obj2);
}
