#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> targets) {
    int answer = 0;
    int n = targets.size();
    
    vector<pair<int, int>> lines(n);
    
    for (int i = 0; i < n; i++) {
        vector<int> target = targets[i];
        int s = target[0];
        int e = target[1];
        lines[i] = pair<int, int>(e,s);
    }
    
    sort(lines.begin(), lines.end());
    
    int prv = -1;
    
    for (int i = 0; i < n; i++) {
        int s = lines[i].second;
        int e = lines[i].first;
        if (s < prv) {
            continue;
        }
        answer += 1;
        prv = e;
    }
    
    return answer;
}