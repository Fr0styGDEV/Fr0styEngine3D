#include "rtweekend.h"

#include "camera.h"
#include "hittable.h"
#include "hittableList.h"
#include "sphere.h"


int main() {
    HittableList world;

    world.add(make_shared<sphere>(point3(0,0,-1), 0.5)); // center sphere
    world.add(make_shared<sphere>(point3(-1.0,0,-1), 0.5)); // left sphere
    world.add(make_shared<sphere>(point3(1,0,-1), 0.5)); // right sphere
    world.add(make_shared<sphere>(point3(0,-100.5,-1), 100)); // ground

    camera cam;

    cam.aspectRatio = 16.0 / 9.0;
    cam.imageWidth = 400;

    cam.render(world);

}