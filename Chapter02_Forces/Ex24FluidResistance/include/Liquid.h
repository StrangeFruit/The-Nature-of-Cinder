//
//  Liquid.h
//  Ex24FluidResistance
//
//  Created by Ilya Rostovtsev on 7/6/13.
//
//  HWH Maintenance 8/17/13
//

#ifndef __Ex24FluidResistance__Liquid__
#define __Ex24FluidResistance__Liquid__

#include "cinder/gl/gl.h"
#include "Mover.h"

using namespace ci;

class Liquid {
public:
    Liquid() { }
    Liquid( const float x1, const float y1, const float x2, const float y2, const float c_ );
    
    bool contains( const Mover& m );
    Vec2f drag( const Mover& m );
    void draw() const;
    
private:
    Rectf bounds;
    float c;
};

#endif /* defined(__Ex24FluidResistance__Liquid__) */
