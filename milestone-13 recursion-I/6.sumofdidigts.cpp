#include <iostream>

using namespace std;
int digits(int n){
  int sum=0;
  if(n==0){
    return 0;
  }
  sum=(n%10)+digits(n/10);
  return sum;

  
}

int main()
{
    int n;
    cin>>n;
    cout<<"sum of digits in "<<n<<" are "<<digits(n);

    return 0;
}
