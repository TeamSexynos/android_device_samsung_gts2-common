# Copyright (C) 2012 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#
# Input Device Calibration File for the touch screen.
#

device.internal = 1

touch.deviceType = touchScreen
touch.orientationAware = 1

touch.size.calibration = area
touch.size.scale = 52
touch.size.bias = 11.8
touch.size.isSummed = 0

touch.pressure.calibration = amplitude
touch.pressure.scale = 0.015

LOCAL_MODULE := fingerprint.exynos5
LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)/hw
LOCAL_SRC_FILES := fingerprint.c
LOCAL_SHARED_LIBRARIES := liblog libcutils
LOCAL_MODULE_TAGS := optional
LOCAL_VENDOR_MODULE := true

touch.orientation.calibration = vector
