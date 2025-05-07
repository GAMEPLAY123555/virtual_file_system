#pragma once

#include <iostream>
#include <string>
#include "alias.h"

class Folder;

class Node {
public:
	// конструктор
	Node(Folder* new_parent);
	// метод
	virtual void Print();
	void 		SetName(STRO new_name);
	STRO 		GetName();
protected:
	STRO node_name = "NodeName";
	Folder* node_parent;
};