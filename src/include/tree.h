#pragma once

#include <iostream>
#include <string>
#include "folder.h"

class Tree {
public:
	Tree();
	Folder* Head(); // получить head
	void 		AddFolder(); // добавить папку в head
private: 
	Folder* head_folder;
	Folder* root_folder;
};