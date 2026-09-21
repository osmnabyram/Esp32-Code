import re

file_path = r'c:\ESP32Marauder\ESP32Marauder-master\esp32_marauder\CommandLine.cpp'
with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

# 1. Update the printMainMenu
old_menu = r'''  Serial.println(F("                                    20 - CSA / Quiet "
                   "Attack                                          "));
  Serial.println(F("                                                           "
                   "                                          "));
  Serial.println(F("Hedef Belirleme:                    Wifi Sahte Ag:         "
                   "             ETC:                         "));
  Serial.println(F("24 - Cihazlari Listele              28 - Klon Aglar (Hedef "
                   "Gerekir)     33 - Wardriving (GPS)        "));
  Serial.println(F("25 - Ag (AP) Sec                    29 - Rastgele Sahte Ag "
                   "Seli         34 - PineScan                "));
  Serial.println(F("26 - Istasyon (STA) Sec             30 - Ozel Mesaj Yayini "
                   "             35 - MAC Takip (MacTrack)    "));
  Serial.println(F("27 - Secimleri Kaldir               31 - Probe Spam (Hedef "
                   "Gerekir)     36 - Paket Istatistikleri    "));
  Serial.println(F("                                    32 - Aga Baglan (Hedef "
                   "Gerekir)     37 - LED Yonetimi            "));
  Serial.println(F("                                                           "
                   "             38 - Dosya Sistemi (ls)      "));
  Serial.println(F("                                                           "
                   "             0 - Ana Menuye Don           "));'''

new_menu = r'''  Serial.println(F("                                    20 - CSA / Quiet "
                   "Attack             24 - Sessiz Veri Avcisi      "));
  Serial.println(F("                                                           "
                   "                                          "));
  Serial.println(F("Hedef Belirleme:                    Wifi Sahte Ag:         "
                   "             ETC:                         "));
  Serial.println(F("25 - Cihazlari Listele              29 - Klon Aglar (Hedef "
                   "Gerekir)     34 - Wardriving (GPS)        "));
  Serial.println(F("26 - Ag (AP) Sec                    30 - Rastgele Sahte Ag "
                   "Seli         35 - PineScan                "));
  Serial.println(F("27 - Istasyon (STA) Sec             31 - Ozel Mesaj Yayini "
                   "             36 - MAC Takip (MacTrack)    "));
  Serial.println(F("28 - Secimleri Kaldir               32 - Probe Spam (Hedef "
                   "Gerekir)     37 - Paket Istatistikleri    "));
  Serial.println(F("                                    33 - Aga Baglan (Hedef "
                   "Gerekir)     38 - LED Yonetimi            "));
  Serial.println(F("                                                           "
                   "             39 - Dosya Sistemi (ls)      "));
  Serial.println(F("                                                           "
                   "             0 - Ana Menuye Don           "));'''

content = content.replace(old_menu, new_menu)

# 2. Update the switch cases in handleMenuInput
def case_replacer(match):
    num = int(match.group(1))
    if num >= 24 and num <= 38:
        return 'case ' + str(num + 1) + ':'
    return match.group(0)

start_idx = content.find('switch (choice) {')
end_idx = content.find('} else {', start_idx)

if start_idx != -1 and end_idx != -1:
    switch_body = content[start_idx:end_idx]
    
    new_switch_body = re.sub(r'case (\d+):', case_replacer, switch_body)
    
    case23_str = '''case 23:
      wifi_scan_obj.StartScan(WIFI_SCAN_DYNAMIC_PORTAL, TFT_CYAN);
      break;'''
    
    case24_str = '''case 23:
      wifi_scan_obj.StartScan(WIFI_SCAN_DYNAMIC_PORTAL, TFT_CYAN);
      break;
    case 24:
      wifi_scan_obj.StartScan(WIFI_SCAN_SILENT_HUNTER, TFT_CYAN);
      break;'''
      
    new_switch_body = new_switch_body.replace(case23_str, case24_str)
    content = content[:start_idx] + new_switch_body + content[end_idx:]

with open(file_path, 'w', encoding='utf-8') as f:
    f.write(content)
print('Updated printMainMenu and switch cases in CommandLine.cpp')
