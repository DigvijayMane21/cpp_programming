#include<iostream>
using namespace std;
struct node
{
    int patient_id;
    char patient_type;
    struct node *next;
};
struct node *head = NULL;

void insert()
{
    struct node *new_node, *temp, *prev;
    new_node = new node;
    cout << "Enter Patient ID : ";
    cin >> new_node->patient_id;
    cout << "Enter Patient Type (s|n|g) : ";
    cin >> new_node->patient_type;
    if(new_node == NULL)
    {
        cout << "Memory Not Allocated !!\n\n";
    }
    else
    {
        if(head == NULL)
        {
            head = new_node;
            new_node->next = NULL;
        }
        else
        {
            temp = head;
            prev = NULL;
            // Checking the priority of the new_node
            int priority;
            if(new_node->patient_type == 's')
            {
                priority = 1;
            }
            else if(new_node->patient_type == 'n')
            {
                priority = 2;
            }
            else
            {
                priority = 3;
            }
            // Traversing the linked list until the appropriate position is found to insert the new_node
            while(temp != NULL && priority >= ((temp->patient_type == 's') ? 1 :((temp->patient_type == 'n') ? 2 : 3)))
            {
                prev = temp;
                temp = temp->next;
            }
            // Inserting the new_node at the appropriate position
            if(prev == NULL)
            {
                new_node->next = head;
                head = new_node;
            }
            else
            {
                new_node->next = prev->next;
                prev->next = new_node;
            }
        }
    }
}

void display()
{
    cout << "Displaying .....\n\n";
    struct node *temp = head;
    while(temp != NULL)
    {
        cout <<"|"<<temp->patient_id << " " << temp->patient_type<<"|";
        temp = temp->next;
    }
}

int main()
{
    int ch;
    do
    {
        cout << "\n***** MENU *****\n";
        cout << "1. INSERT\n";
        cout << "2. DISPLAY\n";
        cout << "3. EXIT\n";
        cout << "ENTER CHOICE : ";
        cin >> ch;
        switch(ch)
        {
            case 1:
                insert();
                break;

            case 2:
                display();
                break;

            case 3:
                cout << "Thank You !!!\n";
                break;

            default:
                cout << "Invalid Input !!!\n\n";
                break;
        }
    } while(ch != 3);
return 0;
}
