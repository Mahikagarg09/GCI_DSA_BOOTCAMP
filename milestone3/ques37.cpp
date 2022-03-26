//PROGRAM TO FIND ONE'S COMPLEMENT
#include<iostream>
using namespace std;
#define size 8
int main(){
    int i, fail = 0;
    char binary[size+1], comp[size+1];
    cout << " Input a "<<size <<" bit binary number: ";
    cin >> binary;
    for (i = 0; i < size; i++) {
        if (binary[i] == '1') {
            comp[i] = '0';
        }else if (binary[i] == '0') {
            comp[i] = '1';
        } else {
            cout << "Error! invalid input" << endl;
             fail = 1;
             break;
        }
    }
    comp[size] = '\0';
    if (fail == 0){
        cout << "The original binary number = " << binary << endl;
        cout << "Ones complement the number = " << comp << endl;
    }
    return 0;
}