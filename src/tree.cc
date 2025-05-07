#include "tree.h"

Tree::Tree() {
	std::cout << "tree init\n";
	root_folder = new Folder(root_folder);
	head_folder = root_folder;
};

void Tree::AddFolder() {
	head_folder->PutNode(new Folder(head_folder));
};

Folder* Tree::Head() {
	return head_folder;
};