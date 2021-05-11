#include<bits/stdc++.h>
using namespace std;
main()
{
    int user_no, even_no, odd_no;
    cout << "enter your number\n";
    cin >> user_no;
    while(user_no!= 1)
    {
        if(user_no%2 == 0)
        {
           user_no = user_no/2;
           cout << user_no << " ";
        }
        else
        {
            user_no = user_no*3+1;
            cout << user_no << " ";
        }

    }
    cout << "\noperation is complete";
}
