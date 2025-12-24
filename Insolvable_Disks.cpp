#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    if (n < 2) {
        cout << 0 << "\n";
        return;
    }

    int base_score = 0;
    
    map<int, vector<pair<int, int>>> actives;

    for (int i = 0; i < n - 1; ++i) {
        int d = x[i+1] - x[i];
        int next_base = base_score; 

        for (auto& x : actives) {
            for (auto& p : x.second) {
                if (p.first < d) {
                    next_base = max(next_base, x.first);
                    break; 
                }
            }
        }

        map<int, vector<pair<int, int>>> next_actives;

        if (base_score + 1 > next_base) {
            next_actives[base_score + 1].push_back({0, d});
        }

        for (auto& x : actives) {
            int new_score = x.first + 1;
            if (new_score <= next_base) continue; 

            for (auto& p : x.second) {
                int L = p.first;
                int R = p.second;
                
                int inter_R = min(R, d);
                
                if (L < inter_R) {
                    
                    next_actives[new_score].push_back({d - inter_R, d - L});
                }
            }
        }

        // 3. Pruning and Merging
        auto it = next_actives.begin();
        while (it != next_actives.end()) {
            // Remove states that are not better than the free base state
            if (it->first <= next_base) {
                it = next_actives.erase(it);
                continue;
            }
            
            // Merge intervals for the same score
            auto& list = it->second;
            if (list.empty()) {
                it = next_actives.erase(it);
                continue;
            }
            
            sort(list.begin(), list.end());
            
            vector<pair<int, int>> merged;
            merged.push_back(list[0]);
            
            for (size_t k = 1; k < list.size(); ++k) {
                if (merged.back().second >= list[k].first) {
                    merged.back().second = max(merged.back().second, list[k].second);
                } else {
                    merged.push_back(list[k]);
                }
            }
            it->second = merged;
            ++it;
        }

        base_score = next_base;
        actives = next_actives;
    }

    int ans = base_score;
    if (!actives.empty()) {
        ans = max(ans, actives.rbegin()->first);
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}