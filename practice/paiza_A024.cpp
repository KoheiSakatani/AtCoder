#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct _idx{
  int num1;
  int num2;
};

int main(){
  int N,K; cin >> N >> K;
  _idx idx[2*N-1];
  int sum = 0,count = 0;

  for(int i = 1; i <= 2*N; ++i) sum += i;

  for(int i = 1; i < 2*N; ++i){
    for(int j = i+1; i < 2*N; ++j){
      int tmp = abs(i-j);
      idx[tmp].num1 = i; idx[tmp].num2 = j;
    }
  }

  int tmp = sum;
  sum =- idx[].num1 - idx[].num2;

  if(sum == 0) count += 2;


  return 0;
}
