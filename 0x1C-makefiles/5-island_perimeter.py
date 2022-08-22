#!/usr/bin/python3
"""TEchnical interview preparation"""


def island_perimeter(grid):
    """returns the perimeter of the island discribed in the grid
        grid is a list of list of integers:
	0 represents a water zone
	1 represents a land zone
	One cell is a square with side length 1
	Grid cells are connected horizontally/vertically (not diagonally).
	Grid is rectangular, width and height don’t exceed 100
	Grid is completely surrounded by water
	and there is one island (or nothing).
	The island doesn’t have “lakes” (water
	inside that isn’t connected to the water around the island)"""

    if type(grid) != list:
        raise TypeError("grid must be of type list of integers")

    size = 0
    height = len(grid)
    width = len(grid[0])
    for i in range(width):
        for j in range(height):
            if j == height - 1:
                size += 1

    return size * 2
