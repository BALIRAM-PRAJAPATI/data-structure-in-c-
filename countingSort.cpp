#include<bits/stdc++.h>
using namespace std;
void countingSort(int arr[], int size)
{
int count_arr[10];
int output_arr[size], i;
for(i =0;i<10;i++)
{
    count_arr[i] = 0;
}
for(int i= 0;i<size;i++)
{
    ++count_arr[arr[i]];
}
for(i =1;i<10;i++)
{
    count_arr[i] = count_arr[i]+count_arr[i-1];
}
for(i =0;i<size;i++)
{
    output_arr[--count_arr[arr[i]]] = arr[i];
}
for(i =0;i<size;i++)
{
    arr[i] = output_arr[i];
}
}
int main()
{
    int size;
    cout<<"enter the length of array\n";
    cin>>size;
    int arr[size];
    cout<<"enter any number between 0 -10\n";

    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"element before sorting is \n";
    for(int i=0;i<size;i++)
    {
      cout<<arr[i]<< " ";
    }
    cout<<"\n element after sorting is\n";
    countingSort(arr, size);
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
