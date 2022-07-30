#include <iostream>

using namespace std;
void HelloWorld(int n) {
  if (n==1){
    cout<<n<<" ";
    return;
  }
 
  HelloWorld(n - 1);
  cout<<n<<" ";
}

int main()
{
    cout<<"The natural nos. are:-  ";
    HelloWorld(50);

    return 0;
}
