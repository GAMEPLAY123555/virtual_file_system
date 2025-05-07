#pragma once

#include <iostream>
#include <string>
#include "alias.h"

class Folder;

class Node {
public:
	// �����������
	Node(Folder* new_parent);
	// �����
	virtual void Print();
	void 		SetName(STRO new_name);
	STRO 		GetName();
protected:
	STRO node_name = "NodeName";
	Folder* node_parent;
};