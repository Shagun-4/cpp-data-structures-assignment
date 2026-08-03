//Stack - Check if stack is empty
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    if(st.empty())
        cout << "Empty";
    else
        cout << "Not Empty";

    return 0;
}
