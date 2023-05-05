#include<iostream>
using namespace std;
// bubble sort
void fun (int arr[]){
	int temp;
for(int i=0;i<5;i++){
for(int j=0;j<5-i-1;j++){
if(arr[j]>arr[j+1]){
temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
//2 swaping method
//temp=arr[j];
//arr[j]=arr[j+1];
//arr[j+1]=temp;
}
}
}
}
int main(){
int arr[5];
cout<<" Enter five numbers to match "<<endl;
for(int i=0;i<5;i++){
arr[i]=rand()%10;
}
for(int i=0;i<5;i++){
cout<<" Arrays are "<<arr[i]<<endl;
}
fun(arr);
for(int i=0;i<5;i++){
cout<<" Arrays sorted are "<<arr[i]<<endl;
}
return 0;		
}