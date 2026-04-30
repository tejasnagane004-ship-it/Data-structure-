
#include <iostream>
using namespace std;

class Queue
 {
    int *arr;
    int front, rear, size;

public:
Queue(int s) {
size = s;
arr = new int[size];
front = -1;
rear = -1;
}

    
void enqueue(int value) {
if (rear == size - 1) {
cout << "Queue Overflow! Queue is Full.\n";
}
 else
 {
 if (front == -1)
 front = 0;
rear++;
arr[rear] = value;
cout << value << " inserted into queue.\n";
}
 }
 void dequeue() {
if (front == -1 || front > rear) {
cout << "Queue Underflow! Queue is Empty.\n";
} else 
{
cout << arr[front] << " deleted from queue.\n";
 front++;          
if (front > rear)
 {
 front = rear = -1;
}
 }
}
 void peek() {
 if (front == -1) {
 cout << "Queue is Empty.\n";
 } 
 else 
 {
 cout << "Front element is: " << arr[front] << endl;
}
 }
 void display() {
if (front == -1) {
 cout << "Queue is Empty.\n";
 }
 else
  {
 cout << "Queue elements are: ";
 for (int i = front; i <= rear; i++) {
 cout << arr[i] << " ";
}
cout << endl;
 }
 }
};

int main() 
{
int size, choice, value;

cout << "Enter size of queue: ";
 cin >> size;

 Queue q(size);

do
{
cout << "\n--- Queue Operations Menu ---\n";
cout << "1. Enqueue\n";
cout << "2. Dequeue\n";
cout << "3. Peek\n";
cout << "4. Display\n";
cout << "5. Exit\n";
cout << "Enter your choice: ";
cin >> choice;

switch (choice)
 {
 case 1:
cout << "Enter value to insert: ";
cin >> value;
q.enqueue(value);
break;

case 2:
q.dequeue();
 break;

 case 3:
 q.peek();
 break;

case 4:
 q.display();
break;

case 5:
cout << "Exiting program...\n";
break;

default:
cout << "Invalid choice! Try again.\n";
 }

}
 while (choice != 5);

 return 0;
}