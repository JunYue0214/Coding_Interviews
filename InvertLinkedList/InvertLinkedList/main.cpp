#include <iostream>
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
		val(x), next(NULL) {
	}
};
class Solution
{
public:
	ListNode* ReverseList(ListNode * pHead)
	{
		ListNode * pOutput = NULL;
		ListNode * pPrev = NULL;
		ListNode * pNext = NULL;
		while (pHead != NULL)
		{
			pNext = pHead->next;
			if (pNext == NULL)
				pOutput = pHead;
			pHead->next = pPrev;
			pPrev = pHead;
			pHead = pNext;
			
		}
		return 	pOutput;
	}
};
void main()
{
	ListNode * L1=new ListNode(1);
	ListNode * L2 = new ListNode(2);
	ListNode * L3 = new ListNode(3);
	L1->next = L2;
	L2->next = L3;
	Solution So;
	ListNode * NewL1 = So.ReverseList(L1);
	int a1 = NewL1->val;
	int a2 = NewL1->next->val;
	delete L1, L2, L3;

}