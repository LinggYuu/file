#include<iostream>
using namespace std;


typedef struct{
	int x[1005],y[1005];
	int n=0,nn=0;
}person;
person p[25];
int xl,yd,xr,yu;

int jg[25],dl[25];
int cnt1,cnt2;
bool zz(int x,int y,int xl,int yd,int xr,int yu){
	
	if(x>=xl&&x<=xr&&y>=yd&&y<=yu)
	{
		return true;
	}
	return false;
}
int main(){

	int n,k,t,xl,yd,xr,yu;
	
	cin>>n>>k>>t>>xl>>yd>>xr>>yu;
	for(int i=0;i<n;i++)
		for(int j=0;j<t;j++)
		{
			cin>>p[i].x[j]>>p[i].y[j];
		}
		
	for(int i=0;i<n;i++)
		for(int j=0;j<t;j++)
		{
			if(zz(p[i].x[j],p[i].y[j],xl,yd,xr,yu)){
				p[i].n=1;
				int flag=0;
				for(int h=j;h<=j+k-1&&h<t;h++)
				{
					if(zz(p[i].x[h],p[i].y[h],xl,yd,xr,yu)){
						flag++;
				
				}
				if(flag==k){
					p[i].nn=1;
					break;
					}
				}
			}
		}
		
		for(int i=0;i<n;i++){
			if(p[i].n==1)cnt1++;
			if(p[i].nn==1)cnt2++;
		}
		cout<<cnt1<<endl;
		cout<<cnt2<<endl;
	}

