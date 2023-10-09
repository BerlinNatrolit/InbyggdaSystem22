#include <iostream>

using namespace std;

// Struct, kvarleva från c-tiden. Idag typ samma som klass.
// Bry er inte om denna i c++
struct sPerson {
	int age;
	string name;
};

// Class finns inte i c, då måste ni använda struct.
// Class fungerar precis som i python.
class CPerson {
// Private kommer ni bara åt ifrån sin egna klass.
private:
	string pString = "Haha, denna kommer ingen åt.";

// protected kommer ni åt ifrån egna klassen pluss alla som ärver denna.
protected:
	int age = 0;
	string name = "";
	float weight = 0;

	int privateMethod() {
		cout << "This method is private and not accessible from outside." << endl;
	}

// public kommer ni åt utifrån.
public:
	// default constructor.
	// körs när instansen av klassen skapas.
	CPerson() {
		cout << "we are now running a default constructor" << endl;
	}

	// constructor med tre variabler.
	CPerson(int newAge, string newName, float newWeight) {
		cout << "constructor for CPerson" << endl;
		age = newAge;
		name = newName;
		weight = newWeight;
	}

	// destructor. Körs när klassen tas bort.
	~CPerson() {
		cout << "We are now running the destructor for " << name << "!" << endl;
	}
	
	// Setters
	// används för att inte behöva ha publika variabler i en klass. Kan/Bör även
	// innehålla felhantering
	void setAge(int newAge) {
		
		if (newAge < 0) {
			cout << "Sorry, no negative ages!";
		}
		else if (newAge > 120) {
			cout << "This system does not support wizzards!";
		}
		else {
			age = newAge;
		}
	}

	void setName(string newName) {
		name = newName;
	}

	void setWeight(float newWeight) {
		weight = newWeight;
	}

	// Getters
	// komma åt data ifrån privata/protected variabler utanför klassen.
	int getAge() {
		return age;
	}
	string getName() {
		return name;
	}
	float getWeight() {
		return weight;
	}


	void printPerson() {
		cout << name << " is " << age << " years old" << endl;
	}
};

// En klass för superkrafter
class SuperPower {
protected:
	string superPower = "";
	string uniform = "";
	string sideKick = "";
	string catchphrase = "";

public:
	SuperPower(string superPower, string uniform, string sideKick, string catchphrase) {
		cout << "constructor for SuperPower" << endl;
		SuperPower::superPower = superPower;		// Fungerar, men använd hellre this->
		this->uniform = uniform;
		this->sideKick = sideKick;
		this->catchphrase = catchphrase;

		cout << "We are printing supwerPower that was stored with SuperPower::superPower" << this->superPower;
	}
};

// En klass superhjälte som ärver både CPerson och SuperPower.
// tänk på att ärva public eller protected, annars kommer ni aldrig åt klassen ens härifrån.
class SuperHero : public CPerson, SuperPower {
public:
	// konstruktor. Anropar både CPerson och SuperPowers konstruktorer med argument.
	SuperHero(string name, int age, float weight, string superPower, string uniform, string sideKick, string catchphrase):
		CPerson (age, name, weight), SuperPower(superPower, uniform, sideKick, catchphrase) {
		cout << "constructor for SuperHero" << endl;
	}

};

int main()
{
	// skapa två instans av en struct på två olika sätt.
	sPerson linda = { 25, "Linda" };
	sPerson pontus;
	pontus.age = 132;
	pontus.name = "Pontus";

	cout << "Linda: " << linda.name << ": " << linda.age << endl;
	cout << "Pontus: " << pontus.name << ": " << pontus.age << endl;

	// skapa en CPerson
	CPerson kristian;
	kristian.setAge(39);
	kristian.setName("Kristian");

	// skapa en till CPerson
	CPerson dominiqa;
	dominiqa.setAge(38);
	dominiqa.setName("Dominiqa");

	// ytterligare en, där vi använder konstruktorn med tre argument.
	CPerson erik(50, "Erik", 60.0f);

	dominiqa.printPerson();
	kristian.printPerson();

	// Här skapar vi Anton som superhjälte.
	cout << "\n\nVi skapar Anton" << endl;
	SuperHero anton("Anton", 78, 5786.4f, "Wordpooping", "Pink tights", "Ali", "Nu lär vi oss ännu mer grabbar!");
	
	return 0;
}