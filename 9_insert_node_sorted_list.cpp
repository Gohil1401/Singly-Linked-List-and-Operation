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

        List(int a[],int n);
        void insert_sorted_list(int x);
        void display();
};

List::List(int a[],int n)
{
    node *last,*t;

    int i=0;

    first=new node;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void List::insert_sorted_list(int x)
{
    node *p,*q,*t;
    p=first;
    q=NULL;

    while(p && p->data < x)
    {
        q=p;
        p=p->next;
    }

    t=new node;
    t->data=x;
    t->next=q->next;
    q->next=t;
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
    int a[]={1,3,5,7,9};
    int n=sizeof(a)/sizeof(a[0]);
    List l(a,n);
    l.display();

    cout<<endl;

    l.insert_sorted_list(4);
    l.display();
}








