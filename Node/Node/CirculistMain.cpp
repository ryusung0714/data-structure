#include <iostream>
#include "CirLinkLis.h"
using namespace std;

void main()
{
	circlist list;

	HeadNode* L;
	L = list.createList();

	cout << "1. �� ���� ���� ����Ʈ�� �����߽��ϴ�." << endl << endl;

	int data1, data2, data3;
	cout << "2-1. ���� ���� ����Ʈ ù ���� �߰��� ����� �����͸� �����ּ���: ";
	cin >> data1;
	list.addFirstNode(L, data1);
	list.printList(L);

	cout << "2-2. ���� ���� ����Ʈ ù ���� �߰��� ����� �����͸� �����ּ���: ";
	cin >> data2;
	list.addFirstNode(L, data2);
	list.printList(L);

	cout << "2-3. ���� ���� ����Ʈ ù ���� �߰��� ����� �����͸� �����ּ���: ";
	cin >> data3;
	list.addFirstNode(L, data3);
	list.printList(L);
	cout << endl;

	cout << "3. ���� ���� ����Ʈ �߰��� ��带 �����ϰڽ��ϴ�. " << endl;

	cout << "3-1. � ��� �ڿ� ��带 �߰��Ұǰ���? : ";
	int data5, data4;
	cin >> data5;
	cout << "3-2. �� ��� �ڿ� � �����͸� ���� ��带 �߰��Ұǰ���? : ";
	cin >> data4;
	list.addMiddleNode(L, data5, data4);
	list.printList(L);
	cout << endl;

	cout << "4-1. �����ϰ��� �ϴ� ��带 �˷��ּ��� : ";
	int data6;
	cin >> data6;
	list.deleteCircleNode(L, data6);
	list.printList(L);
	cout << endl;

	cout << "4-2. �� �����ϰ� ���� ��带 �˷��ּ��� : ";
	int data7;
	cin >> data7;
	list.deleteCircleNode(L, data7);
	list.printList(L);
	cout << endl;

	cout << "4-3. �� �����ϰ� ���� ��带 �˷��ּ��� : ";
	int data8;
	cin >> data8;
	list.deleteCircleNode(L, data8);
	list.printList(L);
	cout << endl;


	cout << "�ǰ��ϴϱ� ������ �����ڽ��ϴ�." << endl;

}