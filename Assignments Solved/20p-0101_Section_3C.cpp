#include<iostream>
using namespace std;

struct BstNode {
		int data; 
	BstNode* left;
		BstNode* right;
};


BstNode* GetNewNode(int data) {
		BstNode* newNode = new BstNode();
	newNode->data = data;
		newNode->left = newNode->right = NULL;
	return newNode;
}


BstNode* Insert(BstNode *root,char data) {
	if(root == NULL) {
		root = new BstNode();
			root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}



 BstNode * FindMin(BstNode* root) {
	if(root == NULL) return NULL;
	while(root->left != NULL)
		root = root->left;
	return root;
}

BstNode* Find(BstNode*root, int data) {
				if(root == NULL) return NULL;
	else if(root->data == data) return root;
				else if(root->data < data) return Find(root->right,data);
	else return Find(root->left,data);
}
 BstNode* Delete(BstNode *root, int data) {
				if(root == NULL) return root; 
	else if(data < root->data) root->left = Delete(root->left,data);
				else if (data > root->data) root->right = Delete(root->right,data);	
	else {
		
				if(root->left == NULL && root->right == NULL) { 
			delete root;
				root = NULL;
		}
	
				else if(root->left == NULL) {
			BstNode *temp = root;
				root = root->right;
				delete temp;
		}
		else if(root->right == NULL) {
			BstNode *temp = root;
				root = root->left;
			delete temp;
		}
		
		else { 
			BstNode *temp = FindMin(root->right);
				root->data = temp->data;
			root->right = Delete(root->right,temp->data);
		}
	}
	return root;
}

BstNode* getsuccesor(BstNode*root,int data){
				BstNode*curr=Find(root,data);
	if(curr==NULL) return NULL;
				if(curr->right!=NULL){
		return FindMin(curr->right);
	}
	else{
		BstNode*successor=NULL;
	    		BstNode* ancestor = root;
		while(ancestor != curr) {
					if(curr->data < ancestor->data) {
				successor = ancestor; 
					ancestor = ancestor->left;
			}
			else
				ancestor = ancestor->right;
		}
			return successor;
	}
}
void Inorder(BstNode *root) {
		if(root == NULL) return;
 
	Inorder(root->left);       
		printf("%d ",root->data);  
	Inorder(root->right);      
}


int main() {
	
		BstNode* root = NULL;
	root = Insert(root,37);
		root = Insert(root,67);
	root = Insert(root,45);
		root = Insert(root,62);
	root = Insert(root,34);
		root = Insert(root,23);
	root = Insert(root,89);

	root = Delete(root,34);

		cout<<"Inorder Traversal: ";
	Inorder(root);
		cout<<"\n";
 
	BstNode* successor = getsuccesor(root,67);
		if(successor == NULL) cout<<"No successor Found\n";
	else
    	cout<<"Successor is "<<successor->data<<"\n";
}