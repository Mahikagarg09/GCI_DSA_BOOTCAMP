#include <iostream>

using namespace std;

void solve(string input,string output){
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    string output1=output;
    string output2=output;
    output1+=" ";
    output1+=input[0];
    output2+=input[0];
    input.erase(input.begin()+0);
    solve(input,output1);
    solve(input,output2);
}
 
// Driver code
int main()
{
    string input;
    cin>>input;
    string output="";
    output+=input[0];
    input.erase(input.begin()+0);
    solve(input,output);
    return 0;
}