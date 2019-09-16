
#ifndef ASSIGN2_TILE_H
#define ASSIGN2_TILE_H

// Define a Colour type
typedef char Colour;

// Define a Shape type
typedef int Shape;

class Tile {
public:
   Tile(Colour colour, Shape shape);
   std::String toString(Colour colour, Shape shape);
   Colour getColour();
   Shape getShape();
   Colour colour;
   Shape  shape;

};

#endif // ASSIGN2_TILE_H
