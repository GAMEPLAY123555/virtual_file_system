#include "node.h"

void Node::Print() {
	std::cout << node_name << "\n";
};

Node::Node(Folder* new_parent) {
	node_parent = new_parent;
};

void Node::SetName(STRO new_name) {
	node_name = new_name;
};

STRO Node::GetName() {
	return node_name;
};