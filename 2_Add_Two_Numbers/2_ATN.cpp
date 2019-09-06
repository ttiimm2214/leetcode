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

struct ListNode
{
	int val;
	ListNode *next;
};


int main(){
//test case
	ListNode *l1 = new ListNode;
	ListNode *current1 = l1;
	ListNode *l2 = new ListNode;
	ListNode *current2 = l2;
// input (2 -> 4 -> 3)
	current1 -> val = 2;
	current1 -> next = NULL;

	current1 -> next = new ListNode;
	current1 = current1 -> next;
	current1 -> val = 4;
	current1 -> next = NULL;

	current1 -> next = new ListNode;
	current1 = current1 -> next;
	current1 -> val = 3;
	current1 -> next = NULL;

// input (5 -> 4 -> 4)
	current2 -> val = 5;
	current2 -> next = NULL;

	current2 -> next = new ListNode;
	current2 = current2 -> next;
	current2 -> val = 6;
	current2 -> next = NULL;

	current2 -> next = new ListNode;
	current2 = current2 -> next;
	current2 -> val = 4;
	current2 -> next = NULL;


//ans 
	ListNode *ans = new ListNode;
	ListNode *temp = ans;
	int count = 0;
	int carry;
  
// 按照順序加減 
while(true){
	if(l1){
		count = count + l1 -> val;
		l1 = l1 -> next; 
	}
	if (l2){
		count = count + l2 -> val;
		l2 = l2 -> next;
	}
	// 查看是否進位
	carry = count /10;
	count = count % 10;
	temp -> val = count;
	temp -> next = NULL;
	count = carry;
	//如果都為空 包含進位項 則離開
	if (l1 == NULL && l2== NULL && count == 0){
		break;
	}
	else{
		temp -> next = new ListNode;
		temp = temp -> next;
	}
}





  // 如果其中一個lsit 為空list 則直接輸出  
    // if (l1 -> val == 0){
    //     return l2;
    // }
    // else if (l2 -> val == 0){
    //     return l1;
    // }
          
 // memory 用太多       
	// while (true){
	// 	if (l1 == NULL && l2 != NULL){
 //            temp -> val = l2 -> val + count;
 //            count = 0;
 //            temp -> next = NULL;
 //        }
 //        else if (l2 == NULL && l1 != NULL){
 //            temp -> val = l1 -> val + count;  
 //            count = 0;
 //        }
 //        else if (l1 == NULL && l2 ==NULL && count ==1){
 //            temp -> val = count;
 //            count = 0;
 //            temp -> next = NULL;
 //        }
 //        else {
 //            temp -> val = l1 -> val +l2 -> val +count;
 //            count = 0;
 //            temp -> next = NULL;
 //            l1 = l1 -> next;
 //            l2 = l2 -> next; 
 //        }
        
 //        if (temp -> val >= 10){
 //            count = 1; 
 //            temp -> val = temp -> val % 10;
 //        }
 //        else
 //            count = 0;
        
 //        if (l1 == NULL && l2 == NULL && count ==0)
 //            break;
 //        else{
       
 //            temp -> next = new ListNode;
 //            temp = temp -> next;
 //        }
 //    }
	


// print
	ListNode *print =new ListNode;
	print = ans;
	while(true){
		cout << print -> val << endl;
		print = print -> next;
		if (print == NULL){
			break;
		}
	}
}
