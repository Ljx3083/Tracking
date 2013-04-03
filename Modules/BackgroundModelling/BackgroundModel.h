/* TSBB15 Tracking project 2013
 * - - - - - - - - - - - - - - -
 * Principal contributer: Gustav H�ger
 */

#ifndef _BACKGROUND_MODEL_H_
#define _BACKGROUND_MODEL_H_

#include "../Frame.h"
#include "ProbabilityMap.h"
#include <iostream>
using namespace std;

namespace BackgroundModelling
{
	class BackgroundModel
	{
	public:
		void update(std::list<Frame> &frames);

	};
}

#endif