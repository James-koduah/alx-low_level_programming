#!/usr/bin/python3

'''Calculate Island perimeter from a grid'''


def island_perimeter(grid):
    '''island_perimeter'''
    island_start = False
    end_position = []
    start_position = []

    for i in range(0, len(grid)):
        line = grid[i]

        '''Calculate the starting point of the island on the x and y axis'''
        if island_start == False and 1 in line:
            for x in range(0, len(line)):
                if line[x] == 1:
                    start_position.append(i+1)
                    start_position.append(x+1)
                    island_start = True

        '''Calculate the ending point of the island on the x and y axis'''
        if island_start == True and 1 not in line:
            line = grid[i - 1] # Move back to the previous line
            for x in range(len(line) - 1, 0, -1): # traverse backwards
                if line[x] == 1:
                    end_position.append(i)
                    end_position.append(x+1)
            break

    perimeter = start_position[0] + end_position[0] + start_position[1] + end_position[1]
    return perimeter            
