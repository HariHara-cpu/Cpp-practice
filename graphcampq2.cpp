#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

typedef pair<int, int> pii;

int main() {
    int N, M;
    cin >> N >> M;

    string comm;
    cin >> comm;

    vector<pii> leav(N);
    map<int, set<int>> x_to_y, y_to_x; // Group coordinates by x and y for fast lookups

    for (int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;
        leav[i] = {x, y};
        x_to_y[x].insert(y);
        y_to_x[y].insert(x);
    }

    // Freddy starts at the first leaf
    pii currpos = leav[0];
    x_to_y[currpos.first].erase(currpos.second);
    y_to_x[currpos.second].erase(currpos.first);

    for (char command : comm) {
        int x = currpos.first;
        int y = currpos.second;
        pii nextpos = {-1, -1};

        if (command == 'A') {
            // Direction A (x + Z, y + Z)
            auto it_x = x_to_y.lower_bound(x + 1);
            while (it_x != x_to_y.end()) {
                int next_x = it_x->first;
                int next_y = y + (next_x - x);
                if (x_to_y[next_x].count(next_y)) {
                    nextpos = {next_x, next_y};
                    break;
                }
                ++it_x;
            }
        } else if (command == 'B') {
            // Direction B (x + Z, y - Z)
            auto it_x = x_to_y.lower_bound(x + 1);
            while (it_x != x_to_y.end()) {
                int next_x = it_x->first;
                int next_y = y - (next_x - x);
                if (x_to_y[next_x].count(next_y)) {
                    nextpos = {next_x, next_y};
                    break;
                }
                ++it_x;
            }
        } else if (command == 'C') {
            // Direction C (x - Z, y + Z)
            auto it_x = x_to_y.lower_bound(x);
            while (it_x != x_to_y.begin()) {
                --it_x;
                int next_x = it_x->first;
                int next_y = y + (x - next_x);
                if (x_to_y[next_x].count(next_y)) {
                    nextpos = {next_x, next_y};
                    break;
                }
            }
        } else if (command == 'D') {
            // Direction D (x - Z, y - Z)
            auto it_x = x_to_y.lower_bound(x);
            while (it_x != x_to_y.begin()) {
                --it_x;
                int next_x = it_x->first;
                int next_y = y - (x - next_x);
                if (x_to_y[next_x].count(next_y)) {
                    nextpos = {next_x, next_y};
                    break;
                }
            }
        }

        if (nextpos.first != -1) {
            // Move to the next position
            currpos = nextpos;
            x_to_y[currpos.first].erase(currpos.second);
            y_to_x[currpos.second].erase(currpos.first);
        }
    }

    cout << currpos.first << " " << currpos.second << endl;
    return 0;
}
