#include <stack>
using namespace std;

class MyQueue
{
public:
    stack<int> s;
    stack<int> t;
    MyQueue()
    {
    }

    void push(int x)
    {
        s.push(x);
    }

    int pop()
    {
        int result;
        while (!s.empty())
        {
            result = s.top();
            t.push(result);
            s.pop();
        }
        t.pop();
        while (!t.empty())
        {
            s.push(t.top());
            t.pop();
        }
        return result;
    }

    int peek()
    {
        int result;
        while (!s.empty())
        {
            result = s.top();
            t.push(result);
            s.pop();
        }
        while (!t.empty())
        {
            s.push(t.top());
            t.pop();
        }
        return result;
    }

    bool empty()
    {
        return s.empty();
    }
};

// lo hice mientras juego lol jajaj