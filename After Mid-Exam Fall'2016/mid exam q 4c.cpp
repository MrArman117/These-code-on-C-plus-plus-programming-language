#include<iostream>
using namespace std;
class T
{
protected:
    int id;        ///behaves like private but can  be inherited
public:
    void show()
    {
        cout<<"Enter id: "; cin>>id;
      //  cout<<name<<endl;
    }
};
class V: public T
{
public:
    void show2()
    {
        cout<<id<<endl;      ///here we use 'name' variable which inherites form class hello
    }
};
main()
{
    V obj;
    obj.show();
    obj.show2();
}
