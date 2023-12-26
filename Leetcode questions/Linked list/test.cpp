#include<iostream>
using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
    


int main()
{
    
}
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp;
        ListNode* temp2;
        ListNode* temp3;
        temp= head;
        while(temp!=nullptr)   
        {
            if (temp == head && temp -> val == val)
            {
                temp3 = head;
                head = head->next;
                temp = head;
                delete temp3;
            }
            else if (temp -> val == val)
            {
                temp2->next = temp->next;
                temp3=temp;
                delete temp3;
            }
            temp2 = temp;
            temp= temp->next;
        }
        return head;
    }

};

