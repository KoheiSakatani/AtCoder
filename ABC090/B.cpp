#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;

int A,B,C = 0,c = 0,length;
string str_A;

int main(){
  cin >> A >> B;
  for(int i = A; i <= B; ++i){
    C = 0;
    str_A = to_string(i);
    length = str_A.length()-1;
    rep(j,2) if(str_A[length-j] == str_A[j]) C++;
    if(C == (length/2)) c++;
  }
  cout << c << endl;
  return 0;
}
