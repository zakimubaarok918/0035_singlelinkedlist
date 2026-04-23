void traverse()
    {
        if (listEmpty())
        {
            cout << "\nList Kosong\n";
        }
        else
        {
            cout << "\nData dalam list adalah:\n";
            Node *currentNode = START;

            while (currentNode != NULL)
            {
                cout << currentNode->noMhs << " ";
                currentNode = currentNode->next;
            }
            cout << endl;
        }
    }