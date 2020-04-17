/*
 * nodes.h
 *
 *  Created on: Apr 3, 2020
 *      Author: satendra
 */

#ifndef NODES_H_
#define NODES_H_
#include <iostream>
using namespace std;
struct Node{
	public :
		Node(int argData=0){
			nextNode = nullptr;
			data = argData;
		}
		~Node(){
			//std::cout<<"Node is going to vanish with data "<<getData()<<std::endl;
		}
		int getData(){
			return data;
		}
		void setData(int arg){
			data=arg;
		}
		void setLink(Node *pNode){
			nextNode=pNode;
		}
		Node * getLink(){
			return nextNode;
		}
	private:
		int  data;
		Node *nextNode;
};

struct LoopNode {
public:
	LoopNode(void* add ){
		address		= 	add		;
		nextNode	=	nullptr	;
		//cout<<"Construction"<<endl;
	}
	~LoopNode(){
		//std::cout<<"Node is going to vanish with data "<<getData()<<std::endl;
	}
	LoopNode* getNext(){
		return nextNode;
	}
	void setNext(LoopNode* next){
		nextNode=next;
	}
	void* getData(){
		return address;
	}
	void setData(void *add){
		address=add;
	}

private:
	void* address;	//non GNU data type to hold int address i.e. can hold address C++11 onward
	LoopNode *nextNode;
};

/***********************************************
 * Node for simple Tree
 ***********************************************/
struct SimpleTreeNode
{
public:
	SimpleTreeNode(){
		lBranch = nullptr;
		rBranch = nullptr;
		data	= nullptr;
	}
	SimpleTreeNode(void *ptrArg,SimpleTreeNode* lb=nullptr,SimpleTreeNode *rb=nullptr){
			lBranch = lb;
			rBranch = rb;
			data	= ptrArg;
	}
	void * 	getData(){return data;}
	void 	setData(void *argData){data=argData;}

	SimpleTreeNode* getLeftBranch(){return lBranch;}
	SimpleTreeNode* getRighttBranch(){return rBranch;}
	void setLeftBranch(SimpleTreeNode* ptrBranch){lBranch=ptrBranch;}
	void setRightBranch(SimpleTreeNode* ptrBranch){rBranch=ptrBranch;}

	~SimpleTreeNode(){
		/*
		 We are assuming memory pointed by data will be free/delete by code which is allocated memory
		 */
	}
private:
	SimpleTreeNode *lBranch,	*rBranch	;
	void* 			data	;
};

#endif /* NODES_H_ */
