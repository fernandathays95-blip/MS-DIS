package msdis.ui.accessibility

import androidx.compose.runtime.mutableStateOf

object AccessibilityService {
    val isHighContrast = mutableStateOf(false)
    val isTtsEnabled = mutableStateOf(false)

    fun toggleHighContrast() {
        isHighContrast.value = !isHighContrast.value
        AccessibilityBridge.enableHighContrast(isHighContrast.value)
    }

    fun toggleTTS() {
        isTtsEnabled.value = !isTtsEnabled.value
        AccessibilityBridge.setTextToSpeech(isTtsEnabled.value)
    }

    fun announce(text: String) {
        AccessibilityBridge.announce(text)
    }
}
