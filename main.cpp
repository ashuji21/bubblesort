#include<bits/stdc++.h>

using namespace std;
void bubblesort(int arr[], int n){
     for(int i=0; i<n; i++){
     	bool flag=false;
     	for(int j=1; j<n-i; j++){
     		if(arr[j]<arr[j-1]){
     			swap(arr[j],arr[j-1]);
     			flag=true;
     		}
     	}
     	if(flag==false) break;
     }
}
int main(){
   int n;
   cin>>n;
   int arr[]={5,3,2,5,3,3,2,1,0,1};
   bubblesort(arr,n);
   for(int i=0; i<n; i++){
   	cout<<arr[i]<<" ";
   }
   return 0;

}