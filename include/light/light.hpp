#include <core/vec3.hpp>

class Light {
public:
        Light(Vec3 pos, Vec3 color, Vec3 direction, float intensity, bool state = true)
        : _pos(pos), _color(color), _direction(direction), _intensity(intensity), _state(state) {}

private:
        Vec3 _pos;
        Vec3 _color;
        Vec3 _direction;

        float _intensity;

        bool _state;
};
