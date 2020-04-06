#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;
const long long INF = 1LL << 60;


ll N,minutes = 0;
ll M[5];
ll Min = INF;

int main(){
  cin >> N;
  rep(i,5){
    cin >> M[i];
    if(Min > M[i]) Min = M[i];
  }
  minutes += ((N/Min)+4);
  if(N%Min != 0) minutes++;
  cout <<  minutes << endl;
  return 0;

}
