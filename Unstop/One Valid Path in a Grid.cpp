#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

struct Cell {
    int cost, row, col;
    Cell(int cost, int row, int col) : cost(cost), row(row), col(col) {}
    bool operator<(const Cell& other) const {
        return cost > other.cost;
    }
};

int minCost(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    priority_queue<Cell> minHeap;
    set<pair<int, int>> visited;

    minHeap.push(Cell(0, 0, 0));

    while (!minHeap.empty()) {
        Cell current = minHeap.top();
        minHeap.pop();

        if (visited.count({current.row, current.col}) > 0) {
            continue;
        }

        visited.insert({current.row, current.col});

        if (current.row == m - 1 && current.col == n - 1) {
            return current.cost;
        }

        for (int i = 0; i < 4; ++i) {
            int newRow = current.row + directions[i].first;
            int newCol = current.col + directions[i].second;

            if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n) {
                int newCost = current.cost + (grid[current.row][current.col] != i + 1);
                minHeap.push(Cell(newCost, newRow, newCol));
            }
        }
    }

    return -1;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
        }
    }
    int result = minCost(grid);
    cout << result << endl;
    return 0;
}
