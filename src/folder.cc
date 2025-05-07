#include "folder.h"

void Folder::PutNode(Node* ptr_put_node) {
	storage.push_back(ptr_put_node);
};

Node* Folder::GetNode(STRO by_name) {
	for (Node* ptr_node : storage) {
		if ( ptr_node->GetName() == by_name ) {
			return ptr_node;
		}
	}
	return nullptr;
};

void Folder::PrintStorage() {
	std::cout << node_name << ":\n";
	for (Node* ptr_node : storage) {
		std::cout << "---";
		ptr_node->Print();
	}
};

Folder::Folder(Folder* new_parent) : Node(new_parent) {
};