
#include <iostream>

using namespace std;
int digits(int n){
  static int dig=0;
  if(n!=0){
      dig++;
      digits(n/10);
  }
  return dig;

  
}

int main()
{
    int n;
    cin>>n;
    cout<<"no. of digits in "<<n<<" are "<<digits(n);

    return 0;
}