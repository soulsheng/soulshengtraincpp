// FunMySqrt.h : º¯ÊýmySqrtµÄÉùÃ÷
//

#pragma  once

#include "StructEquationParameter.h"
#include "StructEquationSolution.h"

void	showPromptMessage(string message);

void	inputParameter(StructEquationParameter& paramOut);

bool	validateParameter(StructEquationParameter& param);


void	outputResult(StructEquationSolution& result);

void	solveEquation(StructEquationParameter& paramIn, 
					  StructEquationSolution& resultOut);


