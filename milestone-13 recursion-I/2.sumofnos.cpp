#include <iostream>

using namespace std;
int sums(int n) {
  if (n==0){
    return 0;
  }
 
  int sum=n+sums(n-1);
  return sum;
}

int main()
{
    cout<<"The sum of nos. are:-  "<<sums(5);

    return 0;
}
