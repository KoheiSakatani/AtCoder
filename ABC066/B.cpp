#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

int N,ac;
string str;

int main(){
  //cin >> N;
  cin >> str;
  for(int i = 1; i < str.length(); ++i){
    if((str.length()-i) % 2 == 1) continue;
    ac = 0;
    //cout << "i = " << i <<  " str.length() - i = " << str.length() - i << endl;
    for(int j = 0; j < (str.length()-i)/2; ++j){
      //cout << "str[" << j << "] = " << str[j] << "とstr[" << (j + str.length()-i)/2 << "] = " << str[(j+str.length()-i)/2] << "を比較" << endl;

      if(str[j] == str[j + (str.length()-i)/2]){
        //cout << "str[" << j << "] = " << str[j] << "とstr[" << j + str.length()-i << "] = " << str[j+str.length()-i] << "は等しい" << endl;
        ac++;
      }
    }
    if(ac == (str.length()-i)/2){
      cout << str.length() - i << endl;
      return 0;
    }
  }
  return 0;
}
