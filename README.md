<div align="center">

# ESP32 Marauder - Advanced Edition

[![Build Status](https://img.shields.io/badge/Build-Stable-brightgreen.svg)]()
[![Platform: ESP32](https://img.shields.io/badge/Platform-ESP32-blue.svg)]()
[![Cybersecurity: Professional](https://img.shields.io/badge/Cybersecurity-Professional-red.svg)]()
[![Development: Custom](https://img.shields.io/badge/Development-Customized-orange.svg)]()

**Ağ güvenliği ve siber güvenlik testleri için baştan sona optimize edilmiş, en gelişmiş ESP32 yazılımı.**

[Özellikler](#özellikler) • [Cihaz Desteği](#cihaz-desteği) • [Hızlı Kurulum](#hızlı-kurulum) • [Kullanım](#kullanım) • [Yasal Uyarı](#yasal-uyarı)

</div>

---

## Hakkında

Bu proje, orijinal Marauder altyapısı üzerine inşa edilmiş ancak eklenen onlarca yeni özellik, performans iyileştirmeleri ve özelleştirilmiş saldırı modülleri ile orijinalinden tamamen bağımsız bir seviyeye getirilmiş bir **Advanced Edition** sürümüdür. Kararsızlıklar giderilmiş, menü geçişleri hızlandırılmış ve profesyonel siber güvenlik testleri için optimize edilmiştir.

## Özellikler

### Gelişmiş Wi-Fi Modülleri
*   **Packet Sniffing:** Çevredeki paketleri en yüksek hızda yakalar ve doğrudan PCAP formatında kaydeder.
*   **Gelişmiş Deauthentication:** Tek tek cihazlar yerine tüm ağdaki trafiği anlık olarak durdurabilir.
*   **Evil Portal 2.0:** Çok daha inandırıcı, özelleştirilebilir ve hızlı Captive Portal sayfaları.
*   **Beacon Spam:** Kararlı ve yüksek frekanslı sahte ağ yayını.

### Bluetooth & BLE Power
*   **BLE Spam (Premium):** Apple (iOS 17+), Samsung ve Windows pop-up saldırıları için optimize edilmiş payloadlar.
*   **Sessiz Keşif:** Cihazların MAC adreslerini ve üretici bilgilerini iz bırakmadan tespit edin.

### Veri ve Sistem
*   **War Driving & GPS:** Harita üzerinde ağ analizi için kesintisiz GPS entegrasyonu.
*   **SD Kart Yönetimi:** Hızlı dosya sistemi ve hata korumalı kayıt mekanizması.
*   **CLI & Web Kontrol:** Hem terminalden hem de tarayıcıdan tam kontrol imkanı.

---

## Cihaz Desteği

Bu yazılım aşağıdaki donanımların tümüyle tam uyumlu çalışacak şekilde optimize edilmiştir:

*   **Flipper Zero WiFi Dev Board**
*   **ESP32-S2 / S3 / WROOM / WROVER**
*   **M5Stack StickC / StickC Plus / Core**
*   **LilyGO T-Display & T-Embed**
*   **Custom Built ESP32 Handhelds** (TFT LCD + SD Card + Battery)

---

## Hızlı Kurulum

Doğrudan cihazınıza kurup kullanmaya başlamak için aşağıdaki adımları takip edin:

### Gereksinimler
*   **Donanım:** Herhangi bir ESP32 geliştirme kartı.
*   **Yazılım:** Arduino IDE veya PlatformIO.
*   **Bağlantı:** CP2102 veya CH340 sürücülerinin bilgisayarınızda kurulu olduğundan emin olun.

### Kurulum Adımları

#### Yöntem 1: PlatformIO (Önerilen - En Kolay ve Hızlı)
Proje PlatformIO için hazır optimize edilmiştir; kütüphaneleri ve derleme bayraklarını otomatik kurar:
1. VS Code içerisinde **PlatformIO IDE** eklentisini kurun.
2. Bu projeyi VS Code ile açın (`File > Open Folder`).
3. Alt mavi bardaki **✓ (Build)** simgesine veya **→ (Upload)** simgesine tıklayın.
4. Gerekli tüm bağımlılıklar (`platformio.ini` üzerinden) otomatik indirilip derlenecektir.

#### Yöntem 2: Arduino IDE
1. Bu depoyu `.zip` olarak indirin ve dışarı çıkarın.
2. `esp32_marauder/esp32_marauder.ino` dosyasını Arduino IDE ile açın.
3. `configs.h` dosyasını açın ve kendi cihazınıza uygun satırın başındaki `//` işaretini kaldırarak aktif edin.
4. **Araçlar > Kart** kısmından kart modelinizi seçin (Örn: `ESP32-S3 Dev Module` veya `ESP32 Dev Module`).
5. `Upload` butonuna basın.

---

## Sorun Giderme

*   **Yükleme Hatası:** Kablonuzun veri transferi desteklediğinden emin olun. Bazı kablolar sadece şarj amaçlıdır.
*   **Derleme Hataları (Çoklu Tanım / Multiple Definition):** PlatformIO kullanıyorsanız `platformio.ini` dosyası `-Wl,--allow-multiple-definition` bayrağı ile bu çakışmaları otomatik engeller.
*   **Ekran Kararması:** `configs.h` dosyasında doğru donanım/ekran modelinin seçili olduğundan emin olun.
*   **Baud Rate:** Seri monitör hızının `115200` olduğundan emin olun.

---

## Yasal Uyarı

Bu yazılım yalnızca eğitim ve yetkilendirilmiş güvenlik testleri için geliştirilmiştir. Yazılımın amacı dışındaki kullanımından doğacak her türlü yasal sorumluluk son kullanıcıya aittir. İzinsiz ağlara müdahale etmek suç teşkil edebilir.

---

<div align="center">

**Profesyonel Siber Güvenlik ve Ağ Analiz Platformu**

</div>
