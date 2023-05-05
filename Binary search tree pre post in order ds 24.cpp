#include<iostream>
using namespace std;
#define SPACE 10

class TreeNode{
  	public:
  		int val;
  		TreeNode *left;
  		TreeNode *right;
  	TreeNode(){
  		val=0;
  		left=NULL;
  		right=NULL;
	  }
	 TreeNode(int v){	
		val=v;
  		left=NULL;
  		right=NULL;

	  }
  };
class BST{
	public:
	TreeNode* root;	
  BST() {
    root = NULL;
  }	
	bool empty(){
		if(root==NULL){
			return true;
		}
		else
		return false;
	}

void insert(TreeNode *k){	
	if(root==NULL){
		root=k;
	cout<<" Value inserted at root node "<<endl;
	}
	else{
	TreeNode* temp=root;
	while(temp!=NULL){
	if(k->val==temp->val){
	cout<<"No duplication allowed "<<endl;
	return;
	}	
	else if((k->val<temp->val) && (temp->left==NULL)){
		temp->left=k;
		cout<<" Value Inserted to left "<<endl;
		break;
	}	
	else if(k->val<temp->val){
		temp=temp->left;
	}	
	else if((k->val>temp->val) && (temp->right==NULL)){
	temp->right=k;
	cout<<" Value Inserted to right "<<endl;
	break;
	}
	else{
		temp=temp->right;
	}			
}
}
}
void print(TreeNode *r,int space)
{
	// printing binary tree data structutrre
	if(r==NULL) //base case
	return;
	space+=SPACE; // increse distance between levels
print(r->right,space);// process right child first
cout<<endl;
for(int i=SPACE; i<space;i++) //print current node after space
	cout<<" ";
	cout<<r->val<<"\n ";
	print(r->left,space); // process left child
}
// Printing in pre order(Node-left-right)

void preorder(TreeNode *r){

if(r==NULL)
return;	
// first print data of node 
cout<<r->val<<"  ";
// then recur on left sutree //
preorder(r->left);
// then recur on right sutree //
preorder(r->right);
}

void inorder(TreeNode *k){
if(k==NULL)
return;
inorder(k->left);
cout<<k->val<<" ";
inorder(k->right);
}

void postorder(TreeNode *k){
if(k==NULL)
return;
inorder(k->left);
inorder(k->right);
cout<<k->val<<" ";
}
};

int main()
{
	BST obj;
int option,v;
do{
cout<<" What Opertion you want to performed "<<endl;	
cout<<" Select 0 to exit "<<endl;
	cout<<" 1 -Insert Node "<<endl;
	cout<<" 2 Search Node  "<<endl;
	cout<<" 3 Delete Node "<<endl;
	cout<<" 4 Print BST(Binary search tree) value "<<endl;
	cout<<" 5 Clear Screen  "<<endl;
	cout<<" 0 Exit  Program "<<endl;
	cin>>option;
// in stack memory pointer of k is created
TreeNode *k=new TreeNode();
switch(option){	
case 0:
break;
 case 1:
cout<<"Enter value of tree top Insert "<<endl;
cin>>v;
k->val=v;
obj.insert(k);
cout<<endl;
break;
case 2:
cout<<" Search "<<endl;
break;
 case 3:
cout<<" Delete Node "<<endl;
break;
 case 4:
cout<<"  Printing BST(Binary search tree) value "<<endl;
obj.print(obj.root,5);
cout<<" Pre order ";
obj.preorder(obj.root);
cout<<" IN order ";
obj.inorder(obj.root);
cout<<" Post order "<<endl;
obj.postorder(obj.root);
break;
 case 5:
cout<<" clear Screen "<<endl;
system(" cls ");
break;
default:
cout<<"Invalid option choose another option "<<endl;
cin>>option;
}
}while(option!=0);

  return 0;
}
