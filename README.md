![baronishere](https://user-images.githubusercontent.com/19830611/72323138-56d16780-36eb-11ea-8dac-087b128b5be9.png)

# BARONDUINO
多分最小の埋込用Arduino Uno互換機 BARONDUINOの情報
![](https://blog-imgs-133.fc2.com/v/a/g/vagabondworks/IMG_5871.jpg)  
~~35.56mm x 10.16mm~~ のArduino Uno互換機  
→ 2020/01/15出荷分のR2から34.83mm x 10.16mm で更に小さくなりました。  
　基板の厚みも0.8mm→0.6mmになりました。

## BARONDUINOの使い方

１．デバイスドライバのインストール  
・WCH CH340（USBシリアル変換）用のデバイスドライバをダウンロードしてインストール。  
　Windows10の場合はインストール不要。  
　メーカーホームページの製品ページから使用環境にあったドライバをダウンロードしてインストール。  
　Windows：http://www.wch.cn/download/CH341SER_EXE.html  
　MacOS：http://www.wch.cn/download/CH341SER_MAC_ZIP.html  
  
２．~~BARONDUINOのUSBシリアル変換部分を折って使う場合は、　本体側の8～12ピン、USBシリアル変換側の27～31ピンにピンヘッダなどを取り付け。  
折らずにそのまま使う場合は、折り目部分を挟んだ向かい合わせのピン8-27、9-28、10-29、11-30、12-31を電気的に接続。  
（背面で接続する予定でしたが、折り目のVカットラインを上面だけの予定が下面にも入れられてしまったので、接続が必要。）  ~~
→ 2020/01/15出荷分のR2からVカットからミシン目に変更になったので接続不要になりました。  
  
３．BARONDUINOをパソコンとマイクロUSBケーブルで接続し、ArduinoIDEを立ち上げ。  
　ツール＞ボード　：　ArudinoUNO  
　ツール＞シリアルポート　：　COMxx　（xxは１でインストールしたドライバが認識して設定されたCH340のCOMポート番号）  
　に設定。  
  
あとは、通常のArduinoUnoと同じように使用可能。Arduino Uno用に書いたソースコードがそのままで利用可能。　  
  
出荷時は、テストプログラムを兼ねてシリアルターミナルへの表示(115.2kbps/8bit/non parity/stop bit 1bit)、A0～A5及びD2～D10によるLED点滅のデモプログラムが焼かれている状態のため、周辺回路との接続時（出力信号の衝突）に注意。  
　
  
## BARONDUINOの購入方法
  
スイッチサイエンスマーケットプレイスで販売してます。  
→ [埋込用ArduinoUno互換機　BARONDUINO　　\1,584-](https://www.switch-science.com/catalog/5931/)  
