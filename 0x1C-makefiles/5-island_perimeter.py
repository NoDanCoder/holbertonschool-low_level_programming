#!/usr/bin/python3

def island_perimeter(grid):
    """ Get perimeter of a island inside a matrix """
    total = 0

    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x]:
                if indexExist(grid, x-1, y) == 0:
                    total += 1
                if indexExist(grid, x+1, y) == 0:
                    total += 1
                if indexExist(grid, x, y-1) == 0:
                    total += 1
                if indexExist(grid, x, y+1) == 0:
                    total += 1

    return total

def indexExist(grid, x, y):
    """ check if the position is valid """
    try:
        if x < 0 or y < 0:
            return 0
        return grid[y][x]
    except IndexError:
        return 0
