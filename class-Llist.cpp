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
	Node* getNode(int info);
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

Node* Linklist::getNode(int info){

	Node* newNode = new Node();
	newNode->setInfo(info);
	newNode->setNext(NULL);
	return newNode;
}
void Linklist::appendList(int info){
	

	Node* newNode = getNode(info);
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
	int x;
	char ch;
	Linklist obj;
	do{
		cout<<"To quit press Y else N"<<endl;
		cin>>ch;
		if(ch=='Y')
		break;
		cout<<"Enter the value"<<endl;
		cin>>x;
		obj.appendList(x);
		obj.diplayList();
	}while(ch!='Y');

	cout<<"Your Link list has following values"<<endl;
	obj.diplayList();
}


