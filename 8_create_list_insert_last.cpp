#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

class List
{
    public:

        node *first;

        List()
        {
            first=NULL;
        }

       void insert_Last(int x);
        void display();
};

void List::insert_Last(int x)
{
    node *t,*last;

    t=new node;
    t->data=x;
    t->next=NULL;

    if(first==NULL)
    {
        first=last=t;
    }
    else
    {
        last->next=t;
        last=t;
    }
}

void List::display()
{
    node *p=first;

    cout<<" Your List is : ";
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{

    List l;
    l.insert_Last(10);
    l.insert_Last(20);
    l.insert_Last(30);
    l.insert_Last(40);
    l.insert_Last(50);
    l.display();
}








