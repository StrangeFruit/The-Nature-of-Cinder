//
//  Particle.h
//  Ex42ParticleVector
//
//  Created by Ilya Rostovtsev on 7/2/13.
//
//

#ifndef __Ex42ParticleVector__Particle__
#define __Ex42ParticleVector__Particle__

#include "cinder/gl/gl.h"
#include "cinder/Rand.h"

using namespace ci;

class Particle {
private:
    Vec2f position;
    Vec2f velocity;
    Vec2f acceleration;
    float lifespan;
    float aging;
    float sizeRadius;
    
public:
    Particle( const Vec2f origin, Rand& r ): position(origin), lifespan(1.0f), velocity( r.nextFloat( -1.0f, 1.0f ), r.nextFloat( -1.0, 1.0 ) ), acceleration( 0.0f, r.nextFloat( 0.01f, 0.03f ) ), aging( r.nextFloat( (1.0f / 64), (1.0f/ 128) ) ), sizeRadius( r.nextFloat( 3, 9 ) ) { }
    ~Particle() {}
    void update();
    void draw();
    bool isDead();
};

#endif /* defined(__Ex42ParticleVector__Particle__) */
