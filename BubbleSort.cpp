#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[], int size)
{
    int temp, i, j;
    bool flag;
    for(i=0;i<size-1;i++)
    {
        flag =false;
        for(j =0;j<size-1-i;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j] = temp;
                flag = true;
            }
        }
        if(flag == false)
        {
            break;
        }
    }
}
int main()
{
    int *p,size,i;
    cout<<"enter the length of array\n";
    cin>>size;
    p = new int[size];
    cout<<"enter the element in the array\n";
    for(i =0;i<size;i++)
    {
        cin>>p[i];
    }
    cout<<"element before sorting"<<" ";
    for(i =0;i<size;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<"\n";

    BubbleSort(p, size);
    cout<<"element after sorting is:"<<" ";
    for(i =0;i<size;i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}
