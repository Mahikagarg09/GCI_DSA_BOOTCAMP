#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,p;
    for(i=1;i<=5;i++){
        if(i%2==1){
            k=k+1;
        }else{
            k--;
            k=k+i;
        }
        p=k;
        for(j=1;j<=9;j++){    
            if(j<=2*i-1){
                if(j%2==0){
                    cout<<"*";
                }else{
                    cout<<p;
                    if(i%2){
                        p++;
                        k++;
                    }else{
                        p--;
                    }
                    
                }
            }    
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}