#include<iostream>
using namespace std;
class counter
{
    int count;
public:
    counter():count(0){}        ///deafult constractor
    counter(int a):count(a){}         ///parameterized constructor

   void ShowCount(void)
    {
        cout<<" "<<count;
    }
};
main()
{
    counter c1,c2(10);
    c1.ShowCount();
    c2.ShowCount();
}
