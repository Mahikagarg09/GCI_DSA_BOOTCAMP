#include <iostream>

using namespace std;

int main()
{
    int i,j,temp;
    char str1[100],str2[50];
    cout<<"Enter first string: ";
    cin.getline(str1, 100);
    cout<<"Enter  sub string: ";
    cin.getline(str2, 50);
    for(i=0;str1[i]!='\0';i++){
        j=0;
        if(str1[i]==str2[j]){
            temp=i+1;
            while(str1[i]==str2[j]){
                i++;
                j++;
            }
            if(str2[j]=='\0'){
                cout<<"substring is present at position "<<temp<<endl;
                break;
            }else{
                i=temp;
                temp=0;
            }
        }
    }
    if(temp==0){
        cout<<"given substring not found"<<endl;
    }
    return 0;
}