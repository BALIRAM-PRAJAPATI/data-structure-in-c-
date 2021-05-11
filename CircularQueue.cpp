#include<bits/stdc++.h>
using namespace std;
class Queue
{
private:
    int arr[5];
    int rear;
    int front;
    int itemQueue;
public:
    Queue()
    {
        itemQueue = 0;
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
        if((rear+1)%5 == front)
            return true;
        else
            return false;
    }
    int Count()
    {
        return itemQueue;
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
           itemQueue++;
       }
       else
       {
           rear = (rear+1)%5;
           arr[rear] = val;
           itemQueue++;
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
           itemQueue--;
           return x;
       }
       else
       {
           x = arr[front];
           arr[front] = 0;
           front = (front+1)%5;
           itemQueue--;
           return x;
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
       cout<<"7.clear screen\n";
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
