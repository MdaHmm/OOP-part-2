#include <iostream>
#include <string>
#include <vector>

class Person {
private: 

	std::string _name;
	int _age;

public:

	/*Person(std::string name, int age) {
		_name = name;
		_age = age;
	}*/

	void SetName(std::string name) {
		_name = name;
	}
	void SetAge(int age) {
		_age = age;
	}

	void PrintAll() {
		std::cout << _name << '\n';
		std::cout << _age << '\n';
		std::cout << std::endl;
	}
};

class Pupil {
private:

	std::string _name;
	int _age;
	std::vector <unsigned int> _marks;

public:

	Pupil(std::string name, int age) {
		_name = name;
		_age = age;
	}

	void SetName(std::string name) {
		_name = name;
	}
	void SetAge(int age) {
		_age = age;
	}

	void PrintAll() {
		std::cout << _name << '\n';
		std::cout << _age << '\n';
		for (int i{}; i < _marks.size(); i++)
			std::cout << _marks[i] << " ";
		std::cout << std::endl << std::endl;;
	}

	void SetMarks(unsigned int a, unsigned int b, unsigned int c) {
		 _marks = { a , b, c };
	}
};

class Professor {
private:

	std::string _name;
	std::string _degree;

public:

	Professor(std::string name, std::string degree) {
		_name = name;
		_degree = degree;
	}

	void SetName(std::string name) {
		_name = name;
	}
	void SetDegree(int degree) {
		_degree = degree;
	}

	void PrintAll() {
		std::cout << _name << '\n';
		std::cout << _degree << '\n';
		std::cout << std::endl << std::endl;
	}
};



int main() {
	setlocale(LC_ALL, "Russian");

	Person P1;
	P1.SetName("Санёк");
	P1.SetAge(14);
	P1.PrintAll();

	Pupil Pu1("Искандер", 14);
	Pu1.SetMarks(5, 4, 3);
	Pu1.PrintAll();

	Professor Pr1("Александр Тиунов хакер-голова-академик и просто хороший человек", "Доктор С++-ных наук");
	Pr1.PrintAll();

	






	return 0;
}