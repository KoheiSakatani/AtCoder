#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
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
      subStr.clear(); //中身を空っぽにする
    }
  }
  ll num = stoll(subStr);
  sum += num;
  return sum;
}
ll Insert(string str,ll inserted_idx,ll sum, int t){
  cout << "str is " << str << endl;
  if(inserted_idx > str.length()-1) return 0;

  str.insert(inserted_idx,"+");
  t++;
  sum = Insert(str,inserted_idx+t,sum,t);

  sum += splitandsum(str);
  //cout << "sum is " << sum << endl;
  return sum;
}
int main(){
  string str; cin >> str;
  ll sum = 0;
  ll idx = 1;
  for(; idx < str.length(); ++idx){
    sum += Insert(str,idx,0,2);
    //cout << endl << "sum is " << sum << endl;
  }
  cout << sum + stoLL(str) << endl;
  return 0;
}
