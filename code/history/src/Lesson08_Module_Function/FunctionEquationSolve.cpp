// FunMySqrt.c : 函数mySqrt的实现
//

#include "stdafx.h"

#include "FunctionEquationSolve.h"

#include <cmath>


void	showPromptMessage(string message)
{
	cout << message;

	message += "string += operation";
}

void	inputParameter(StructEquationParameter& paramOut)
{
	cin >> paramOut.a >> paramOut.b >> paramOut.c ;
}

bool	validateParameter(StructEquationParameter& param)
{
	float disc = param.b * param.b - 4 * param.a * param.c;
	if(disc >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
;
}


void solveEquation( StructEquationParameter& paramIn, StructEquationSolution& resultOut )
{
	inputParameter(paramIn);

	bool bValid = validateParameter(paramIn);

	if (bValid)
	{
		float disc = paramIn.b * paramIn.b - 4 * paramIn.a * paramIn.c;

		float partReal	=	- paramIn.b/(2*paramIn.a);
		float partImage	=	sqrt(disc)/(2*paramIn.a);

		resultOut.x1 = partReal + partImage;
		resultOut.x2 = partReal - partImage;

		outputResult(resultOut);

	} 
	else
	{
		showPromptMessage("No Solutions!");
	}
}

void outputResult( StructEquationSolution& result )
{
	cout << "\t result.x1 = " << result.x1 
		 << "\t result.x2 = " << result.x2
		 << endl;
}
