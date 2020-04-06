#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  string S,T; cin >> S >> T;
  string ans = S;
  vector<string> c;
  //cout << S << " " << T << endl;
  while(1){
    string tmp = S;
    rep(i,10){
      int Prev = i-1,Next = i+1;
      if(Prev < 0) Prev = 9;
      if(Next >= 10) Next = 0;
      if(S[Prev] == '-' && S[Next] == '-'){
        tmp[i] = T[0];
      }
      else if(S[Prev] == '-' && S[Next] == '+'){
        tmp[i] = T[1];
      }
      else if(S[Prev] == '+' && S[Next] == '-'){
        tmp[i] = T[2];
      }
      else if(S[Prev] == '+' && S[Next] == '+'){
        tmp[i] = T[3];
      }
    }
    S = tmp;
    cout << "S = "<< S << endl;
    if(ans.compare(S) == 0){
      cout << "YES" << endl;
      return 0;
    }
    if(c.size() != 0){
      for(int i = 0; i < c.size(); ++i){
        if(c[i].compare(S) == 0){
          cout << "NO" << endl;
          return 0;
        }
      }
    }
    c.push_back(S);
    cout << "c.size()" << c.size() << endl;
  }
  return 0;
}
