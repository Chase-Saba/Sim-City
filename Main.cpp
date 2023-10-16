#include <iostream>
#include <fstream>
#include <string>
#include "operations.h"

using namespace std;

int main()
{
operations map; //connects to "operations" class in operations.h


map.readConfig();

map.readMap();

map.readConfig();

map.printUpdatedMap();

return 0;
}
