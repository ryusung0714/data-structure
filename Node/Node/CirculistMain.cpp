#include <iostream>
#include "CirLinkLis.h"
using namespace std;

void main()
{
	circlist list;

	HeadNode* L;
	L = list.createList();

	cout << "1. 빈 원형 연결 리스트를 생성했습니다." << endl << endl;

	int data1, data2, data3;
	cout << "2-1. 원형 연결 리스트 첫 노드로 추가할 노드의 데이터를 정해주세요: ";
	cin >> data1;
	list.addFirstNode(L, data1);
	list.printList(L);

	cout << "2-2. 원형 연결 리스트 첫 노드로 추가할 노드의 데이터를 정해주세요: ";
	cin >> data2;
	list.addFirstNode(L, data2);
	list.printList(L);

	cout << "2-3. 원형 연결 리스트 첫 노드로 추가할 노드의 데이터를 정해주세요: ";
	cin >> data3;
	list.addFirstNode(L, data3);
	list.printList(L);
	cout << endl;

	cout << "3. 원형 연결 리스트 중간에 노드를 삽입하겠습니다. " << endl;

	cout << "3-1. 어떤 노드 뒤에 노드를 추가할건가요? : ";
	int data5, data4;
	cin >> data5;
	cout << "3-2. 그 노드 뒤에 어떤 데이터를 가진 노드를 추가할건가요? : ";
	cin >> data4;
	list.addMiddleNode(L, data5, data4);
	list.printList(L);
	cout << endl;

	cout << "4-1. 삭제하고자 하는 노드를 알려주세요 : ";
	int data6;
	cin >> data6;
	list.deleteCircleNode(L, data6);
	list.printList(L);
	cout << endl;

	cout << "4-2. 더 삭제하고 싶은 노드를 알려주세요 : ";
	int data7;
	cin >> data7;
	list.deleteCircleNode(L, data7);
	list.printList(L);
	cout << endl;

	cout << "4-3. 더 삭제하고 싶은 노드를 알려주세요 : ";
	int data8;
	cin >> data8;
	list.deleteCircleNode(L, data8);
	list.printList(L);
	cout << endl;


	cout << "피곤하니까 연산을 끝내겠습니다." << endl;

}