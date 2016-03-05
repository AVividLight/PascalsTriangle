#include "terminalinputoutput.h"

using namespace std;


int stringToInt (string inputString)
{

    int convertedInt = -1;

    if (!(istringstream(inputString) >> convertedInt))
    {

        cout << endl << "Unable to convert " << inputString << " to integer" << endl;
		convertedInt = -1;
    }

    return convertedInt;
}

/*
	NOTES

		Triangle max width and max height are both input size
		Row n's width is n
		The value (all numbers added together) of any row, n, is 2^n
		Leading space is size - index.y
*/


int findRowLength (int currentSize, Int2D index)
{

	return (currentSize + (index.y - index.x));
}


void CreatePascalsTriangle (int maxHeight, vector<int> &pascalsTriangle)
{

	Int2D index(0,0);
	while (index.y < maxHeight)
	{

		index.x = 0;
		while (index.x <= index.y)
		{

			if (index.x == 0 && index.y == 0)
			{

				pascalsTriangle.push_back(1);
				index.x += 1;
				continue;
			}

			int up = (pascalsTriangle.size() - index.y);
			int upLeft = (up - 1);
			int newValue = 0;

			if (index.x == 0)
			{

				upLeft = 0;
			}

			if (index.x == index.y)
			{

				up = 0;
			}

			if (up == 0 || upLeft == 0)
			{

				newValue = (up == 0) ? pascalsTriangle.at(upLeft) : pascalsTriangle.at(up);
			} else {

				newValue = pascalsTriangle.at(up) + pascalsTriangle.at(upLeft);
			}

			pascalsTriangle.push_back(newValue);
			index.x += 1;
		}

		index.y += 1;
	}
}


string createPadding (int currentIndex)
{

	string padding = "";



	return padding;
}


TerminalInputOutput::TerminalInputOutput()
{

	string inputTriangleSize = "";
	int triangleSize = 0;

	while (true)
	{

		cout << "Designate triangle size: ";
		cin >> inputTriangleSize;

		triangleSize = stringToInt(inputTriangleSize);
		if (triangleSize > 0)
		{

			break;
		}

		cout << "'" << inputTriangleSize << "' is not a valid interger, please try again." << endl << endl;
	}

	vector<int> pascalsTriangle;
	CreatePascalsTriangle (triangleSize, pascalsTriangle);

	int newLineIndex = 0;
	int newLineMax = 1;
	for (int i : pascalsTriangle)
	{

		cout << i << " ";

		newLineIndex += 1;
		if (newLineIndex >= newLineMax)
		{

			cout << endl;
			newLineIndex = 0;
			newLineMax += 1;
		}
	}

	cout << endl;
}
