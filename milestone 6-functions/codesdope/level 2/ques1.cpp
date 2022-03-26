#include<iostream>
using namespace std;
void table(int x,int y){
    for(int i=1;i<=y;i++){
        cout<<x<<" x "<<i<<" = "<<x*i<<endl;
    }
}
int main(){
    table(15,10);
    return 0;
}