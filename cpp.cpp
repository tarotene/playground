#include <bits/stdc++.h>
using namespace std;

static const int MAX = 100000;

class mystack
{
private:
    int a[MAX];
    int top = 0;
public:
    mystack();
    ~mystack();

    void initialize();

    bool isEmpty();
    bool isFull();

    void push(int);
    int pop();
};

mystack::mystack()
{
}

mystack::~mystack()
{
}

void mystack::initialize() {
    top = 0;
}

bool mystack::isEmpty() {
    return top == 0;
}

bool mystack::isFull() {
    return top >= MAX - 1;
}

void mystack::push(int val) {
    if (isFull()) {
        throw "Overflow";
    } else {
        top++;
        a[top] = val;
    }
}

int mystack::pop() {
    if (isEmpty()) {
        throw "Underflow";
    } else {
        top--;
        return a[top + 1];
    }
}

class myqueue
{
    private:
    int a[MAX];
    int head, tail;

    public:
    myqueue();
    ~myqueue();

    void initialize();

    bool isEmpty();
    bool isFull();

    void enqueue(int);
    int dequeue();
};

myqueue::myqueue()
{
}

myqueue::~myqueue()
{
}

void myqueue::initialize() {
    head = tail = 0;
}

bool myqueue::isEmpty() {
    return head == tail;
}

bool myqueue::isFull() {
    return head == (tail + 1) % MAX;
}

void myqueue::enqueue(int val) {
    if (isFull()) {
        throw "Overflow";
    } else {
        a[tail] = val;
        tail = (tail + 1) % MAX;
    }
}

int myqueue::dequeue() {
    if (isEmpty()) {
        throw "Underflow";
    } else {
        head = (head + 1) % MAX;
        return a[head - 1];
    }
}


int main(int argc, char const *argv[])
{
    mystack st;
    myqueue qe;

    // st.push(1);
    // st.push(2);
    qe.initialize();
    qe.enqueue(1);
    qe.enqueue(2);
    qe.enqueue(3);
    qe.enqueue(4);

    try{
        cout << qe.dequeue() << endl;
        cout << qe.dequeue() << endl;
        cout << qe.dequeue() << endl;
        cout << qe.dequeue() << endl;
        cout << qe.dequeue() << endl;
    }
    catch (...)
    {
        cout << "Exception" << endl;;
    }
    return 0;
}
