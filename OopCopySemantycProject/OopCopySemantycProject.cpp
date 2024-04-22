#include <iostream>

class MyClass
{
	int size;
	int temp;

	int* value;

public:
	MyClass() : value{ new int } {};

	MyClass(const MyClass& other)
	{
		this->value = new int;
		this->value = other.value;
	}
	//MyClass(const MyClass& other) = delete;
	

	~MyClass()
	{
		delete value;
	}
};

class Counter
{
	int count{};
public:
	Counter() : count{} {};
	explicit Counter(int count) : count{ count } {};

	int Count() { return count; }
};

void CounterPrint(Counter counter)
{
	std::cout << counter.Count() << "\n";
}


int main()
{
	/*{
		MyClass obj;

		MyClass obj2(obj);
	}*/
	//

	Counter counter(10);
	CounterPrint(counter);

	CounterPrint(Counter(20));
	
	//double y = 10.5;
	//int a{ (int)y };	// explicit conversion
	//int b = 20.7;		// implicit conversion
	//int c = y;			// implicit


}
