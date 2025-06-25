// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <cwchar>
#include <stdio.h>

#include "hello.h"
#include "hello_static.h"

int main(int argc, char *argv[], char *envp[]) {
  wprintf(L"%s, %s\n", GetStaticText(), GetSharedText());
  return 0;
}
