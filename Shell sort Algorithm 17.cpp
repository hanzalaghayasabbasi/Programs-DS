#include<iostream>
using namespace std;
// shell sort
void shellsort(int arr[],int s)
{
for(int gap=s/2;gap>0;gap/=2){
for(int i=gap;i<s;i+=1)
{
int temp=arr[i];
    int k=0;
for(k=i;(k>=gap) && (arr[k-gap])>temp;k-=gap){
	arr[k]=arr[k-gap];
}	
arr[k]=temp;		
}	
}
}
int main(){
  //int arr_size = sizeof(myarray)/sizeof(myarray[0]);
int size;
int arr[5];
arr[size];
  cout << "Enter  array size in any order: " << endl;
  cin>>size;
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  cout << "Before Sorting" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  shellsort(arr,size); // mergesort(arr,left,right) called

  cout << "After Sorting" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
/*
void shellsort(int arr[],int s)
{
for(int gap=s/2;gap>0;gap/=2){
	
for(int i=gap;i<s;i+=1){	
int temp=arr[i];
int k=0;
for(k=i;(k>=gap)&&(arr[k-gap] > temp); k-=gap)
{
	arr[k]=arr[k-gap];
}
	arr[k]=temp;
}
}
}*/