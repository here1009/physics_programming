#ifndef _MESH
#define _MESH
#include<vector>
//1. define function on grid,diff dimensional
//2. interpolation and extrapolation
//3. nth order derivative
//4. integration
//5. viualization
//6. algorithms
class grid1D
{
	private:
	vector<double> mesh;
}
class grid2D
{
	private:
	vector<grid1D> mesh;
}
class grid3D
{
	private:
	vector<grid2D> mesh;
}
#endif
