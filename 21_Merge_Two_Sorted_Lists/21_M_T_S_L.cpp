/*
 * Leetcode 21_Merge_Two_Sorted_Lists`
 *
 * Compile: g++ 21_M_T_S_L.cpp -o result
 * Execute: ./result
 */


/*
Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
Example:
Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
*/

#include <iostream>

using namespace std;

// 也有使用class去定義link list的 
// 如果使用class定義就可以定義private 
// 使用struct就都是public
struct ListNode{
  int val;
  ListNode * next;
};



int main(){
//test case	1->2->4, 1->3->4
//step 1 建立第一個節點
	ListNode * l1;     // 宣告一個head指標
	l1 = new ListNode;   // 跟記憶體要ListNode類型的記憶體給head
	// 此處讓兩邊起頭位址相同 因為 current 等等要輸入下一個數字往下跑位址 需要留l1當起點
	ListNode *current0 = l1;  // 宣吿一個current指標並告訴指標我們現在 head這個位置

	l1->val = 1;			// 第一個節點的值
	l1->next = NULL; 			// 並指向NULL
// 建立下一個節點
//＊＊＊想要建立下一個節點next一定要 指定一個位址(new)給他 不然會造成Segmentation fault
	current0->next = new ListNode; //跟記憶體要ListNode類型的記憶體給current next
	current0 = current0 ->next; //把current 移到current next的位址
	current0 -> val = 2;	  //第二個節點的值
	current0 -> next = NULL;   // 最後指向NULL
//最後的節點
	current0 -> next = new ListNode; 
	current0 = current0 ->next;
	current0 -> val = 4;
	current0 -> next = NULL; 

//第二條ListNode  1->3->4
	ListNode * l2;
	l2 = new ListNode;
	ListNode *current1 = l2;
	l2 -> val= 1;
	l2 -> next = NULL;

	current1 -> next = new ListNode;
	current1 = current1->next;
	current1 -> val = 3;
	current1 -> next = NULL;

	current1 -> next = new ListNode;
	current1 = current1->next;
	current1 -> val = 4;
	current1 -> next = NULL;	


//solution
	ListNode *temp = new ListNode;
	ListNode *result = new ListNode;
	temp = result;
// corner case 避免 輸入數值為 NULL
    if (l1 == NULL && l2 == NULL){
        cout << NULL<<endl;
    }
    else if (l1 == NULL && l2 !=NULL){
		while(true){
			cout << l2->val << endl;
			l2 = l2 ->next;
			if (l2 == NULL){
				break;
			}
		}
    }
    else if (l1 != NULL && l2 == NULL){
		while(true){
			cout << l1->val << endl;
			l1 = l1 ->next;
			if (l1 == NULL){
				break;
			}
		}
    }

	while (l1 != NULL && l2 != NULL){
		if (l1 -> val >= l2 -> val){
			temp -> val = l2 ->val;
			l2 = l2 ->next;
		}
		else if (l1 -> val < l2 -> val){

			temp -> val = l1 ->val;
			l1 = l1 -> next;
		}
// 當其一為 NULL數列時 跳出迴圈 避免最後一個數值NULL輸入進我們要的答案中
		if(l1 == NULL || l2 == NULL){
			break;
			}
			temp -> next = new ListNode;
			temp = temp -> next;
			temp -> next = NULL;

	}
// 把剩餘的數列接上去
	if (l1 == NULL){
		temp -> next = new ListNode;
		temp -> next = l2;
	}
	else{
		temp -> next = new ListNode;
		temp -> next = l1;
	}

//print link list 
	ListNode *print =new ListNode;
	print = result;
	while(true){
		cout << print->val << endl;
		print = print ->next;
		if (print == NULL){
			break;
		}
	}

}