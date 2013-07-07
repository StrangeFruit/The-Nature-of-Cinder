//
//  Mover.cpp
//  Ex25GravitationalAttractors
//
//  Created by Ilya Rostovtsev on 7/6/13.
//
//

#include "Mover.h"

void Mover::applyForce( const Vec2f& force ) {
    Vec2f f = force / mass;
    acceleration += f;
}

void Mover::update() {
    velocity += acceleration;
    location += velocity;
    acceleration = Vec2f::zero();
}

void Mover::draw() {
    gl::color( 1, 1, 1 );
    gl::drawSolidCircle( location, radius );
}

float Mover::getMass() const {
    return mass;
}

Vec2f Mover::getLocation() const {
    return location;
}

Vec2f Mover::getVelocity() const {
    return velocity;
}
