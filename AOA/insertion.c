# include<stdio.h>
# include<math.h>
int insertionSort (int arr[], int n)
{
int i,j,key;
for (i=1;i<n;i++)
{
    j=i-1;
    key=arr[i];

    while(j>=0 && arr[j]>=key) 
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
arr[j+1]=key;

}
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);

}
}
 int main()
 {
    int arr[] = {1,5,9,2,4,3,8,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);

 }