#include "postfix_calculator.hpp"



int main()
{

	char cad[] = "ABCD+-/E*FGH++-";
	Lista<int> ops; ops.insertar(15,ops.fin());
	ops.insertar(7,ops.fin());ops.insertar(1,ops.fin());
	ops.insertar(1,ops.fin());ops.insertar(3,ops.fin());
	ops.insertar(2,ops.fin());ops.insertar(1,ops.fin());
	ops.insertar(1,ops.fin());

	std::cout<<postfix_calculator(cad, ops);
}