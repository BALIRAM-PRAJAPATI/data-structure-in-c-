#include<bits/stdc++.h>
using namespace std;
void CountingSort(int arr[], int size, int div)
{
    int output_arr[size];
    int count_arr[10];
    int i;
    for(i=0;i<10;i++)
    {
        count_arr[i]=0;
    }
    for(i=0;i<size;i++)
    {
        count_arr[(arr[i]/div)%10]++;
    }
    for(i=1;i<10;i++)
    {
        count_arr[i] =count_arr[i]+count_arr[i-1];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        output_arr[count_arr[ (arr[i]/div)%10 ] - 1] = arr[i];
        count_arr[ (arr[i]/div)%10 ]--;
    }
    for(i=0;i<size;i++)
    {
        arr[i] = output_arr[i];

    }
}
int getMax(int arr[], int size)
{
    int max = arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    //cout<<"max number "<<max;
    return max;
}
void RadixSort(int arr[], int size)
{
    int m = getMax(arr, size);
    for(int div = 1;m/div>0;div*=10)
    {
        CountingSort(arr, size, div);
    }

}
int main()
{
    int size,i;
    cout<<"enter the length of the array\n";
    cin>>size;
    int arr[size];
    cout<<"enter the:"<<size<<"element in the array"<<endl;
    for(i=0;i<size;i++)
    {
       cin>>arr[i];
    }
    cout<<"\n array before sorting is";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n array after sorting is";
    RadixSort(arr, size);
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
