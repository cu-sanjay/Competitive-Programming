#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int minimumTime(int numCourses, vector<vector<int>>& relations, vector<int>& time) {
    vector<vector<int>> graph(numCourses);
    vector<int> inDegree(numCourses, 0);
    vector<int> earliestCompletion(numCourses, 0);

    for (const vector<int>& relation : relations) {
        int prevCourse = relation[0] - 1;
        int nextCourse = relation[1] - 1;
        graph[prevCourse].push_back(nextCourse);
        inDegree[nextCourse]++;
    }

    queue<int> q;
    for (int i = 0; i < numCourses; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    int minTime = 0;
    while (!q.empty()) {
        int course = q.front();
        q.pop();
        for (int nextCourse : graph[course]) {
            inDegree[nextCourse]--;
            earliestCompletion[nextCourse] = max(earliestCompletion[nextCourse], earliestCompletion[course] + time[course]);
            if (inDegree[nextCourse] == 0) {
                q.push(nextCourse);
            }
        }
        minTime = max(minTime, earliestCompletion[course] + time[course]);
    }

    return minTime;
}

int main() {
    int numCourses;
    cin >> numCourses;
    vector<vector<int>> relations;
    while (true) {
        int u, v;
        cin >> u >> v;
        if (u == -1 && v == -1)
            break;
        relations.push_back({u, v});
    }

    vector<int> time(numCourses);
    for (int i = 0; i < numCourses; i++)
        cin >> time[i];

    cout << minimumTime(numCourses, relations, time) << endl;

    return 0;
}
