//============================================================================
// Name        : Task1_Helloworld.cpp
// Author      : HoangHuynh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
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
	void add_node(int num){
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
	void display()
    {
        node *tmp;
        tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << endl;
            tmp = tmp->next;
        }
    }
};

int main() {
	linked_list a;
	a.add_node(1);
	a.add_node(2);
	a.add_node(3);
	a.display();
	getch();
	return 0;
}
