#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
typedef pair<int, int> P;
const long long INF = 1LL << 60;

int N,x[100],y[100];
ll d = 1;
double sum = 0;

int main(){
  cin >> N;
  vector<int> num(N);
  rep(i,N) num[i] = i+1;
  rep(i,N) cin >> x[i] >> y[i];
  for(int i = 1; i < N+1; ++i) d *= i;
  do{
    rep(i,N-1){
      sum += sqrt(pow(x[num[i]-1]-x[num[i+1]-1],2) + pow(y[num[i]-1]-y[num[i+1]-1],2));
    }
  }while(next_permutation(num.begin(),num.end()));
  double ave = sum/d;
  cout << fixed << setprecision(6) << ave << endl;
  return 0;
}
