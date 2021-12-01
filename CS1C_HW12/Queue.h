#ifndef QUEUE_H
#define QUEUE_H
/****************************************************************************************
 * AUTHOR	 : Sierra Martin
 * STUDENT ID : 1130942
 * HW NAME    : Templates (Queues)
 * CLASS      : CS1C
 * SECTION    : T-TH 12:30p - 2:50p
 * DUE DATE   : Tue, 11/16
 * DESCRIPTION: Array-based queue with ring buffer. Uses unique pointer instead of raw
 * pointer.
****************************************************************************************/
#include <iostream>
#include <memory>
#include <cassert>
#include <string>
using namespace std;

template<typename T>
class Queue
{
    public:
    /***************************************
     *  initializeQueue:
	 Init queue to an empty state.
    ***************************************/
    void initializeQueue();

    /***************************************
     *  enqueue:
	 Adds an element to the queue. If the queue is not full
     and has been instantiated, the function will add elem to
     the queue.
    ***************************************/
    void enqueue(const T& elem);

    /***************************************
    *  dequeue:
     Removes first elem from the queue. If the queue is not empty
     and has been instantiated, the function will remove first elem
     from queue.
    ***************************************/
    void dequeue();

    /***************************************
    *  front:
     Returns the front/first element of the queue. If the queue is not
     empty and has been instantiated, the function will return first
     element of queue.

     * If empty, terminate program (use assert)
    ***************************************/
    T queueFront() const;

    /***************************************
    *  back:
     Returns the back/last element of the queue. If the queue is not
     empty and has been instantiated, the function will return last
     element of queue.

     * If empty, terminate program (use assert)
    ***************************************/
    T queueBack() const;

    /***************************************
    *  size:
     Returns the number of elements stored in queue
    ***************************************/
    int queueSize() const;

    /***************************************
    *  print:
     Prints the elements of the queue
    ***************************************/
    void print();

    /***************************************
    *  isEmpty:
     Determines whether or not the queue is empty.

     * If empty, return true, else return false
    ***************************************/
    bool isEmpty() const;

    /***************************************
    *  isFull:
     Determines whether or not the queue is full.

     * If full, return true, else return false
    ***************************************/
    bool isFull() const;

    // Overloaded = (assignment) operator
    Queue<T>& operator=(const Queue<T>& otherQueue);
    // Overloaded move assignment operator
    Queue<T>& operator=(Queue<T>&& otherQueue) noexcept;

    // == Constructors ======================
    //(single-argument constructors must be marked explicit to avoid unintentional implicit conversions
    explicit Queue(int size = 100);                               // Main constructor
    Queue(const Queue<T>& otherQueue);                   // Copy constructor
    Queue(const Queue<T>&& otherQueue) noexcept;               // Move constructor

    // == Destructor ========================
    ~Queue();

    private:
    unique_ptr<T[]> list; // list is pointer used to point to the queue.
    int MAX_SIZE;          // used to determine max size of queue
    int count;            // used to store number of elements in queue
    int front;            // used to point to the front queue element
    int back;             // used to point to the back queue element
};

#endif