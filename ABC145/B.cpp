#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; ++i)
using namespace std;

typedef long long ll;
int N;
string S;
int main(){
  cin >> N >> S;
  if(N%2 != 0){
    cout << "No" << endl;
    return 0;
  }
  for(int i = N/2; i < N; ++i){
    if(S[i - N/2] != S[i]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
