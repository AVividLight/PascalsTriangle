#ifndef TERMINALINPUTOUTPUT_H
#define TERMINALINPUTOUTPUT_H

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>


struct Int2D
{

	int x, y;

	Int2D ()
	{

		x = 0;
		y = 0;
	}

	Int2D (int xParam, int yParam)
	{

		x = xParam;
		y = yParam;
	}

	std::string toString()
	{

		std::string formattedInt2DAsString = ("<" + std::to_string(x) + ", " + std::to_string(y) + ">");

		return formattedInt2DAsString;
	}
};


class TerminalInputOutput
{

public:
	TerminalInputOutput();
};

#endif // TERMINALINPUTOUTPUT_H
