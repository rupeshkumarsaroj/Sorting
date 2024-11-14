#include<stdio.h>
int partition(int arr[],int low,int high){
    int i=low;
    int j=high+1;
    int X=arr[low];
    do{
        do{
            i++;
        }while(arr[i]<X);
    do{
        j--;
    }while(arr[j]>X);
    if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }while(i<j);
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void QuickSort(int arr[],int low,int high){
    if(low<high){
        int j=partition(arr,low,high);
        QuickSort(arr,low,j-1);
        QuickSort(arr,j+1,high);
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
    QuickSort(arr,low,high);
    printf("\nElements after sorting: ");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    return 0;
}