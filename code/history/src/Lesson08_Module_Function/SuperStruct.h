
#pragma  once

#include "StructEquationParameter.h"
#include "StructEquationSolution.h"

class StructEquationSolveBase
{
public:
	virtual void	solveEquation() = 0;
}

class StructEquationSolve : public StructEquationSolveBase
{
public:
	void	solveEquation();

private:
	StructEquationParameter parameterIn;
	StructEquationSolution	resultOut;


	void	inputParameter();

	bool	validateParameter();

	void	outputResult();
};

