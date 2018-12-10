#include<iostream>
using namespace std;
class student
{public:
    int roll;
    char name[20],course[30];
public:
    void input_student()
    {
        cout<<"name: ";     cin>>name;
        cout<<"roll: ";       cin>>roll;
        cout<<"course name: ";  cin>>course;
    }
    void display_student()
    {
        cout<<      "Name: "<<name<<endl;
        cout<<      "Roll: "<<roll<<endl;
        cout<<      "Course: "<<course<<endl;
    }
};
class exam:public student
{
    int mark1,mark2,mark3;
public:
   void input_marks()
    {
        cout<<"mark 1: ";   cin>>mark1;
        cout<<"mark 2: ";   cin>>mark2;
        cout<<"mark 3: ";   cin>>mark3;
    }
    void display_result()
    {
        cout<<      "mark 1: "<<mark1<<endl;
        cout<<      "mark 2: "<<mark2<<endl;
        cout<<      "mark 3: "<<mark3<<endl;
    }
};
main()
{   cout<<"Enter the value individeally:\n\n ";
    int i;
    exam e1[5];
    for(i=1;i<3;i++)
    {
        e1[i].input_student();
        e1[i].input_marks();

    }
    cout<<"\nyou entered the value is :";
    for(i=1;i<3;i++)
    {
        e1[i].display_student();
        e1[i].display_result();

    }
}
