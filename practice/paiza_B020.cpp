#include <bits/stdc++.h>
#include <stack>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int n; cin >> n;
  vector<string> q(n);
  string str;
  getline(cin,str);
  rep(i,n) getline(cin,q[i]);
  /*rep(i,n){
    cout << q[i] << endl;
    cout << q[i].length() << endl;
  }*/
  stack<string> s;
  rep(i,n){
    string subStr = q[i].substr(6);
    if(q[i][0] == 'g'){
      //cout << "gコマンド" << endl;
      //rep(i,q[i].length()-6) st[i] = c[i];
      s.push(subStr);
      cout << s.top() << endl;

    }
    else if(q[i][0] == 'u'){
      //cout << "uコマンド" << endl;
      s.pop();
      cout << s.top() << endl;
    }
  }
  return 0;
}
