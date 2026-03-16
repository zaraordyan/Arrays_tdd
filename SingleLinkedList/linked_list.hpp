#include <iostream>

template <typename T>
class LinkedList 
{
    private:
    struct Node 
{
    T data;
    Node* next;

    Node(T value) : data(value), next(nullptr) {}
};
    Node* head;

    public:
    LinkedList() : head(nullptr) {}
    LinkedList(LinkedList<T>&& orig);
    LinkedList(const LinkedList<T>& other);
    ~LinkedList();
    void insert(T value);
    void deleteElement(int index);
    T get(int index) const;
    LinkedList& operator=(const LinkedList<T>& other);
    LinkedList& operator=(LinkedList<T>&& orig);
};