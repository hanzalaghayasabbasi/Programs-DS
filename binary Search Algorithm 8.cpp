#include<iostream>
using namespace std;
 // the idea of binary search is use the information that the Array is Sorted 
 // And reduce the time Complexity
 
int fun(int arr[],int left,int right,int num){
int mid=left+(right-left)/2;
while(left<=right){
if(arr[mid]==num){
return mid;
}
// else if(arr[mid]>num) this is used for descending order
else if(arr[mid]<num){
mid=mid+1;
//mid=mid-1;
}
else{
mid=mid-1;
//mid=mid+1;
}
}
return -1;
}

int main(){
int arr[5];
int num;
int out;
cout<<" Enter five numbers to match "<<endl;
for(int i=0;i<5;i++){
cin>>arr[i];
}
for(int i=0;i<5;i++){
cout<<" Arrays are "<<arr[i]<<endl;
}

cout<<"Enter number you want to search "<<endl;
cin>>num;
out=fun(arr,0,9,num);
if(out==-1){
	cout<<" No match found "<<endl;
}
else{
	cout<<" Match found at index "<<out<<endl;
}
return 0;		
}