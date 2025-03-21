//binary search
#include<stdio.h>
int bsearch(int arr[],int i,int j,int key){
   if(i>j)
   return -1;
   int mid=(i+j)/2;
   if(arr[mid]==key)
   return mid;
   else if(arr[mid]<key)
   return bsearch(arr,mid+1,j,key);
   else
   return bsearch(arr,i,mid-1,key);
}
int main(){
    int n;
    printf("Enter the size of arr: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of arr: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter what number you want to search in an arr: ");
    scanf("%d",&key);
    int i=0,j=n-1;
    
    
    printf("got the number at index :%d",bsearch(arr,i,j,key));;
    return 0;
}