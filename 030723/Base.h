#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<windows.h>
#include<array>
#include<list>
#include<map>

class Base
{
public:

	int publicMember;
	Base() {
		std::cout << this << " Base oject created\n";
	}
	Base(int a, int b, int c) :
		publicMember(a), protectedMember(b), privateMember(c) {
		std::cout << this << " Base oject created\n";
	}
	~Base() {
		std::cout << this << " Base oject destroied\n";
	}
protected:

	int protectedMember;

private:

	int privateMember;

};

class Derived1 : public Base {
	//publicMember public
	//protectedMember protected
	//privateMember private(not use)
public:
	Derived1():Base() {
		std::cout << this << " Derived1 oject created\n";
	}
	~Derived1() {
		std::cout << this << " Derived1 oject destroied\n";
	}
};

class Derived2 : protected Base {
	//publicMember protected
	//protectedMember protected
	//privateMember private(not use)
public: 
	int Aa = publicMember;

	Derived2() {
		std::cout << this << " Derived2 oject created\n";
	}
	~Derived2() {
		std::cout << this << " Derived2 oject destroied\n";
	}
};
class Derived3 : private Base {
	//publicMember private
	//protectedMember private
	//privateMember private(not use)
public:
	Derived3() {
		std::cout << this << " Derived3 oject created\n";
	}
	~Derived3() {
		std::cout << this << " Derived3 oject destroied\n";
	}
};

