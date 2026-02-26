#include <iostream>
#include "linked_list.hpp"

template <typename T>
LinkedList<T>::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

template <typename T>
void LinkedList<T>::insert(T value) {
    Node* new_node = new Node(value);

    if (head == nullptr) {
        head = new_node;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = new_node;
}

template <typename T>
void LinkedList<T>::deleteElement(int index) {
    if (head == nullptr)
        throw std::out_of_range("List is empty");

    // delete head
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    for (int i = 0; temp != nullptr && i < index - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr)
        throw std::out_of_range("Index out of range");

    Node* node_to_delete = temp->next;
    temp->next = node_to_delete->next;
    delete node_to_delete;
}


template <typename T>
T LinkedList<T>::get(int index) const {
    Node* temp = head;
    int count = 0;

    while (temp != nullptr) {
        if (count == index) {
            return temp->data;
        }
        temp = temp->next;
        count++;
    }

    throw std::out_of_range("Index out of range");
}
