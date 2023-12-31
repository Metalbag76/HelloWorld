/*
  ==============================================================================

   This file is part of the JUCE library.
   Copyright (c) 2022 - Raw Material Software Limited

   JUCE is an open source library subject to commercial or open-source
   licensing.

   By using JUCE, you agree to the terms of both the JUCE 7 End-User License
   Agreement and JUCE Privacy Policy.

   End User License Agreement: www.juce.com/juce-7-licence
   Privacy Policy: www.juce.com/juce-privacy-policy

   Or: You may also use this code under the terms of the GPL v3 (see
   www.gnu.org/licenses).

   JUCE IS PROVIDED "AS IS" WITHOUT ANY WARRANTY, AND ALL WARRANTIES, WHETHER
   EXPRESSED OR IMPLIED, INCLUDING MERCHANTABILITY AND FITNESS FOR PURPOSE, ARE
   DISCLAIMED.

  ==============================================================================
*/

namespace juce
{

pointer_sized_int VST2ClientExtensions::handleVstPluginCanDo ([[maybe_unused]] int32 index,
                                                              [[maybe_unused]] pointer_sized_int value,
                                                              [[maybe_unused]] void* ptr,
                                                              [[maybe_unused]] float opt)
{
    return 0;
}

void VST2ClientExtensions::handleVstHostCallbackAvailable ([[maybe_unused]] std::function<VstHostCallbackType>&& callback) {}

} // namespace juce
