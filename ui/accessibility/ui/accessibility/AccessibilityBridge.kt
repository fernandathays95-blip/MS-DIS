package msdis.ui.accessibility

/**
 * Faz a ponte entre a camada Compose e o núcleo em C++.
 * Permite enviar eventos de acessibilidade para o sistema nativo.
 */
object AccessibilityBridge {
    external fun announce(text: String)
    external fun enableHighContrast(enable: Boolean)
    external fun setTextToSpeech(enable: Boolean)
}
