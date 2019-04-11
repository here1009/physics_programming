// examples
#include "mathmatics.h"
#include "mesh.h"
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	//test mesh
	grid1D mygrid;
	for(int i=0;i<mygrid.mesh_size;++i)
	{
	      cout<<mygrid.mesh[i]<<"  "<<mygrid.fr[i]<<endl;
	}
}
