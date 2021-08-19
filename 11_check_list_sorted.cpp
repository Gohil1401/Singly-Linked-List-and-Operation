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
        int is_sorted();
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

int List::is_sorted()
{
    int x=INT_MIN;
    node *p=first;

    while(p!=NULL)
    {
        if(p->data < x)
        {
            return -1;
        }
        x=p->data;
        p=p->next;

    }
    return 1;
}

int main()
{
    int a[]={1,2,3,10,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    List l(a,n);
    l.display();

    cout<<endl;

    int c=l.is_sorted();
    if(c==-1)
    {
        cout<<" List is not sorted ";
    }
    else
    {
        cout<<" List is sorted ";
    }
}








