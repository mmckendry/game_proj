#include "includers.h"

using namespace std;
//The map elements
char ball = '*';//Your golf ball
char hole = '#';
char O_O_B = 'H';//Out of bounds area (should surround area)
char diagWallF = '/';
char diagWallB = '\\';//The backslash is an escape character, so it needs to be escaped
char vertWall = '|';//It is a double to distinguish it from the direction selector
char horizWall = '_';
//end of map elements

#ifndef worldObject
#define worldObject
class worldOb
{
public:
	worldOb();
	worldOb(string name, char represBy, int x_pos, int y_pos);
	void print();
	void save(ofstream& outFile);
	void load(ifstream& inFile);
private:
	string mName;
	char mrepresBy;
	int mx_pos;
	int my_pos;
};
#endif