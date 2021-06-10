#pragma once
#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class Type>
class Queue {
private:
	struct Node { Type item; struct Node * next; };
	enum { Q_SIZE = 3 };
	Node * front;
	Node * rear;
	int items;
	const int q_size;
	Queue(const Queue & q) : q_size(0) {}
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isEmpty() { return items == 0; }
	bool isFull() { return items == q_size; }
	bool Enqueue(const Type & item);
	bool Dequeue(Type & item);
	Queue & operator=(const Queue & q) { return *this; }

};

template<class T>
Queue<T>::Queue(int qs) : q_size(qs) {
	front = rear = NULL;
	items = 0;
}

template<class T>
Queue<T>::~Queue(){
	Node * temp;
	while (front != NULL) {
		temp = front;
		front = front->next;
		delete temp;
	}
}

template<class Type>
inline bool Queue<Type>::Enqueue(const Type & item)
{
	if (isFull()) return false;
	Node * add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL) front = add;
	else rear->next = add;
	rear = add;
	return true;
}

template<class Type>
inline bool Queue<Type>::Dequeue(Type & item)
{
	if (isEmpty()) return false;
	else {
		item = front->item;
		items--;
		Node * temp = front;
		front = front->next;
		delete temp;
		if (items == 0) rear = NULL;
	}
	return true;
}
#endif // !QUEUETP_H_
