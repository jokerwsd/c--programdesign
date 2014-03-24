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
	Node *head= NULL;   
	public:
	LinkedList();//constructor
	~LinkedList();//distructor
	void listAdd();
	void listDelet(Elemtype data);
	void listSearch(Elemtype data);
	void listDisplay();
};

void LinkedList::listAdd()
{
	Node *temp, *temp2;
	temp = new Node;
	cout << "Type the data you want to stroe in the linkedlist"<<endl;
	cin >> temp -> data;
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
		temp1 = head;
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
			temp1->next = temp2->next;//Why???
		}
		delete temp2;
		break;
	
	temp1 = temp2;
	temp2 = temp2 -> next;}
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

int main()
{
	Node* head = NULL;
	LinkedList a;
	a.listAdd();
	a.listDisplay();
	return 0;
}

