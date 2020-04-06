#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
using P = pair<int, int>;
const long long INF = 1LL << 60;

int main(){
  int A,B; cin >> A >> B;
  int a_digit = log10(A), b_digit = log10(B);
  if(a_digit < b_digit){
    int tmp = A;
    A = B;
    B = tmp;
    tmp = a_digit;
    a_digit = b_digit;
    b_digit = tmp;
  }
  //cout << a_digit << endl;
  vector<int> sum(3,0);
  for(int i = 0; i <= a_digit; ++i){
    int d = pow(10,i+1);
    int c = pow(10,i);
    int a = (A%d)/c;
    int b = (B%d)/c;
    //cout << a << b << c << d << endl;

    sum[i] = (a+b) % 10;
    A -= (a*c); B -= (b*c);
    //cout << "A = " << A << " B = " << B << endl;
    cout << sum[i] << endl;
  }
  //cout << a_digit << " " << b_digit << endl;
  rep_rev(a_digit,i) cout << sum[i];
  cout << endl;
  return 0;
}
