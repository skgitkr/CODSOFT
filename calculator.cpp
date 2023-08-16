#include<iostream> //simple Calculator
using namespace std;
int main()
{
	char op;
	int n1,n2;
	cout<<"Enter any two numbers:"<<endl;
	cin>>n1>>n2;
	cout<<"Enter an operator: '+','-','*','%','/',"<<endl;
	cin>>op;
	switch(op)
	{
		case'+':
			cout<<n1<<"+"<<n2<<"="<<n1+n2; break;
		case'-':
			cout<<n1<<"-"<<n2<<"="<<n1-n2;break;
		case'*':
			cout<<n1<<"*"<<n2<<"="<<n1*n2;break;
		case'%':
			cout<<n1<<"%"<<n2<<"="<<n1%n2;break;
		case'/':
			cout<<n1<<""<<n2<<"="<<n1/n2;break;		
		default:
			cout<<"You have entered rong operator!";break;							
	}
	return 0;
}
