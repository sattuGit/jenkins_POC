#include <iostream>
#include "list/src/singleLinkList.h"
#include "list/src/linkLoop.h"
using namuespace std;

int mainx(){
	SLList *sl= new SLList();
	unsigned short choice =1,pos=1 ;
	int data;

	while(choice){
	pos=1;
	cout<<"Enter your choice \n";
	cout<<" 1 for add new node at specific position \n";
	cout<<" 2 for add new node at top \n";
	cout<<" 3 for Remove node at specific position \n";
	cout<<" 4 for Remove node at top \n";
	cout<<" 5 for Reverse List \n";
	cout<<" 7 for Make Loop \n";
	cout<<" 8 for FindLoop  \n";
	cout<<" 9 for Display  \n";
	cout<<" Any other for Exit \n";
	cin>>choice;
		switch(choice){
			case 1:	cout<<"Pleases provide position for new node \n";cin >>pos;
			case 2:	cout<<"Pleases provide value of node\n";cin >>data;
					sl->addNode(data,pos);
					break;
			case 3: cout<<"Pleases provide position of node to remove \n";cin >>pos;
			case 4: sl->del(pos);break;
			case 5: sl->rev();break;
			case 7: sl->makeLoop();break;
			case 8: sl->testLoop(); break;
			case 9: sl->display(); break;
			default: choice =0;
		}
	}

	delete sl;
	return 0;
}
