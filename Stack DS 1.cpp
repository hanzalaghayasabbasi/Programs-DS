#include<iostream>
using namespace std;
class stack{
#define n 5
//##stack is LIFO LAST in fisrt out and Queue is FIFO first in last out

private:
	int top;
    int arr[n];
    public:
stack(){
	top=-1;
// when you create stack object at first time everthing in stack is assigned to zero
	for(int i=0;i<5;i++)
	arr[i]=0;
}
// tells stack is empty or not
bool isempty(){
	if(top==-1)
	return true;
	else
	return false;
}
// tells stack is full or not
bool isfull()
{
	if(top==4)
	return true;
  else 
  return false;
}
// put an item on stack if there is no place for new item,stac into overflow state
void push(int val){
if(!isfull()){
// last in first out && first in last out stack method
// first top=-1 when top++ it become 0 then again top++ 1 and so on 
top++;
arr[top]=val;
}
else
cout<< " stack overflow "<<endl;
}
// return the item at top of stack and then remove it.
// pop is called when stack is empty it is underflow state
int pop(){
	if(isempty()){
	cout<< " stack is undeflow "<<endl;
return 0;
}
else
{
//	In pop we are accesing topo of the element and remove it but in peek  we are accesing the elemntpostion
	int popvalue = arr[top];
    arr[top]=0;
    top--;
    return  popvalue;
}
}
// get  of item number in stack
int count(){
// we are access
	return(top+1);
	
}
// access the item at postion i
int peek(int pos){
		if(isempty()){
	cout<< " stack is undeflow "<<endl;
return 0;
}
else
return arr[pos];
}
// changing the value
void change(int pos,int val){
	// changing value
	arr[pos]=val;
	cout<<"value change at location "<<pos<<endl;
}
// display all value descending order which means display value which is enter fisrt comes last
void display() {
cout<<" All values in stack are "<<endl;
for(int i=0;i<5;i++){
cout<<arr[i]<<endl;
}
}
};
int main(){

stack s1;
int option,postion,value;

do{
	cout<<" What opertion do you want to perform?Select option number.Enter 0 to exit "<<endl;
	cout<<"1. Push() "<<endl;
    cout<<"2. Pop() "<<endl;
	cout<<"3. isempty() "<<endl;
    cout<<"4. isfull() "<<endl;
	cout<<"5. peek() "<<endl;
    cout<<"6. count() "<<endl;
    cout<<"7. change() "<<endl;
    cout<<"8. display() "<<endl;
	cout<<"9. clear screen "<<endl<<endl;
	
	cin>>option;
	switch(option){
		case 0:
			break;
		case 1:
		cout<<"Enter an item to push in the stack "<<endl;
		cin>>value;
		s1.push(value);
		break;
		case 2:
		cout<<" pop fuction called  "<<s1.pop()<<endl;
     	break;
		case 3:
if(s1.isempty()){
cout<<" Stack is empty "<<endl;
}	
else
{
cout<<" stack is not empty "<<endl;
}
break;	
case 4:
if(s1.isfull()){
cout<<" Stack is full "<<endl;
}	
else
{
cout<<" stack is not full "<<endl;
}
break;
case 5:
	cout<<"Enter the postion item "<<endl;
	cin>>postion;
	cout<<" Peak function called value at postion  "<<postion<<" is "<<s1.peek(postion)<<endl;
	break;
case 6:
	cout<<" Count function called Number of item i stack are "<<s1.count()<<endl;
break;
case 7:
	cout<<" Change function called  "<<endl;
	cout<<"Enter the postion of item you want to change "<<endl;
	cin>>postion;
	cout<<endl;
	cout<<" Enter value of item you want to change : "<<endl;
	cin>>value;
	s1.change(postion,value);
	break;
	
	case 8:
	cout<<" Display function called "<<endl;
	s1.display();
	break;
  case 9:
  	system("cls");
  	break;
  	default:
  		cout<<" Enter Proper option number "<<endl;
cin>>option;
}
}while(option!=0);

return 0;
}