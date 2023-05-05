#include<iostream>
using namespace std;
 // Selection Sort
int main(){
int arr[5];
int temp;
int min;
cout<<" Enter five numbers to match "<<endl;
for(int i=0;i<5;i++){
arr[i]=rand()%10;
}

for(int i=0;i<5;i++){
cout<<" Arrays are "<<arr[i]<<endl;
}

for(int i=0;i<4;i++){
min=i;
for(int j=i+1;j<5;j++){
if(arr[j]<arr[min])
{
	min=j;
}
}
temp=arr[min];
arr[min]=arr[i];
arr[i]=temp;
}

for(int i=0;i<5;i++){
cout<<" Arrays sorted are "<<arr[i]<<endl;
}
return 0;		
}