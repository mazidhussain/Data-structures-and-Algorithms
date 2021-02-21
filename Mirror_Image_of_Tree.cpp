#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

struct bstNode
{
	int data;
	bstNode* left;
	bstNode* right;
};

bstNode* getanode(int x){
	bstNode *newnode=new bstNode();
	newnode->data=x;
	newnode->left=nullptr;
	newnode->right=nullptr;
	return newnode;
}
bstNode* insert(bstNode* root, int data )
{
	if(root==nullptr){
		root=getanode(data);
		return root;
	}
	else if(data<=root->data){
		root->left=insert(root->left,data);
	}
	else{
		root->right=insert(root->right,data);
	}
	return root;
}

void inorder(bstNode *root){
	if(root==nullptr){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	return ;
}

bstNode* mirror(bstNode* root){
	if(root==nullptr){
		return root;
	}
	bstNode* t=root->left;
	root->left=root->right;
	root->right=t;
	if(root->left!=NULL){
		mirror(root->left);
	}
	if(root->right!=NULL){
		mirror(root->right);
	}
	return root;
}

int main(){


	ios_base::sync_with_stdio(false);cin.tie(NULL); 
   
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
    #endif 

	bstNode* root=new bstNode();
	insert(root,5);
	insert(root,3);
	insert(root,6);
	insert(root,2);
	insert(root,4);
	inorder(root);
	cout<<endl;
	mirror(root);
	inorder(root);
	
}