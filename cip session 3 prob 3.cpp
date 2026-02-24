#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int x) : val(x), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    // Default Constructor
    LinkedList()
    {
        head = nullptr;
    }

    // Constructor from vector
    LinkedList(vector<int> values)
    {
        head = nullptr;

        if(values.size() == 0)
            return;

        head = new Node(values[0]);
        Node* temp = head;

        for(int i = 1; i < values.size(); i++)
        {
            temp->next = new Node(values[i]);
            temp = temp->next;
        }
    }

    // Copy Constructor (Deep Copy)
    LinkedList(const LinkedList& other)
    {
        head = nullptr;

        if(other.head == nullptr)
            return;

        head = new Node(other.head->val);

        Node* curr1 = other.head->next;
        Node* curr2 = head;

        while(curr1 != nullptr)
        {
            curr2->next = new Node(curr1->val);
            curr2 = curr2->next;
            curr1 = curr1->next;
        }
    }

    // Destructor
    ~LinkedList()
    {
        Node* temp = head;

        while(temp != nullptr)
        {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }

        head = nullptr;
    }
};

int main()
{
    LinkedList list1({1, 2, 3});
    LinkedList list2 = list1;   // deep copy

    list2.head->val = 99;

    cout << list1.head->val << endl;   // prints 1
    cout << list2.head->val << endl;   // prints 99

    return 0;
}
