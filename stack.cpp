#include<bits/stdc++.h>
using namespace std;
class Stack{
private:
    int top;
     int arr[5];
public:
    Stack()
    {
        top = -1;
        for(int i = 0; i<5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if(top == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int val)
    {
        if(isFull())
        {
            cout << "stack is overflow\n";
        }
        else
        {
            top++;
            arr[top] = val;
            cout << "value is inserted\n";
        }
    }
    int pop()
    {
        if(isEmpty())
        {
            cout << "stack is underflow\n";
        }
        else
        {
            int popvalue = arr[top];
            arr[top] = 0;
            top--;
            return popvalue;
        }
    }
    void count()
    {
        cout <<"count is ="<<top+1;
    }
    int peek(int pos)
    {
        if(isEmpty())
        {
            cout << "stack is underflow\n";
            return 0;
        }
        else
        {
            return arr[pos];
        }
    }
    void change(int pos, int val)
    {
        if(isEmpty())
        {
           cout << "stack is underflow\n";
        }
        else
        {
            arr[pos] = val;
            cout << "the value changed at location \n:"<< pos<<endl;
        }
    }
    void display()
    {
        cout <<"stack item is =\n";
        for(int i = 4; i>=0;i--)
        {
           cout << arr[i]<<"\n";
        }
    }
};
int main()
{
   Stack s1;
   int num = 1, val, pos;
   while(num!=0)
   {
       cout <<"enter your choice\n";
       cout <<"1. for push operation\n";
       cout <<"2. for pop operation\n";
       cout <<"3. for change value in stack\n";
       cout <<"4. for to check stack is empty or not operation\n";
       cout <<"5. for to check stack is full or not operation\n";
       cout <<"6. for to check peek value of stack operation\n";
       cout <<"7. for count  operation\n";
       cout <<"8. for display operation\n";
       cout <<"9. for exit operation\n";
       cout <<"10. for clear screen  operation\n";
       cin>>num;
       switch(num)
       {
       case 1:
        cout <<"enter your value\n";
        cin>>val;
        s1.push(val);
        break;
       case 2:
        cout << "the withdraw value is \n "<<s1.pop();
        break;
       case 3:
        cout <<"enter the position where you want to change\n";
        cin>>pos;
        cout<<"enter the value\n";
        cin>>val;
        s1.change(pos, val);
        break;
       case 4:
         if(s1.isEmpty())
            cout <<"stack is empty\n";
         else
            cout<<"stack is not empty\n";
        break;
       case 5:
        if(s1.isFull())
            cout <<"stack is full\n";
        else
            cout<<"stack is not full\n";
        break;
       case 6:
        cout <<"enter your position\n";
        cin>>pos;
        cout << s1.peek(pos);
        break;
       case 7:
        s1.count();
        break;
       case 8:
        s1.display();
        break;
       case 9:
        num = 0;
        break;
       case 10:
        system("cls");
       default :
        cout <<"enter proper number\n";

       }
   }

    return 0;
}
