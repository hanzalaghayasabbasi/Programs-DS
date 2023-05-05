#include<iostream>
using namespace std;
//
//C++ program to implement stack using Single linked list 
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
class stack{
public:
	Node* top;
	
 stack()
{
top=NULL;	
	}
bool empty(){
	if(top==NULL){
		return true;
	}
	else{
		return false;
	}
}
bool nodeexist(Node * n){
	Node *temp=top;
	bool exist=false;
while (temp!=NULL){
	if(temp->key==n->key){
		exist=true;
		break;
	}
	temp=temp->next;
}
return exist;
}

void push(Node* n){
if(top==NULL)
{
	top=n;
	cout<<"Node pushed succefully ";
}
else if(nodeexist(n)){
	cout<< " Node already exits with key value  Enter different key value "<<endl;  
}
else{
Node *temp=top;
top=n;
n->next=temp;
cout<<"Node pushed succefully ";
}
}
Node* pop()
 {
 	Node *temp=NULL;
 	if(empty()){
 	cout<< " stack underflow "<<endl;
	return temp;
	 	 }
		 	 else{
		 	temp=top;
		  	top=top->next;
		 	return temp;
			  }
 }
 
 Node* peek()
 {
 	Node *temp=NULL;
 	if(empty()){
 	cout<< " stack underflow "<<endl;
	return temp;
	 	 }
		  else{
		  return top;
		  		  }
 }
 
 int count(){
 	int count=0;
 	Node *temp=top;
	 while(temp!=NULL){
	 	count++;
	 	temp=temp->next;
	 }
 	return count;
}
 
 // display
 void display(){
 	cout<<" All the values in stack are "<<endl;
 	Node *temp=top;
 	while(temp!=NULL){
 		 	cout<<" ( "<<temp->key<<","<<temp->data<<") -->"<<temp->next<<") -->";
		temp=temp->next;
		  }
cout<< " Total number of nodes i n stack are "<<count()<<endl;
cout<<endl;
}
 
};
int main(){
 stack h1;
int option;
int key1,k1,data1;

do{
	cout<<" What opertion do you want to perform?Select option number.Enter 0 to exit "<<endl;
	cout<<"1. Push() "<<endl;
    cout<<"2. Pop() "<<endl;
	cout<<"3. isEmpty() "<<endl;
    cout<<"4. peek() "<<endl;
    cout<<"5. count() "<<endl;
    cout<<"6. display() "<<endl;
	cout<<"7. clear screen "<<endl<<endl;
	
	cin>>option;
	//if we use this one time then the probaly it will give ssome error or remove from memory on next itretion
	//Node n;
	// Node n1= new Node();
	// dynamic memory allocation
	// heap memory
// make it globle variable and you delete dynamic allocation you use delete keyword delete.newNod(
	Node* n1=new Node();
	switch(option){
		case 0:
			break;
		case 1:
		cout<<" Push Node operation \n Enter key & data of node to append "<<endl;
		cin>>key1;
	    cin>>data1;
	    //assigning value
	    n1->key=key1;
	    n1->data=data1;
		h1.push(n1);
//	cout<<n1.key<<" =  "<<n1.data<<endl;
		break;
		case 2:
		cout<<"Pop function called "<<endl;
		n1=h1.pop();
		cout<<" Top of stack is : ( "<<n1->key<<" , "<<n1->data<<" ) "<<endl;
  // to release memory
  delete n1;
     	break;
		case 3:
			if(h1.empty()){
cout<<" stack is Empty "<<endl;
}
else
cout<< " stack is not empty "<<endl;
break;
case 4:
if(h1.empty()){
cout<<" stack is Empty "<<endl;
}
else
cout<< " Peek function called  "<<endl;
n1=h1.peek();
cout<< " Top of stack is  ( "<<n1->key<<" , "<< n1->data<<" ) "<<endl;
break;
case 5:
	cout<<" Count function called  "<<endl;
	cout<<" No of node in stack is "<< h1.count()<<endl;
	break;
case 6:
	cout<<" Display all "<<endl;
h1.display();
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