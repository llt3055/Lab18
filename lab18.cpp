// COMSC-210 | Lab  18| Tianyi Cao 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Node {
    float rating;
    string comment;
    Node* next;
};

// Function prototypes
void output(Node *);

int main() {
    int choice;

    cout << "Which linked list method should we use?" << endl;
    cout << "[1] New nodes are added at the head of the linked list" << endl;
    cout << "[2] New nodes are added at the tail of the linked list" << endl;
    cout << "Choice: ";
    cin >> choice;
    
    
}

void output(Node *hd){
    if(!hd) {
        cout << "Empty list" << endl;
        return;
    }
    cout << "Outputting all reviews:" << endl;
    int count = 1;
    float sum = 0;
    Node *current = hd;
    
    while (current) {
        cout << " > Review #" << count++ << ": " << current->rating << ": " << current->comment << endl;
        sum += current->rating;
        current = current->next;
    }
    
}