// Copyright (c) 2011-2014
// Marek Kurdej
//
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt

#ifndef BOOST_BFT_FOD_UNION_HPP
#define BOOST_BFT_FOD_UNION_HPP

#include <boost/bft/fod.hpp>
#include <boost/bft/detail/deref.hpp>
#include <boost/mpl/begin.hpp>
#include <boost/mpl/fold.hpp>
#include <boost/mpl/insert.hpp>
#include <boost/mpl/next.hpp>

namespace boost
{
namespace bft
{

template <typename FOD1, typename FOD2>
class fod_union
{
    typedef typename FOD1::type fod1set;
    typedef typename FOD2::type fod2set;
    typedef typename mpl::fold<fod1set, fod2set,
                               mpl::insert<mpl::_1, mpl::_2> >::type types;

    typedef typename mpl::begin<types>::type it0;
    typedef typename mpl::next<it0>::type it1;
    typedef typename mpl::next<it1>::type it2;
    typedef typename mpl::next<it2>::type it3;
    typedef typename mpl::next<it3>::type it4;
    typedef typename mpl::next<it4>::type it5;
    typedef typename mpl::next<it5>::type it6;
    typedef typename mpl::next<it6>::type it7;
    typedef typename mpl::next<it7>::type it8;
    typedef typename mpl::next<it8>::type it9;

    typedef typename detail::deref<it0>::type t0;
    typedef typename detail::deref<it1>::type t1;
    typedef typename detail::deref<it2>::type t2;
    typedef typename detail::deref<it3>::type t3;
    typedef typename detail::deref<it4>::type t4;
    typedef typename detail::deref<it5>::type t5;
    typedef typename detail::deref<it6>::type t6;
    typedef typename detail::deref<it7>::type t7;
    typedef typename detail::deref<it8>::type t8;
    typedef typename detail::deref<it9>::type t9;

public:
    typedef fod<t0, t1, t2, t3, t4, t5, t6, t7, t8, t9> type;
};

template <typename FOD>
struct fod_union<FOD, FOD>
{
    typedef FOD type;
};

} // namespace bft

} // namespace boost

#endif // BOOST_BFT_FOD_UNION_HPP
