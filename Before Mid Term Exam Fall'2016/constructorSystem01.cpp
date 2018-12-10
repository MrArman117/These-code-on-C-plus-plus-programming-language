#include<iostream>
using namespace std;
class counter
{
    int count;
public:
    counter():count(0){cout<<"The value of count is given below:\n";}    ///Default Constructor
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
    counter c1;
    c1.ShowCount();
    c1.increase();
    c1.ShowCount();
    c1.increase();
    c1.ShowCount();
    c1.increase();
    cout<<"\n";

}
