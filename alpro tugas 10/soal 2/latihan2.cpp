#include <iostream>

using namespace std;

struct sepeda{
    string merk;
    string type;

};
struct sepeda  mySepeda;

int main()
{
    mySepeda.merk = "Polygon";
    mySepeda.type = "Ontel";

    cout << mySepeda.merk << endl;
    cout << mySepeda.type << endl;

return 0;
}
