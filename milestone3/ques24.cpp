                            //PROGRAM TO CALCULATE HCF OF TWO NUMBER
#include<iostream>
using namespace std;
int main(){
    int n1,n2,i,min=0,hcf=0;
    cin>>n1>>n2;
    if(n1<n2){
        min=n1;
    }else{
        min=n2;
    }
    for(i=1;i<=min;i++){
        if(n1%i==0 && n2%i==0){
            if(i>hcf){
                hcf=i;
            }
        }
    }
    cout<<"hcf is "<<hcf<<endl;
    return 0;
}