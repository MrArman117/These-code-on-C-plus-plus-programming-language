#include<iostream>
using namespace std;
class account
{
    int number,balance;
    public:
      account():number(1),balance(2){}
    void show()
    {
        cout<<"Acc Number :"<<number<<endl;
        cout<<"Balance : "<<balance<<"\n"<<endl;
    }
};
int main ()
{
    int i;
    cout<<"Please Enter the Acc No. & Bl individully:\n\n";
    account obj[3];
    cout<<"\nThe Acc Number & Balance you entered is -\n\n";
    for(i=0;i<3;i++)
    {
        obj[i].show();
    }
}
