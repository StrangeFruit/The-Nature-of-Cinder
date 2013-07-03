//
//  Confetti.h
//  Ex44ParticlePolymorphism
//
//  Created by Ilya Rostovtsev on 7/2/13.
//
//

#ifndef __Ex44ParticlePolymorphism__Confetti__
#define __Ex44ParticlePolymorphism__Confetti__

#include "cinder/gl/gl.h"
#include "cinder/Rand.h"
#include "Particle.h"

using namespace ci;

class Confetti: public Particle {
public:
    Confetti( const Vec2f origin, Rand& r ): Particle(origin, r) {
        color = Vec3f(54.0/255, 33.0/255, 68.0/255);
    }
    ~Confetti() {}
    void update();
    void draw();
};

#endif /* defined(__Ex44ParticlePolymorphism__Confetti__) */
