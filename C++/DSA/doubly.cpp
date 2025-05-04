#include<iostream>
using namespace std;
int main(){
    struct node{
        int info;
        node *plink;
        node *flink;
    };
    node *head = NULL;
    node *tail = NULL;
    node *nptr, *ptr;
    int item;
    void insert_atbeg(){
        cin>>item;
        if(head=NULL){
            nptr=new node;
            nptr->info=item;
            nptr-> plink=NULL;
            nptr-> flink=NULL;
            head=nptr;
            tail=nptr;
        } else{
            nptr=new node;
            nptr-> info=item;
            nptr-> plink=NULL;
            nptr-> flink=head;
            head-> plink=nptr;
            head= nptr;
        }
    }
}