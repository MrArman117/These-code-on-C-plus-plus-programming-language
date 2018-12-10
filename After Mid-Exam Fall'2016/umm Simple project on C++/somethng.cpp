#include<iostream>
#include<string.h>
using namespace std;
main()
{int a,b,p=1234;
    string name,password,FN,LN,E,NC,EN,EI,ED,WE;
    cout<<"\n\n     ====== Welcome to SYSNARMANS Company Limited =====\n"<<endl;
    cout<<"                  01 January 2017                         "<<endl;
    cout<<"    -------------------------------------------------------\n\n\n"<<endl;
    cout<<"     Press 1 for Login :\n    Press 2 for creat an account:\n";
    cin>>a;
    if (a==1)
    {
      cout<<"           User Name: "; cin>>name;
      {
        cout<<"\n           Password : "; cin>>password;
      }
    }
    else if(a==2)
    {
        cout<<"\n\n                        ** Creat An Account **   \n";
        cout<<"\n                              First Name: "<<FN;   cin>>FN;
        cout<<"\n                               Last Name: "<<LN;   cin>>LN;
        cout<<"\n                               Name Code: "<<NC;  cin>>NC;
        cout<<"\n                                   Email: "<<E;    cin>>E;
    cout<<"\n\n~~~~~Hello!! Mr "<<FN<<LN <<"  Welcome to Sysnarmans Company Ltd. ~~~~~\n\n";

   }
   cout<<"\nWELL DONE!! NOW YOU CAN  WORK IN YOUR LITTLE SOFTWARE: \n";

   cout<<"\nUmm Now Press (1-4) number Button on Your Choice:\n";
   cout<<"1. Add New Employee Information\n2. Edit Employee Information\n3. Delete Employee Information\n4. List of Employee Information\n5. EXIT \n";
   cin>>b;
   if(b==1)
   {
      cout<<"Name : "<<EN; cin>>EN;
      cout<<"Employe Id : "<<EI;  cin>>EI;
     cout<<"Employe Designation : "<<ED;   cin>>ED;
     cout<<"Working Experience : "<<WE;   cin>>WE;
   }
   else if(b==2)
    {
        cout<<".........2 ";
    }
    else if(b==3)
    {
        cout<<" .........3";
    }

     else if(b==4)
    {
        cout<<".........4 ";
    }
      else
    {
       cout<<"...5 ";
    }



}
