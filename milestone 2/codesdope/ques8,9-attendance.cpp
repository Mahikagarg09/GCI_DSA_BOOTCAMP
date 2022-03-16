/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not*/ 
#include<iostream>
using namespace std;
int main(){
    int c,ca;
    float per;
    cout<<"enter the number of classes held:";
    cin>>c;
    cout<<"enter the number of classes attended:";
    cin>>ca;
    per=(ca/c)*100;
    if(ca>75){
       cout<<"student is allowed to sit in exam"<<endl;
    }else{
       cout<<"student is  not allowed to sit in exam"<<endl; 
    }
    return 0;
}
/*************************************************************************************************/
/*Modify the above question to allow student to sit if he/she has medical cause.
 Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.*/
 #include<iostream>
using namespace std;
int main(){
    int c,ca;
    float per;
    char m;
    cout<<"enter the number of classes held:";
    cin>>c;
    cout<<"enter the number of classes attended:";
    cin>>ca;
    per=(ca/c)*100;
    if(ca>75){
       cout<<"student is allowed to sit in exam"<<endl;
    }else{
       cout<<"do you have a medical cause?('y' or 'n')";
       cin>>m;
       if(m=='y'){
          cout<<"student is allowed to sit in exam"<<endl;
       }else{
          cout<<"student is not allowed to sit in exam"<<endl;
       }
    }
    return 0;
}
