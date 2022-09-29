#pragma once
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* link;
};

struct HeadNode {
	Node* head;
};

class circlist {

public:


	HeadNode* createList() {
		HeadNode* H;
		H = new HeadNode;
		H->head = NULL;
		return H;
	}


	void addFirstNode(HeadNode* H, int x) {
		Node* prevNode;
		Node* newNode = new Node;
		newNode->data = x;
		newNode->link = NULL;

		if (H->head == NULL) {  
			H->head = newNode;
			newNode->link = newNode;  
			return;
		}

		prevNode = H->head;
		while (prevNode->link != H->head) prevNode = prevNode->link; 
		newNode->link = prevNode->link; 
		prevNode->link = newNode; 
		H->head = newNode; 
	}


	void addMiddleNode(HeadNode* H, int afterthisdata, int adddata) {
		Node* prevNode;
		prevNode = H->head;
		Node* newNode = new Node;

		while (prevNode->data != afterthisdata) {
			prevNode = prevNode->link;
		}

		newNode->data = adddata;
		newNode->link = prevNode->link;
		prevNode->link = newNode;
		return;
	}

	
	void deleteCircleNode(HeadNode* H, int deldata) {
		Node* prevNode;
		Node* delNode;

		prevNode = H->head;
		while (prevNode->link->data != deldata) {
			prevNode = prevNode->link;
		}

		if (H->head == NULL) return;  
		else {
			delNode = prevNode->link;

			if (delNode == prevNode) H->head = NULL; 
			else {
				prevNode->link = delNode->link; 

				if (delNode == H->head) H->head = delNode->link; 
			}
			delete delNode;
		}
		cout << deldata << "�� �����Ͱ��� ������ ��尡 �����Ǿ����ϴ�. " << endl;
		return;
	}


	void printList(HeadNode* L) {
		
		Node* p;
		Node* tmp;

		p = L->head;

		if (p == NULL) { 
			cout << "���� ����Ʈ�� ����ֽ��ϴ�." << endl;
			return;
		}
		else {
			cout << "���Ḯ��Ʈ ��� = ( "; 
			tmp = L->head;
			cout << p->data;
			p = p->link;

			while (p != tmp) {  
				cout << " --> ";
				cout << p->data;
				p = p->link;
			}
		}
		cout << " )" << endl << endl;
	}
}; 