#include <iostream>
using namespace std;

class Matrix2;
class Matrix3;

class Matrix1{
    public:
        friend class Matrix3;
        int a[3][3];

        void feed_data1(){
            cout << "Enter your 1st Matrix :" << endl;
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    cin >> a[i][j];
                }
           }
        }

        void print_data(){
            cout << "The Matrix 1st You Entered Is :" << endl;
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
};

class Matrix2{
    public:
        friend class Matrix3;
        int b[3][3];

        void feed_data2(){
            cout << "Enter your 2nd Matrix :" << endl;
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    cin >> b[i][j];
                }
            }
        }

        void print_data2(){
            cout << "The Matrix 2nd You Entered Is :" << endl;
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    cout << b[i][j] << " ";
                }
                cout << endl;
            }
        }
};

class Matrix3{
    public:
        
        int c[3][3] = {0};
        // Matrix3(){
        //     for (int i = 0; i < 3; i++){
        //         for (int j = 0; j < 3; j++){
        //             c[i][j] = 0;
        //         }
        //     }
        // }

        void print_multiplication(){
            cout << "The Multiplication of matrix 1st and 2nd Is :" << endl;
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
        }

        void multiplication_of_matrix(Matrix1 &obja, Matrix2 &objb){
            for (int i = 0; i < 3; i++){
                for (int j = 0; j < 3; j++){
                    for (int k = 0; k < 3; k++){
                        c[i][j] += obja.a[i][k] * objb.b[k][j];
                    }
                cout << endl;
                }
            }
            print_multiplication();
        }
};

int main(){

    Matrix1 m1;
    Matrix2 m2;
    Matrix3 m3;

    m1.feed_data1();
    m2.feed_data2();

    m1.print_data();
    m2.print_data2();

    m3.multiplication_of_matrix(m1, m2);
    
    return 0;
}
