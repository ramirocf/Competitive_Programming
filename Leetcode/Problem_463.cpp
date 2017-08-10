/* You are given a map in form of a two-dimensional integer grid where 1
represents land and 0 represents water. Grid cells are connected
horizontally/vertically (not diagonally). The grid is completely
surrounded by water, and there is exactly one island (i.e., one or more
connected land cells). The island doesn't have "lakes" (water inside that
isn't connected to the water around the island). One cell is a square with
side length 1. The grid is rectangular, width and height don't exceed 100.
Determine the perimeter of the island.  */

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
       int perimeter = 0;
       for (int i = 0; i < grid.size(); i++) {
           for (int j = 0; j < grid[i].size(); j++) {
               if (grid[i][j] == 0) {
                   continue;
               }
               int cont = 4;
               if ( i-1 > -1 && grid[i-1][j] ){
                   cont--;
               }
               if ( j-1 > -1 && grid[i][j-1] ) {
                   cont--;
               }
               if ( j + 1 < grid[i].size() && grid[i][j+1]) {
                   cont--;
               }
               if ( i + 1 < grid.size() && grid[i+1][j]) {
                   cont--;
               }
               perimeter += cont;
           }
       }
       return perimeter;
    }
};