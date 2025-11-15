#include <iostream>
#include <stack>
using namespace std;
stack<char> stri;
long long m,n;
long long o=0;
void stacler(char ch[]){
  for(n=0;n<m;n++){
  if (!stri.empty()){
    if (stri.top()==ch[n]){
      stri.pop();
      o++;
    }
    else{
      stri.push(ch[n]);
      
    }

  }
  else if (n==0){
    stri.push(ch[n]);
  }
  else{
    stri.push(ch[n]);
    o++;
  }
  }
}
int main(){
  cin>>m;
  char ch[m];
  cin>>ch;
  stacler(ch);
  cout<<o;
}
