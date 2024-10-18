#include <bits/stdc++.h>
using namespace std;

class student
{

    int age, marks, cls;
    string Name;

public:
    void get_data()
    {
        cout << "My Name is " << Name <<endl ;
        cout << "I am " <<age<<" Year old"<<endl;
        cout << "My Marks are " << marks;
    }
    friend void set_data(student stud,string s, int m);
     
    student(){
        age = 18;
    }

};
    void set_data(student stud,string s, int m)
    {
        stud.Name = s;
        stud.marks = m;
        stud.get_data();
    }

   
int main()
{
    student Bhalu;
    string naam;
    int num;
    cout<<"Enter Your Name :";
    cin>>naam;
    cout<<"enter Your Marks :";
    cin>>num;
    set_data(Bhalu ,naam,num);

    return 0;
}
