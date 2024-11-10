#include <stdio.h>
#include <stdint.h>

#include "SurfaceT.h"

struct Tyle {
	uint8_t T=0;
};

struct Maze {
	SurfaceT<Tyle> M;
};