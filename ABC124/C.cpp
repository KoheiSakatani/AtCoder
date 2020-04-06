#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(int i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;

int main(){
  int c0 = 0, c1 = 0;
  string S; cin >> S;
  char str[S.length()], str1[S.length()];
  cout << endl;
  cout << S << endl;
  cout << "S.length() = " << S.length() << endl;
  rep(i,S.length()){
    cout << "i = " <<  i << endl;
    if(i%2 == 0){
      str[i] = '0';
      str1[i] = '1';
    }
    else{
      str[i] = '1';
      str1[i] = '0';
    }
  }
  cout << "str = ";
  rep(i,S.length()) cout << str[i];
  cout << endl;
  cout << "str1 = ";
  rep(i,S.length()) cout << str1[i];
  cout << endl;
  rep(i,S.length()){
    if(str[i] != S[i]) c0++;
    if(str1[i] != S[i]) c1++;
  }
  if(c0 < c1) cout << c0 << endl;
  else cout << c1 << endl;
  /*cout << "c0 = " << c0 << "c1 = " << c1 << endl;
  cout << min(c0,c1) << endl;*/
  return 0;
}
