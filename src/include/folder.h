#pragma once

#include <vector>
#include "node.h"

class Folder : public Node {
public:
	Folder(Folder* new_parent);
public:
	void PutNode(Node* ptr_put_node);
	void PrintStorage();
private:
	std::vector<Node*> storage;
};