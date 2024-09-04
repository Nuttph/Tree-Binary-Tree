#include "stdio.h"
#include "stdlib.h"

//struct tree
typedef struct node{
	struct node *left;
	char data;
	struct node *right;
}Node;

Node Checkroot(struct node *start){
	printf("%c",start->data);
};

Node AddRightNode(struct node *start){
	char cc;
	Node *ptr = (struct node *)malloc(sizeof(struct node));
	printf("Data : ");
	getch(cc);
	start->right = &ptr;
	ptr->data = cc;
	ptr->right = NULL;
	ptr->left = NULL;
	
	printf("%c",start->right->data);
}

Node AddLeftNode(struct node *start){
	Node *ptr = (struct node *)malloc(sizeof(struct node));
	start->left = &ptr;
	ptr->data = 'C';
	ptr->right = NULL;
	ptr->left = NULL;
	
	pritn("%c",start->left->data);
}

Node Search(struct node *start){
	char cc;
	printf("Data :");
	scanf("%c",&cc);
	
	Node *ptr = (struct node *)malloc(sizeof(struct node));
	ptr = &start;
	while(ptr->data != cc && ptr->right != NULL){
		ptr = ptr->right;
	}
	if(ptr->data == cc){
		return ptr;
	}
//	while()
}

int main(){
	int choice;
	Node ans;
	start->data = 'A';
	start->right = NULL;
	start->left = NULL;	
	printf("hello world\n");
	printf("1:Check root node\n");
	printf("2:Add Data at Right Node\n");
	printf("2:Add Data at Left Node\n");
	printf("Switch : ");
	scanf("%d",&choice);
	switch(choice){
		case 1 : Checkroot(start); break;
		case 2 : AddRightNode(start); break;
		case 3 : AddLeftNode(start); break;
		case 4 : ans = Search(start); break;
	}
	return 0;
}