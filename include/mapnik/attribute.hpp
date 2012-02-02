/*****************************************************************************
 *
 * This file is part of Mapnik (c++ mapping toolkit)
 *
 * Copyright (C) 2011 Artem Pavlenko
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *****************************************************************************/

#ifndef MAPNIK_ATTRIBUTE_HPP
#define MAPNIK_ATTRIBUTE_HPP

// mapnik
#include <mapnik/value.hpp>
// stl
#include <string>

namespace mapnik {

struct attribute
{
    std::string name_;
    explicit attribute(std::string const& name)
        : name_(name) {}

    template <typename V ,typename F>
    V const& value(F const& f) const
    {
        return f.get(name_);
    }

    std::string const& name() const { return name_;}
};
}

#endif // MAPNIK_ATTRIBUTE_HPP
