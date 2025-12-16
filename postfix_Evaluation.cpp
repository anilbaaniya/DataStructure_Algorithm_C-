#include <iostream> // This is input and outpt function
#include <stack>    // stack has top pop, push function
#include <string>   // to perform operation related to string
#include <cmath>    // cmath has pow function
using namespace std;

int main()
{
    string postfix;
    cout << "Enter the postfix expression to Evaluate the Result\n";
    cin >> postfix;

    stack<int> st;

    for (int i = 0; i < postfix.length(); i++)
    {
        char ch = postfix[i];
        if (isdigit(ch))
        {
            st.push(ch - '0');
        }
        else
        {
            int operand1 = st.top();
            st.pop();

            int operand2 = st.top();
            st.pop();

            int result;

            switch (ch)
            {

            case '+':
                result = operand2 + operand1;
                break;
            case '-':
                result = operand2 - operand1;
                break;
            case '/':
                result = operand2 / operand1;
                break;
            case '*':
                result = operand2 * operand1;
                break;
            case '%':
                result = operand2 % operand1;
                break;
            case '^':
                result = pow(operand2, operand1);
                break;

            default:
                cout << "Invalid operator encountered" << endl;
            }
            st.push(result);
        }
    }

    int finalResult = st.top();
    st.pop();
    cout << "Final Result = " << " " << finalResult;
    return 0;
}