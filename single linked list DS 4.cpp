#include<iostream>
using namespace std;
/*
single linked list option
1 appendNode();
2 prependNode();
3 insertNodeAfter()
4 deleteNodebykey();
5 updateNodebykey();
6 print();
*/

class Node{
public:
	int key;
	int data;
	Node* next;

Node()
{
	key=0;
	data=0;
	next=NULL;
	}
	
Node(int k,int d)
{
	key=k;
	data=d;
	}

};
class singlelinkedlist{
public:
	Node* head;
	
singlelinkedlist()
{
	head=NULL;
	
	}
//	pass by addreess
singlelinkedlist(Node *n)
{
	head=n;
	}
	// 1 check if node exist using key value
Node* nodeExists(int k){
	Node* temp=NULL;
	// if there is some value in list it will not be empty 41 line addrees particlur address of node
	Node* ptr=head;
	while(ptr!=NULL){
		if(ptr->key==k){
		temp=ptr;
	}
//	next has null value
ptr=ptr->next;
}
return temp;
}
// 2 Append a node
void appendNode(Node *n){
	if(nodeExists(n->key)!=NULL)
{
cout<<"Node alraedy exit with key value "<<n->key<<"Append another key with different value "<<endl;
}
else
{
	// beacuse head is last value is =nuull
	if(head==NULL){
	
		head=n;
		cout<<"Node Appended "<<endl;
	
	}
	else{
		Node* ptr=head;

	while(ptr!=NULL){
		
		ptr=ptr->next;
		
	}
	
	ptr->next=n;
		cout<<"Node Appended "<<endl;
	
	}
	
}
}

// prepend Node attach node at start
 void prependNode(Node *n){
 	if(nodeExists(n->key)!=NULL)
{
cout<<"Node alraedy exit with key value "<<n->key<<"Append another key with different value "<<endl;
}
else
{
	n->next=head;
	head=n;
	cout<<"Node is prpend "<<endl;
}
}
 	// insert Node after particular node in the list
 	void insertNodeAfter(int k,Node* n)
 	{
 //			if(nodeExists(n->k)
//{
//cout<<"Node alraedy exit with key value "<<n->k<<"Append another key with different value "<<endl;
//}
 		// we use this method  because we donot check we also want to store it
 	Node* ptr=nodeExists(k);
	 if(ptr==NULL){
	 	cout<<"No node exits "<<k<<endl;
	 }	
	 else 
	 {
	 	if(nodeExists(n->key)!=NULL)
{
cout<<"Node alraedy exit with key value "<<n->key<<"Append another key with different value "<<endl;
}
else
 	{
 		n->next=ptr->next;
 		ptr->next=n;
	 cout<<"NOde inserted"<<endl;
	 }
	 }
	 }
 	// 5 deleting node by unique key
void deleteNodeKey(int k)
{
	if(head==NULL)
	 {
	 	cout<<" Singly link list alrady Empty. Cannt delete "<<endl;
	 }
else if(head!=NULL)
{
	if(head->key==k)
	{
		head=head->next;
		cout<< " Node Unliked with key Value : " <<k<<endl;
	}
else{
Node* temp=NULL;
Node* prevptr =head;
Node* currentptr=head->next;
while(currentptr!=NULL){
	if(currentptr->key==k){
		temp= currentptr;
		currentptr=NULL;
	}
	else{
		prevptr=prevptr->next;
		currentptr=currentptr->next;
	}
}
	if(temp!=NULL){
	prevptr=prevptr->next;
	cout<< " Node Unlinked with key Value "<<k<<endl;
	}
	else
	{
	cout<<" Node doesnot exist with key Value : "<<k<<endl;
	}
	}
}	
}

// 6 update nodde
void update(int k,int d){
		Node* ptr=nodeExists(k);
	if(ptr!=NULL){
	ptr->data=d;
	cout<<"Node data update Succefully "<<endl;
	}
	else{
		cout<<"Node doesnot exist with key Value "<<endl;
	}
//	next has n
}
 // print
 void print(){
 	if(head==NULL){
 		cout<<"No Node in Single linked list "<<endl;
	 }
else{
	cout<<endl<<" Single linked list  Values "<<endl;
	Node* temp =head;
	
	while(temp!=NULL){
		cout<<" ( "<<temp->key<<","<<temp->data<<") -->";
		temp=temp->next;
	}
		
		
	}
} 
};
int main(){
singlelinkedlist h1;
int option;
int key1,k1,data1;

do{
	cout<<" What opertion do you want to perform?Select option number.Enter 0 to exit "<<endl;
	cout<<"1. appendNode() "<<endl;
    cout<<"2. prependNode() "<<endl;
	cout<<"3. insertNodeAfter() "<<endl;
    cout<<"4. deleteNodeByKey() "<<endl;
    cout<<"5. updateNodeByKey() "<<endl;
    cout<<"6. print() "<<endl;
	cout<<"7. clear screen "<<endl<<endl;
	
	cin>>option;
	//if we use this one time then the probaly it will give ssome error or remove from memory on next itretion
	//Node n;
	// dynamic memory allocation
	// heap memory
	Node* n1=new Node();
	switch(option){
		case 0:
			break;
		case 1:
		cout<<" Append Node operation \n Enter key & data of node to append "<<endl;
		cin>>key1;
	    cin>>data1;
	    //assigning value
	    n1->key=key1;
	    n1->data=data1;
		h1.appendNode(n1);
//	cout<<n1.key<<" =  "<<n1.data<<endl;
		break;
		case 2:
		cout<<"Prepend node enter key & data to prepend "<<endl;
		cin>>key1;
cin>>data1;
n1->key=key1;
n1->data=data1;
h1.prependNode(n1);
     	break;
		case 3:
cout<<"Insert Node after Operation\n Enter key of existimg node after which you want to Insert mode "<<endl;
cin>>k1;
cout<<"Enter key & data of new mode first "<<endl;
cin>>key1;
cin>>data1;
n1->key=key1;
n1->data=data1;
h1.insertNodeAfter(k1,n1);
break;
case 4:
cout<<"Delete Mode by key Operation \n Enter node of key deleted "<<endl;
cin>>k1;
h1.deleteNodeKey(k1);
break;
case 5:
	cout<<" Update Node by key Operation -\n enter key and new data to updated  "<<endl;
	cin>>key1;
	cin>>data1;
	h1.update(key1,data1);
	break;
	
case 6:
	cout<<" Print all "<<endl;
h1.print();
break;
case 7:
	system("cls");
	break;
  	default:
  		cout<<" Enter Proper option number "<<endl;
cin>>option;
}
}while(option!=0);
return 0;
}