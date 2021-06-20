#include<bits/stdc++.h>
using namespace std;
int n,c;
int a[1010];
int main(){
	cin>>n>>c;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int cot=0,sum=0;
	for(int i=0;i<n;i++){
		if(c>=a[i]){
		sum++;c-=a[i];
		cot+=a[i];}
		else{
			break;
		}
	}
	cout<<sum<<" "<<cot<<endl;
} 
