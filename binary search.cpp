#include<bits/stdc++.h>
using namespace std;
LinearSearch(int arr[], int n, int num)
{
    int temp =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == num)
        {
           cout <<"number find in the " << i<<" " << "position";
           temp = 1;
        }
    }
    if(temp == 0)
    {
        cout <<"element not find in the array\n";
    }
}
int main()
{
    int n, num;
    int arr[5];
    cout <<"enter the length of array\n";
    cin >>n;
    cout <<"enter the "<<n<<" element in the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number which you want to search\n";
    cin>>num;
    LinearSearch(arr, n, num);
    return 0;
}
