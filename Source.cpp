#include <iostream>
using namespace std;
class Defender{
protected:
	int attackPower;
	int health;
public:
	void setAttackPower(int a) {
		attackPower = a;
	}
	void setHealth(int b) {
		health = b;
	}
};
class Sniper : public Defender {
public:
	void attack() {
		cout << "Sniper! - " << attackPower << endl;
	}
	void healt() {
		cout << "SniperH! - " << health << endl;
	}
};
class Superman : public Defender {
public:
	void attack() {
		cout << "Superman! - " << attackPower << endl;
	}
	void healt() {
		cout << "SupermanH! - " << health << endl;
	}
};

class Enemy {
protected:
	int attackPower;
	int health;
public:
	void setAttackPower(int a) {
		attackPower = a;
	}
	void setHealth(int b) {
		health = b;
	}
};
class Ninja : public Enemy {
public:
	void attack() {
		cout << "Ninja! - " << attackPower << endl;
	}
	void healt() {
		cout << "NinjaH! - " << health << endl;
	}
};
class Monster : public Enemy {
public:
	void attack() {
		cout << "Monster! - " << attackPower << endl << endl;
	}
	void healt() {
		cout << "MonsterH! - " << health << endl;
	}
};

class Okok : public Enemy {
public:
	void attack() {
		cout << "Okok! - " << attackPower << endl << endl;
	}
	void healt() {
		cout << "OkokH! - " << health << endl;
	}
};


int main() {
	Sniper  s1;
	Superman s;
	Defender* e1 = &s1;
	Defender* e2 = &s;
	Ninja  n;
	Monster m;
	Enemy* e3 = &n;
	Enemy* e4 = &m;
	Okok a;
	e1->setAttackPower(20);
	e1->setHealth(50);
	e2->setAttackPower(80);
	e2->setHealth(20);

	e3->setAttackPower(60);
	e3->setHealth(100);
	e4->setAttackPower(1);
	e4->setHealth(1000);

	s1.attack();
	s.attack();
	n.attack();
	m.attack();
	s1.healt();
	s.healt();
	n.healt();
	m.healt();
	a.setHealth();
}