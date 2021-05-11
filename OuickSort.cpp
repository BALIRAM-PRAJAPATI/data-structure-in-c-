#include<bits/stdc++.h>
using namespace std;
int partion(int arr[], int s, int e)
{
  int pivot = arr[e];
  int pindex = s;
  for(int i = s;i<e;i++)
  {
      if(arr[i]<pivot)
      {
          int temp = arr[i];
          arr[i] = arr[pindex];
          arr[pindex] = temp;
          pindex++;
      }
  }
     int temp = arr[e];
      arr[e]= arr[pindex];
      arr[pindex] = temp;
      return pindex;
}
void QuickSort(int arr[], int s, int e)
{
    if(s<e)
    {
        int p = partion(arr, s, e);
                QuickSort(arr, s, p-1);
                QuickSort(arr, p+1, e);
    }
}
int main()
{
    int size, i;
    cout<<"enter the length of array"<<" ";
    cin>>size;
    int arr[size];
    cout<<"enter the "<< size<<" element in the array"<<" ";
    for(i = 0;i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"array before sorting"<<" ";
    for(i = 0; i < size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"array after sorting is"<<" ";
    QuickSort(arr, 0, (size-1));
    for(i =0; i< size;i++)
    {
        cout <<arr[i]<<" ";
    }
    return 0;
}
