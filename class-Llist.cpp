#include<iostream>
using namespace std;

class Node {

private:
	int info;
	Node* next;
public:
	Node(){};
	void setInfo(int ainfo)
	{ 
		info = ainfo;
	}

	void setNext(Node* anext)
	{

		next = anext;
	}

	int showInfo()
	{
		return info;
	}

	Node* showNext()
	{
		return next;

	}

};

	
		 
class Linklist {

private:
	Node* head;
public:
	Linklist(){ head = NULL; }
	void diplayList();
	void appendList(int info);
	void deleteList(int info);
};


void Linklist::diplayList(){

	Node* list=head;
	
	if(list == NULL)
	{
		cout<<"Empty"<<endl;
		return;
	}


	if(list->showNext() == NULL)
	{
		cout<<list->showInfo();
		cout<<"-->";
		cout<<"NULL";
//		cout<<list->showNext();
	}
	
	else 
	{
		do {
				cout<<list->showInfo();
				cout<<"-->";
				list = list->showNext();

			}
		while( list != NULL);
	}
	cout<<"NULL"<<endl;
}

void Linklist::appendList(int info){
	
	Node* newNode = new Node();
	newNode-> setInfo(info);
	newNode-> setNext(NULL);

	Node* tmp = head;
	if(tmp !=NULL)
	{
		while(tmp->showNext() != NULL)
		{
			tmp = tmp->showNext();
		}
	
	tmp->setNext(newNode);
	}
	else
	{
		head = newNode;
	}
}


int main()
{

	Linklist obj;
	obj.appendList(100);
	obj.diplayList();
	obj.appendList(200);
	obj.diplayList();
	obj.appendList(300);
	obj.diplayList();


}


