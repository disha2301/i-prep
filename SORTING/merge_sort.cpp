#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid =(s+e)/2;
    int len1=mid-s+1;
    int len2 = e-mid;
    
    int *first = new int[len1];
    int *second = new int[len2];
    
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    int k=mid+1;
    for(i=0;i<len2;i++){
        second[i]=arr[k++];
    }
    
    //merge
    int index1=0
    int index2=0;
    mainArrayIndex=s;
    while(index1 < len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
             arr[mainArrayIndex++]=second[index2++];
            
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }
}
void mergeSort(int *arr, int s, int e){
    //base case
    if(s>e){
        return
    }
    
    //left part sort karna h
    mergeSort(arr,s,mid);
    
    //right part sort krna h
    mergeSort(arr, mid+1,e);
    
    //merge
    merge(arr,s,e);
}
int main(){
    int arr[5] = {2,5,1,6,9};
    int n=5;
    mergeSort(arr,0,n-1);
    return 0;
}