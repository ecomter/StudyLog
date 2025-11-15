#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
const int MAXUIM = 100002; 
int n,scores=-10000;




int monster[MAXUIM];

void queryscore(){
 	
	int score[n];
	memset(score,0,sizeof(score));
	sort(monster,monster+n); 
	monster[n]=MAXUIM;
	int u=0;
	for(int x=0,di,tem2,tem1=-1;x<n;x++){
		if(monster[x]<monster[x+1]){
			tem2=x;
			di=tem2-tem1; 
			score[u]=di;
			tem1=tem2;
			u++;
		}
	} 
	for(int um=0;um<u;um++){
    if (scores<score[um]){
    scores=score[um];}
  }
}
int main(){
  freopen("duel1.in","r",stdin);	
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>monster[i];
	}
	queryscore();
	cout<<scores;		
  fclose(stdin);
	return 0;
 }

