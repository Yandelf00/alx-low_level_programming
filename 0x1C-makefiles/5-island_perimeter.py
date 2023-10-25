#!/usr/bin/python3
"""function of island_perimeter"""


def island_perimeter(grid):
    """function of island_perimeter.
    returns  perimeter of  island described in the good grid.

        grid: represents  the water by 0 and the land by 1.
    """
    if not grid:
        return 0

    perim = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perim += 4

                if i > 0 and grid[i - 1][j] == 1:
                    perim -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perim -= 2

    return perim
