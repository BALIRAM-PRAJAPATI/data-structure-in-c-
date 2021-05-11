#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    int data;
    Node* next;
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
        next = NULL;
    }
};
class CircularLinkedList
{
public:
    Node* head;
    CircularLinkedList()
    {
        head = NULL;
    }
    CircularLinkedList(Node* n)
    {
       head = n;
    }
    //check node exist or not
    Node* isExistNode(int k)
    {
        Node* temp = NULL;
        Node* ptr = head;
        if(ptr==NULL)
        {
            return temp;
        }
        else
        {
            do
            {
                if(ptr->key==k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            }
            while(ptr!=head);
            return temp;
        }

    }
    //append node at last
    void append(Node* n)
    {
        if(isExistNode(n->key)!=NULL)
        {
           cout<<"node already exist at this position\n";
        }
        else
        {
            if(head == NULL)
            {
                head = n;
                n->next = head;
                cout<<"node added at last successfullt\n";
            }
            else
            {
                Node* temp = head;
                while(temp->next!=head)
                {
                    temp = temp->next;
                }
                temp->next = n;
                n->next = head;
                cout<<"node added at last successfullt\n";
            }
        }
    }
    //node prepend
    void prepend(Node* n)
    {
        if(isExistNode(n->key)!=NULL)
        {
            cout<<"node already exist please add node another location\n";
        }
        else
        {
            if(head==NULL)
            {
                head = n;
                n->next = head;
                cout<<"node add successfully\n";
            }
            else
            {
                Node* temp = head;
                while(temp->next!=head)
                {
                    temp = temp->next;
                }
                    temp->next = n;
                    n->next = head;
                    head = n;
                    cout<<"node add successfully\n";
            }
        }
    }
    //insert node at position
    void Insert(int k, Node* n)
    {
        Node* ptr = isExistNode(k);
        if(ptr == NULL)
        {
            cout<<"node not exist\n";
        }
        else
        {
            if(isExistNode(n->key)!=NULL)
            {
                cout<<"node already exist please add another key to add the node\n";
            }
            else
            {
                if(ptr->next!=head)
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    cout<<"node add successfully at given position\n";
                }
                else
                {
                    n->next= ptr->next;
                    ptr->next=n;
                    n=head;
                    cout<<"node add successfully at given position\n";
                }

            }
        }
    }
    //delete node by key
    void deleted(int k) {
    Node * ptr = isExistNode(k);
    if (ptr == NULL) {
      cout << "No node exists with key value OF : " << k <<
        endl;
    } else {

      if (ptr == head) {
        if (head -> next == NULL) {
          head = NULL;
          cout << "Head node Unlinked... List Empty";
        } else {
          Node * ptr1 = head;
          while (ptr1 -> next != head) {
            ptr1 = ptr1 -> next;
          }
          ptr1 -> next = head -> next;
          head = head -> next;
          cout << "Node UNLINKED with keys value : " << k << endl;
        }
      } else {
        Node * temp = NULL;
        Node * prevptr = head;
        Node * currentptr = head -> next;
        while (currentptr != NULL) {
          if (currentptr -> key == k) {
            temp = currentptr;
            currentptr = NULL;
          } else {
            prevptr = prevptr -> next;
            currentptr = currentptr -> next;
          }
        }

        prevptr -> next = temp -> next;
        cout << "Node UNLINKED with keys value : " << k << endl;

      }

    }

  }
    void update(int k, int d)
    {
        Node* ptr = isExistNode(k);
        if(ptr==NULL)
        {
            cout<<"node not found\n";
        }
        else
        {
            ptr->data = d;
            cout<<"list updated successfully\n";
        }
    }
    //show list
    void show()
    {
        if(head==NULL)
        {
            cout<<"list alredy empty please enter node\n";
        }
        else
        {
            Node* temp = head;
            cout<<"data in the list are\n";
            do
            {
                cout<<"("<<temp->key<<","<<temp->data<<")"<<" ";
                temp = temp->next;
            }
            while(temp!=head);
        }
    }
};
int main()
{
    CircularLinkedList s1;
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
