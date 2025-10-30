#ifndef MSDIS_ACCESSIBILITY_MANAGER_H
#define MSDIS_ACCESSIBILITY_MANAGER_H

#include <string>
#include <vector>
#include "AccessibilityNode.h"

namespace msdis {
namespace ui {
namespace accessibility {

class AccessibilityManager {
public:
    AccessibilityManager();
    void registerNode(AccessibilityNode node);
    void announce(const std::string& text);
    void enableHighContrast(bool enable);
    void setTextToSpeech(bool enable);

private:
    std::vector<AccessibilityNode> nodes;
    bool ttsEnabled;
    bool highContrastEnabled;
};

} // namespace accessibility
} // namespace ui
} // namespace msdis

#endif
