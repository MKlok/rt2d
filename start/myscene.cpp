/**
 * This class describes MyScene behavior.
 *
 * Copyright 2015 Your Name <you@yourhost.com>
 */

#include <fstream>
#include <sstream>

#include "myscene.h"

MyScene::MyScene() : Scene()
{
	// start the timer.
	t.start();

	// create a single instance of GridMaker in the middle of the screen.
	// the Sprite is added in Constructor of GridMaker.
	gridMaker = new GridMaker();
	gridMaker->MakeGrid(1, 1, 10, 10);
	gridMaker->position = Point2(SWIDTH/2, SHEIGHT/2);

	// create the scene 'tree'
	// add GridMaker to this Scene as a child.
	this->addChild(gridMaker);
}


MyScene::~MyScene()
{
	// deconstruct and delete the Tree
	this->removeChild(gridMaker);

	// delete GridMaker from the heap (there was a 'new' in the constructor)
	delete gridMaker;
}

void MyScene::update(float deltaTime)
{
	// ###############################################################
	// Escape key stops the Scene
	// ###############################################################
	if (input()->getKeyUp( GLFW_KEY_ESCAPE )) {
		this->stop();
	}
}
