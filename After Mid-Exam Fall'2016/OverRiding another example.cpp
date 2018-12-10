/// over riding , with using 'virtual' cz 1ti pointer diya 2ta cls er data gula ke access kora hoise..

#include<iostream>
using namespace std;
class base
{
public:
    virtual void display()
    {
        cout<<"This is 'Base' class"<<endl;
    }
    virtual void show()
    {
        cout<<"Show the ..Base.. class"<<endl;
    }
};
class derived : public base
{
public:
    void display()
    {
        cout<<"This is 'Derived' class"<<endl;
    }
    void show()
    {
        cout<<"Show the !!!Derived!!! class "<<endl;
    }
};
int main()
{
    base Bobj;
    base *bptr;
    bptr=&Bobj;
    bptr->display();
    bptr->show();

    derived Dobj;
    bptr=&Dobj;
    bptr->display();
    bptr->show();
}
