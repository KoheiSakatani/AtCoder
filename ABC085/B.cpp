#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i = 0; i < (n); ++i )
#define rep_rev(n,i) for(ll i = n; i >= 0; --i )
using namespace std;
const long long INF = 1LL << 60;
 //setを使う練習問題
int N;
set<int> st;

 int main(){
   cin >> N;
   rep(i,N){
     int tmp;
     cin >> tmp;
     st.insert(tmp);
   }
   cout << st.size() << endl;
   return 0;
 }
