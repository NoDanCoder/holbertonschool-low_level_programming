#!/usr/bin/python3
""" get the perimeter of the island described in grid """


def island_perimeter(grid):
    """ Get perimeter of a island inside a matrix """
    total = 0
    for y in range(len(grid)):
        for x in range(len(grid[y])):
            if grid[y][x]:
                total += indexExist(grid, x-1, y)
                total += indexExist(grid, x+1, y)
                total += indexExist(grid, x, y-1)
                total += indexExist(grid, x, y+1)
    return total


def indexExist(grid, x, y):
    """ check if the position is valid """
    try:
        if x < 0 or y < 0:
            return 1
        return not grid[y][x]
    except IndexError:
        return 1
