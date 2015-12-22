#include "node.h"
void Node::buildMap(BitString b, std::map<unsigned,BitString> & theMap) {
 //WRITE ME!

  if (sym!= NO_SYM) {
    assert (left == NULL &&  right == NULL );
    //themap.first=b;
    theMap[sym] = b; 
  }
  else {
    assert (left != NULL && right != NULL);
    //addzero()
    left -> buildMap(b.plusZero(),theMap);
    //addOne()
    right ->buildMap(b.plusOne(),theMap);
  }
}

