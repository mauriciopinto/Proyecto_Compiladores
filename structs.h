#include <map>
#include <iterator>
#include "number.h"

using namespace std;

void init_maps(void);

map<string, Z1> z1_map;
map<string, Z2> z2_map;
map<string, Z3> z3_map;
map<string, Z4> z4_map;
map<string, Z5> z5_map;
map<string, Z6> z6_map;
map<string, drei> drei_map;
map<string, zehn> zehn_map;
map<string, zig> zig_map;
map<string, ssig> ssig_map;
map<string, und> und_map;

map<string, Z1>::iterator z1_it;
map<string, Z2>::iterator z2_it;
map<string, Z3>::iterator z3_it;
map<string, Z4>::iterator z4_it;
map<string, Z5>::iterator z5_it;
map<string, Z6>::iterator z6_it;
map<string, drei>::iterator drei_it;
map<string, zehn>::iterator zehn_it;
map<string, zig>::iterator zig_it;
map<string, ssig>::iterator ssig_it;
map<string, und>::iterator und_it;

void init_maps(void){
        z1_map.insert(pair<string, Z1>("ein", z1_ein));
        z1_map.insert(pair<string, Z1>("zwei",z1_zwei));
        z1_map.insert(pair<string, Z1>("drei", z1_drei));
        z1_map.insert(pair<string, Z1>("vier", z1_vier));
        z1_map.insert(pair<string, Z1>("funf", z1_funf));
        z1_map.insert(pair<string, Z1>("sechs", z1_sechs));
        z1_map.insert(pair<string, Z1>("sieben", z1_sieben));
        z1_map.insert(pair<string, Z1>("acht", z1_acht));
        z1_map.insert(pair<string, Z1>("neun", z1_neun));

        z2_map.insert(pair<string, Z2>("zehn", z2_zehn));
        z2_map.insert(pair<string, Z2>("elf", z2_elf));
        z2_map.insert(pair<string, Z2>("zwolf", z2_zwolf));

        z3_map.insert(pair<string, Z3>("drei", z3_drei));
        z3_map.insert(pair<string, Z3>("vier", z3_vier));
        z3_map.insert(pair<string, Z3>("funf", z3_funf));
        z3_map.insert(pair<string, Z3>("sech", z3_sech));
        z3_map.insert(pair<string, Z3>("sieb", z3_sieb));
        z3_map.insert(pair<string, Z3>("acht", z3_acht));
        z3_map.insert(pair<string, Z3>("neun", z3_neun));

        z4_map.insert(pair<string, Z4>("zwan", z4_zwan));
        z4_map.insert(pair<string, Z4>("vier", z4_vier));
        z4_map.insert(pair<string, Z4>("funf", z4_funf));
        z4_map.insert(pair<string, Z4>("sech", z4_sech));
        z4_map.insert(pair<string, Z4>("sieb", z4_sieb));
        z4_map.insert(pair<string, Z4>("acht", z4_acht));
        z4_map.insert(pair<string, Z4>("neun", z4_neun));

        z5_map.insert(pair<string, Z5>("hundert", hundert));

        z6_map.insert(pair<string, Z6>("tausend", tausend));

        drei_map.insert(pair<string, drei>("drei", v_drei));

        zehn_map.insert(pair<string, zehn>("zehn", v_zehn));

        zig_map.insert(pair<string, zig>("zig", v_zig));

        ssig_map.insert(pair<string, ssig>("ssig", v_ssig));

        und_map.insert(pair<string, und>("und", v_und));
}

