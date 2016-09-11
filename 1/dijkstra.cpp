#include <iostream>
#include <stdio.h>
#include <tuple>
#include <vector>
#include <eigen3/Eigen/Eigen>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>

using namespace std;
using namespace Eigen;
const int MAP_SIZE = 10;
const int MAP_DIM = 2;
//function declaration
//std::tuple<std::vector<int>, int> dijkstragrid(int[MAP_SIZE][MAP_SIZE], int[MAP_DIM] , int[MAP_DIM]);

int dijkstragrid(int[MAP_SIZE][MAP_SIZE], int[MAP_DIM] , int[MAP_DIM]);

int main()
{
	int map[MAP_SIZE][MAP_SIZE] = {0};
	const int obstacle_row = 5;
	for (int row = 0; row !=obstacle_row; ++row)
		{
			map[row][6] = 0;    
		}		

	int start_coords[MAP_DIM] = {6, 2};
	int dest_coords[MAP_DIM]  = {8, 9};
	dijkstragrid(map,start_coords,dest_coords);
}

int dijkstragrid(int input_map[MAP_SIZE][MAP_SIZE], int start_coords[MAP_DIM] , int dest_coords[MAP_DIM])
{
	int col = sizeof(input_map); /* size of y */
	int row = sizeof(input_map[0]); /* size of x */
	MatrixXi map = MatrixXi::Zero(row,col);

	MatrixXi input;
	memcpy(input.data(), input_map, sizeof(int)*row*col); 
		
	Eigen::MatrixXi indices = (input.array()== 0).cast<int>();

	//map(&input_map) = {0}; 

		}
		

