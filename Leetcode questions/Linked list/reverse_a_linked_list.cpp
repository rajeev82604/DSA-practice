#include <iostream>
using namespace std;
  
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
        {
            return nullptr;
        }
        ListNode* temp;
        ListNode* current;
        ListNode* prev;
        current = head;
        while(current != nullptr)
        {
            temp = current-> next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        return prev;
    }
    
};

int main()
{
    
}