#pragma once

#include <vector>
#include "alias.h"
#include "node.h"

class Folder : public Node {
public:
	// �����������
	Folder(Folder* new_parent);
	// �����
	Node* GetNode(STRO by_name);
	void PutNode(Node* ptr_put_node);
	void PrintStorage();
private:
	std::vector<Node*> storage;
};