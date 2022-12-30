#include <iostream>
using namespace std;

void NaivetrailingZeros(int fact){
  int count=0;
  while(fact%10==0){
      count++;
      fact/=10;
  }
  cout<<"Number of trailing zeros: "<<count;
}

int efficientTrailingZeros(int num){
  int res=0;
  for(int i=5;i<=num;i*=5){
    res+=num/i;
  }
  return res;
}

int main() {
  int num,count=0;
  long long int fact=1;
  cin>>num;
  cout<<efficientTrailingZeros(num);
}