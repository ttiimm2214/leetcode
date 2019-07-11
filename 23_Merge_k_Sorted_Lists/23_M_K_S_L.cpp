/*
 * Leetcode 23_Merge_k_Sorted_Lists
 *
 * Compile: g++ 23_M_K_S_L.cpp -o result
 * Execute: ./result
 */


/*
Merge k sorted linked lists and return it as one sorted list. Analyze and describe its complexity.
Input:
[
  1->4->5,
  1->3->4,
  2->6
]
Output: 1->1->2->3->4->4->5->6
*/


#include <iostream>
#include <vector>
using namespace std;


struct Listnode {
	int val;
	Listnode *next;
};


int main(){
//test case 1 -> 4 -> 5
	
	Listnode *head0 = new Listnode;
	Listnode *temp = new Listnode;
	temp = head0;
	head0 -> val = 1;
	head0 -> next =NULL;

	temp -> next = new Listnode;
	temp = temp -> next;
	temp -> val = 4;
	temp -> next =NULL;

	temp -> next = new Listnode;
	temp = temp -> next;
	temp -> val = 5;
	temp -> next =NULL;

//test case 1 -> 3 -> 4
	
	Listnode *head1 = new Listnode;
	Listnode *temp1 = new Listnode;
	temp1 = head1;
	head1 -> val = 1;
	head1 -> next =NULL;

	temp1 -> next = new Listnode;
	temp1 = temp1 -> next;
	temp1 -> val = 3;
	temp1 -> next =NULL;

	temp1 -> next = new Listnode;
	temp1 = temp1 -> next;
	temp1 -> val = 4;
	temp1 -> next =NULL;

//test case 2 -> 6
	
	Listnode *head2 = new Listnode;
	Listnode *temp2 = new Listnode;
	temp2 = head2;
	head2 -> val = 2;
	head2 -> next =NULL;

	temp2 -> next = new Listnode;
	temp2 = temp2 -> next;
	temp2 -> val = 6;
	temp2 -> next =NULL;

//將test case 推進 vector
	vector<Listnode> lists;
	lists.push_back(*head0);
	lists.push_back(*head1);	
	lists.push_back(*head2);	

//solution

//corner case 當vector沒有list or 只有一個list


//
cout << lists.size() << endl; 

// print the list 
	// Listnode *print = new Listnode;
	// print = &lists[2];
	// while(true){
	// 	cout << print -> val << endl;
	// 	print = print -> next;
	// 	if (print == NULL){
	// 		break;
	// 	} 
	// }


}