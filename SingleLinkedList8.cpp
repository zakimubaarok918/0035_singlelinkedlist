bool delNode(int nim)
    {
        Node *current, *previous;
        
        if (!search(nim, previous, current))
        return false;

        if (current == START)
        START = START->next;
        else
         previous->next = current->next;

         delete current;
         return true;
    } 
    void traverse()