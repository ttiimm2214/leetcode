/*
 * Leetcode 2. Add Two Numbers
 *
 * Compile: g++ 2_ATN.cpp -o result
 * Execute: ./result
 */


/*
You are given two non-empty linked lists representing two non-negative integers. 

The digits are stored in reverse order and each of their nodes contain a single digit. 

Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/

#include <iostream>

using namespace std;

struct Listnode
{
	int val;
	Listnode *next;
};


int main(){
//test case
	Listnode *l1 = new Listnode;
	Listnode *current1 = l1;
	Listnode *l2 = new Listnode;
	Listnode *current2 = l2;
// input (2 -> 4 -> 3)
	current1 -> val = 2;
	current1 -> next = NULL;

	current1 -> next = new Listnode;
	current1 = current1 -> next;
	current1 -> val = 4;
	current1 -> next = NULL;

	current1 -> next = new Listnode;
	current1 = current1 -> next;
	current1 -> val = 3;
	current1 -> next = NULL;

// input (5 -> 4 -> 4)
	current2 -> val = 5;
	current2 -> next = NULL;

	current2 -> next = new Listnode;
	current2 = current2 -> next;
	current2 -> val = 6;
	current2 -> next = NULL;

	current2 -> next = new Listnode;
	current2 = current2 -> next;
	current2 -> val = 4;
	current2 -> next = NULL;


//ans 
	Listnode *ans = new Listnode;
	Listnode *temp = ans;
	int count = 0;
	while (true){
		temp -> val = l1 -> val + l2 -> val +count;
		count = 0;
		temp -> next = NULL;
		if (temp -> val >= 10){
			count = 1;
			temp -> val = temp -> val % 10; 
		}
		else 
			count = 0;
		l1 = l1 -> next;
		l2 = l2 -> next;		
		if (l1 == NULL){
			break;
		}
		else{
			temp -> next = new Listnode;
			temp = temp -> next;
		}
		// temp = temp ->next;
		// temp -> next = NULL;
		// l1 = l1 -> next;
		// l2 = l2 -> next;
	}
	


// print
	Listnode *print =new Listnode;
	print = ans;
	while(true){
		cout << print -> val << endl;
		print = print -> next;
		if (print == NULL){
			break;
		}
	}
}
