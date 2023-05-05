#include<iostream>
using namespace std;
// Insertion Sort
void fun(int arr[]){
int key=0;
int j=0;
for(int i=1;i<5;i++){
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key){
// while(j>=0 && arr[j]<key) to show greater to less than
	arr[j+1]=arr[j];
    j=j-1;
}
arr[j+1]=key;
}

}
int main(){
int arr[5];
cout<<" Enter five numbers to match "<<endl;
for(int i=0;i<5;i++){
cin>>arr[i];
}
for(int i=0;i<5;i++){
cout<<" Arrays are "<<arr[i]<<endl;
}

fun(arr);
for(int i=0;i<5;i++){
cout<<" Sorted Arrays are "<<arr[i]<<endl;
}
return 0;		
}