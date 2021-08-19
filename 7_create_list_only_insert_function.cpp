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

       // List(int a[],int n);
        void insert(int pos,int key);
        void display();
};
/* List::List(int a[],int n)
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
} */

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

void List::insert(int pos , int key)
{
    node *t,*p;

    if(pos==0)
    {
        t=new node;
        t->data=key;
        t->next=first;
        first=t;
    }
    else if(pos>0)
    {
        p=first;

        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }

        if(p)
        {
            t=new node;
            t->data=key;
            t->next=p->next;
            p->next=t;
        }
    }
}

int main()
{
   /* int a[]={1,2,3,4,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    List l(a,n);
    l.display();
    cout<<endl; */

    List l;
    l.insert(0,40);
    l.insert(1,30);
    l.insert(2,20);
    l.insert(3,10);
    l.insert(4,5);

    l.display();

}








