/* -*- c++ -*- */
/* 
 * Copyright 2018 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_ONESEG_SYMBOL_DEMAPPER_1SEG_H
#define INCLUDED_ONESEG_SYMBOL_DEMAPPER_1SEG_H

#include <oneseg/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace oneseg {

    /*!
     * \brief <+description of block+>
     * \ingroup oneseg
     *
     */
    class ONESEG_API symbol_demapper_1seg : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<symbol_demapper_1seg> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of oneseg::symbol_demapper_1seg.
       *
       * To avoid accidental use of raw pointers, oneseg::symbol_demapper_1seg's
       * constructor is in a private implementation
       * class. oneseg::symbol_demapper_1seg::make is the public interface for
       * creating new instances.
       */
      static sptr make(int mode, int constellation_size);
    };

  } // namespace oneseg
} // namespace gr

#endif /* INCLUDED_ONESEG_SYMBOL_DEMAPPER_1SEG_H */

