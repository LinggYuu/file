#include<iostream>
#include<malloc.h>
using namespace std;

typedef struct enode{
	int adjvex;//指向的结点位置 
	enode *next;//指向下一条边的指针 
}enode;//顶点结点 

typedef struct vnode{
 	char info;//点信息
	enode *firstarc; 
}vnode;

typedef struct{
	vnode adjlist[10];
	int v,e; //v:顶点数，e:边数 
}graph;

int main(){
	
	graph *g;
	g=new graph;
	for(int i=1;i<=5;i++){
		h
	}
	
	return 0;
}
