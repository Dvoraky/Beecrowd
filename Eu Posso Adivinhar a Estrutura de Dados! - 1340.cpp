#include <bits/stdc++.h>

using namespace std;

int main()
{

    int N, x, y;
    bool Queue, Stack, PQueue;

    while((scanf("%d", &N)) == 1)
    {
        queue <int> Q;
        stack <int> S;
        priority_queue <int> PQ;
        Queue = Stack = PQueue = true;
        for(int i = 0; i < N; i++)
        {
            cin >> x >> y;
            if(x == 1)
            {
                if(Queue) Q.push(y);
                if(Stack) S.push(y);
                if(PQueue) PQ.push(y);
            }
            else
            {
                if(Q.front() != y)
                {
                    Queue = false;
                }
                if(Queue) Q.pop();

                if(S.top() != y)
                {
                    Stack = false;
                }
                if(Stack) S.pop();

                if(PQ.top() != y)
                {
                    PQueue = false;
                }
                if(PQueue) PQ.pop();
            }
        }
        //cout << "Queue: " << Queue << "\nStack: " << Stack << "\nPQueue: " << PQueue << endl;
        if((Queue && Stack) || (Queue && PQueue) || (Stack && PQueue))
        {
            cout << "not sure" << endl;
        }
        else if(Queue && !(Stack && PQueue))
        {
            cout << "queue" << endl;
        }
        else if(Stack && !(Queue && PQueue))
        {
            cout << "stack" << endl;
        }
        else if(PQueue && !(Stack && Queue))
        {
            cout << "priority queue" << endl;
        }
        else
        {
            cout << "impossible" << endl;
        }


    }
    return 0;
}