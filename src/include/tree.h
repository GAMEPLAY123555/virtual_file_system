#pragma once

#include <iostream>
#include <string>
#include "folder.h"

class Tree {
public:
	Tree();
	Folder* Head(); // �������� head
	void 		AddFolder(); // �������� ����� � head
private: 
	Folder* head_folder;
	Folder* root_folder;
};