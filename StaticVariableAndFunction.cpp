#include <iostream>
#include <string>
using namespace std;

class Employes
{
    static int count;
    int salary;
    string Name;

public:

    void set_data()
    {
        cout << "enter the name of the employ : ";
        cin >> Name;
        cout << "enter the Salary : ";
        cin >> salary;
    }

    void get_data()
    {
        cout <<"The Name Of Employ "<< count <<" is "<< Name << endl;
        // count++;
    }

    static void counter(){
        cout << "This is Employ number " << count << endl ;
        count++;
    }
};

int Employes::count = 1 ;
int main()
{
    Employes Shubam,Rahul,Rajnish;

    Shubam.set_data();
    Shubam.get_data();
    Employes::counter();

    Rahul.set_data();
    Rahul.get_data();
    Employes::counter();

    Rajnish.set_data();
    Rajnish.get_data();
    Employes::counter();

    return 0;
}