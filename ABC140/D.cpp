#include <bits/stdc++.h>
#define rep(i,n) (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(){
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;
  int score = 0;
  rep(i,n-1){
    if(s[i] == s[i+1]) score++;
  }
  int ans = min(score+2*k, n-1);
  cout << ans << endl;
  return 0;
}
