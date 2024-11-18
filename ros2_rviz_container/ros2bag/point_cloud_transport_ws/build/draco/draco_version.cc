// If this file is named draco_version.cc.cmake:
// This file is used as input at cmake generation time.

// If this file is named draco_version.cc:
// GENERATED FILE, DO NOT EDIT. SEE ABOVE.
#include "draco_version.h"

static const char kDracoGitHash[] = "5b189a434551e810a449aeeb2aac11af3e6c0c0b";
static const char kDracoGitDesc[] = "unreleased";

const char *draco_git_hash() {
  return kDracoGitHash;
}

const char *draco_git_version() {
  return kDracoGitDesc;
}

const char* draco_version() {
  return draco::Version();
}
