#include<iostream>
#include"stdio.h"
class A{
	public:
              A(int input):a(input){};
	      ~A(){};
              void print_a(){
		      printf("A.a = %d",a);
	      }
	private:
	      int a;

};

class B{
	public:
	      B(int input):a(input){};
	      B(A input_a):a(input_a){};
	      ~B(){};
	      void print_B(){
	              a.print_a();
	      }

	private:
              A a;
};

int main(){
        A test_a(1);
	B test_b(2);
	B test_A(test_a);
        B b = test_A;

	test_a.print_a();
	test_b.print_B();
	test_A.print_B();
}
