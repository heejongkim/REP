/***************************************************************************
*
* Authors: Ricardo Miguel Sanchez Loayza (risanche@biophys.mpg.de)
*
* Dr. Kudryashev/Sofja Kovalevskaja Group,
* Structural Biology - Max Planck Institute for Biophysics
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
* 02111-1307  USA
*
***************************************************************************/

#ifndef STARWRITER_H
#define STARWRITER_H

#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include "ParamsWriter.h"
#include "StarHdr.h"

using namespace std;

class StarWriter : public ParamsWriter {

public:
	StarWriter(string filename,StarHdr*header);
	~StarWriter();

	void writeCurrentData();

public:

protected:
	int iMrcFil;
	int iShiftX;
	int iShiftY;
	int iAngRot;
	int iAngTlt;
	int iAngPsi;
	
	int num_labels;
	
protected:
	bool save_header(StarHdr*header);
};


#endif

