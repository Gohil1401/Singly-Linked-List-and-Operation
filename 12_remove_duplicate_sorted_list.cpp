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
        void Remove_duplicate();
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

void List::Remove_duplicate()
{
    node *p=first;
    node *q=first->next;

    while(q!=NULL)
    {
        if(p->data != q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }

}

int main()
{
    int a[]={1,2,2,3,4,5,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    List l(a,n);
    l.display();
    cout<<endl;
    cout<<" after removing "<<endl;
    l.Remove_duplicate();
    l.display();
}








