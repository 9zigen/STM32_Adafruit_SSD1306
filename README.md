# STM32_Adafruit_SSD1306
[Adafruit_SSD1306](https://github.com/adafruit/Adafruit_SSD1306)と[Adafruit_GFX](https://github.com/adafruit/Adafruit-GFX-Library)をくっつけてSTM32 HAL用に変更を加えたものです。未対応のHALバージョンもあるかもしれません。

F4用のヘッダをインクルードしていますが、
```
#include "stm32f4xx_hal.h"
```
の部分を変えることで他でも使用可能です。F103C8T6とF407VET6で動作確認できてます。

System Workbench for STM32で使うことを想定しており、ディレクトリ構成もそれ用です。Convert to C++でC++サポートを有効化してあるプロジェクトで使えます。

C++から使う際はArduinoとほぼ同じ様にかけますが、
```
seti2c(I2C_HandleTypeDef *_i2c)
```
で、&hi2c1などのI2Cインタフェースのポインタを渡してやる必要があります。

main.cなどのCからでも扱えるようにラッパのOLED_Proxyを同梱しています。

OLED_Proxy.hをインクルードするだけで使えます。必要なファイルはOLED_Proxy.hでインクルードされます。
書き方はの下のような感じです。

```
/* USER CODE BEGIN 2 */

OLED_seti2c(&hi2c2);
OLED_begin();
OLED_clearDisplay();
OLED_setTextColor(WHITE);
OLED_setTextSize(1);

OLED_setCursor(0, 0);
OLED_print("Hello World!);
OLED_display();
/* USER CODE END 2 */
```
ほぼ全ての関数をラップしたはずですが、Cではオーバーラップは使用できないのでその分オミットしています。OLED_Proxy.cの通り簡単に機能を追加することができるので必要な機能がある場合は各自で追加してください。