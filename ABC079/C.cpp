#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;
typedef long long ll;

int stoi(char c){ return (c-48); }


int main(){
  string str; cin >> str;
  vector<int> num(4,0);
  vector<char> op;
  rep(i,4) num[i] = stoi(str[i]);
  rep(bit,8){ //bit全探索
    int ans = num[0];
    for(int j = 0; j < 3; ++j){
      if(bit >> j & 1){
        op.push_back('+');
        ans += num[j+1];
      }else{
        op.push_back('-');
        ans -= num[j+1];
      }
    }
    if(ans == 7){
      cout << num[0];
      rep(j,3) cout << op[j] << num[j+1];
      cout << "=7" << endl;
      return 0;
    }
    op.clear();
  }
  return 0;
}
