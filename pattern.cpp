#include <iostream>
using namespace std;

int main(){
    int n_line;
    int num = 1;
    cout<<"Enter A Number : " ;
    cin>>n_line;

    for (int i = 1; i < n_line+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<num<<"   ";
            num++;
        }
        cout<<endl;
    }

    for (int i = n_line ; i > 0; i--){
        num = num-i;
        for (int j = 0; j < i; j++){
            cout<<num<<"   ";
            num++;
        }
        cout<<endl;
        num = num-i;
    }

    return 0;
}