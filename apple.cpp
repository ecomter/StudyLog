#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  freopen("apple.in","r",stdin);
  freopen("apple.out","w",stdout);
  
int n,ans2,ams1;
  cin>>n;
  while(n){
    ams1++;
    if(n%3==1){
      ans2=ams1;
    }
   n-=(n+2)/3;
  }
  cout<<ams1<<ans2<<endl;

  
  fclose(stdout);
  fclose(stdin);

  return 0;
}
