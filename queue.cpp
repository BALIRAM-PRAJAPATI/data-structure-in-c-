#include<bits/stdc++.h>
using namespace std;
class Queue
{
private:
    int arr[5];
    int rear;
    int front;
public:
    Queue()
    {
        rear = -1;
        front = -1;
        for(int i =0;i<5;i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if(rear == -1 && front == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(rear == 4)
            return true;
        else
            return false;
    }
    int Count()
    {
        return (rear-front)+1;
    }
   void Enqueue(int val)
    {
       if(isFull())
       {
           cout<<"queue is full"<<endl;
       }
       else if(isEmpty())
       {
           rear = 0;
           front = 0;
           arr[rear] = val;
       }
       else
       {
           rear++;
           arr[rear] = val;
       }
    }
   int Dqueue()
   {
       int x = 0;
       if(isEmpty())
       {
           cout<<"queue is empty\n";
       }
       else if(rear == front)
       {
           x = arr[front];
           arr[front] = 0;
           rear = -1;
           front = -1;
           return x;
       }
       else
       {
           x = arr[front];
           arr[front] = 0;
           front++;
           return x;
       }
   }
   void change(int val, int pos)
   {
       if(isEmpty())
       {
           cout<<"please enter element in queue to change\n";
       }
       else
       {
           arr[pos-1] = val;
       }
   }
   void display()
   {
       cout<<"element of the queue is \n";
       for(int i =0;i<5;i++)
       {
           cout<<arr[i]<<endl;
       }
   }
};
int main()
{
    Queue q1;
    int val,option, pos;
    do
    {
       cout<<"enter your choose to perform operation in queue\n";
       cout<<"0.exit()\n";
       cout<<"1.enqueue()\n";
       cout<<"2.dqueue()\n";
       cout<<"3.isFull()\n";
       cout<<"4.isEmpty()\n";
       cout<<"5.count()\n";
       cout<<"6.display()\n";
       cout<<"7.change()\n";
       cout<<"8.clear screen\n";
       cin>>option;
       switch(option)
       {
       case 1:
        cout<<"enter element to insert in the queue\n";
        cin>>val;
        q1.Enqueue(val);
        break;
       case 2:
        cout<<q1.Dqueue()<<" element is removed\n";
        break;
       case 3:
        if(q1.isFull())
        {
            cout<<"queue is full\n";
            break;
        }
        else
        {
            cout<<"queue is not full\n";
            break;
        }
        case 4:
        if(q1.isEmpty())
        {
            cout<<"queue is empty\n";
            break;
        }
        else
        {
            cout<<"queue is not empty\n";
            break;
        }
        case 5:
            cout<<"total number in queue is"<<" "<<q1.Count()<<endl;
            break;
        case 6:
            q1.display();
            break;
        case 7:
            cout<<"enter your element\n";
            cin>>val;
            cout<<"enter your pos\n";
            cin>>pos;
            q1.change(val, pos);
            break;
        case 8:
            system("cls");
            break;
        default:
            cout<<"please enter valid number\n";
            break;
       }
    }
    while(option!=0);
    return 0;
}
