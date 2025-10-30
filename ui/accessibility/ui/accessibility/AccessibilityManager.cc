#include "AccessibilityManager.h"
#include <iostream>

using namespace msdis::ui::accessibility;

AccessibilityManager::AccessibilityManager()
    : ttsEnabled(false), highContrastEnabled(false) {}

void AccessibilityManager::registerNode(AccessibilityNode node) {
    nodes.push_back(node);
}

void AccessibilityManager::announce(const std::string& text) {
    if (ttsEnabled)
        std::cout << "[TTS] " << text << std::endl;
    else
        std::cout << "[Accessibility] " << text << std::endl;
}

void AccessibilityManager::enableHighContrast(bool enable) {
    highContrastEnabled = enable;
    std::cout << "High Contrast Mode: " << (enable ? "ON" : "OFF") << std::endl;
}

void AccessibilityManager::setTextToSpeech(bool enable) {
    ttsEnabled = enable;
    std::cout << "Text-to-Speech: " << (enable ? "ENABLED" : "DISABLED") << std::endl;
}
