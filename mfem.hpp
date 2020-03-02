// Copyright (c) 2010-2020, Lawrence Livermore National Security, LLC. Produced
// at the Lawrence Livermore National Laboratory. All Rights reserved. See files
// LICENSE and NOTICE for details. LLNL-CODE-443211.
//
// This file is part of the MFEM library. For more information and source code
// availability visit https://mfem.org.
//
// MFEM is free software; you can redistribute it and/or modify it under the
// terms of the BSD-3 license.  We welcome feedback and contributions, see file
// CONTRIBUTING.md for details.

#ifndef MFEM_HPP
#define MFEM_HPP

#include "config/config.hpp"

#include "general/error.hpp"
#include "general/device.hpp"
#include "general/array.hpp"
#include "general/sets.hpp"
#include "general/hash.hpp"
#include "general/mem_alloc.hpp"
#include "general/sort_pairs.hpp"
#include "general/stable3d.hpp"
#include "general/table.hpp"
#include "general/tic_toc.hpp"
#include "general/isockstream.hpp"
#include "general/osockstream.hpp"
#include "general/socketstream.hpp"
#include "general/optparser.hpp"
#include "general/zstr.hpp"
#include "general/version.hpp"
#include "general/globals.hpp"
#ifdef MFEM_USE_MPI
#include "general/communication.hpp"
#endif

#include "linalg/linalg.hpp"
#include "mesh/mesh_headers.hpp"
#include "fem/fem.hpp"

#endif
