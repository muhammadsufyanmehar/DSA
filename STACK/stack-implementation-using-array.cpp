#include<iostream>
using namespace std;


class stack {
private:

	int* arr;
	int size;
	int top;
public:
	//  constructor
	stack(int size) {
		this->size = size;
		arr = new int[size];
		top = -1;
	}

	void push(int element) {
		if (size - top > 1) {
			top++;
			arr[top] = element;
		}
		else {
			cout << "Stack overflow" << endl;
		}
	}

	void pop() {
		if (top >= 0) {
			top--;
		}
		else {
			cout << "Stack is empty" << endl;
		}
	}

	void Top() {
		if (top >= 0) {
			cout << "The top element is : " << arr[top] << endl;
		}
		else {
			cout << "The Stack is empty." << endl;
		}
	}

	void IsEmpty() {
		if (top <= -1) {
			cout << "Yes the Stack is empty." << endl;
		}
		else {
			cout << "No the Stack is not empty." << endl;
		}
	}


};
int main() {
	stack s(4);

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	s.Top();

	s.pop();

	s.Top();

	s.pop();

	s.Top();

	s.pop();

	s.Top();

	s.pop();

	s.Top();

	s.pop();

	s.IsEmpty();
}