#include <iostream>
#include <stack>
using namespace std;

void main()
{
	stack<int> int_stack;

	int_stack.push(10);
	int_stack.push(20);
	int_stack.push(30);

	while(!int_stack.empty())
	{
		cout << int_stack.top() << endl;
		int_stack.pop();
	}
}