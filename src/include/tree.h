#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "folder.h"
#include "alias.h"

class Tree {
public:
	// конструктор
	Tree();
	// метод
	Folder* Head(); // получить head
	void 		AddFolder(STRO new_name); // добавить папку в head
private:
	Folder* head_folder;
	Folder* root_folder;
};