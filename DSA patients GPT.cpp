#include <iostream>

using namespace std;

// Structure to represent a patient
struct Patient {
    string name;
    int priority;
    Patient* next;
};

// Class to represent the priority queue
class PriorityQueue {
private:
    Patient* head;

public:
    // Constructor to initialize the head pointer
    PriorityQueue() {
        head = NULL;
    }

    // Function to add a patient to the queue
    void enqueue(string name, int priority) {
        // Create a new patient
        Patient* newPatient = new Patient;
        newPatient->name = name;
        newPatient->priority = priority;
        newPatient->next = NULL;

        // If the queue is empty, make the new patient the head
        if (head == NULL) {
            head = newPatient;
            return;
        }

        // Traverse the queue to find the appropriate position to insert the new patient
        Patient* current = head;
        Patient* prev = NULL;
        while (current != NULL && current->priority >= priority) {
            prev = current;
            current = current->next;
        }

        // Insert the new patient
        if (prev == NULL) {
            newPatient->next = head;
            head = newPatient;
        } else {
            newPatient->next = prev->next;
            prev->next = newPatient;
        }
    }

    // Function to remove the highest priority patient from the queue and return their name
    string dequeue() {
        // If the queue is empty, return an empty string
        if (head == NULL) {
            return "";
        }

        // Remove the head and return their name
        string name = head->name;
        Patient* temp = head;
        head = head->next;
        delete temp;
        return name;
    }

    // Function to print the patients in the queue
    void print() {
        Patient* current = head;
        while (current != NULL) {
            cout << current->name << " (" << current->priority << ")" << endl;
            current = current->next;
        }
    }
};

int main() {
    // Create a priority queue
    PriorityQueue queue;

    // Add some patients to the queue
    queue.enqueue("Alice", 2);  // Non-serious
    queue.enqueue("Bob", 3);    // General checkup
    queue.enqueue("Charlie", 1);  // Serious
    queue.enqueue("David", 2);  // Non-serious
    queue.enqueue("Eve", 1);    // Serious

    // Print the patients in the queue
    queue.print();

    // Remove the highest priority patient from the queue and print their name
    cout << "Next patient: " << queue.dequeue() << endl;

    // Print the patients in the queue again
    queue.print();

    return 0;
}

