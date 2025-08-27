// Online C compiler to run C program online
#include <stdio.h>
//merge_sorting using c language
void merge(int arr[],int left , int mid , int right ){
    int n1 = mid - left+1;
    int n2 = right - mid;
    int L[n1] , R[n2];
    
    for(int i = 0; i<n1;i++)
        L[i] = arr[left +i];
    
    for(int j = 0 ; j< n2;j++)
        R[j] = arr[mid + 1+j];
        
        int i = 0,j= 0,k=left;
        
        while(i<n1 && j<n2){
            if(L[i] <= R[j])
            arr[k++] =L[i++];
            else
            arr[k++] = R[j++];
        }
        
        while(i<n1)
        arr[k++] = L[i++];
        
        while(j<n2)
        arr[k++] = R[j++];
    
}

void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid = left +(right - left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        
        merge(arr,left,mid,right);
    }
}
int main() {
  int arr[10] = {1,3,5,7,9,0,8,6,4,2};
  int n= sizeof(arr)/sizeof(arr[0]);
  printf("origina array: ");
  for(int i = 0;i<n;i++)printf("%d ",arr[i]);
  printf("\n");
  
  mergesort(arr,0,n-1);
  
  printf("Sorted array: ");
  for(int i = 0;i<n;i++)printf("%d ",arr[i]);
  printf("\n");

    return 0;
}