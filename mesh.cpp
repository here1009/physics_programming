#include "mesh.h"
#include <iostream>
#include <cmath>

//constructors
grid1D::grid1D()
{
	r0=0.0;
	dr=0.001;
	mesh_size=100000;
	mesh.resize(mesh_size);
	for(int i=0;i<mesh_size;++i)
	{
		mesh[i]=i*dr+r0;
	}
	//
	fp=[](double x)->double{return cos(x);};
        //	
	fr.resize(mesh_size);
	for(int i=0;i<mesh_size;++i)
	{
		fr[i]=fp(i*dr+r0);
	}
}
