#include<bits/stdc++.h>
using namespace std;
void ans(string str){
    int temp[6]={0};
    for(int i=0; i<str.size(); i++){
       if(str[i]=='(') { temp[0]++; }
       else if(str[i]==')') { temp[1]++; }
       else if(str[i]=='[') { temp[2]++; }
       else if(str[i]==']') { temp[3]++; }
       else if(str[i]=='{') { temp[4]++; }
       else if(str[i]=='}') { temp[5]++; }
    }
    int large=0;
    for(int i=0; i<6; i+=2){ 
        large+=(min(temp[i],temp[i+1])*2);
    }
    cout<<large<<"\n";

}
int main() {
    int num;
    cin >> num; //Reading input from STDIN
    cout << endl;   // Writing output to STDOUT
    for(int i=0;i<num;i++)
    {   
        string str;
        cout<<endl;
        cin>>str;
        ans(str);
    }

}