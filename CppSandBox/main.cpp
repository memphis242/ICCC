#include <iostream>
#include "IcccSinglyLinkedList.h"

using namespace std;

template<typename T>
void printList(Node<T>* head){
    Node<int> *tmp = head;

    while(tmp != NULL){
        cout << tmp->data << endl;
        tmp = tmp->next;
    }
}

void newList(void){
    SinglyLinkedList<int> sll(321);
}

int main(int argc, char* argv[])
{
    SinglyLinkedList<int> sll;

    for(int i=0; i<30; i++){
        sll.addHead(i*2);
    }

    sll.print();

    int jk;

    if(sll.decapitate(&jk)){
        cout << jk << endl;
    }
    sll.print();

    return 0;
}
