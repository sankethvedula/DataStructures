#include<stdio.h>
#include<stdlib.h>
//Creating a node which has two parts mainly saved as a structure first part is the val-
//-ue and the second part is the location of the second node [value|pointer] pointer-> value2
struct node{
		int a;
		struct node* next;
		};
// typedef is used so that we don't need to use struct node everywhere instead we can use node
typedef struct node node;
// address of the top most node i.e the first element 
node* top;
// defining the push function 
void push(int val){
// if initially it's a empty stack then nothing to do just allot the memory struct as shown in the loop
if(top==NULL){
//dynamically allocating memory with malloc() remember that 
//malloc syntax is pointerVariable= (typecast to whatever format you want) malloc(sizeof(memory of what your'e allotting))
    top=(node *)malloc(sizeof(node));
//top node is assigned the given value and and pointer points the next value 
    top->a=val;
    top->next=NULL;
    return;
}
// creating a temporary node and copying the present top value into it i.e similar to copy paste and then allocating the new node's memory to it
//Fucking Brilliant Step!! Atleast a beginner like me feels so  
	node* temp;
	temp=(node *)malloc(sizeof(node));
	temp->a=val;
	temp->next=top;
	top=temp;
}
void pop(){

}
void print(){
	//creating a traversing pointer first setting it to top and then letting it traverse by pointing it to the next value in the second iteration
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
