#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node *prev;
	node *next;
};

class doubleLinkedList
{
	node *head;
	node *tail;
	public:
	doubleLinkedList()
	{
		head = NULL;
		tail = NULL;
	}

	void createnode(int d)
	{
	    node *temp;
        temp = new node();
        temp->data = d;
        temp->prev = NULL;
        temp->next = tail;

	// List is empty
	if(head == NULL)
		tail = temp;

	else
		head->prev = temp;

	head = temp;
	}
	void insertbefore(node* n, int d)
	{
	    node *temp;
	temp = new node();
	temp->data = d;
	temp->next = n;
	temp->prev = n->prev;
	n->prev = temp;
	if(n->prev == NULL)
		head = temp;
	}
	void insertafter(node* n, int d)
	{
	    node *temp;
	temp = new node();
	temp->data = d;
	temp->prev = n;
	temp->next = n->next;
	n->next = temp;
	if(n->next == NULL)
		tail = temp;
	}
	void insertatend(int d)
	{
	    node *temp;
	temp = new node();
	temp->data = d;
	temp->prev = tail;
	temp->next = NULL;

	// if list is empty
	if(tail == NULL)
		head = temp;
	else
		tail->next = temp;
	tail = temp;
	}
	void deletenode(node* n)
	{
	    if(n->prev == NULL)
	{
        head= n->next;
		head->prev = NULL;
	}
	else if(n->next == NULL)
	{
		tail = n->prev;
		tail->next = NULL;
	}
	else
	{
		n->prev->next = n->next;
		n->next->prev = n->prev;
	}
	delete(n);
	}
    void forwardtrav()
	{
	node *trav;
	trav = head;
	while(trav != NULL)
	{
		cout<<trav->data<<endl;
		trav = trav->next;
	}
    }
	void backwardtrav()
	{
	node *trav;
	trav = tail;
	while(trav != NULL)
	{
		cout<<trav->data<<endl;
		trav = trav->prev;
	}
}
    void printList()
    {
        node * current = head;

        while (current != NULL) {
            cout << current->data <<endl;
            current = current->next;
        }
    }

};
int main()
{
    doubleLinkedList D;
    D.createnode(10);
    D.insertatend(9);
    D.printList();
    D.backwardtrav();
    D.forwardtrav();
    D.printList();
}
