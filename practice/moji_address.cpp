#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i )
int main(){
  stack<string> s;
  string str; cin >> str;
  char c[1000];

  rep(i,str.length()) c[i] = str[i];

  string str2;
  rep(i,str.length()) str2[i] = c[i];
  cout << "str2[i]が格納されているアドレスの出力" << endl;
  rep(i,str.length()+1) printf("str2[%d]のアドレスは%p\n",i ,&str2[i]);
  cout << *(&str2) << endl;
  str2 = c;
  cout << "char型の配列cをstringクラスに代入した時の変数str2のアドレス" << endl;
  cout << &str2 << endl;
  return 0;
}
