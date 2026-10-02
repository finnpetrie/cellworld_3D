#pragma once
#include <json_cpp.h>

#define No_move Move(0,0)

namespace cell_world {
    struct Coordinates : json_cpp::Json_object{
        Coordinates ();
        Coordinates (int x, int y, int z =0);
        int x{},y{}, z{};
        bool is_origin() const;
        int rotation() const;
        bool operator ==(const Coordinates &) const;
        bool operator !=(const Coordinates &) const;
        Coordinates operator +=(const Coordinates &);
        Coordinates operator +(const Coordinates &) const;
        Coordinates operator -(const Coordinates &) const;
        Coordinates operator -() const;
        unsigned int manhattan(const Coordinates &) const;
        Json_object_members({
            Add_member(x);
            Add_member(y);
            Add_optional_member(z);
        })
    };

    using Coordinates_list = json_cpp::Json_vector<Coordinates>;

    using Move = Coordinates;

    using Move_list = json_cpp::Json_vector<Move>;
}