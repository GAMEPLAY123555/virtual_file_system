#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "folder.h"
#include "alias.h"

class Tree {
public:
	// �����������
	Tree();
	// �����
	Folder* Head(); // �������� head
	void 		AddFolder(STRO new_name); // �������� ����� � head
private:
	Folder* head_folder;
	Folder* root_folder;
};