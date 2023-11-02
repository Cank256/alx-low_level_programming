#!/usr/bin/python3

'''
The Island Perimeter Module
'''


def island_perimeter(grid):
    """
    Calculate the perimeter of the island.

    Args:
    grid (List[List[int]]): A list of lists representing the island grid.

    Returns:
    int: The perimeter of the island.

    Requirements:
    - 0 represents a water zone.
    - 1 represents a land zone.
    - One cell is a square with side length 1.
    - Grid cells are connected horizontally/vertically (not diagonally).
    - Grid is rectangular, width and height don't exceed 100.
    - Grid is completely surrounded by water,
        and there is one island (or nothing).
    - The island doesn't have "lakes" (water inside that
        isn't connected to the water around the island).
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                # Count the top perimeter
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                # Count the bottom perimeter
                if row == rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                # Count the left perimeter
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                # Count the right perimeter
                if col == cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter
