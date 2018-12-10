#include<iostream>
using namespace std;
class employee
{
    int emno,sallary;
    char name [20];
   public:
   void getdata()
   {
        cout<<"name : ";       cin>>name;
        cout<<"emno : ";       cin>>emno;
        cout<<"sallary : ";    cin>>sallary;cout<<"\n";
   }
   void showdata()
   {
        cout<<"     Name : "<<name<<"\n";
        cout<<"     EmNo : "<<emno<<"\n";
        cout<<"     Sallary :"<<sallary<<"\n\n";
   }
   void showofficer(void)
   {
      if(sallary>20000)
      {

        cout<<"     Name : "<<name<<"\n";
        cout<<"     EmNo : "<<emno<<"\n";
        cout<<"     Sallary :"<<sallary<<"\n\n";
      }
   }
};
int main()
{
    cout<<"Enter Employee information individually name/emno/sallary:\n\n";
    int i;
    employee obj[5];

    for(i=1;i<4;i++)
    {
        obj[i].getdata();
    }
    cout<<"you entered the information of employee is:\n\n";
     for(i=1;i<4;i++)
    {
        cout<<"Employee no "<<i<<" :- \n";
        obj[i].showdata();
    }
    cout<<"The oficer sallary(20000+) is: \n\n";
    for(i=1;i<4;i++)
    {
        obj[i].showofficer();
    }
}
