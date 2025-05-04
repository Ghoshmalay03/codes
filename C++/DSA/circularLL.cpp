#include<iostream>
using namespace std;

struct node{
    int info;
    node *link;
};
node *head=NULL;
node *nptr, *ptr;
int item;
void insert_atbeg(){
    cin>>item;
    if(head==NULL){
        nptr=new node;
        nptr->info=item;
        head=nptr;
        nptr->link=head;
    }
else{
    ptr=head;
    while (ptr->link=head)
    {
        ptr=ptr->link;
    }
    nptr=new node;
    nptr-> info=item;
    nptr-> link=head;
    head=nptr;
    ptr-> link=nptr;
    cout<<"\nInserted";
    }
}