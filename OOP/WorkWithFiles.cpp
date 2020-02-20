#include "WorkWithFiles.h"

using namespace std;

void TextOutput(string str)
{
	string line;

	ifstream file(str);
	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
	}
	else
	{
		cout << "Error: cannot open the file";
	}
	file.close();
}