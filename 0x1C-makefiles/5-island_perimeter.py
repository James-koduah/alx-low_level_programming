#!/usr/bin/python3

'''Calculate Island perimeter from a grid'''


def island_perimeter(grid):
    '''Calculate island perimeter
        The grid represents the island where each
        1 represents a square of land
        0 represents a square of water
        There is no water in between the land Just single land mass
        Each square of land is connected which means to calculate the perimeter
        We don't have to calculate the connected parts
    '''
    height_of_grid = len(grid)
    width_of_grid = len(grid[0])
    perimeter_of_cells = 0

    for i in range(0, height_of_grid):
        line = grid[i]
        if 1 in line:
            for x in range(0, len(line)):
                if line[x] == 1:
                    perimeter_of_cells += 4 #We start by including all sides
                    if x != (width_of_grid - 1) and line[x+1] == 1:
                        perimeter_of_cells -= 1 #If the right is land, exclude
                    if x != 0 and line[x-1] == 1:
                        perimeter_of_cells -= 1 #if the left is land, exclude
                    if i != 0 and grid[i-1][x] == 1:
                        perimeter_of_cells -= 1 #if the top is land, exclude
                    if i != (height_of_grid - 1) and grid[i+1][x] == 1:
                        perimeter_of_cells -= 1 #if the bottom is land, exclude

    return perimeter_of_cells
