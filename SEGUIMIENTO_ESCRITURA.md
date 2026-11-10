# Seguimiento de escritura con home row mods

Teclado: Corne v4.1 (`crkbd/rev4_1/standard`). Keymap: `birrein_miryoku`. Distribución: QWERTY.

Objetivo: mejorar comodidad, precisión y velocidad conservando los home row mods. Las opciones pendientes son experimentos condicionados a los resultados, no cambios que debamos aplicar todos. Probar una variable por vez y conservar un UF2 anterior para revertir.

## Checklist de experimentos

La casilla indica implementación, no una mejora de WPM demostrada. Fechas en America/Santiago; «Pendiente» significa que no se ha implementado.

| Estado | Cambio o prueba | Fecha de implementación | Cuándo tiene sentido / beneficio esperado | Compromiso y criterio de evaluación |
| --- | --- | --- | --- | --- |
| ☑ | Flow Tap: `FLOW_TAP_TERM 150` | 2026-09-08 | Emitir taps inmediatamente durante secuencias elegibles de escritura, conservando los holds fuera de ese flujo. | Un intento de modificador o Espacio/NAV inmediatamente después de escribir puede resolverse como tap. Usuario reporta mayor inmediatez y seguridad al escribir; aumento de WPM aún no confirmado. |
| ☐ | Ajustar la ventana de Flow Tap | Pendiente | Solo después de evaluar 150 ms: ampliar si quedan demoras en secuencias que deberían ser letras; reducir si dificulta activar holds deliberados. | Una ventana mayor favorece taps durante más tiempo; una menor deja más pulsaciones bajo la decisión tap/hold normal. Comparar un único valor nuevo contra 150 ms. |
| ☐ | Personalizar Flow Tap para Espacio/NAV mediante callback | Pendiente | Solo si la respuesta del espacio mejora, pero cuesta activar NAV al terminar de escribir. Permite conservar Flow Tap en letras y tratar Espacio por separado. | Excluir Espacio del filtrado puede recuperar demora o ambigüedad en esa tecla. Definir si se excluye solo como tecla actual o también como precedente; medir escritura y navegación. |
| ☐ | Probar `QUICK_TAP_TERM_PER_KEY` con ventana positiva en teclas concretas | Pendiente | Si tap seguido de mantener provoca un hold no deseado o se necesita repetición. El valor actual global es 0. | Puede dificultar usar el modificador o la capa justo después de un tap de la misma tecla. Elegir teclas y ventana a partir de secuencias problemáticas; no es una aceleración general ni necesaria para dobles taps normales. |
| ☑ | Chordal Hold + Permissive Hold sobre Flow Tap 150 ms | 2026-09-09 | Variante solicitada por el usuario: favorecer taps en solapamientos de la misma mano y holds en acordes anidados entre manos, antes del tapping term. | Mapa explícito EX2 con pulgares exentos. No revierte taps ya resueltos por Flow Tap; puede producir holds no deseados en solapamientos anidados entre manos. Firmware preparado; prueba física pendiente. |

Flow Tap, Chordal Hold y los callbacks mencionados están disponibles en el checkout inspeccionado (`580d5b1db40c865019e7d4b5f8d79f7f6b0c6517`, basado en QMK 0.31.9). El 2026-09-09 el usuario solicitó probar Chordal Hold junto con Permissive Hold. Se evalúan como un conjunto frente al firmware de Flow Tap solo; esta comparación no aísla el efecto individual de cada opción. Hold On Other Key Press sigue desactivado. Los tiempos de F/J (150 ms), resto (200 ms), Flow Tap (150 ms) y Quick Tap (0) se conservan.

## Registro de resultados

