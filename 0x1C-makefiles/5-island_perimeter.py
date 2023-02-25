#!/usr/bin/python3
"""

This Module has one function to return the perimeter of an island

"""


def island_perimeter(grid):
    """
    This function returns the permiter of an island described in grid

    Args:
        grid: a list of lists of integers

    Return: The perimiter of the island
    """

    perimeter = 0

    for row in range(len(grid)):
        for value in range(len(grid[row])):
            if value == 0 and grid[row][value] == 1:
                return (0)

            if grid[row][value] == 1:
                perimeter += 4
                if grid[row - 1][value] == 1:
                    perimeter -= 2
                if grid[row][value - 1] == 1:
                    perimeter -= 2

    return (perimeter - conn * 2)
