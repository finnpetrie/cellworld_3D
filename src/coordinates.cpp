#include <cell_world/coordinates.h>

namespace cell_world {
    Coordinates::Coordinates(int x, int y, int z):
            x(x),y(y), z(z){;
    }

    Coordinates::Coordinates() = default;

    bool Coordinates::operator ==(const Coordinates &c) const {
        return c.x==x && c.y == y && c.z ==z;
    }

    bool Coordinates::operator !=(const Coordinates &c) const {
        return !(*this==c);
    }

    Coordinates Coordinates::operator +=(const Coordinates &c) {
        return { (x += c.x), (y += c.y), (z +=c.z)};
    }

    Coordinates Coordinates::operator +(const Coordinates &c) const{
        return { (c.x + x), (c.y + y), (c.z + z) };
    }

    Coordinates Coordinates::operator -(const Coordinates &c) const{
        return { (x - c.x), (y - c.y), (z - c.z) };
    }

    Coordinates Coordinates::operator -() const{
        return { (-x), (-y) ,(-z)};
    }

    bool Coordinates::is_origin() const {
        return x==0 && y==0 && z == 0;
    }

    int Coordinates::rotation() const {
        return (int)(atan2(x,-y) / 6.28 * 360.0);
    }

    unsigned int Coordinates::manhattan(const Coordinates &c) const {
        return abs(c.x-x) + abs(c.y-y) + abs(c.z-z);
    }
}