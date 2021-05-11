#include<bits/stdc++.h>
using namespace std;
BinarySearch(int arr[], int left, int right,int num)
{
    int min, temp = 0;

    while(left<=right)
    {
        min = left+(right-left)/2;
        if(arr[min] == num)
        {
            cout<<"number find in the " <<min<<" "<<"position\n";
            temp = 1;
            break;
        }
        else if(arr[min]>num)
        {
            right = min-1;
        }
        else if(arr[min]<num)
        {
            left = min+1;
        }
    }
    if(temp == 0)
    {
        cout <<"number not found in the array\n";
    }
}
int main()
{
    int i, n, num, arr[7];
    cout <<"enter the number in the array\n";
    for(i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    cout <<"enter the number which you want to search\n";
    cin>>num;
    BinarySearch(arr,0,6, num);
    return 0;
}
