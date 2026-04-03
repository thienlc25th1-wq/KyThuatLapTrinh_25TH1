

#include <iostream>
using namespace std;
struct Athor {
    int id;
    string name;
};
struct Book {
    int id;
    string name;
    Athor author;
};
struct Node {
    Book data;
    Node* next
};
struct LinkedList {
    Node* head;

};

int main()
{
    LinkedList books = { NULL };
}

