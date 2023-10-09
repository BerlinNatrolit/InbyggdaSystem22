#include <iostream>

using namespace std;

// Struct, kvarleva fr�n c-tiden. Idag typ samma som klass.
// Bry er inte om denna i c++
struct sPerson {
	int age;
	string name;
};

// Class finns inte i c, d� m�ste ni anv�nda struct.
// Class fungerar precis som i python.
class CPerson {
// Private kommer ni bara �t ifr�n sin egna klass.
private:
	string pString = "Haha, denna kommer ingen �t.";

// protected kommer ni �t ifr�n egna klassen pluss alla som �rver denna.
protected:
	int age = 0;
	string name = "";
	float weight = 0;

	int privateMethod() {
		cout << "This method is private and not accessible from outside." << endl;
	}

// public kommer ni �t utifr�n.
public:
	// default constructor.
	// k�rs n�r instansen av klassen skapas.
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

	// destructor. K�rs n�r klassen tas bort.
	~CPerson() {
		cout << "We are now running the destructor for " << name << "!" << endl;
	}
	
	// Setters
	// anv�nds f�r att inte beh�va ha publika variabler i en klass. Kan/B�r �ven
	// inneh�lla felhantering
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
	// komma �t data ifr�n privata/protected variabler utanf�r klassen.
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

// En klass f�r superkrafter
class SuperPower {
protected:
	string superPower = "";
	string uniform = "";
	string sideKick = "";
	string catchphrase = "";

public:
	SuperPower(string superPower, string uniform, string sideKick, string catchphrase) {
		cout << "constructor for SuperPower" << endl;
		SuperPower::superPower = superPower;		// Fungerar, men anv�nd hellre this->
		this->uniform = uniform;
		this->sideKick = sideKick;
		this->catchphrase = catchphrase;

		cout << "We are printing supwerPower that was stored with SuperPower::superPower" << this->superPower;
	}
};

// En klass superhj�lte som �rver b�de CPerson och SuperPower.
// t�nk p� att �rva public eller protected, annars kommer ni aldrig �t klassen ens h�rifr�n.
class SuperHero : public CPerson, SuperPower {
public:
	// konstruktor. Anropar b�de CPerson och SuperPowers konstruktorer med argument.
	SuperHero(string name, int age, float weight, string superPower, string uniform, string sideKick, string catchphrase):
		CPerson (age, name, weight), SuperPower(superPower, uniform, sideKick, catchphrase) {
		cout << "constructor for SuperHero" << endl;
	}

};

int main()
{
	// skapa tv� instans av en struct p� tv� olika s�tt.
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

	// ytterligare en, d�r vi anv�nder konstruktorn med tre argument.
	CPerson erik(50, "Erik", 60.0f);

	dominiqa.printPerson();
	kristian.printPerson();

	// H�r skapar vi Anton som superhj�lte.
	cout << "\n\nVi skapar Anton" << endl;
	SuperHero anton("Anton", 78, 5786.4f, "Wordpooping", "Pink tights", "Ali", "Nu l�r vi oss �nnu mer grabbar!");
	
	return 0;
}