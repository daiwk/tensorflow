// Copyright 2017 The TensorFlow Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// =============================================================================

#ifndef THIRD_PARTY_TENSORFLOW_CONTRIB_BOOSTED_TREES_LIB_UTILS_MACROS_H_
#define THIRD_PARTY_TENSORFLOW_CONTRIB_BOOSTED_TREES_LIB_UTILS_MACROS_H_

#include "tensorflow/core/platform/macros.h"

#define TF_CHECK_AND_RETURN_IF_ERROR(EXP, STATUS) \
  if (!TF_PREDICT_TRUE(EXP)) {                    \
    return (STATUS);                              \
  }

#endif  // THIRD_PARTY_TENSORFLOW_CONTRIB_BOOSTED_TREES_LIB_UTILS_MACROS_H_
