#include "Node.h"

Node::Node(Tile* _tile, Node* _next) : tile(_tile), next(_next) {
}

Node::Node(Node& other) {
   // TODO
   this->tile = other.tile;
   this->next = other.next;
}
void Node::setNext(Node* _next) {
   next = _next;
}
Node* Node::getNext() {
   return next;
}
Tile* Node::getTile() {
   return tile;
}
