class List {
private:
	typedef struct node {
		int data;
		node* next;
	}*nodePtr;
	//typedef struct node* nodePtr;
	
	nodePtr head;
	nodePtr curr;
	nodePtr temp;

public://this is where the functions go
	List();
	void AddNode(int addData);
	void DeleteNode(int delData);
	void PrintList();
	void List::addNodeinHead(int data);
};
