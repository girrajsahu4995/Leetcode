#include "test_util.h"

#include "../../1260-shift-2d-grid/1260-shift-2d-grid.cpp"

int main() {
    Solution s;

    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    expect_eq("shift by 1", s.shiftGrid(grid, 1),
              vector<vector<int>>{{9, 1, 2}, {3, 4, 5}, {6, 7, 8}});

    grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    expect_eq("shift by 0 is identity", s.shiftGrid(grid, 0),
              vector<vector<int>>{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});

    grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    expect_eq("shift by grid size is identity", s.shiftGrid(grid, 9),
              vector<vector<int>>{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});

    grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    expect_eq("shift wraps around", s.shiftGrid(grid, 10),
              vector<vector<int>>{{9, 1, 2}, {3, 4, 5}, {6, 7, 8}});

    grid = {{1}, {2}, {3}};
    expect_eq("single column", s.shiftGrid(grid, 1),
              vector<vector<int>>{{3}, {1}, {2}});

    grid = {{1, 2, 3, 4}};
    expect_eq("single row", s.shiftGrid(grid, 2),
              vector<vector<int>>{{3, 4, 1, 2}});

    return report("1260-shift-2d-grid");
}
