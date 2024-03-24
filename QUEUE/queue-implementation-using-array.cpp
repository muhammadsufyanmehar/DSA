class Queue
{
    int *arr;
    int size;
    int qfront;
    int back;

public:
    Queue()
    {
        size = 10000;
        arr = new int[size];
        qfront = -1;
        back = -1;
    }

    bool isEmpty()
    {
        if (qfront == -1 || qfront > back)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void enqueue(int data)
    {
        if (back == size-1)
        {
            cout << "queue is full." << endl;
        }
        else
        {
            if (qfront == -1)
            {
                qfront++;
            }

            back++;
            arr[back] = data;
        }
    }

    int dequeue()
    {
        if (qfront == -1 || back>qfront)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront > back)
            {
                qfront = -1;
                back = -1;
            }
            return ans;
        }
    }

    int front()
    {
        if (qfront == -1 || qfront > back)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};