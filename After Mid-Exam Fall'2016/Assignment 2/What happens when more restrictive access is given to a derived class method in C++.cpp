#include<iostream>
using namespace std;

class Base {
public:
virtual int fun(int i) { cout << "Base::fun(int i) called\n"; }
};

class Derived: public Base {
private:
int fun(int x)   { cout << "Derived::fun(int x) called\n"; }
};

int main()
{
Base *ptr = new Derived;
ptr->fun(10);
return 0;
}

/*#include<iostream>
using namespace std;

class Base {
public:
    virtual int fun(int i) { }
};

class Derived: public Base {
public:
    int fun(int x)   {  }
};


int main()
{
    Derived d;
    d.fun(1);
    return 0;
}
*/
