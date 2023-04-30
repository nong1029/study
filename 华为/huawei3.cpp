#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> find_drain_points(const vector<int>& depths) {
    vector<int> drain_points;
    int n = depths.size();

    for (int i = 0; i < n; i++) {
        if ((i == 0 || depths[i - 1] < depths[i]) && (i == n - 1 || depths[i + 1] < depths[i])) {
            drain_points.push_back(i);
        }
    }

    return drain_points;
}

vector<int> calculate_drain_volumes(const vector<int>& depths) {
    vector<int> drain_volumes;
    vector<int> drain_points = find_drain_points(depths);

    for (int i = 0; i < depths.size(); i++) {
        int left_drain = -1;
        int right_drain = -1;

        for (int j = 0; j < drain_points.size(); j++) {
            if (drain_points[j] < i) {
                left_drain = drain_points[j];
            } else if (drain_points[j] > i) {
                right_drain = drain_points[j];
                break;
            }
        }

        if (left_drain == -1) {
            drain_volumes[right_drain] += depths[i];
        } else if (right_drain == -1) {
            drain_volumes[left_drain] += depths[i];
        } else {
            if (depths[left_drain] > depths[right_drain]) {
                drain_volumes[left_drain] += depths[i];
            } else {
                drain_volumes[right_drain] += depths[i];
            }
        }
    }

    return drain_volumes;
}

int main() {
    string input;
    getline(cin, input);
    istringstream iss(input);

    vector<int> depths;
    int depth;

    while (iss >> depth) {
        depths.push_back(depth);
    }

    vector<int> drain_volumes(depths.size(), 0);
    drain_volumes = calculate_drain_volumes(depths);

    vector<int> drain_points = find_drain_points(depths);
    for (int i = 0; i < drain_points.size(); i++) {
        cout << drain_volumes[drain_points[i]] << (i == drain_points.size() - 1 ? "\n" : " ");
    }

    return 0;
}