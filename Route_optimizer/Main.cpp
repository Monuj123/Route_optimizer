#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>
#include <stack>

#include "FileOperations.h"
#include "Route.h"
#include "GraphFunctions.h"

using namespace std;

int main(int argc, char *argv[])
{

	string citiesFilename;
	string routesFilename;
	string outputFilename;
	string origin;
	string destination;
	string preference;
	bool biPreference;

	cout << "Enter filename containing cities: ";
	cin >> citiesFilename;

	cout << "Enter filename containing routes: ";
	cin >> routesFilename;

	cout << "Enter filename for output (.html): ";
	cin >> outputFilename;

	cout << "Origin: ";
	cin >> origin;

	cout << "Destination: ";
	cin >> destination;

	cout << "Enter a preference (fastest/cheapest): ";
	cin >> preference;

	if (preference.compare("cheapest") == 0)
	{
		biPreference = true;
	}
	else if (preference.compare("fastest") == 0)
	{
		biPreference = false;
	}

	else
	{
		cout << "Invalid entry";
		return 0;
	}

	Graph graph(citiesFilename, routesFilename);

	if (graph.getCity(origin) == NULL || graph.getCity(destination) == NULL)
	{
		cout << "Invalid entry" << endl;
		return 0;
	}

	graph.Dijkstras(origin, biPreference);

	stack<Location *> cityStack = graph.cityStacker(destination);
	stack<Route *> routeStack = graph.routeStacker(destination, biPreference);

	outputGenerator(outputFilename.c_str(), cityStack, routeStack, biPreference);

	return 0;
}
