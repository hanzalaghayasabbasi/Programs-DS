#include<iostream>
using namespace std;
// Bubble sort run 5 round in this program but sorting is done on 3 rounds
// Optimizing bubble sort
// optimzing sort do bubble sort in three steps anf than break
// this will save our time
// we declear bool flag in buuble sort as shown
//so when the array is sorted in two round than third round comes it will break beacuse it doesnot enter if statment where bool=true
// the third round so condtion of bool=false is excuted and it will exit from loop
void fun (int arr[]){
	int temp;
	bool flag;
for(int i=0;i<5;i++){
	flag=false;
for(int j=0;j<5-i-1;j++){
if(arr[j]>arr[j+1]){
flag=true;
temp=arr[j+1];
arr[j+1]=arr[j];
arr[j]=temp;
//2 swaping method
//temp=arr[j];
//arr[j]=arr[j+1];
//arr[j+1]=temp;
}
}
//so when the array is sorted in two round than third round comes it will break beacuse it doesnot enter if statment where bool=true
// the third round so condtion of bool=false is excuted and it will exit from loop
// third round it will excuted
if (flag==false){
	break;
}
}
cout<<"ok"<<endl;
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