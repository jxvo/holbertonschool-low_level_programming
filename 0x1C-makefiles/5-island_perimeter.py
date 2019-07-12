#!/usr/bin/python3
"""island perimether function"""

def island_perimeter(grid):
    """returns the perimeter of an island grid from a list of integers"""
    perimeter = 0
    for row in range(len(grid)):
        for idx in range(len(grid[row])):
            if grid[row][idx] == 1:
                """if 1 encountered check all sides for 0"""
                if grid[row - 1][idx] == 0 \
                   or row - 1 < 0:
                    """check top index value"""
                    perimeter += 1
                if grid[row + 1][idx] == 0 \
                   or row + 1 >= len(grid):
                    """check bottom index value"""
                    perimeter += 1
                if grid[row][idx - 1] == 0 \
                   or idx - 1 < 0:
                    """check left index value"""
                    perimeter += 1
                if grid[row][idx + 1] == 0 \
                   or idx + 1 >= len(grid[row]):
                    """check right index value"""
                    perimeter += 1
    return perimeter
