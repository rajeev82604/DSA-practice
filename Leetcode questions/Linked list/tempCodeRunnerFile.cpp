//now previous pointer has the new head value
        temp = head2; current= prev;
        //palindrome check
        while(temp!= nullptr )
        {
            if (temp->val != current->val)
            {
                return false;
            }
            temp = temp->next;
            current = current->next;
        }
        return true;