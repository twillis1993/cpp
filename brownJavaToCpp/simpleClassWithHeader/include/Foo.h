class Foo {
	public:
		Foo();
		virtual ~Foo();

		int myMethod(int a, int b);

		int getMA() { return m_a; }
		int setMA(int ma) { m_a = ma; }

		void printNumber(int n); 	
		void printNumber(double n);
 
	protected:
		int m_a, m_b;

	private:
		double m_x, m_y;
};
