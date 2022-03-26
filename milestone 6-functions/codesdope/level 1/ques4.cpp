#include<iostream>
using namespace std;
int max(int num1, int num2,int num3){
    if (num1>num3){
        if (num1>num2){
            return num1;
        }
        else{
            return num2;
        }
    }
    else{
        return num3;
    }
}
int min(int num1, int num2,int num3){
    if (num1<num3){
        if (num1<num2){
            return num1;
        }
        else{
            return num2;
        }
    }
    else{
        return num3;
    }
}



int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<" maximum number =  "<<max(x,y,z)<<endl;
    cout<<" minmum number =  "<<min(x,y,z)<<endl;
    return 0;
}