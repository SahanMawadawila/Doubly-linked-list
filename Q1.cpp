#include "DoublyLinkedList.h"

int main() {
	int noOfNodes, element;
	//create a object 
	DoublyLinkedList doublyLinkedList;

	// number of elements to insert
	cout << "No of nodes:";
	cin >> noOfNodes;

	//user input validation
	if (noOfNodes < 0) {
		cout << "No of nodes should be less than or equal to 0.";
		return 1;
	}

	// elements to insert
	for (int i = 0; i < noOfNodes; i++) {
		cin >> element;
		doublyLinkedList.insertEnd(element);
	}
	cout << "Input data: ";
	doublyLinkedList.print();
	cout << endl << endl;

	int choice, data;

	while (true) {
		cout << "1 - Insert Beginning\n"
			<< "2 - Insert End\n"
			<< "3 - Delete Beginning\n"
			<< "4 - Delete End\n"
			<< "5 - Delete Value\n"
			<< "6 - Print\n"
			<< "7 - Search\n"
			<< "8 - Sum\n"
			<< "0 - Exit\n"
			<< "Enter your choice: ";
		cin >> choice;

		system("cls");

		switch (choice) {
		case 1: {
			cout << "Enter the data to insert at the beginning: ";
			cin >> data;
			doublyLinkedList.insertBeg(data);
			cout << "Linked List : ";
			doublyLinkedList.print();
			cout << endl;
			break;
		}
		case 2: {
			cout << "Enter the data to insert at the end: ";
			cin >> data;
			doublyLinkedList.insertEnd(data);
			cout << "Linked List : ";
			doublyLinkedList.print();
			cout << endl;
			break;
		}
		case 3: {
			doublyLinkedList.deleteBeg();
			cout << "Linked List : ";
			doublyLinkedList.print();
			cout << endl;
			break;
		}
		case 4: {
			doublyLinkedList.deleteEnd();
			cout << "Linked List : ";
			doublyLinkedList.print();
			cout << endl;
			break;
		}
		case 5: {
			cout << "Enter the value to delete: ";
			cin >> data;
			doublyLinkedList.deleteByValue(data);
			cout << "Linked List : ";
			doublyLinkedList.print();
			cout << endl;
			break;
		}
		case 6: {
			cout << "Linked List : ";
			doublyLinkedList.print();
			cout << endl;
			break;
		}
		case 7: {
			cout << "Enter the value to search: ";
			cin >> data;
			cout << "Linked List : ";
			doublyLinkedList.print();
			cout << endl;
			Node* isFound = doublyLinkedList.search(data);
			if (isFound != nullptr) {
				cout << "Value found: " << isFound->data << endl;
				cout << "Memory location:" << isFound << endl;
			}
			else {
				cout << "Value not found." << endl;
			}
			break;
		}
		case 8: {
			cout << "Linked List : ";
			doublyLinkedList.print();
			cout << endl;
			int sum = doublyLinkedList.sum();
			cout << "Sum of the list values: " << sum << endl;
			break;
		}
		case 0: {
			cout << "Exiting the program." << endl;
			return 0;
		}
		default: {
			cout << "Invalid choice. Please try again." << endl;
			break;
		}
		}
		cout << endl;
	}

	return 0;
}
