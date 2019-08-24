/* Copyright (c) 2003, 2005 MySQL AB
   Use is subject to license terms

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1335  USA */

#ifndef REFCONVERT_H
#define REFCONVERT_H

#include "kernel_types.h"

/**
 * Convert BlockReference to BlockNumber
 */
inline
BlockNumber refToBlock(BlockReference ref){
  return (BlockNumber)(ref >> 16);
}

/**
 * Convert BlockReference to NodeId
 */
inline
NodeId refToNode(BlockReference ref){
  return (NodeId)(ref & 0xFFFF);
}

/**
 * Convert NodeId and BlockNumber to BlockReference
 */
inline 
BlockReference numberToRef(BlockNumber bnr, NodeId proc){
  return (((Uint32)bnr) << 16) + proc;
}

#endif

