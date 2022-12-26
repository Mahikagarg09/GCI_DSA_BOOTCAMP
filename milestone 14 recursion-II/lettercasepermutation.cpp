#include <bits/stdc++.h>

using namespace std;

void solve(string input,string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    
    if (isalpha(input[0])){
        string output1=output;
        string output2=output;
        output1+=tolower(input[0]);
        output2+=toupper(input[0]);
        input.erase(input.begin()+0);
        solve(input,output1);
        solve(input,output2);
    }
    else{
        string output1=output;
        output1+=input[0];
        input.erase(input.begin()+0);
        solve(input,output1);
        
    }
}
 

int main()
{
    string input;
    cin>>input;
    string output="";
    solve(input,output);
    return 0;
}