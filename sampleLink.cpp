#include <iostream>
typedef struct NODE 
{
	int x;
	struct NODE *next;
}node;
class Link 
{
	public:
		node* create();
		void sert(node* h,int n);
		void del(node *h,int n);
};
node* Link::create()
{
	node *h;
	h=new node;
	return h;
}
void Link::sert(node* h,int n)
{
	node *p;
	node *q;
	p=h;
	while (p->next=NULL)
	{
		q=p->next;
		p=q;
	}
	q=new node;
	q->x=n;
	p->next=q;
}
void Link::del(node* h,int n)
{
	node *p;
	node *q;
	p=h;
	while (p->next!=NULL)
	{
		q=p->next;
		if(q->x=n)
		{
			p->next=q->next;
			delete(q);
			break;
		}
		p=q;
	}
}
int main()
{
	Link lk;
	lk.create();
}
