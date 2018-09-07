#include "cs225/PNG.h"
using cs225::PNG;

#include "cs225/HSLAPixel.h"
using cs225::HSLAPixel;

#include <string>



void rotate(std::string inputFile, std::string outputFile) {
  unsigned int w = width().inputFile;
  unsigned int h = height().inputFile;
  PNG newPic = PNG(inputFile);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      HSLAPixel a = inputFile.getPixel(i,j);
      HSLAPixel newLocation = newPic.getPixel(height - 1 -i,width - 1 - j);
      newLocation = a;
    }
  }
  // TODO: Part 2
}

PNG myArt(unsigned int width, unsigned int height) {
  PNG png(width, height);
  // TODO: Part 3

  return png;
}
