#include<bits/stdc++.h>
#define ll long long
using namespace std;

string Solve (string S, int K){
    string x = "";
    priority_queue < char, vector < char >, greater < char >>res;
    for (int i = 0; i < K; i++){
      res.push (S[i]);
    }
    for (int i = K; i < S.size (); i++){
    x += res.top ();
    res.pop ();
    res.push (S[i]);
    }
    while (!res.empty ()){
    x += res.top ();
    res.pop ();
    }

    return x;

}

int
main ()
{
  ios_base::sync_with_stdio (false);
  cin.tie (NULL);
  string S;
  cin >> S;
  int K;
  cin >> K;
  string out_ = Solve (S, K);
  cout << out_;
  return 0;
}

