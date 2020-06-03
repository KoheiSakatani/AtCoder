//FizzBuzz列 a1,a2,... を次のように定めます。
//i が 3 でも 5 でも割り切れるなら、ai=FizzBuzz
//そうではなく i が 3 で割り切れるなら、ai=Fizz
//そうではなく i が 5 で割り切れるなら、ai=Buzz
//そうではないなら、ai=i
//FizzBuzz列の N 項目までに含まれる数の和を求めてください。
#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  ll N; cin >> N;
  ll sum = 0;
  for(ll i = 1; i <= N; ++i){
    if(!(((i % 3 == 0) && (i % 5 == 0)) || (i % 3 == 0) || (i % 5 == 0))){
      sum += i;
    }
  }
  cout << sum << endl;
  return 0;
}
