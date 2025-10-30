#ifndef MSDIS_ACCESSIBILITY_NODE_H
#define MSDIS_ACCESSIBILITY_NODE_H

#include <string>

namespace msdis {
namespace ui {
namespace accessibility {

struct AccessibilityNode {
    std::string id;
    std::string description;
    bool focusable;
    bool visible;

    AccessibilityNode(const std::string& id, const std::string& desc)
        : id(id), description(desc), focusable(true), visible(true) {}
};

} // namespace accessibility
} // namespace ui
} // namespace msdis

#endif
