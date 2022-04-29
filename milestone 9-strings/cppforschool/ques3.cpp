#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[80];
    int i,word=0;
    cin.getline(str,80);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' ' || str[i]==','){
            word++;
        }
    }
    cout<<word+1<<endl;
    return 0;
}