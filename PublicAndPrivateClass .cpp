#include <iostream>
#include <string>

using namespace std;

class student
{

    int age, marks, cls;
    string Name;

public:
    void get_data()
    {
        cout << "My Name is " << Name <<endl << "And my age is " << age << endl;
        cout << "My Marks in class " << cls << " are " << marks;
    }
    void set_data()
    {
        cout << "Enter your name ";
        cin >> Name;
        cout << "Enter your age : ";
        cin >> age;
        cout << "Enter your marks : ";
        cin >> marks;
        cout << "Enter your cls: ";
        cin >> cls;
        get_data();
    }
};

int main()
{
    student Bhalu;
    Bhalu.set_data();

    return 0;
}
