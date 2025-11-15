#include<iostream>
#include<cmath>
using namespace std;
const double pi=3.141592654;
int main(){
  double x;
  cin>>x;
  x=(x*pi)/180;
  double result = sin(x);
  cout<<result;
  return 0;
}
