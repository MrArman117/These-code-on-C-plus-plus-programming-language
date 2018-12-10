#include<iostream>
using namespace std;
class test
{
    int a;
public:
    void get_data(int x)
    {
        a=x;
    }
    void show_data()
    {
        cout<<a<<endl;
    }
test operator +(test t)     ///data member is access by parameterized
      {
        test temp;
        temp.a=a+t.a;
        return temp;
      }
};
int main()
{
    test t1,t2,t3;
    t1.get_data(20);
    t2.get_data(30);
    t3=t1+t2;
    t3.show_data();
}
