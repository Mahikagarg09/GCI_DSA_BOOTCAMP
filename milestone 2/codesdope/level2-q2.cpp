/*Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
if employee is female, then she will work only in urban areas.
if employee is a male and age is in between 20 to 40 then he may work in anywhere
if employee is male and age is in between 40 t0 60 then he will work in urban areas only.
And any other input of age should print "ERROR"*/
#include<iostream>
using namespace std;
int main(){
    int age;
    char sex,ms;
    cout<<"enter your age:";
    cin>>age;
    if(age<20 || age>60){
        cout<<"ERROR"<<endl;
    }else{
        cout<<"enter your sex(M or F):";
        cin>>sex;
        cout<<"are you married(Y or N):";
        cin>>ms;
        if(sex=='F'){
             cout<<"you will work in only urban areas"<<endl;
        }else{
            if(age>=20 and age<40){
                cout<<"you may work anywhere"<<endl;
            }else{
            cout<<"you will work in only urban areas"<<endl;
            }
        }
    }
   
    return 0;

}