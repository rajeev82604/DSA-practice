#include <iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    
    //cloning function
    ListNode* clone(ListNode* head)
    {
        ListNode* original = head;
        ListNode* newhead  = new ListNode();
        ListNode* cloneptr = newhead;
        while (original != nullptr) 
        {
            cloneptr->val = original-> val;
            //jab tak original ptr last node tak nahi pahunch jaye, tab tak chalte raho : 
            if(original->next != nullptr)
            {
                //create a new node
                cloneptr->next = new ListNode();
                cloneptr = cloneptr -> next;
            }
            original = original -> next;
        }
        
        return newhead;
    }
    
    bool isPalindrome(ListNode* head) {
        
        //cloning the original linked list
        ListNode* original = clone(head);
        
        //reversing the linked list
        
        ListNode* temp = nullptr;
        ListNode* current = nullptr;
        ListNode* prev = nullptr;
        current = head;
        while(current != nullptr)
        {
            temp = current-> next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        //now previous pointer has the new head value
        temp = original; current= prev;
        //palindrome check
        while(temp!= nullptr  || current != nullptr)
        {
            if (temp->val != current->val)
            {
                return false;
            }
            temp = temp->next;
            current = current->next;
        }
        return true;
    }
    
};
int main() {
    // Creating a linked list [1, 1, 2, 1]
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(1);
    ListNode* node3 = new ListNode(2);
    ListNode* node4 = new ListNode(1);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Solution s1;
    cout<<s1.isPalindrome(node1) << endl; // Output should be 'false'

    
}
