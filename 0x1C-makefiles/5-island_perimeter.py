#!/usr/bin/python3
"""island perimether function"""


def island_perimeter(grid):
    """returns the perimeter of an island grid from a list of integers"""
    perimeter = 0
    for row in range(len(grid)):
        for idx in range(len(grid[0])):
            if grid[row][idx] == 1:
                """if 1 encountered check all sides for 0"""
                top = row - 1
                bottom = row + 1
                left = idx - 1
                right = idx + 1

                """check top index value"""
                if top < 0:
                    perimeter += 1
                elif grid[row - 1][idx] != 1:
                    perimeter += 1

                """check bottom index value"""
                if bottom >= len(grid):
                    perimeter += 1
                elif grid[row + 1][idx] != 1:
                    perimeter += 1

                """check left index value"""
                if left < 0:
                    perimeter += 1
                elif grid[row][idx - 1] != 1:
                    perimeter += 1

                """check right index value"""
                if right >= len(grid[0]):
                    perimeter += 1
                elif grid[row][idx + 1] != 1:
                    perimegitter += 1
    return perimeter
