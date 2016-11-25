/**
 * Copyright 2015 Your Name <you@yourhost.com>
 *
 * @file GridMaker.h
 *
 * @brief description of GridMaker behavior.
 */

#ifndef GridMaker_H
#define GridMaker_H

#include <rt2d/entity.h>

/// @brief The GridMaker class is the Entity implementation.
class GridMaker : public Entity
{
public:
	/// @brief Constructor
	GridMaker();
	/// @brief Destructor
	virtual ~GridMaker();

	/// @brief update is automatically called every frame
	/// @param deltaTime the elapsed time in seconds
	/// @return void
	virtual void update(float deltaTime);

private:
	/* add your private declarations */
};

#endif /* GridMaker_H */