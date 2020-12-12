#include<iostream>
#include<malloc.h>
using namespace std;

typedef struct node{
	int b;
	node *next;
}node;

node list;

int main(){
	list.next=(node*)malloc(sizeof(node));
	
	
	
}

