#include<iostream>
using namespace std;
// circular Queue
// ITEM COUNT LOGIC IS DIFFERENT FROM Queu
class crQueue{
private:
	// if you assign array 4 it will give Queue is not empty if you perform empty opertion to fix it assign 5 to array
 int arr[5];
 int count;
    int rear;
    int front;
    public:
crQueue(){
//	count logic
// count count number of values
	int count=0;
	front=-1;
	rear=-1;
	for(int i=0;i<5;i++){
		arr[i]=0;
	}
}
bool isEmpty(){
	if(front==-1 && rear==-1)
		return true;
	else
	return false;
}

bool isfull()
{
//first change in Queue to make it Circular queue
// circular queue
// or if(rear==size(arr)-1)
		if((rear+1)%5==front){
		return true;
	}
	else
	return false;
}
void enqueue(int val){
	
	if(isfull())
{
	cout<<"Queue is full "<<endl;
	return;
}
else if(isEmpty()){

rear=front=0;
arr[rear]=val;
count++;
}
else{
//second change in Queue to make it Circular queue
// circular queue
//when last index comes which is four in this case 3+1=4;rear=4%4=0 so it doesnot enter in last index it again restart 
// from 0
rear=(rear+1)%5;
arr[rear]=val;
count++;
}
}
int dequeue(){
	int x=0;
if(isEmpty())
return 0;
else if(front==rear){
x=arr[front];
arr[front]=0;
// removing it
front=rear=-1;
count--;
return x;
}
else{
x=arr[front];
arr[front]=0; 
//third change in Queue to make it Circular queue
// circular queue
front=(front+1)%5;
count--;
return x;
}

}
int cunt(){
return count;
}

void display(){
cout<<"ALL Values in Queue are : "<<endl;
for(int i=0;i<5;i++){
		cout<<arr[i]<<endl;
	}
}
};

int main(){
crQueue h1;
int option,value;

do{
	cout<<" What opertion do you want to perform?Select option number.Enter 0 to exit "<<endl;
	cout<<"1. Enqeue() "<<endl;
    cout<<"2. Dequeue() "<<endl;
	cout<<"3. isEmpty() "<<endl;
    cout<<"4. isfull() "<<endl;
    cout<<"5. count() "<<endl;
    cout<<"6. display() "<<endl;
	cout<<"7. clear screen "<<endl<<endl;
	
	cin>>option;
	switch(option){
		case 0:
			break;
		case 1:
		cout<<"Enter an item to enqueue in the queue "<<endl;
		cin>>value;
		h1.enqueue(value);
		break;
		case 2:
		cout<<" Dequeue Operation \n Dequeued value : "<<h1.dequeue()<<endl;
     	break;
		case 3:
         if(h1.isEmpty()){
         cout<<" queue is empty "<<endl;
           }	
             else
            {   
               cout<<" queue is not empty "<<endl;
               }
         break;	
case 4:
if(h1.isfull()){
cout<<" queue is full "<<endl;
}	
else
{
cout<<" queue is not full "<<endl;
}
break;
case 5:
	cout<<" Count function called Number of item i Queue are "<<h1.cunt()<<endl;
	break;
case 6:
	cout<<" display function called "<<endl;
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