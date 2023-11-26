#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * left;
	struct node * right;
};

int search(struct node * temp,int data){
	if(temp!=NULL){
		if(temp->data==data){
		    printf("\nYES\n");
		    return data;
	    }
	    else if(data<temp->data){
	    	search(temp->left,data);
		}
		else{
			search(temp->right,data);
		}
	}
	else{
		printf("\nNO\n");
		return 0;
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

struct node * init(int data){
	struct node * temp=(node *)malloc(sizeof(node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
struct node * newelement(int data, struct node * root){
	struct node * temp=(node *)malloc(sizeof(node));
	temp=root;
	if(temp==NULL){
		temp=init(data);
	}
	if(data<temp->data){
	temp->left = newelement(data,temp->left);
	}
	else if(data>temp->data){
	temp->right = newelement(data,temp->right);
	}
	return temp;
}
struct node* inorderpre(struct node * temp){
	temp=temp->left;
	while(temp->right != NULL){
		temp = temp->right;
	}
	return temp;
}
struct node * delelement( struct node * temp , int value){
	struct node * inpre=(node *)malloc(sizeof(node));
	if(temp==NULL){
		return NULL;
	}
	if(temp->left == NULL && temp->right == NULL && temp->data==value){
		free(temp);
		return NULL;
	}
	if(value<temp->data){
	    	delelement(temp->left,value);
		}
	else if(value>temp->data){
			delelement(temp->right,value);
		}
	else{
		inpre=inorderpre(temp);
		temp->data=inpre->data;
		temp->left=delelement(temp->left,inpre->data);
	}
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
		preorder(temp->left);
		preorder(temp->right);
	}
}
void postorder(struct node * temp){
	if(temp!=NULL){
		postorder(temp->left);
		postorder(temp->right);
		printf("%d ",temp->data);
		
	}
}
int main(){
	struct node * root;
	root = init(7);
	root = newelement(52,root);
    root = newelement(19,root);
    root = newelement(84,root);
    root = newelement(27,root);
    root = newelement(11,root);
    printf("inorder->");
	inorder(root);
	printf("%d is present",search(root,11));
	root = delelement(root,52);
	printf("\ninorder->");
	inorder(root);
}

