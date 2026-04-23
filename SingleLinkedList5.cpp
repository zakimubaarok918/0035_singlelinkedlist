void addNode()
    {
        int nim;
        cout << "Masukkan NIM:";
        cin >> nim;

        Node *newNode = new Node();
        newNode->noMhs = nim;

        if (START == NULL || START ->noMhs >= newNode->noMhs)
        {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
        }

        nodeBaru->next = START;
        START = nodeBaru;
        return;
    }