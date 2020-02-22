#!/usr/bin/python3
""" get the perimeter of the island described in grid """


def island_perimeter(grid):
    """ Get perimeter of a island inside a matrix """
    total = 0
    lenX, lenY = len(grid[0]), len(grid)

    for y in range(lenY):
        for x in range(lenX):
            if grid[y][x]:
                total += not x or not grid[y][x-1]
                total += not y or not grid[y-1][x]
                total += x == lenX-1 or not grid[y][x+1]
                total += y == lenY-1 or not grid[y+1][x]

    return total
