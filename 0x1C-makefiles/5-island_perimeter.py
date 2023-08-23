#!/usr/bin/python3


def island_perimeter(grid):
    """"finds the perimeter of a grid"""
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4  # Each land cell contributes 4 sides
                
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract 2 if there's a land cell above
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract 2 if there's a land cell on the left
    
    return perimeter
