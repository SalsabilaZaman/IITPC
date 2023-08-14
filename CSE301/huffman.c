#include<stdio.h>
#include<stdlib.h>
#define n 5
struct node{
	char ch;
	int freq;
	struct node *left;
	struct node *right;
};

void sortnodes(struct node *arr[],int num){
	for(int i=0;i<num;i++)
	   for(int j=i+1;j<num;j++)
	     if(arr[i]>arr[j]){
	     		struct node *swap=malloc(sizeof(struct node));
	     		swap=arr[i];
	     		arr[i]=arr[j];
	     		arr[j]=swap;
	     }
}

struct node* createNode(int frequency){
	struct node* newNode=malloc(sizeof(struct node));
	newNode->freq=frequency;
	newNode->left=NULL;
	newNode->right=NULL;
}

struct node* huffmanTree(struct node *arr[]){
	
	for(int i=0;i<n;i++){
	struct node* parent;
	sortnodes(arr,n-i);
	parent=createNode(arr[0]->freq+arr[1]->freq);
	parent->left=arr[0];
	parent->right=arr[1];
	arr[0]=parent->freq;
	arr[1]=NULL;
	}
	
	return arr[0];
}


int main(){
	
	struct node *nodes[n];
	for(int i=0;i<n;i++)
	  nodes[i]=malloc(sizeof(struct node));
	  
	for(int i=0;i<n;i++){
		scanf("%c",&nodes[i]->ch);
	}  
	for(int i=0;i<n;i++){
		scanf("%d",&nodes[i]->freq);
		nodes[i]->left=NULL;
		nodes[i]->right=NULL;
	}
	
	
	return 0;
}
