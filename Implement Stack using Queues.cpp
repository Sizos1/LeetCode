#include <queue>
using namespace std;
class MyStack
{
public:
    queue<int> q;
    MyStack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        for (int i = 0; i < q.size() - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        int val = q.front();
        q.pop();
        return val;
    }

    int top()
    {
        return q.back();
    }

    bool empty()
    {
        if (q.empty())
            return true;
        return false;
    }
};

int main()
{
    MyStack stack;
    stack.push(1);
    stack.push(2);
    int pop = stack.pop();
    int val = stack.top();
    return 1;
}