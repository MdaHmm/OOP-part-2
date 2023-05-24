#include <iostream>
#include <string>
#include <vector>

// UTF-8

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
		std::cout << std::endl << std::endl;
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

class Client {
private:
	std::string _name;
	int _age;
	double _bill;
public:
	Client(std::string name, int age, double bill){
		_name = name;
		_age = age;
		_bill = bill;
	}

	void ShowData() {
		std::cout << "Имя клиента: " << _name << std::endl;
		std::cout << "Возраст клиента: " << _age << std::endl;
		std::cout << "Состояние счета клиента: " << _bill << std::endl;
	}
};

class Bank {
private:
	std::vector <Client*>_clients;
public:

	void AddClient(Client* client) {
		_clients.push_back(client);
	}

	void ShowClients() {
		// громоздкий вариант
		/*std::vector<Client*>::iterator it;
		for (it = _clients.begin(); it != _clients.end(); ++it)
			(*it)->ShowData();*/

		//Быстрый вариант. Используется с "диапазонными" данными
		for(const auto & it : _clients)
			it->ShowData();
	}

	void ShowClient(int index) {
		if (index > _clients.size())
			return;
		_clients.at(index - 1)->ShowData();
	}
};


int main() {
	setlocale(LC_ALL, "Russian");
	// Задачка 1
	/*
	Person P1;
	P1.SetName("Санёк");
	P1.SetAge(14);
	P1.PrintAll();

	Pupil Pu1("Искандер", 14);
	Pu1.SetMarks(5, 4, 3);
	Pu1.PrintAll();

	Professor Pr1("Александр", "Доктор наук");
	Pr1.PrintAll();
	*/
	
	// Задачка 2
	
	//Bank bankx;
	//bankx.AddClient();

	Bank* bank = new Bank();
	Client* client1 = new Client("Александр", 14, 15000);
	Client* client2 = new Client("Санек", 18, 1123);
	Client* client3 = new Client("Шурик", 25, 100);
	Client* client4 = new Client("Искандер", 43, 5000);
	Client* client5 = new Client("Александр Македонский", 726, 4500);
	Client* client6 = new Client("Санчо Пансо", 100, 25);
	
	bank->AddClient(client1);
	bank->AddClient(client2);
	bank->AddClient(client3);
	bank->AddClient(client4);
	bank->AddClient(client5);
	bank->AddClient(client6);

	bank->ShowClients();
	bank->ShowClient(2);





	return 0;
}