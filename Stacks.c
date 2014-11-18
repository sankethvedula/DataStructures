#include<stdio.h>
#include<stdlib.h>
struct node{
int a;
struct node* next;
};
typedef struct node node;
node* top;
void push(int val){
if(top==NULL){
    top=(node *)malloc(sizeof(node));
    top->a=val;
    top->next=NULL;
    return;
}
node* temp;
temp=(node *)malloc(sizeof(node));
temp->a=val;
temp->next=top;
top=temp;
}
void pop(){

}
void print(){
node* trav;
trav=top;
while(trav!=NULL){
    printf("%d %p\n",trav->a,trav);
    trav=trav->next;
}
printf("\n");
}
int main(){
top=NULL;
push(10);
print();
push(20);
print();
push(30);
print();
}
