#include<iostream>
using namespace std;

int main( )
{
    char str1[80], str2[80];

    cout<<"Enter first string: ";
    cin.getline(str1, 80);
    cout<<"Enter second string: ";
    cin.getline(str2, 80);
    int s1 = 0,s2=0,ctr=0;
    for(s1 = 0; str1[s1] != '\0'; s1++);
    for(s2 = 0; str2[s2] != '\0'; s2++);
    if(s1!=s2){
        cout<<"strings are not equal"<<endl;
    }else{
        for(int i = 0; str1[i] != '\0'; i++){
            if(str1[i]!=str2[i]){
                ctr=1;
                break;
            }
        }
        ctr ==0 ? cout<<"strings are euqal\n" : cout<<"strings are not equal\n";
    }				
    return 0;
}