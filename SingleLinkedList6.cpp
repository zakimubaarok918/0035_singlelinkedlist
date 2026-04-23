Node *previous = START;
    Node *current = START;

    while (current != NULL && current->noMhs < newNode->noMhs)
    {
        if (nim == current->noMhs)
        {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
        }
        previous = current;
        current = current->next;
    }

    nodeBaru->next = current;
    previous->next = nodeBaru;

    {