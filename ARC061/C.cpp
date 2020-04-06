#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;
typedef long long ll;

ll stoLL(string str){
  int digits = str.length();
  ll num = 0;
  for(const char c : str){
    num += (c-48) * pow(10,digits-1);
    digits--;
  }
  return num;
}

ll splitandsum(string str){
  string subStr;
  ll sum = 0;
  for(const char c : str){
    if(c != '+') subStr += c;
    else{
      ll num = stoLL(subStr);
      sum += num;
      subStr.clear();
    }
  }
  ll num = stoLL(subStr);
  sum += num;
  return sum;
}

int main(){
  string S; cin >> S;
  ll sum = 0;
  rep(bit,pow(2,S.length()-1)){ //bit全探索
    string tmp = S;
    int inserted_idx = 1;
    rep(j,S.length()-1){
      if(bit >> j & 1){
        tmp.insert(inserted_idx,"+");
        inserted_idx += 2;
      }
      else inserted_idx++;
    }
    sum += splitandsum(tmp);
  }
  cout << sum << endl;
  return 0;
}
