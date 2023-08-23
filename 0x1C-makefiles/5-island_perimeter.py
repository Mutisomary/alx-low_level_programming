#!/usr/bin/python3
"""Find perimeter"""


def island_perimeter(grid):
    """Find the perimeter of an island"""
    length_row = len(grid)
    length_column = len(grid[0])
    perimeter = 0
    connections = 0

    for i in range(0, length_row):
        for j in range(0, length_column):
            if grid[i][j] == 1:
                perimeter += 4

                if i != 0 and grid[i - 1][j] == 1:
                    connections += 1

                if j != 0 and grid[i][j - 1] == 1:
                    connections += 1
    return perimeter - (connections * 2)
