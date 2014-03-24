/*my own linkedlist following this introduction:

http://www.baumann.info/public/cpp_lernaufgabe_linked_list.pdf

*/


#include <iostream>

using namespace std;

/*single linkedlist data structure*/

//template <typename T>
typedef int Elemtype;
typedef struct NodeType
{
	Elemtype data;
	NodeType *next;
} Node;

class LinkedList
{
	private:   
	Node *head;   
	public:
	LinkedList();//constructor
	~LinkedList();//distructor
	void listAdd(Elemtype data);
	void listDelet(Elemtype data);
	void listSearch(Elemtype data);
	void listReverse();
	void listDisplay();
};

LinkedList::LinkedList()
{
	head = new Node;
}

void LinkedList::listAdd(Elemtype data)
{
	Node *temp, *temp2;
	temp = new Node;
        temp -> data = data;
	temp -> next = NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		temp2 = head;
		while(temp2->next != NULL)
		{
			temp2 = temp2 -> next;
		}
		temp2->next = temp;
	}
}

void LinkedList::listDelet(Elemtype data)
{
	Node *temp1, *temp2;
	if (head -> data == data)
	{
		temp2 = head;
		head = temp2 -> next;
		delete temp2;
		return;
	}

	temp1 = head;
	temp2 = head -> next;
 
	while(temp2 != NULL)
	{
		if(temp2 -> data== data)
		{
		temp1->next = temp2->next;
		delete temp2;
		break;
		}
	
	temp1 = temp2;
	temp2 = temp2 -> next;}
}


void LinkedList::listReverse()
{
	Node *pend, *pstart;
	Node *temp;
	pend = head;
	pstart = NULL;
	while (pend != NULL)
	{
		temp = pend->next;
		pend -> next = pstart;;
		pstart = pend;
		pend = temp;
	}
	head = pstart;
}

void LinkedList::listDisplay()
{
	Node *temp;
	temp = head;
	while(temp != NULL)
	{
		cout << temp->data <<' ';
		temp = temp -> next;
	}
	cout <<"end of the list"<< endl;
}

LinkedList::~LinkedList()
{
	Node *temp;
	temp = head;
	while(temp != NULL)
	{
		head = head->next;
		delete temp;
		temp = head;
	}
	head = NULL;
}


int main()
{
	Node* head = NULL;
	LinkedList a;
	a.listAdd(2);
	a.listAdd(3);
	a.listAdd(98);
	a.listAdd(11);
	a.listAdd(43);
	a.listAdd(96);
	a.listAdd(74);
	a.listAdd(23);
	a.listDelet(98);
	a.listDisplay();
	a.listReverse();
	a.listDisplay();
	return 0;
}

