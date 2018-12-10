#include<iostream>
using namespace std;
class test
{
    int a;
public:
    void get_data(int x)
    {
     a=x;   ///here is its also can be used,
                ///  this->a=x;
    }
    void show_data()
    {
        cout<<"value of a: "<<a<<endl;
    }
    /*test operator +(test t)
      {
        test temp;
        temp.a=a+t.a;
        return temp;
      }*/
};
int main()
{
    test t1,t2,t3;
    t1.get_data(40);
    t2.get_data(30);
    t1.show_data();
    t2.show_data();     ///here is current object is t2;
    /*cout<<"the value of both value is:"<<t3;
    t3=t1+t2;
    t3.show_data();*/
}
