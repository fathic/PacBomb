/*
 * CSurface.cpp
 *
 *  Created on: Feb 21, 2015
 *      Author: helfathi
 */

#include "/home/helfathi/git/PacBomb/inc/CSurface.h"

CSurface::CSurface():m_pSurface(NULL)
{
	m_pSurface= SDL_SetVideoMode( 640, 480, 16, SDL_HWSURFACE );
}



CSurface::~CSurface()
{
	// TODO Auto-generated destructor stub
}

bool CSurface::isValid()
{
	return m_pSurface != NULL;
}
