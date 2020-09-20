/*
 * Leetcode 83. Remove Duplicates from Sorted List

 *
 * Compile: g++ 83_RDfSL.cpp -o result
 * Execute: ./result
 */




// Example 1:
// Input: 1->1->2
// Output: 1->2
// Example 2:
// Input: 1->1->2->3->3
// Output: 1->2->3


#include <iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
};

int main(){
	// 1 -> 1 -> 2
	ListNode *head0 = new ListNode;
	ListNode *temp0 = new ListNode;
	temp0 = head0;
	head0 -> val = 1;
	head0 -> next = NULL;

	temp0 ->next = new ListNode;
	temp0 = temp0 -> next;
	temp0 -> val = 1;
	temp0 -> next = NULL;

	temp0 -> next = new ListNode;
	temp0 = temp0 -> next;
	temp0 -> val = 2;
	temp0 -> next = NULL;

	// 1 -> 1 -> 2 -> 2 -> 3
	ListNode *head1 = new ListNode;
	ListNode *temp1 = new ListNode;
	temp1 = head1;
	head1 -> val = 1;
	head1 -> next = NULL;

	temp1 ->next = new ListNode;
	temp1 = temp1 -> next;
	temp1 -> val = 1;
	temp1 -> next = NULL;

	temp1 -> next = new ListNode;
	temp1 = temp1 -> next;
	temp1 -> val = 2;
	temp1 -> next = NULL;

	temp1 -> next = new ListNode;
	temp1 = temp1 -> next;
	temp1 -> val = 2;
	temp1 -> next = NULL;

	temp1 -> next = new ListNode;
	temp1 = temp1 -> next;
	temp1 -> val = 3;
	temp1 -> next = NULL;

//ans
	ListNode *deleteDuplicates = new ListNode;
	ListNode *ans = new ListNode;
	ans -> next =NULL;
	ListNode *temp2 = new ListNode;
	temp2 = ans;
	deleteDuplicates = &head0[0];
	if (deleteDuplicates==NULL){
		cout << "empty list";
	}

	temp2 -> val = deleteDuplicates -> val;
	temp2 -> next =NULL;
	deleteDuplicates = deleteDuplicates -> next;
	while (deleteDuplicates){
		if (temp2 -> val != deleteDuplicates->val){
			temp2 -> next = new ListNode;
			temp2 = temp2 -> next;
			temp2 -> val = deleteDuplicates -> val;
			temp2 -> next = NULL;
			deleteDuplicates = deleteDuplicates ->next;
		}
		else {
			deleteDuplicates = deleteDuplicates -> next;
		}		
	}



// print the list 
	ListNode *print = new ListNode;
	print = &ans[0];
	while(true){
		cout << print -> val << endl;
		print = print -> next;
		if (print == NULL){
			break;
		}     
	}
}