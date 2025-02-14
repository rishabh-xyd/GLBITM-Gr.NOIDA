//second largest element
#include<iostream>
using namespace std;
int secondLargestElement(int arr[],int n){
    int largest=0,res=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest]){        //largest element
        largest=i;      
        res=largest;                    //index of largest elelment

        }
    else if(arr[i]!=arr[largest])               //current elemet is not largest element
        if(res==-1||arr[res]<arr[i])            //current element should be largest than result
        res=arr[i];                                 //updation
    }
    return res;
}
int main(){
    int n;
    cout<<"enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elemets of array:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"the array inserted:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    int ans=secondLargestElement(arr,n);
    cout<<endl<<"the answere is:"<<ans;
    return 0;
}