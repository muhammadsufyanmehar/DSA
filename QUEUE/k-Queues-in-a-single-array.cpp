#include <iostream>
#include <cstring>
using namespace std;

class kQueue
{
    int n;
    int k;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freespot;

public:
    kQueue(int n, int k)
    {
        this->n = n;
        this->k = k;

        arr = new int[n];

        front = new int[k];
        memset(front, -1, k * sizeof(int));

        rear = new int[k];
        memset(rear, -1, k * sizeof(int));

        next = new int[n];
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;

        freespot = 0;
    }

    void enqueue(int data, int qn)
    {

        if (freespot == -1)
        {
            cout << "No free space is present." << endl;
            return;
        }

        int index = freespot;
        freespot = next[index];

        if (front[qn - 1] == -1)
        {
            front[qn - 1] = index;
        }
        else
        {
            next[rear[qn - 1]] = index;
        }

        next[index] = -1;

        rear[qn - 1] = index;

        arr[index] = data;
    }

    int dequeue(int qn)
    {

        if (front[qn - 1] == -1)
        {
            cout << "Queue underflow." << endl;
            return -1;
        }

        int index = front[qn - 1];
        front[qn - 1] = next[index];

        next[index] = freespot;

        freespot = index;

        return arr[index];
    }
};
int main()
{
    kQueue q(5, 2);
    q.enqueue(3, 1);
    q.enqueue(5, 2);
    q.enqueue(4, 1);
    q.enqueue(6, 2);

    cout << "The pop element is " << q.dequeue(1) << endl;
    cout << "The pop element is " << q.dequeue(1) << endl;
    cout << "The pop element is " << q.dequeue(2) << endl;
}