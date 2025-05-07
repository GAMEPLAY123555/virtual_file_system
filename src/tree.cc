#include "tree.h"
#include <vector>
#include <string>
#include <algorithm>

Tree::Tree() {
	std::cout << "tree init\n";
	root_folder = new Folder(root_folder);
	head_folder = root_folder;
};

Folder* Tree::Head() {
	return head_folder;
};

void Tree::AddFolder(STRO new_name) {
	if ( !head_folder->GetNode(new_name) ) {
		Folder* allocated_folder = new Folder(head_folder);
		allocated_folder->SetName(new_name);
		head_folder->PutNode(allocated_folder);
	}
	else {
		std::cout << "folder with this name already exists: " << new_name << "\n";
	}
};