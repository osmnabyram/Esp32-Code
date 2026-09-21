import re

file_path = r'c:\ESP32Marauder\ESP32Marauder-master\esp32_marauder\CommandLine.cpp'
with open(file_path, 'r', encoding='utf-8') as f:
    content = f.read()

cases_mapping = {
    23: 'wifi_scan_obj.StartScan(WIFI_SCAN_DYNAMIC_PORTAL);',
    24: 'this->runCommand("list -a -c -s");',
    25: 'current_menu_layer = 24;\n      printMenuLayer(24);',
    26: 'current_menu_layer = 25;\n      printMenuLayer(25);',
    27: 'this->runCommand("clearlist -a -c -s");',
    28: 'this->runCommand("attack -t beacon -l");',
    29: 'this->runCommand("attack -t beacon -r");',
    30: 'current_menu_layer = 30;\n      custom_text_target_count = 0;\n      Serial.println(F("\\n--- OZEL MESAJ YAYINI ---"));\n      Serial.print(F("Kac adet mesaj birakmak istiyorsunuz? (1-50 arasi bir sayi girin, Iptal icin 0): "));',
    31: 'this->runCommand("attack -t probe");',
    32: 'menu_input_mode = 31;\n      menu_input_step = 1;\n      current_menu_layer = 24; // Use AP select menu\n      printMenuLayer(24);',
    33: 'this->runCommand("wardrive");',
    34: 'this->runCommand("sniffpinescan");',
    35: 'this->runCommand("mactrack");',
    36: 'this->runCommand("packetcount");',
    37: 'current_menu_layer = 36; // LED\n      printMenuLayer(36);',
    38: 'this->runCommand("ls /");'
}

start_idx = content.find('case 23:')
end_idx = content.find('case 99:')

if start_idx == -1 or end_idx == -1:
    print('Failed to find case bounds')
    import sys
    sys.exit(1)

new_cases = ''
for i in range(23, 39):
    new_cases += f'    case {i}:\n      {cases_mapping[i]}\n      break;\n'

new_content = content[:start_idx] + new_cases + content[end_idx:]

with open(file_path, 'w', encoding='utf-8') as f:
    f.write(new_content)
print('Cases remapped successfully.')
