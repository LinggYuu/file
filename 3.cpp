#include<iostream>
using namespace std;

typedef struct d{
	int x,y;
	int f=0;
	int ff=0;
}ljd;

ljd d[1005];
int count[10];
int main(){
	int n;//À¬»øµãÊý
	cin>>n; 
	for(int i=1;i<=n;i++){
		cin>>d[i].x>>d[i].y;
		d[i].f=1;	
	} 
	
	for(int i=1;i<=n;i++){
		int flag=0;
		if(d[i].f==1){
			for(int j=1;j<=n;j++)
			{
				if(d[j].x==d[i].x&&d[j].y==d[i].y+1&&d[j].f==1)
				flag++;
			}
			for(int j=1;j<=n;j++)
			{
				if(d[j].x==d[i].x&&d[j].y==d[i].y-1&&d[j].f==1)
				flag++;
			}
			for(int j=1;j<=n;j++)
			{
				if(d[j].x==d[i].x+1&&d[j].y==d[i].y&&d[j].f==1)
				flag++;
			}
			for(int j=1;j<=n;j++)
			{
				if(d[j].x==d[i].x-1&&d[j].y==d[i].y&&d[j].f==1)
				flag++;
			}
			if(flag==4)		
				d[i].ff=1;
		}
	}
	for(int i=1;i<=n;i++){
		if(d[i].ff==1){
			int flag=0;
			for(int j=1;j<=n;j++)
			{
				if(d[j].x==d[i].x-1&&d[j].y==d[i].y+1&&d[j].f==1)
				flag++;
			}
			for(int j=1;j<=n;j++)
			{
				if(d[j].x==d[i].x+1&&d[j].y==d[i].y+1&&d[j].f==1)
				flag++;
			}
			for(int j=1;j<=n;j++)
			{
				if(d[j].x==d[i].x+1&&d[j].y==d[i].y-1&&d[j].f==1)
				flag++;
			}
			for(int j=1;j<=n;j++)
			{
				if(d[j].x==d[i].x-1&&d[j].y==d[i].y-1&&d[j].f==1)
				flag++;
			}
			count[flag]++;
		}
	}
	for(int i=0;i<=4;i++)
		cout<<count[i]<<endl;
	
	
	
}//main
