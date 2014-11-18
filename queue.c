#include<stdio.h>
#include<stdlib.h>
struct node{
int a;
struct node* next;
};
typedef struct node node;
node* f;
node* r;
void eq(int val){
if(f==NULL && r==NULL){
    f=(node *)malloc(sizeof(node));
    f->a=val;
    f->next=NULL;
    r=f;
    return;
}
node* temp;
temp=(node *)malloc(sizeof(node));
temp->a=val;
temp->next=NULL;
r->next=temp;
r=temp;
}
void dq(){

node* temp;
temp=f;
f=f->next;
free(temp);
if(f==NULL)
    r=NULL;

}
void print(){
node* trav;
trav=f;
while(trav!=NULL){
    printf("%d %p\n",trav->a,trav);
    trav=trav->next;
}
printf("\n");
}
int main(){
f=NULL;
r=NULL;
eq(10);
print();
dq();
eq(20);
print();
eq(30);
print();
dq();
print();
dq();
print();
}
