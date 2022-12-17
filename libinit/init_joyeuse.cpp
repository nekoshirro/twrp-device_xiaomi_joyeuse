/*
 * Copyright (C) 2022 The Android Open Source Project
 * Copyright (C) 2022 SebaUbuntu's TWRP device tree generator
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include "vendor_init.h"

static const variant_info_t joyeuse_info = {
    .brand = "Redmi",
    .device = "joyeuse",
    .model = "Redmi Note 9 Pro",
};

static const std::vector<variant_info_t> variants = {
};

void vendor_load_properties() {
    search_variant(variants);
}
