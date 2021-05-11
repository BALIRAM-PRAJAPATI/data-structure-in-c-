#include<bits/stdc++.h>
using namespace std;
void largestElement(int arr[], int size)
{
    int max = arr[0];
    for(int i =1; i<size;i++)
    {
         if(arr[i]>max)
            {
                max = arr[i];
            }
    }
    cout<<"\nlargest element in the array is:"<<" "<<max;
}
int main()
{
    int *p, size;
    cout<<"enter the length of array\n";
    cin>>size;
    p = new int[size];
    cout<<"enter the number in the array\n";
    for(int i=0;i<size;i++)
    {
        cin>>p[i];
    }
    cout<<"entered element are:"<<" ";
    for(int i =0; i<size;i++)
    {
        cout<<p[i]<<" ";
    }
    largestElement(p, size);
    return 0;
}
