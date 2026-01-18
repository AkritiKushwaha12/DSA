// min stack
#include <iostream>
#include <stack>
using namespace std;

class MinStack {
private:
    stack<long long> st;
    long long minVal;

public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            minVal = val;
        } else if (val >= minVal) {
            st.push(val);
        } else {
            st.push(2LL * val - minVal); // encode
            minVal = val;
        }
    }

    void pop() {
        if (st.top() < minVal) {
            minVal = 2 * minVal - st.top(); // restore old min
        }
        st.pop();
    }

    int top() {
        if (st.top() >= minVal)
            return st.top();
        else
            return minVal;
    }

    int getMin() {
        return minVal;
    }
};

int main() {
    MinStack* obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    cout << obj->getMin() << endl; // return -3
    obj->pop();
    cout << obj->top() << endl;    // return 0
    cout << obj->getMin() << endl; // return -2
    return 0;
}