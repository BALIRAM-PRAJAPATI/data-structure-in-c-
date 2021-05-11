#include<bits/stdc++.h>
using namespace std;
void permutation(string s, int l, int r)
{
    int temp;
    if(l == r)
    {
        cout<<s<<endl;
    }
    else
    {
      for(int i =l;i<=r;i++)
      {
          temp = s[i];
          s[i] = s[l];
          s[l] = temp;
          permutation(s, l+1, r);
          temp = s[i];
          s[i] = s[l];
          s[l] = temp;
      }
    }
}
int main()
{
    int size;
    string s;
    cout<<"enter the string or number for permutation\n";
    cin>>s;
    int r = s.size();
    cout<<"permutation of string is \n";
    permutation(s, 0, (r-1));
    return 0;
}
