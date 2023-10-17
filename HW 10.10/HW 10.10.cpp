#include <iostream>
using namespace std;

int task1(int number)
{
	if (number == 0)
	{
		return 0;
	}
	else
	{
		int x = number % 10;
		cout << x << " ";
		number /= 10;
		task1(number);
		return number;
	}
}

int task2(int number, int degree)
{
	if (degree == 0)
	{
		return 1;
	}
	else
	{
		return number * task2(number, degree - 1);
	}
}

int task3(int start, int end)
{
	if (end >= start)
	{
		static int  sum = 0;
		sum += end;
		task3(start, end - 1);
		return sum;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int number;
	int degree;
	int start;
	int end;
	cin >> number;
	cin >> degree;
	task1(number);
	cout << task2(number, degree);
	cin >> start;
	cin >> end;
	cout << task3(start, end);
}