#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[], int l, int m, int r)
{
    int i = l;
    int j = m+1;
    int k = l;
    int size = r;
    int temp[size];
    while(i<=m&&j<=r)
    {
        if(arr[i]<arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
          temp[k] = arr[j];
          j++;
          k++;
        }
    }
    while(i<=m)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j<=r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(int s= l;s<=r;s++)
    {
        arr[s] = temp[s];
    }

}
void MergeSort(int arr[], int l, int r)
{

    if(l<r)
    {
        int m= (l+r)/2;
        MergeSort(arr, l, m);
        MergeSort(arr, m+1, r);
        Merge(arr, l, m, r);
    }
}
int main()
{
    int size, i;
    cout<<"enter the length of the array"<<endl;
    cin>>size;
    int myarr[size];
    cout<<"enter the"<< size<<" element in the array"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>myarr[i];
    }
    cout<<"array before sorting is"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<myarr[i]<<" ";
    }
    cout<<"\narray after sorting is"<<endl;
    MergeSort(myarr,0, (size-1));
    for(int i =0;i<size;i++)
    {
        cout<<myarr[i]<<endl;
    }
    return 0;
}
