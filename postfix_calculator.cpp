#include "postfix_calculator.hpp"


bool is_operator(char c){ return (c =='+' || c == '-' || c == '*' || c =='/'); }


int operar(char op, int a, int b)
{
	int res = 0;

	switch(op)
	{
		case '+': res = a + b; break;
		case '-': res = a -b; break;
		case '*': res = a* b; break;
		case '/': res = (b!=0)? a/b: 0  ; break;
	}


	return res;
}


int postfix_calculator(const char * cad, Lista<int> ops)
{

	std::size_t i = 0;
	bool ready = false;
	Pila<int> p;
	int a = 0, b = 0;
	char op;



	while(cad[i]!='\0')
	{


		while(!is_operator(cad[i]))
		{
			p.push(ops.elemento(ops.primera())); ops.eliminar(ops.primera());
			i++;
		}

		
			op = cad[i];
			b = p.tope(); p.pop();
			a = p.tope(); p.pop();
			p.push(operar(op,a,b));
			i++;
		



	}

return p.tope();



}

