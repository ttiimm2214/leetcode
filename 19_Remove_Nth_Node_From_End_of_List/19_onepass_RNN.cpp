/*
 * Leetcode 19.Remove Nth Node From End of List
 *
 * Compile: g++ 19_onepass_RNN.cpp -o result
 * Execute: ./result
 */

/*
Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:

Given n will always be valid.

Follow up:

Could you do this in one pass?
*/

#include <iostream>
using namespace std;


struct ListNode{
	int val;
	ListNode *next;
};



int main(){
//test case linked list 1 -> 2 -> 3 -> 4 -> 5 ,  n=2
	int n =2;
	ListNode *head = new ListNode;
	ListNode *current = head;

	current -> val = 1;
	current -> next = NULL;
	current -> next = new ListNode;
	current = current -> next;

	current -> val = 2;
	current -> next = NULL;
	current -> next = new ListNode;
	current = current -> next;

	current -> val = 3;
	current -> next = NULL;
	current -> next = new ListNode;
	current = current -> next;

	current -> val = 4;
	current -> next = NULL;
	current -> next = new ListNode;
	current = current -> next;

	current -> val = 5;
	current -> next = NULL;


// ans
	ListNode *cur = new ListNode;
	ListNode *pre = new ListNode;
	pre = head;
	cur = head;
	// if (head == NULL)
		// return head;

	for (int i = 0; i < n ;i++){
		cur = cur -> next;
	}

	while (cur -> next){
		cur = cur -> next;
		pre = pre -> next;
	}
	pre -> next= pre -> next -> next;


// print
	ListNode *print =new ListNode;
	print = head;
	while(true){
		cout << print -> val << endl;
		print = print -> next;
		if (print == NULL){
			break;
		}
	}	


}