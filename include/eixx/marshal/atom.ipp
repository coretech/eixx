//----------------------------------------------------------------------------
/// \file  atom.ipp
//----------------------------------------------------------------------------
/// \brief atom_table class implementation
//----------------------------------------------------------------------------
// Copyright (c) 2010 Serge Aleynikov <saleyn@gmail.com>
// Created: 2010-09-20
//----------------------------------------------------------------------------
/*
***** BEGIN LICENSE BLOCK *****

This file is part of the eixx (Erlang C++ Interface) Library.

Copyright (C) 2010 Serge Aleynikov <saleyn@gmail.com>

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

***** END LICENSE BLOCK *****
*/

#ifndef _EIXX_ATOM_IPP_
#define _EIXX_ATOM_IPP_

namespace EIXX_NAMESPACE {
namespace marshal {

    detail::atom_table<>& atom::atom_table() {
        static detail::atom_table<> s_atom_table;
        return s_atom_table;
    }

} // namespace marshal
} // namespace EIXX_NAMESPACE

#endif // _EIXX_ATOM_IPP_
