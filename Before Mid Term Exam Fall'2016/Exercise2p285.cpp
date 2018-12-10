#include<iostream>
using namespace std;
class tollBooth
{
    int NumberOfCar;
    double Amount,missedCar;
public:
    tollBooth():Amount(0),NumberOfCar(0),missedCar(0){}

    void payingCar()
    {
        NumberOfCar++;
        Amount=Amount+50;   ///eybabhe likhle o hobe Amount+=50
    }
    void nopayCar()
    {
        NumberOfCar++;
        missedCar++;
    }

    void display()
    {
        cout<<"Total Car Passed : "<<" "<< NumberOfCar<<endl;
        cout<<"collected amount :"<<Amount<<endl;
        cout<<"Missed car : "<<missedCar<<endl;
    }
};
int main()
{
    tollBooth t;
    t.payingCar();
    t.payingCar();
    t.nopayCar();
    t.nopayCar();

    t.display();
}
