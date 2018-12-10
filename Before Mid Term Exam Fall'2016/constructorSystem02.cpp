#include<iostream>
using namespace std;
class counter
{
    int count;
public:
    counter(int a):count(a){}       ///parameterized constructor
    void increase()
    {
        count++;
    }
    void ShowCount()
    {
        cout<<" "<<count;
    }
};
main()
{
  cout<<"The value of 'count' is given below:\n\n";
    counter c1(20),c2(30);
    c1.ShowCount();
    c1.increase();
    c2.ShowCount();
    c2.increase();
    cout<<"\n";
}
