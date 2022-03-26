#include<iostream>

using namespace std;
int grade(int n){
    if(n>=91 && n<=100){
        cout<<"GRADE = AA"<<endl;
    }else if(n>=81 && n<=90){
        cout<<"GRADE = AB"<<endl;
    }else if(n>=71 && n<=80){
        cout<<"GRADE = BB"<<endl;
    }else if(n>=61 && n<=70){
        cout<<"GRADE = BC"<<endl;
    }else if(n>=51 && n<=60){
        cout<<"GRADE = CD"<<endl;
    }else if(n>=41 && n<=50){
        cout<<"GRADE = DD"<<endl;
    }else{
        cout<<"FAIL"<<endl;
    }
}
int main(){
    int x;
    cout<<"enter marks out of 100:";
    cin>>x;
    grade(x);
    return 0;
}