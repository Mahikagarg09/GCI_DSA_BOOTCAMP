#include<iostream>
#include<string>
using namespace std;
int main(){
    char str1[100],str2[100];
    cout<<"Enter first string: ";
    cin.getline(str1, 100);
    cout<<"Enter second string: ";
    cin.getline(str2, 100);
    int i=0,j;
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';j++){
        str1[i++]=str2[j];
    }
    str1[i]='\0';
    cout<<"concatented string= "<<str1<<endl;
    return 0;
}