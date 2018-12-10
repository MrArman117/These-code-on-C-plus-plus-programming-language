
#include<iostream>
using namespace std;
class test
{
    int a;
public:
    void get_data(int a)
    {
     this->a=a;     ///there is must be use "this" pointer because-
                    ///here is data member and parameter name is same;
    }
    void show_data()
    {
        cout<<"value of a: "<<a<<endl;
    }
};
int main()
{
    test t1,t2,t3;
    t1.get_data(40);
    t2.get_data(30);
    t1.show_data();
    t2.show_data();     ///here is current object is t2;
}
