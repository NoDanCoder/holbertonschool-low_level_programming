#!/usr/bin/python3

def island_perimeter(grid):
    """ Get perimeter of a island inside a matrix """
    total = 0

    for posY, y in enumerate(grid):
        for posX, x in enumerate(y):
            if x == 1:
                total += get_perimeter(grid, (posX, posY))

    return total

def get_perimeter(grid, pos):
    """ get num of sides that touch the sea """
    x = pos[0]
    y = pos[1]
    add = 0

    if indexExist(grid, (y, x-1)) == 0:
        add += 1
    if indexExist(grid, (y, x+1)) == 0:
        add += 1
    if indexExist(grid, (y-1, x)) == 0:
        add += 1
    if indexExist(grid, (y+1, x)) == 0:
        add += 1

    return add

def indexExist(grid, pos):
    """ check if the position is valid """
    try:
        return grid[pos[0]][pos[1]]
    except:
        return 0
