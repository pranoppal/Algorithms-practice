#include<stdio.h>
void main(){
	int arr[10]={3,5,1,5,7,3,8,12,6,9},i,j,key,temp,n=10;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	for(i=0;i<10;i++)
		printf("\t%d",arr[i]);
}
