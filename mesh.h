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
	public:
		grid1D();
		grid1D(double r0,double dr,int mesh_size);
		double dr;
		double r0;
		int mesh_size;
		std::vector<double> mesh;
		std::vector<double> fr;
		double (*fp)(double);
	
};
class grid2D
{
	public:
		std::vector<grid1D> mesh;
};
class grid3D
{
	public:
		std::vector<grid2D> mesh;
};
#endif
