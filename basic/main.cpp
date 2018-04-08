#include<iostream>
#include "List.h"
using namespace std;
int main()
{
	List Zd;
	Zd.AddNode(3);
	Zd.AddNode(4);
	Zd.AddNode(5);
	Zd.PrintList();
	Zd.DeleteNode(3);
	Zd.PrintList();
}