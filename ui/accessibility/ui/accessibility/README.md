# MS-DIS UI Accessibility Module

Este módulo implementa a camada de acessibilidade do MS-DIS UI.

## Recursos
- Suporte a Text-to-Speech (TTS)
- Modo de alto contraste
- Anúncios de elementos de interface
- Ponte Kotlin ↔ C++ via JNI

## Estrutura
- `AccessibilityManager` — controla estados globais e nós acessíveis
- `AccessibilityNode` — representa um item da UI com descrição acessível
- `AccessibilityBridge.kt` — camada de ligação JNI
- `AccessibilityService.kt` — controle direto via Compose
