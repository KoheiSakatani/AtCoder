#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(int i = 0; i < (n); ++i )

using namespace std;
const long long INF = 1LL << 60;

int N;
int sum = 0,c = 0;
int a[100010];
bool colors[8];
int main(){
  cin >> N;
  rep(i,N) cin >> a[i];
  rep(i,8) colors[i] = false;
  rep(i,N){
    if(a[i] >= 3200) c++;
    else if(colors[a[i]/400] == false ){
      sum++;
      colors[a[i]/400] = true;
    }
  }
  if(sum == 0){
    sum++;
    cout << sum << " ";
    sum = 0;
  }else cout << sum << " ";
  //if(sum + c >= 8) cout << "8" << endl;
  cout << sum + c << endl;
  return 0;
}
