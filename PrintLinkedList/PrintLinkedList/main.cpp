#include <iostream>
#include <vector>
#include <stack>
using namespace std;
  struct ListNode {
        int val;
       struct ListNode *next;
        ListNode(int x) :
              val(x), next(NULL) {
        }
  };

class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		vector<int> result;
		stack<ListNode *> nodes;
		while (head != NULL)
		{
			nodes.push(head);
			head = head->next;
		}
		while (!nodes.empty())
		{
			ListNode * Li = nodes.top();
			result.push_back( Li->val);
			nodes.pop();

		}
		return result;
	}
};

void main()
{
	ListNode * L1 = new ListNode(1);
	ListNode * L2 = new ListNode(2);
	ListNode * L3 = new ListNode(3);
	L1->next = L2;
	L2->next = L3;
	Solution So;
	vector<int> result = So.printListFromTailToHead(L1);
	result;
	result;
	delete L1, L2, L3;

}