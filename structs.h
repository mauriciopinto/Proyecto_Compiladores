#include <map>

using namespace std;

void init_map(void);

map<string, int> values;

map<string, int>::iterator it;

void init_map(void){
        values.insert(pair<string, int>("ein", 1));
        values.insert(pair<string, int>("zwei", 2));
        values.insert(pair<string, int>("drei", 3));
        values.insert(pair<string, int>("vier", 4));
        values.insert(pair<string, int>("funf", 5));
        values.insert(pair<string, int>("sechs", 6));
        values.insert(pair<string, int>("sieben", 7));
        values.insert(pair<string, int>("acht", 8));
        values.insert(pair<string, int>("neun", 9));
	values.insert(pair<string, int>("zehn", 10));
        values.insert(pair<string, int>("elf", 11));
        values.insert(pair<string, int>("zolf", 12));
        values.insert(pair<string, int>("sech", 6));
        values.insert(pair<string, int>("sieb", 7));
        values.insert(pair<string, int>("zwan", 2));
        values.insert(pair<string, int>("hundert", 100));
        values.insert(pair<string, int>("tausend", 1000));
        values.insert(pair<string, int>("zig", 10));
        values.insert(pair<string, int>("ssig", 10));
        values.insert(pair<string, int>("und", 0));
};
