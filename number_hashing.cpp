// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cout<<"enter the size of an array"<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements of an array : "<<endl;
//     for(int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     int hash[13] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] +=1 ;
//     }

//     int q;
//     cin>>q;

//     while(q--){
//         int i=1;
//         cout<<"Enter no. of qurays"<<i<<endl;
//         i++;
//         int number;
//         cin>>number;
//         cout<<"the count of element "<<number<<" is "<<hash[number]<<endl;
//     }
    
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array (between 0 and 12): " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0 || arr[i] > 12) {
            cout << "Element out of range, please enter a number between 0 and 12." << endl;
            return 1;  // Terminate the program if input is invalid
        }
    }

    // Hash array to count occurrences of elements from 0 to 12
    int hash[13] = {0};  // We are assuming elements are between 0 and 12
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number of queries: " << endl;
    cin >> q;

    for (int i = 1; i <= q; i++) {  // Iterate through queries
        int number;
        cout << "Enter the number to query: ";
        cin >> number;

        // Check if the queried number is within the valid range
        if (number >= 0 && number <= 12) {
            cout << "The count of element " << number << " is " << hash[number] << endl;
        } else {
            cout << "Number out of range (0-12). Please enter a valid number." << endl;
        }
    }

    return 0;
}
