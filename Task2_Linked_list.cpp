//============================================================================
// Name        : Task2_Linked_list.cpp
// Author      : HoangHuynh
// Version     :
// Copyright   : Your copyright notice
// Description : Linked list in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct node{
	int data;
	node *next;
};
class linked_list{
private:
	node *head, *tail;
public:
	linked_list(){
		head=NULL;
		tail=NULL;
	}
	void add_node_tail(int num){
		node *tmp = new node;
		tmp->data = num;
		tmp->next = NULL;

		if(head==NULL){
			head = tmp;
			tail = tmp;
		}
		else{
			tail->next=tmp;
			tail=tail->next;
		}
	}
	void add_node_head(int num){
		node *tmp = new node;
		tmp->data = num;
		tmp ->next = head;
		head = tmp;
	}
	void display(){
        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data <<endl;
            tmp = tmp->next;
        }
    }
	void insert(int num_new, int pos){
		node *prv,*curr;
		node *new_node = new node();
		int j=0;
		curr=head;
		new_node->data = num_new;
		if(head!=NULL){
			while(curr != NULL && j != pos){
				prv=curr;
				curr=curr->next;
				j+=1;
			}
			if(0==pos) {
				cout <<"Adding at Head!"<<endl;
				//call addding at head
				add_node_head(num_new);
			}
			else if(NULL == curr){
				cout <<"Adding at Tail!"<<endl;
				//call adding at tail
				add_node_tail(num_new);
			}
			else{
				
				new_node->next = curr;
				prv->next=new_node;
			}
		}
	}
	void delete_fuc(int pos){
		node *prv,*curr;
		int j=0;
		curr=head;
		if(head!=NULL){
			while(curr!=NULL && pos != j){
				prv=curr;
				curr=curr->next;
				j++;
			}	
			if(0==pos){
			//delete at head
				head=curr->next;
				delete curr;
			}
			else{
			//delete at pos or tail
				prv->next=curr->next;
				delete curr;
			}
		}
		else cout << "Nothing to delete"<<endl;
	}
};

int main() {
	linked_list a;
	int num_link,i,num_tmp;
	cout <<"input length of linked_list"<<endl;
	cin >> num_link;

	for(i=0;i<num_link;i++){
	cout <<"input number"<<i<<endl;
	cin >> num_tmp;
	a.add_node_tail(num_tmp);
	}
	cout <<"Display linked list"<<endl; 
	a.display();

	//a.insert(1,0);
	a.delete_fuc(0);
	cout <<"Update linked list"<<endl;
	a.display();
	getch();
	return 0;
}
