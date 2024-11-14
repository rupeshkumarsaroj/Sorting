#include<stdio.h>
int merge(int arr[],int low,int mid,int high){
    int i=low;
    int n1=mid;
    int j=mid+1;
    int n2=high;
    int k=low;
    int brr[high];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            brr[k++]=arr[i++];
        }
        else{
            brr[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        brr[k++]=arr[i++];
    }
    while(j<=high){
        brr[k++]=arr[j++];
    }
    for(int i=low;i<=high;i++){
        arr[i]=brr[i];
    }
    
    
}
void MergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
   
}
int main(){
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element in the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Element before sorting: ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    int low=0;
    int high=n-1;
    MergeSort(arr,low,high);
    printf("\nElements after sorting: ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}