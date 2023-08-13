#include <iostream>
#include <string>
using namespace std;

typedef struct Node
{
    string keyword;
    string meaning;
    int height;
    Node *left;
    Node *right;
};

// Function to create a new node with given keyword and meaning
Node* newNode(string keyword, string meaning)
{
    Node* node = new Node();
    node->keyword = keyword;
    node->meaning = meaning;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

// Function to calculate the height of a node
int height(Node* node)
{
    if (node == NULL)
    {
        return 0;
    }
    return node->height;
}

// Function to get the balance factor of a node
int balanceFactor(Node* node)
{
    if (node == NULL)
    {
        return 0;
    }
    return height(node->left) - height(node->right);
}

// Function to rotate a subtree to the left
Node* rotateLeft(Node* node)
{
    Node* newRoot = node->right;
    node->right = newRoot->left;
    newRoot->left = node;
    node->height = max(height(node->left), height(node->right)) + 1;
    newRoot->height = max(height(newRoot->left), height(newRoot->right)) + 1;
    return newRoot;
}

// Function to rotate a subtree to the right
Node* rotateRight(Node* node)
{
    Node* newRoot = node->left;
    node->left = newRoot->right;
    newRoot->right = node;
    node->height = max(height(node->left), height(node->right)) + 1;
    newRoot->height = max(height(newRoot->left), height(newRoot->right)) + 1;
    return newRoot;
}

// Function to balance a node
Node* balance(Node* node)
{
    if (node == NULL)
    {
        return NULL;
    }
    int bf = balanceFactor(node);
    if (bf > 1)
    {
        if (balanceFactor(node->left) < 0)
        {
            node->left = rotateLeft(node->left);
        }
        return rotateRight(node);
    }
    else if (bf < -1)
    {
        if (balanceFactor(node->right) > 0)
        {
            node->right = rotateRight(node->right);
        }
        return rotateLeft(node);
    }
    return node;
}

// Function to insert a new keyword and meaning into the dictionary
Node* insert(Node* root, string keyword, string meaning)
{
    if (root == NULL)
    {
        return newNode(keyword, meaning);
    }
    if (keyword < root->keyword)
    {
        root->left = insert(root->left, keyword, meaning);
    }
    else if (keyword > root->keyword)
    {
        root->right = insert(root->right, keyword, meaning);
    }
    else
    {
        root->meaning = meaning;
        return root;
    }
    root->height = max(height(root->left), height(root->right)) + 1;
    return balance(root);
}

// Function to delete a keyword from the dictionary
Node* deleteNode(Node* root, string keyword)
{
    if (root == NULL)
    {
        return root;
    }
    if (keyword < root->keyword)
    {
        root->left = deleteNode(root->left, keyword);
    }
    else if (keyword > root->keyword)
    {
        root->right = deleteNode(root->right, keyword);
    }
    else // found the node to be deleted
    {
        if (root->left == NULL && root->right == NULL)
        { // case 1: node has no children
            delete root;
            return NULL;
        }
        else if (root->left == NULL)
        { // case 2a: node has only right child
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        { // case 2b: node has only left child
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else
        { // case 3: node has both left and right children
        // find the inorder successor of the node
            Node* temp = root->right;
            while (temp->left != NULL)
            {
                temp = temp->left;
            }
            // copy the inorder successor's data to the node
            root->keyword = temp->keyword;
            root->meaning = temp->meaning;
            // delete the inorder successor
            root->right = deleteNode(root->right, temp->keyword);
        }
    }
    root->height = max(height(root->left), height(root->right)) + 1;
    return balance(root);
}

// Function to find the maximum comparisons required to find a keyword
int maxComparisons(Node* root, string keyword)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->keyword == keyword)
    {
        return 1;
    }
    if (keyword < root->keyword)
    {
        return 1 + maxComparisons(root->left, keyword);
    }
    else
    {
        return 1 + maxComparisons(root->right, keyword);
    }
}

// Function to print the dictionary in ascending order
void printAscending(Node* root)
{
    if (root != NULL)
    {
        printAscending(root->left);
        cout << root->keyword << ": " << root->meaning << endl;
        printAscending(root->right);
    }
}

// Function to update the meaning of a keyword in the dictionary
Node* updateMeaning(Node* root, string keyword, string newMeaning)
{
    if (root == NULL)
    {
        // Keyword not found, return NULL
        return NULL;
    }
    if (keyword < root->keyword)
    {
        // Search in the left subtree
        root->left = updateMeaning(root->left, keyword, newMeaning);
    }
    else if (keyword > root->keyword)
    {
        // Search in the right subtree
        root->right = updateMeaning(root->right, keyword, newMeaning);
    }
    else
    {
        // Update the meaning of the node with the new valuea
        root->meaning = newMeaning;
    }
    root->height = max(height(root->left), height(root->right)) + 1;
    return balance(root);
}


int main()
{
    Node* root = NULL;
    int ch;
    string keyword, meaning;
    while(1)
    {
        cout << "Dictionary Operations:" << endl;
        cout << "1. Add keyword and meaning" << endl;
        cout << "2. Delete keyword" << endl;
        cout << "3. Update meaning of a keyword" << endl;
        cout << "4. Print dictionary in ascending order" << endl;
        cout << "5. Find maximum comparisons for a keyword" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
            case 1:
                cout << "Enter keyword: ";
                cin >> keyword;
                cout << "Enter meaning: ";
                cin >> meaning;
                root = insert(root, keyword, meaning);
                cout << "Keyword added to dictionary" << endl;
                break;
            case 2:
                cout << "Enter keyword to delete: ";
                cin >> keyword;
                root = deleteNode(root, keyword);
                cout << "Keyword deleted from dictionary" << endl;
                break;
            case 3:
                cout << "Enter keyword to update: ";
                cin >> keyword;
                cout << "Enter new meaning: ";
                cin >> meaning;
                updateMeaning(root, keyword, meaning);
                cout << "Meaning updated for keyword" << endl;
                break;
            case 4:
                cout << "Dictionary in ascending order:" << endl;
                printAscending(root);
                break;
            case 5:
                cout << "Enter keyword to find maximum comparisons: ";
                cin >> keyword;
                cout << "Maximum comparisons required: " <<
                maxComparisons(root, keyword) << endl;
                break;
            case 6:
                cout << "Exiting..." << endl;
                exit(0);
                break;
            default:
                cout << "Invalid choice" << endl;
        }
        cout << endl;
    }
    return 0;
}
