#include <iostream>

struct ListNode 
{
    int data;
    int next_index;
};

const int MAX_SIZE = 1000;

ListNode list[MAX_SIZE];

int first_node = -10;
int next_free_index = 0;

void insert(int value) 
{
    if (next_free_index >= MAX_SIZE) 
    {
        std::cout << "List is full" << std::endl;
        return;
    }

    list[next_free_index].data = value;
    list[next_free_index].next_index = -10;


    if (first_node == -10) 
    {
        first_node = next_free_index;
    } 
    else 
    {
        int temp = first_node;
        while (list[temp].next_index != -10) 
        {
            temp = list[temp].next_index;
        }
        list[temp].next_index = next_free_index;
    }

    next_free_index++;
}

int get(int index) 
{
    int temp = first_node;
    int cnt = 0;

    while (temp != -10) {
        if (cnt == index)
        {
            return list[temp].data;
        }
        temp = list[temp].next_index;
        cnt++;
    }

    return -1; 
}

void deleteElement(int index)
{
    int temp = first_node;
    int cnt  = 0;

    while (temp != -10) {
        if (cnt < index-1)
        {
            temp = list[temp].next_index;
        }
        else
        {
            break;
        }
        cnt++;
    }
    list[temp].next_index = list[list[temp].next_index].next_index;
}

void display() 
{
    int temp = first_node;
    while (temp != -10) 
    {
        std::cout << list[temp].data << "  " <<list[temp].next_index << "  ";
        temp = list[temp].next_index;
    }
    std::cout << "NULL" << std::endl;
}

int main (){
    insert(10);
    insert(20);
    insert(30);

    //display();

    std::cout << "Element at index 0: " << get(0) << std::endl;
    std::cout << "Element at index 1: " << get(1) << std::endl;
    std::cout << "Element at index 2: " << get(2) << std::endl;
    deleteElement(1);
    std::cout << "Element at index 0: " << get(0) << std::endl;
    std::cout << "Element at index 1: " << get(1) << std::endl;
    std::cout << "Element at index 2: " << get(2) << std::endl;

    return 0;

}