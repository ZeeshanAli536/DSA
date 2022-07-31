#include <iostream>
using namespace std;

class Node{
    private:
        int data;
        Node *next;
    public:
        Node(){
            data = 0;
            next = NULL;
        }
        Node(int data , Node *next=NULL){
            setData(data);
            setNext(next);
        }
        int getData(){
            return data;
        }
        Node *getNext(){
            return next;
        }
        void setNext(Node *next){
            this->next = next;
        }
        void setData(int data){
            this->data = data;
        }
};

class LinkedList{
    private:
        Node *head;
    public:
        LinkedList(Node *head=NULL){
            setHead(head);
        }
        void setHead(Node *head){
            this->head = head;
        }
        Node *getHead(){
            return head;
        }

        Node *getFirst(){
            return head;
        }

        Node *getLast(){
            Node *temp = head;
            while(temp != NULL){
                temp = temp->getNext();
            }
            return temp;
        }

        bool isEmpty(){
            return (head->getNext() == NULL);
        }

        int getLength(){
            int count = 0;
            if (!isEmpty()){
                Node *temp = head;
                while(temp != NULL){
                    count++;
                    temp = temp->getNext();
                }
            }
            return count;
        }

        void print(){
            Node *temp = head;
            while(temp != NULL){
                cout << temp->getData() << '-';
                temp = temp->getNext();
            }
        }

    void insertAtBeginning(int value){
        Node* newNode = new Node(value);
        newNode->setNext(head);
        head = newNode;
    }

    void insertAtLast(int value){
        Node* newNode = new Node(value);
        Node *temp = head;
        while(temp != NULL){
            temp = temp->getNext();
        }
        temp->setNext(newNode);
    }

    void removeFromFirst(){
        Node* newNode = head->getNext();
        delete head;
        head = newNode;
    }

    void removeFromLast(){
        Node* temp1 = head;
        Node* temp2 = temp1->getNext();
        for(int i=0; i < (getLength() - 1) ; i++){
            temp1 = temp1->getNext();
            temp2 = temp1->getNext();
        }
        delete temp2;
   }
};

int main(){
    Node *head;
    LinkedList l1(head);
}
