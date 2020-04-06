#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int n; cin >> n;
  char T[26]; rep(i,26) cin >> T[i];
  string str;
  getline(cin,str);
  getline(cin,str);
  cout << str << endl;
  //cout << str << endl;
  //cout << "str = " << str << endl;
  rep(i,str.length()){
    char tmp = str[i];
    rep(j,n){
      if(tmp == ' ') break;
      else{
        //cout << tmp << "を復号" << endl;
        rep(k,26){
          if(T[k] == tmp){
            tmp = 'a' + k;
            break;
          }
        }
      }
    }
    str[i] = tmp;
  }
  cout << str << endl;
  return 0;
}
