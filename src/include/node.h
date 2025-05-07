#pragma once

#include <iostream>
#include <string>
#include "alias.h"

class Folder;

class Node {
public:
	Node(Folder* new_parent);
public:
	virtual void Print();
	void 		SetName(STRO new_name);
protected:
	STRO node_name = "NodeName";
	Folder* node_parent;
};