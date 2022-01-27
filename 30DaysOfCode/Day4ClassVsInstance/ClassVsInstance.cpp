#include <iostream>
using namespace std;

class Person
{
public:
	int age;
	Person(int initialAge);
	void amIOld();
	void yearPasses();
};

Person::Person(int initialAge)
{
	//Add some more code to run some checks on initialAge
	if (initialAge == NULL || initialAge < 0)
	{
		age = 0;
		cout << "Age is not valid, setting age to 0\n";
	}
	else
	{
		age = initialAge;
	}
}

void Person::amIOld()
{
	//Do some computations in here and print out the correct statement on the console
	if (age < 13)
	{
		cout << "You are young.\n";
	}
	else if (age > 13 && age < 18)
	{
		cout << "You are a teeneger.\n";
	}
	else
	{
		cout << "You are old.\n";
	}
}

void Person::yearPasses()
{
	//Increment the age of the person in here
	age += 1;
}


int main()
{
	int t; //test cases
	int age;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> age;
		Person p(age);
		p.amIOld();
		for (int j = 0; j < t; j++)
		{
			p.yearPasses();
		}
		p.amIOld();
		cout << '\n';
	}

	return 0;
}