| Fecha | Configuración | WPM / precisión | Observación | Decisión |
| --- | --- | --- | --- | --- |
| 2026-09-08 | Flow Tap 150 ms; tiempos previos conservados | Sin medición comparativa confirmada | El usuario percibe mejor feeling, inmediatez y seguridad al escribir; no sabe si aumentaron los WPM. | Mantener esta configuración y probarla bien antes de introducir otro cambio. |
| 2026-09-08 | Flow Tap 150 ms | 83 WPM en español 1k con acentos, frente a 60–65 WPM habituales reportados; precisión y duración no informadas | Mejoría reportada por el usuario; también detecta `f/` y `;v` al intentar Shift/Command inmediatamente después de escribir. | Conservar como referencia. No atribuir causalidad ni estabilidad a una sola prueba. |
| 2026-09-09 | Flow Tap 150 ms + Chordal Hold + Permissive Hold | Pendiente | Mapa de manos explícito para todas las teclas EX2; seis pulgares con `*` para permitir funciones de capa de la misma mano. | Comparar con Flow Tap solo. Sin flasheo automático. |

### Prueba de la variante del 2026-09-09

- Tras una pausa que deje salir de Flow Tap, mantener `;`, pulsar y soltar `V` antes de soltar `;`: comprobar pegar sin tener que agotar los 200 ms del mod-tap. Repetir con `F` y `/` para `?`.
- Probar también solapamientos de letras de la misma mano y entre manos, y las funciones NAV/MEDIA de la misma mano que el pulgar.
- Repetir escritura continua y atajos inmediatamente después: Flow Tap global sigue activo y puede seguir produciendo taps en vez de holds.
- Comparar WPM, precisión y facilidad de acceso a modificadores. Usar las mismas condiciones en ambas variantes, incluidos los acentos si se elige español 1k con acentos.

## Protocolo para futuras comparaciones

- Mantener QWERTY y el mismo Corne, ordenador, postura, herramienta, idioma, duración y política de corrección.
- En Monkeytype usar letras minúsculas y espacios, sin símbolos, números ni acentos. Mantener también el mismo diccionario o dificultad.
- Comparar la configuración de referencia con un solo cambio. Calentar por igual, descansar entre pruebas y alternar el orden A/B para reducir aprendizaje y fatiga.
- Realizar al menos cuatro pruebas de 60 segundos por condición y repetir otro día. Comparar mediana y dispersión de WPM y precisión, además de correcciones y errores concretos.
- Registrar sensación de inmediatez y confianza por separado de WPM. Comprobar también atajos deliberados y Espacio/NAV fuera de la prueba de texto.
- Conservar un cambio solo si mejora el uso real sin un coste inaceptable en precisión o acceso a modificadores/capas. No es necesario seguir ajustando si Flow Tap resulta satisfactorio.

## Archivos y reversión

- Configuración: [config.h](keyboards/crkbd/keymaps/birrein_miryoku/config.h).
- Tiempos por tecla: [keymap.c](keyboards/crkbd/keymaps/birrein_miryoku/keymap.c).
- Referencia de esta versión: [docs/tap_hold.md](docs/tap_hold.md).
- UF2 generado con Flow Tap: `/Users/birrein/Documents/Codex/qmk-firmware/2026-09-08/birrein_miryoku-flow-tap-150.uf2`.
- Copia del UF2 anterior: `/Users/birrein/Documents/Codex/qmk-firmware/2026-09-08/birrein_miryoku-before-flow-tap.uf2`.
- Variante Chordal Hold + Permissive Hold: `/Users/birrein/Documents/Codex/qmk-firmware/2026-09-09/birrein_miryoku-flow150-chordal-permissive.uf2`.
- Reversión a Flow Tap solo: `/Users/birrein/Documents/Codex/qmk-firmware/2026-09-09/birrein_miryoku-before-chordal-permissive.uf2`.

La compilación de Flow Tap finalizó correctamente y se verificaron sus símbolos en el ELF y la estructura del UF2. El usuario reportó la mejoría posterior; no hubo verificación automática del firmware instalado ni de su efecto en WPM.
