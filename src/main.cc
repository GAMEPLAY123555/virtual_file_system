#include <iostream>
#include "tree.h"
#include "alias.h"

int main() {
	
	Tree root1;
	root1.Head()->SetName("NewRoot");
	root1.AddFolder();
	root1.AddFolder();
	root1.AddFolder();
	
	root1.Head()->PrintStorage();
	
  system("pause");
  return 0;
  
};