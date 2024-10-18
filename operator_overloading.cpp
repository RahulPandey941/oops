#include <iostream>
using namespace std;
class num{
    

    public:
    int a,b;
        num operator &(num &x){
            num temp;
            temp.a=x.a + a;
            temp.b = x.b +b;
            return temp;
        }

    void print_num(){
        cout<<a<<"i + "<<b;
    }
};
int main()
{
    num o1,o2;
    o1.a = 4;
    o1.b =5;

     o2.a = 1;
    o2.b =7;

    num o3;

    o3 = o1&o2;
    o3.print_num();
return 0;
}