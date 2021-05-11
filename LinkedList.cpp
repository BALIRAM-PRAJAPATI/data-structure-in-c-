#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    int data;
    Node * next;
public:
    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};
class SingleLinkedList
{
public:
    Node * head;
public:
    SingleLinkedList()
    {
        head = NULL;
    }
    SingleLinkedList(Node* n)
    {
        head = n;
    }
    Node * isExistNode(int k)
    {
        Node * temp = NULL;
        Node * ptr = head;
        while(ptr!=NULL)
        {
            if(ptr->key==k)
              temp = ptr;
              ptr = ptr->next;

        }
        return temp;
    }

    void append(Node * n)
    {
        if(isExistNode(n->key)!=NULL)
        {
            cout<<"node already exist please insert another node at different key\n";
        }
        else if(head == NULL)
        {
            head = n;
        }
        else
        {
            Node * temp;
            temp = head;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = n;
            cout<<"node inserted at last\n";
        }
    }
    void prepend(Node * n)
    {
        if(isExistNode(n->key)!=NULL)
        {
            cout<<"node already exist please insert another location node\n";
        }
        else
        {
            n->next = head;
            head = n;
            cout<<"node inserted at first position\n";
        }
    }
    void Insert(int key, Node * n)
    {
        Node * ptr = isExistNode(key);
        if(ptr==NULL)
        {
            cout<<"no node exist with this key\n";
        }
        else
        {
            if(isExistNode(n->key)!=NULL)
            {
                cout<<"node already exist please insert another location node\n";
            }
            else
            {
               n->next = ptr->next;
               ptr->next = n;
               cout<<"node inserted\n";
            }
        }
    }
    void deleted(int k)
    {
        if(head == NULL)
        {
            cout<<"linked list already empty\n";
        }
        else if(head!=NULL)
        {
            if(head->key==k)
            {
                head = head->next;
            }
            else
            {
                Node * temp = NULL;
                Node * pre= head;
                Node * current = head->next;
                while(current!=NULL)
                {
                   if(current->key==k)
                    {
                        temp = current;
                        current = NULL;
                    }
                    else
                    {
                       pre = pre->next;
                       current = current->next;
                    }

                }
                if(temp!=NULL)
                {
                   pre->next = temp->next;
                   cout<<"node deleted at"<<k<<"position\n";
                }
                 else
                    {
                        cout<<"you have entered wrong key\n";
                    }

            }

        }
    }
    //update node
    void update(int k, int d)
    {
        Node * ptr = isExistNode(k);
        if(ptr!=NULL)
        {
            ptr->data=d;
            cout<<"node update successfully\n";
        }
        else
        {
            cout<<"node does not exist\n";
        }

    }
    void show()
    {
        if(head==NULL)
        {
            cout<<"linkedlist is empty please insert data\n";
        }
        else
        {
            Node *temp = head;
            cout<<"data in the list ara\n";
            while(temp!=NULL)
            {
                cout<<"("<<temp->key<<","<<temp->data<<")"<<endl;
                temp = temp->next;
            }
        }
    }
};
int main()
{
    SingleLinkedList s1;
    int k, key, data, option;
    do
    {
        cout<<"enter your choose to perform operation in linklist\n";
        cout<<"0.exit()"<<endl;
        cout<<"1.append"<<endl;
        cout<<"2.prepend"<<endl;
        cout<<"3.insert"<<endl;
        cout<<"4.delete"<<endl;
        cout<<"5.update"<<endl;
        cout<<"6.view"<<endl;
        cout<<"7.clear screen"<<endl;
        cin>>option;
        Node* n1=new Node();
        switch(option)
        {
        case 1:
            cout<<"enter your key for node\n";
            cin>>key;
            cout<<"enter your data\n";
            cin>>data;
            n1->key = key;
            n1->data = data;
            s1.append(n1);
            break;
        case 2:
            cout<<"enter your key for node\n";
            cin>>key;
            cout<<"enter your data\n";
            cin>>data;
            n1->key = key;
            n1->data = data;
            s1.prepend(n1);
            break;
        case 3:
            cout<<"enter your position where you want to insert node\n";
            cin>>k;
            cout<<"enter your key for node\n";
            cin>>key;
            cout<<"enter your data\n";
            cin>>data;
            n1->key = key;
            n1->data = data;
            s1.Insert(k, n1);
            break;
        case 4:
            cout<<"enter your key for delete node\n";
            cin>>key;
            s1.deleted(key);
            break;
        case 5:
            cout<<"enter your key for node to change \n";
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
            cout<<"you have entered wrong number\n";
        }
    }
    while(option!=0);
    return 0;
}
