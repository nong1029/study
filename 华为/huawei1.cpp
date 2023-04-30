#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int num;
    in >> num;
    
    vector<vector<int>> tasks;
    for (int i = 0; i < num; i++) {
        int start, end;
        in >> start >> end;
        tasks.push_back({start, end});
    }

    sort(tasks.begin(), tasks.end());
    
    // map<int, int> times;
    // for (const auto& task : tasks) {
    //     for (int i = task.first; i <= task.second; i++) {
    //         times[i]++;
    //     }
    // }
    vector<int>times;
    for (int i = task.first; i <= task.second; i++) {
            times[i]++;
        }
    int total_energy = 0;
    for (const auto& time : times) {
        if (time.second == 0) {
            total_energy += 1;
        } else if (time.second == 1) {
            total_energy += 3;
        } else {
            total_energy += 4;
        }
    }

    out << total_energy << endl;
    return 0;
}