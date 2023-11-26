#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node * left;
	struct node * right;
};
struct node * init(int data){
	struct node * temp=(node *)malloc(sizeof(node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
void inorder(struct node * temp){
	if(temp!=NULL){
		inorder(temp->left);
		printf("%d ",temp->data);
		inorder(temp->right);
	}
}
void preorder(struct node * temp){
	if(temp!=NULL){
		printf("%d ",temp->data);
		inorder(temp->left);
		inorder(temp->right);
	}
}
void postorder(struct node * temp){
	if(temp!=NULL){
		inorder(temp->left);
		inorder(temp->right);
		printf("%d ",temp->data);
		
	}
}
int findMax(struct node* root)
{
    if (root == NULL)
        return INT_MIN;
    int res = root->data;
    int lres = findMax(root->left);
    int rres = findMax(root->right);
    if (lres > res)
        res = lres;
    if (rres > res)
        res = rres;
    return res;
}
int findMin(struct node* root)
{
    if (root == NULL)
        return INT_MAX;
    int res = root->data;
    int lres = findMin(root->left);
    int rres = findMin(root->right);
    if (lres < res)
        res = lres;
    if (rres < res)
        res = rres;
    return res;
}
int main(){
	struct node * root;
	root=init(15);
	root->left=init(9);
	root->right=init(17);
	root->left->right=init(12);
	root->right->left=init(7);
	root->left->left=init(27);
	printf("inorder -> ");
	inorder(root);
	printf("\npreorder -> ");
	preorder(root);
	printf("\npostorder -> ");
	postorder(root);
	printf("\nMax is -> %d",findMax(root));
	printf("\nMin is -> %d",findMin(root));
}

