#include <iostream>
#include "tree.h"
#include "alias.h"

int main() {
	
	Tree root1;
	root1.Head()->SetName("RootFolder");
	root1.AddFolder("Folder1");
	root1.AddFolder("Folder2");
	root1.AddFolder("Folder2");
	
	( *root1.Head() ).PrintStorage();
	
  system("pause");
  return 0;
  
};