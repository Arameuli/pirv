#include <iostream>
#include<vector>
#include"Rectangle.h"
#include<algorithm>
#include<fstream>
using namespace std;
istream& operator >>(istream& in, Rectangle& f) {
    in >> f.side1 >> f.side2; 
    return in;
}
ostream& operator <<(ostream& out, Rectangle& f) {
    out << f.side1 << "  " << f.side2;
    return out;
}
int main()
{
    ifstream fin("data.txt");
    vector<Rectangle> s(5);
    for (int i = 0; i < 5; i++) {
        fin >> s[i];
        cout << s[i].fart();
    }

}

