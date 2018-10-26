#include <stdio.h>

class A {
	private:
		int m_a;

	public:
		A();
		virtual ~A();
		A(int a);
		virtual void printField();
		virtual void abstractMethod() = 0;
};

class B : public A {
	private:
		int m_b;
	public: 
		B();
		virtual ~B();
		B(int b);
		B(const B &copy);
		void printField();
		void abstractMethod();
};
