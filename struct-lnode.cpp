#include<iostream>
#include<malloc.h>
using namespace std;

typedef struct enode{
	int adjvex;//ָ��Ľ��λ�� 
	enode *next;//ָ����һ���ߵ�ָ�� 
}enode;//������ 

typedef struct vnode{
 	char info;//����Ϣ
	enode *firstarc; 
}vnode;

typedef struct{
	vnode adjlist[10];
	int v,e; //v:��������e:���� 
}graph;

int main(){
	
	graph *g;
	g=new graph;
	for(int i=1;i<=5;i++){
		h
	}
	
	return 0;
}
