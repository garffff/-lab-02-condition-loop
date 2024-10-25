#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    pair<int, int> pa, pb;
    cin >> pa.first >> pa.second >> pb.first >> pb.second;
    if (pa.first == pb.first || pa.second == pb.second) cout << "rook threatens" << endl;
    else cout << "rook does not threaten" << endl;
    if (abs(pa.first - pb.first) == abs(pa.second - pb.second)) cout << "bishop threatens" << endl;
    else cout << "bishop does not threaten" << endl;
    if (abs(pa.first - pb.first) < 2 && abs(pa.second - pb.second)) cout << "king can move" << endl;
    else cout << "king cant move" << endl;
    if (pa.first == pb.first || pa.second == pb.second || (abs(pa.first - pb.first) == abs(pa.second - pb.second))) cout << "queen threatens" << endl;
    else cout << "queen does not threaten" << endl;
    if (pa.first == pb.first && (pb.second - pa.second == 1)) cout << "pawn can move" << endl;
    else cout << "pawn cant move" << endl;
    if (abs(pa.first - pb.first) == 1 && (pb.second - pa.second == 1)) cout << "pawn threatens" << endl;
    else cout << "pawn does not threaten" << endl;

    return 0;
}
