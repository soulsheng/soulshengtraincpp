
#include "stdafx.h"
#include "SuperStruct.h"

#include <cmath>


void StructEquationSolve::solveEquation()
{
	inputParameter();

	bool bValid = validateParameter();

	if (bValid)
	{
		float disc = parameterIn.b * parameterIn.b - 4 * parameterIn.a * parameterIn.c;

		float partReal	=	- parameterIn.b/(2*parameterIn.a);
		float partImage	=	sqrt(disc)/(2*parameterIn.a);

		resultOut.x1 = partReal + partImage;
		resultOut.x2 = partReal - partImage;

		outputResult();

	} 
	else
	{
		cout << "No Solutions!";
	}
}


void StructEquationSolve::inputParameter()
{
	cin >> parameterIn.a >> parameterIn.b >> parameterIn.c ;
}


bool StructEquationSolve::validateParameter()
{
	float disc = parameterIn.b * parameterIn.b - 4 * parameterIn.a * parameterIn.c;
	if(disc >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void StructEquationSolve::outputResult()
{
	cout << "\t result.x1 = " << resultOut.x1 
		<< "\t result.x2 = " << resultOut.x2
		<< endl;
}
