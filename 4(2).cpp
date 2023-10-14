#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"\n class A constructor";
		}
		~A()
		{
			cout<<"\n class A destructor";
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"\n class B constructor";
		}
		~B()
		{
			cout<<"\n class B destructor";
		}
};
class C:public B
{
	public:
		C()
		{
			cout<<"\n class C constructor";
		}
		~C()
		{
			cout<<"\n class C destructor";
		}
};
int main()
{
	C c;
}

