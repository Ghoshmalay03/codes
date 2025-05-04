//PROGRAM TO IMPLEMENT STACKS USING ARRAY REPRESENTATION
#include<iostream>
using namespace std;
#define MAX 5
void push();
void pop();
void display();
int stack[MAX];
int Top=-1;

int main()
{

int choice;

while(1)
{
//int option;
cout<<"\n*******MAIN MENU*********";
cout<<"\n1.Push into the stack";
cout<<"\n2.Pop from the stack";
cout<<"\n3.Display the element of the stack";
cout<<"\n4.Exit";
cout<<"\nEnter ur choice::";
cin>>choice;
switch(choice)
{
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);
break;


}
}

}
void push()
{
int data;
if (Top==MAX -1)
{
cout<<"\nStack overflow";
return;
}
else
{
cout<<"\nEnter the data to be inserted :";
cin>>data;
Top=Top+1;
stack[Top]=data;
}
}
void pop()
{
int data;
if(Top==-1)
{
cout<<"\nStack underflow";
return;
}
else
{
data=stack[Top];
Top=Top-1;
cout<<"\nDeleted data is"<<data;
}
}
void display()
{
int i;
if(Top == -1)
{
cout<<"\nStack underflow";
return;
}
else
{
for(i=Top;i>=0;i--)
cout<<"\nData in the Satck are "<<stack[i];
}
}