#include<iostream>
using namespace std;
class Leverage
{
    int crowber;
public:
    Leverage():crowber(0){}
    void pry()
    {
        cout<<"the value of crowber is "<<crowber;
    }
    int getCrow()
    {
        return crowber;
    }
};
main()
{
    Leverage lever1;
    lever1.pry();
    cout<<" "<<lever1.getCrow()<<"\n";
}
