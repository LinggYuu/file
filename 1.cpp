#include<iostream>
using namespace std;

int n,X,Y;

typedef struct{
		int a,b,c;
		int jl;	
}jc;

jc d[205];


int main(){
	cin>>n>>X>>Y;
	for(int i=0;i<n;i++){
		d[i].c=i+1;
		cin>>d[i].a>>d[i].b;
	}
	for(int i=0;i<n;i++)
	{
		d[i].jl=(d[i].a-X)*(d[i].a-X)+(d[i].b-Y)*(d[i].b-Y);
	}

	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			if(d[j].jl<d[j-1].jl)
			{
				if(d[j].c>d[j-1].c){
			
					int p,q;
					p=d[j].jl;
					d[j].jl=d[j-1].jl;
					d[j-1].jl=p;
						
					q=d[j].c;
					d[j].c=d[j-1].c;
					d[j-1].c=q;
				}
			}
		}
	}
	for(int i=0;i<3;i++)
	{
		cout<<d[i].c<<endl;
	}
	
}
