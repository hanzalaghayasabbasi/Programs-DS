#include<iostream>
using namespace std;
 
void fun(int arr[],int num){
	int temp=-1;
	for(int i=0;i<5;i++){
if(arr[i]==num){
cout<<" Array  match at postion  "<<i+1<<endl;
     temp=0;    
}
	}
	if(temp==-1){
		cout<<" Array donot match "<<endl;
	}
} 

int main(){
int arr[5];
int num;
cout<<" Enter five numbers to match "<<endl;
for(int i=0;i<5;i++){
cin>>arr[i];
}
for(int i=0;i<5;i++){
cout<<" Arrays are "<<arr[i]<<endl;
}
cout<<"Enter number you want to search "<<endl;
cin>>num;
fun(arr,num);

		
}