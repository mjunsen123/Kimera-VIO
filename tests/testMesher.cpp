/* ----------------------------------------------------------------------------
 * Copyright 2017, Massachusetts Institute of Technology,
 * Cambridge, MA 02139
 * All Rights Reserved
 * Authors: Luca Carlone, et al. (see THANKS for the full author list)
 * See LICENSE for the license information
 * -------------------------------------------------------------------------- */

/**
 * @file   testStereoVisionFrontEnd.cpp
 * @brief  test StereoVisionFrontEnd
 * @author Luca Carlone
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <random>
#include <algorithm>

#include <CppUnitLite/TestHarness.h>
#include "Mesher.h"
#include "test_config.h"

using namespace std;
using namespace VIO;
using namespace cv;

static const double tol = 1e-1;

/* ************************************************************************* */
TEST(testMesher, createMesh2D_noKeypoints) {

}

/* ************************************************************************* */
int main() {
  TestResult tr; return TestRegistry::runAllTests(tr); }
/* ************************************************************************* */
