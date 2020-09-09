/*
Name: patrick lugassy
ID:319266177
ASSIGNMENT 2
*/

#include <iostream>
using namespace std;
#include "CSetLinkList.h"
#include "Node.h"





int main() {
	CSetLinkList temp;
	CSetLinkList x;
	CSetLinkList y;
	y += 1;
	y += 2;
	y += 3;
	y -= 2;
	x += 1;
	x += 2;
	cout << x << endl;
	cout << y<< endl;
	                                         // data check ;
	temp=x + y;
	cout << temp << endl;

	x += 3;
	y += 2;
	temp = x - y;
	cout << temp << endl;

	--x;
	y--;
	cout << x << endl;
	cout << y << endl;
	
	x == y;
	y != x;


		return 0;
} 