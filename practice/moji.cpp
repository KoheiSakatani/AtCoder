#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i )
int main(){
  stack<string> s;
  string str; cin >> str;
  cout << "標準入力から受け取ったstringクラスの変数strの出力" << endl;
  cout << str << endl;
  char c[1000];
  //string → char
  rep(i,str.length()) c[i] = str[i];
  cout << "strの文字を代入したchar型の配列cを1文字ずつ出力" << endl;
  rep(i,str.length()) cout << c[i];
  cout << endl;
  //char → string
  string str2;
  rep(i,str.length()) str2[i] = c[i];
  cout << "char型の配列cから1文字ずつ文字を受け取ったstringクラスの変数str2の出力" << endl;
  cout << str2 << endl;
  /*cout << "str2は空文字なの？" << endl;
  cout << str2.empty() << endl;*/
  cout << "str2[i]が格納されているアドレスの出力" << endl;
  rep(i,str.length()){
    printf("str2[%d]のアドレスは%p\n",i ,&str2[i]);
  }
  /*cout << "char型の配列cから1文字ずつ文字を受け取ったstringクラスの変数str2の出力(1文字ずつ出力)" << endl;
  rep(i,str.length()) cout << str2[i];
  cout << endl;*/

  str2 = c;
  cout << "char型の配列cをstringクラスに代入した時の変数str2の出力" << endl;
  cout << str2 << endl;
  cout << "char型の配列cをstringクラスに代入した時の変数str2のアドレス" << endl;
  cout << &str2 << endl;
  //rep(i,str)
  return 0;
}
