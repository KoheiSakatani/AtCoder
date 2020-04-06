#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  string s; cin >> s;
  for(int i = 0; i < 4; ++i){
    for(int j = 3; j > i; --j ){
      if(s[j-1] > s[j]){
        char c = s[j];
        s[j] = s[j-1];
        s[j-1] = c;
      }
    }
  }
  vector<int> alpha(26,0);
  if(s[0] == '*'){
    for(int i = 1; i < 4; ++i) alpha[s[i]-65]++;
    rep(i,26){
      if(alpha[i] == 3){
        cout << "FourCard" << endl;
        return 0;
      }
      else if(alpha[i] == 2){
        cout << "ThreeCard" << endl;
        return 0;
      }
    }
    cout << "OnePair" << endl;
    return 0;
  }
  else{
    rep(i,4) alpha[s[i]-65]++;
    vector<int> score(4,0);
    rep(i,26){
      if(alpha[i] == 1) score[0]++;
      else if(alpha[i] == 2) score[1]++;
      else if(alpha[i] == 3) score[2]++;
      else if(alpha[i] == 4) score[3]++;
    }
    if(score[0] == 4) cout << "NoPair" << endl;
    else if(score[1] == 1) cout << "OnePair" << endl;
    else if(score[1] == 2) cout << "TwoPair" << endl;
    else if(score[2] == 1) cout << "ThreeCard" << endl;
    else if(score[3] == 1) cout << "FourCard" << endl;
  }
  return 0;
}
