#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *link;
};

int main()
{
    ListNode *head, *current;
    head = new ListNode();
    current = head;

    cout << "How many elements : ";
    int size;
    cin >> size;

    cout << "Enter those elements : ";
    for (int i = 1; i <= size; i++)
    {
        cin >> current->data;

        if (i != size)
        {
            current->link = new ListNode();
            current = current->link;
        }
    }

    current->link = NULL;

    cout << "Elements in Linked List are : ";

    current = head;

    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->link;
    }

    cout << endl;

    int searchItem;
    cout << "Enter element to search: ";
    cin >> searchItem;

    current = head;
    int pos = 1;
    bool isFound = false;

    while (current != NULL)
    {
        if (current->data == searchItem)
        {
            cout << "Item found." << endl;
            cout << "Position: " << pos << endl;
            cout << "Address: " << current << endl;
            isFound = true;
            break;
        }

        current = current->link;
        pos++;
    }

    if (!isFound)
    {
        cout << "Item not found in the list";
    }

    return 0;
}