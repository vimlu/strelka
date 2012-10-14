// -*- mode: c++; indent-tabs-mode: nil; -*-
//
// Copyright (c) 2009-2012 Illumina, Inc.
//
// This software is covered by the "Illumina Genome Analyzer Software
// License Agreement" and the "Illumina Source Code License Agreement",
// and certain third party copyright/licenses, and any user of this
// source file is bound by the terms therein (see accompanying files
// Illumina_Genome_Analyzer_Software_License_Agreement.pdf and
// Illumina_Source_Code_License_Agreement.pdf and third party
// copyright/license notices).
//
//

/// \file

/// \author Chris Saunders
///

#ifndef __GVCF_HEADER
#define __GVCF_HEADER

#include "blt_common/blt_shared.hh"
#include "starling_common/chrom_depth_map.hh"

#include <iosfwd>


void
finish_gvcf_header(const gvcf_options& opt,
                   const cdmap_t& chrom_depth,
                   std::ostream& os);

#endif
