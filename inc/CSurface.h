/*
 * CSurface.h
 *
 *  Created on: Feb 21, 2015
 *      Author: helfathi
 */

#ifndef CSURFACE_H_
#define CSURFACE_H_

#include <SDL/SDL.h>

class CSurface {
	SDL_Surface *m_pSurface;
public:
	CSurface();
	virtual ~CSurface();

	bool isValid();
};

#endif /* CSURFACE_H_ */
