#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    int data;
    Node* pre;
    Node* next;
    Node()
    {
        key = 0;
        data = 0;
        pre = NULL;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
        pre = NULL;
        next = NULL;
    }
};
class DoublylinkedList
{
public:
    Node* head;
    DoublylinkedList()
    {
        head = NULL;
    }
    DoublylinkedList(Node* n)
    {
        head = n;
    }
    //check node is exist or not
    Node* isExistNode(int k)
    {
        Node* temp = NULL;
        Node* ptr = head;
        while(ptr!=NULL)
        {
            if(ptr->key==k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }
    //append node at last
    void append(Node* n)
    {
        if(isExistNode(n->key)!=NULL)
        {
            cout<<"node already exist at" <<" "<<n->key<<"position"<<endl;
        }
        else
        {
            if(head == NULL)
            {
                head = n;
                cout<<"node add at last successfully\n";
            }
            else
            {
                Node* temp = head;
                while(temp->next!=NULL)
                {
                    temp = temp->next;
                }
                temp->next = n;
                n->pre = temp;
                cout<<"node add successfully\n";
            }
        }
    }
    //prepend node at first
    void prepend(Node* n)
    {
        if(isExistNode(n->key)!=NULL)
        {
            cout<<"node already exist at" <<n->key<<"position\n";
        }
        else
        {
            if(head == NULL)
            {
                head = n;
                cout<<"node already exist at" <<n->key<<"position\n";
            }
            else
            {
                head->pre = n;
                n->next = head;
                head = n;
            }
        }
    }
    //insert node at given position
    void Insert(int k, Node* n)
    {
       Node* ptr = isExistNode(k);
       if(ptr == NULL)
       {
           cout<<"node not exist at this position\n";
       }
       else
       {
           if(isExistNode(n->key)!=NULL)
           {
               cout<<"node already exist at this key please enter node at another location\n";
           }
           else
           {
               if(ptr->next==NULL)
               {
                   ptr->next= n;
                   n->pre = ptr;
                   cout<<"node inserted successfully\n";
               }
               else
               {
                   Node* temp = ptr->next;
                   n->next = ptr->next;
                   temp->pre = n;
                   n->pre = ptr;
                   ptr->next = n;
                   cout<<"node inserted successfully\n";
               }

           }
       }
    }
    //delete node
    void deleted(int k)
    {
        Node* ptr = isExistNode(k);
        if(ptr==NULL)
        {
            cout<<"node not exist\n";
        }
        else
        {
            if(head == NULL)
            {
                cout<<"linked list already empty\n";
            }
            else
            {
                if(head->key==k)
                {
                    head = head->next;
                    cout<<"node deleted successfully\n";
                }
                else
                {
                    if(ptr->next==NULL)
                    {
                        Node* temp = ptr->pre;
                        temp->next = NULL;
                        cout<<"node deleted successfully\n";
                    }
                    else
                    {
                        Node* temp = ptr->pre;
                        Node* del = ptr->next;
                        temp->next = ptr->next;
                        del->pre = temp;
                        cout<<"node deleted successfully\n";
                    }
                }
            }
        }
    }
    //update node
    void update(int k, int d)
    {
        Node* ptr = isExistNode(k);
        if(ptr == NULL)
        {
            cout<<"node does not exist\n";
        }
        else
        {
            ptr->data = d;
            cout<<"node update successfully\n";
        }
    }
    //view
    void show()
    {
        if(head == NULL)
        {
            cout<<"list is empty please enter node\n";
        }
       else
       {
            Node* temp = head;
            while(temp!=NULL)
            {
                cout<<"("<<temp->key<<","<<temp->data<<")"<<" ";
                temp = temp->next;
            }
       }
    }
};
int main()
{
    DoublylinkedList s1;
    int data, key, option, k;
    do
    {
        cout<<"enter your choose to perform operation in doublylinkedlist\n";
        cout<<"0.exit()"<<endl;
        cout<<"1.append()"<<endl;
        cout<<"2.prepend()"<<endl;
        cout<<"3.insert()"<<endl;
        cout<<"4.delete()"<<endl;
        cout<<"5.update()"<<endl;
        cout<<"6.print()"<<endl;
        cout<<"7.clear screen"<<endl;
        cin>>option;
        Node* n1 = new Node();
        switch(option)
        {
        case 1:
            cout<<"enter your key\n";
            cin>>key;
            cout<<"enter your data\n";
            cin>>data;
            n1->key = key;
            n1->data = data;
            s1.append(n1);
            break;
        case 2:
           cout<<"enter your key\n";
            cin>>key;
            cout<<"enter your data\n";
            cin>>data;
            n1->key = key;
            n1->data = data;
            s1.prepend(n1);
            break;
        case 3:
            cout<<"enter your position where you want to insert thnode\n";
            cin>>k;
            cout<<"enter your key\n";
            cin>>key;
            cout<<"enter your data\n";
            cin>>data;
            n1->key = key;
            n1->data = data;
            s1.Insert(k, n1);
            break;
        case 4:
            cout<<"enter your key\n";
            cin>>key;
            s1.deleted(key);
            break;
        case 5:
           cout<<"enter your key\n";
            cin>>key;
            cout<<"enter your data\n";
            cin>>data;
            s1.update(key, data);
            break;
        case 6:
            s1.show();
            break;
        case 7:
            system("cls");
            break;
        default :
            cout<<"please enter proper number\n";
        }
    }
    while(option!=0);
    return 0;
}
