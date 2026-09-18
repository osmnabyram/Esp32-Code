#include "CommandLine.h"

CommandLine::CommandLine() {}

const char PROGMEM vessel_ascii_art[] = R"rawlogo(

⢷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠘⣿⣷⣄⠀⢵⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠈⠻⣿⣷⣬⡻⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠘⢷⣬⡛⢿⣿⣮⣝⢿⣷⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠈⠻⣿⣷⣮⣛⢿⣿⣮⣝⡿⢰⡀⠀⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀              ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠘⢶⣝⡻⢿⣷⣮⣟⡿⣿⠮⢻⣷⣮⣛⡿⣶⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣙⠿⣿⣮⣽⣛⢿⣷⣏⢷⣮⣽⣛⢿⢾⣮⣟⡿⣶⣤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠈⠻⢶⣯⣽⣻⢿⣾⣿⡱⣭⣝⣟⢿⢷⣯⣽⣛⡿⢾⣯⣿⣷⣦⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠐⢶⣯⣝⣻⠿⣾⣯⣷⢙⣛⡿⠿⣷⣷⣯⣿⣛⣿⠶⣿⣽⣟⣿⣿⣿⣿⣷⣦⣤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠉⢛⠿⣿⣷⣾⣭⣮⡻⣭⢻⣷⣶⣯⣭⣟⣛⣻⡿⠾⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡤⠀⠀⢀⣠⡴
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣷⣾⣭⣿⣻⡜⣮⡷⡜⣯⣭⣽⣿⣟⣛⣻⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⣿⡿⣿⣷⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣠⡴⠀⠀⢀⣀⣤⣴⣶⡾⠿⣛⣡⣴⣾⡿⠟⠁
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢛⣛⡿⡿⢰⣿⣝⣮⠻⣿⣟⣟⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢹⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣤⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣷⣻⣛⣻⣻⣿⣽⣭⣦⣶⢖⣺⣿⣭⣽⣶⣿⡿⠿⢟⣛⣉⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠛⠿⠷⡭⣟⡓⡻⣜⢻⣻⢿⣟⣿⣻⣛⣻⣻⣭⣯⣿⣿⣿⣿⡟⣼⣿⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣴⣿⣿⢟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⡿⣽⣭⣭⣭⣭⣭⣭⣭⣭⣭⣭⢆⣟⣟⣟⣭⣭⣷⣶⣾⣿⠿⠋⠁⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡻⡟⣮⡻⠿⡻⣛⣻⣻⣻⣻⣽⣿⣿⣿⣿⣿⢳⣿⡟⠀⠀⠀⠀⠀⠀⠀     ⠀⠀⠀⠀⠈⣿⣿⢧⣿⣿⣿⣿⣿⣿⣿⡿⣿⣯⣟⣟⣟⡷⢿⠾⡾⣾⣾⣽⣽⣽⡵⣕⣿⣻⣯⣯⣽⣽⣽⣵⠶⠖⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢟⣟⣗⣵⣿⢾⡫⣟⣿⣻⣻⣿⣿⣿⣿⣿⡯⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⣀⢀⠀⠀⠀⠀⠀⠀⢽⣿⣸⣿⣿⣿⣿⡿⣿⣿⣿⣷⣷⣯⣿⣛⣟⡿⡿⣿⣾⣶⣾⣶⠧⣾⣯⣿⣽⣽⣭⣯⣽⠼⠂⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢛⣛⡚⣿⣟⡓⣽⣭⡿⡷⣿⣿⣻⣿⣿⣺⣿⡇⠀⠀⠀⠀⠀⠀⣠⣶⣿⣿⣿⣿⣄⠀⠀⠀⠀⣺⣿⢼⣿⣿⣿⣿⣿⣷⣽⣻⢿⣿⣿⣽⣟⣿⠿⡿⣷⣶⣾⡮⣲⣿⣾⣾⣾⣾⣶⣶⠶⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣭⣕⣯⣟⣆⢛⣿⣟⣟⣻⠿⣿⡯⣿⣿⡂⠀⠀⣐⣒⣶⣾⡿⣟⣽⠿⣟⢻⣜⣗⠀⠀⠀⣿⣿⢽⣿⣿⣿⣿⣿⣾⣽⣻⢿⣾⣯⣽⣟⣿⠿⣿⣷⣾⠎⣾⣶⣷⣷⣿⣾⠖⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⢷⡺⣿⣮⣳⡝⢿⣟⣿⣿⣮⢻⣻⣿⡷⣑⢊⣉⣩⡿⣿⣽⣟⣵⣿⣿⣿⡟⠁⠀⠀⣠⣿⣟⣽⣿⣿⣻⣯⣟⡾⣽⣟⡿⢷⣯⣽⣛⡿⠃⠓⠒⠺⠿⠿⠖⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠴⠴⠶⢶⣶⣒⣶⣆⠭⣽⢽⣿⣷⣝⢮⠻⡷⡻⣛⡷⡙⣟⣳⡻⣷⢰⣟⣛⢖⣚⣵⣿⣿⣾⡏⠀⢀⣤⣾⣿⣿⡳⣟⣯⣯⣿⣛⡾⣟⡷⣯⣟⡿⢾⣭⣟⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢛⣛⣻⣫⣽⡷⣟⣧⠖⣍⢿⣿⣿⡼⡳⣜⢻⣧⢺⣯⣟⣿⣿⣿⡕⡿⣳⣿⣿⣷⣝⢿⢠⣶⡎⣿⣿⢿⣻⣼⣾⡿⣻⣽⣿⣿⣿⣾⣝⢷⣯⡟⠿⠊⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠫⣯⣾⢿⣻⣵⣿⣶⡎⣺⢿⢿⣿⣽⢦⡹⣯⡻⣾⢽⣿⡿⣵⣻⣵⣽⣛⢿⠿⣽⡯⡿⣜⢿⣾⣿⣿⢿⣽⣾⣿⢿⣟⣯⡿⣾⣻⣗⣮⡤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠹⠞⠋⠞⠂⢵⣷⣷⢯⣳⡳⣌⠣⣿⢷⣷⣿⣿⣿⣿⣿⣿⣿⣿⣮⡝⣿⣿⣧⢛⣯⣿⣿⡿⣿⣟⣷⣟⣯⡿⡯⡛⣢⣶⣪⣆⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⠿⣟⣯⣿⣞⣧⡈⢷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣷⣭⣼⣜⣿⡽⣷⣻⣯⣟⡷⠯⣣⣭⣶⣻⣯⢷⣽⡳⣯⣟⡶⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⣹⣿⣻⣗⣿⣆⠹⡿⢿⣿⣿⡿⢿⣿⣿⣿⡗⣻⣽⣽⣵⡼⡿⣮⠿⠾⠙⠁⠈⠃⠿⡽⢷⡟⢿⣽⠻⢾⠍⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠚⠸⣿⢽⣿⣿⡿⡿⣗⣿⣿⣶⣶⣶⣶⢮⣿⣽⠏⠓⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣔⣿⣮⡫⣏⠩⣶⣿⣬⣓⠿⢷⣾⣯⢿⣿⣻⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣰⣝⢿⣿⣿⣿⣷⡌⢿⣿⣿⣃⠀⠀⠈⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣿⣷⣾⡾⣽⣿⣿⣦⡙⣻⣽⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⡿⣟⣻⣽⣽⣯⡻⣿⣿⣿⢷⣌⢛⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀             
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⢿⣾⡿⣿⣟⣿⣿⣻⣯⣫⣷⣿⣻⣧⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀           
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⣳⣟⣿⢽⣿⣻⣗⣿⣺⣷⣻⣯⢛⣩⣮⣿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⢮⣛⢾⢯⣿⡿⣽⡷⣿⠯⠿⣱⣶⣿⣿⣿⣿⣿⢷⡠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣷⣽⣍⣟⣫⡏⠀⠈⠻⣞⣿⣿⣿⣿⣿⣣⠹⣎⠠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠙⢟⣽⣿⣷⣏⠀⠈⢳⡕⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠨⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣷⢀⡀⠀⠙⢦⢂⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⣿⣯⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢼⣝⣿⣿⣷⡀⠀⠀⠙⢦⣰⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⡇⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⣮⢿⣿⡇⠀⠀⠘⠾⣷⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⡿⣿⡀⠀⠀⠀⠈⠻⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣭⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⣷⣷⡀⠀⢀⣠⣶⠊⠙⠄⣀⣺⣥⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣷⣰⣿⣿⠇⠀⣰⣾⣿⣫⣿⣿⣷⠄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣹⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⢹⢿⠫⢖⣝⢤⣤⣼⣿⢿⣾⣿⣿⠿⠚⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣻⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⣴⣴⣾⣿⡿⣩⡵⣗⣟⢇⣮⢿⣿⣿⠓⠉⠁⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⣿⣿⠀⢀⣶⣷⣶⣴⡺⣛⣽⣾⣿⣟⣿⣿⢸⣿⣿⡲⣶⣿⣿⡝⣿⢯⡀⠀⣠⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⠶⠾⢶⣄⣀⠀⢀⣀⢻⣾⣏⣾⣾⣿⢿⣻⣵⣿⡿⣳⣿⢯⣾⣿⣿⢸⣿⣷⣶⢸⣻⣿⣿⣜⣿⣞⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠁⠀⠀⠀⠈⠛⠻⢟⣵⣏⣿⣗⣿⢟⣾⣿⡿⢟⣵⣿⣿⢯⣿⣿⣿⣿⡽⣿⣿⣿⣷⣝⢿⣿⣿⣞⣇⠿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⠀⠀⠀⠀⠀⢀⣴⣿⣿⣷⢹⣷⠚⠛⢋⣭⢾⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⠿⠛⠋⠋⠋⠑⠒⣻⣷⣟⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⡤⠞⠁⠀⠀⢀⣤⣾⠿⠛⣩⣁⠀⢽⢻⡇⠀⣊⣉⣨⣍⢯⣝⡶⣲⣾⣝⢻⣿⡇⠀⣠⣾⣿⢿⣿⣷⣮⡻⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠈⠠⠴⣮⣟⠟⠉⣰⣤⣶⢿⢿⢣⣭⡧⣗⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡧⣻⠁⠀⢿⡿⡀⠀⠀⠙⠻⠿⠾⠝⠻⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀

				'||'  '|'                                ||  
				 '|.  .'    ....   ....   ....    ....   ||  
				  ||  |   .|...|| ||. '  ||. '  .|...||  ||  
				   |||    ||      . '|.. . '|.. ||       ||  
				    |      '|...' |'..|' |'..|'  '|...' .||.)rawlogo";

const char PROGMEM fonksiyon_rehberi_metni[] = R"helptext(
FONKSIYON REHBERI (Kisa Ozet)

1 - Ag Taramasi (AP): Cevredeki tum WiFi erisim noktalarini tespit eder ve listeler.
2 - STA Tarama: Belirlenen bir aga bagli olan cihazlari tarar. (Hedef Ag Secimi Gerekir)
3 - Sinyal Seviyesi: Secilen agin sinyal gucunu (RSSI) takip eder.
4 - Ping: Bir IP adresine paket gondererek yanit suresini olcer. (Baglanti Gerekir)
5 - Port Tarama: Hedef cihazdaki acik ag portlarini tespit eder.
6 - ARP Scan: Yerel agdaki cihazlari MAC adresleri uzerinden bulur.
7 - Cihaz Kesfi (AKTIF): Havayi dinleyerek etraftaki cihazlarin isim and MAC'lerini bulur.

8 - Raw & Beacon Tarama: Havadaki ham WiFi ve duyuru paketlerini yakalar.
9 - Handshake (PMKID): Sifre kirmaya yarayan PMKID anahtarlarini yakalar.
10 - Deauth Tarama: Ortamdaki baglanti kesme saldirilarini tespit eder.

11 - Apple Spam (Chaos): Apple cihazlarda surekli baglanti pencereleri cikarir.
12 - Samsung Spam (Chaos): Samsung cihazlarda surekli pop-up cikarir.
13 - BLE Spam Menu: Windows, Google ve diger BLE saldirilarini iceren alt menu.

14 - MAC Klon AP: Hedef agin MAC adresini cihaza kopyalar.
15 - MAC Klon STA: Hedef kullanicinin MAC adresini cihaza kopyalar.
16 - Rastgele MAC: Cihazin WiFi adresini rastgele degistirir.

17 - Hedefe Deauth: Secilen cihazinin ag baglantisini keser.
18 - Herkese Deauth: Ortamdaki herkesin ag baglantisini koparmaya calisir.
19 - Active EAPOL: Handshake yakalamak icin paket trafigini tetikler.
20 - Modem Banlama: Kanal degistirme duyurusu ile cihazlari agdan ayirir.

21 - Oltalama (Google): Sahte Google giris sayfasi olusturup sifre yakalar.
22 - Karma (Spoof): Cihazlarin eski aglarini taklit ederek baglanti kurar.
23 - Dinamik Yonlendirme: Kurbanlari otomatik olarak baska bir URL'ye yonlendirir.
24 - Sessiz Veri Avcisi: Cihaz bilgilerini arkaplanda analiz eder.

25 - Cihazlari Listele: Bulunan tum ag ve cihazlari detayli listeler.
26 - Ag (AP) Sec: Islem yapilacak hedef agi listeden secer.
27 - Istasyon (STA) Sec: Islem yapilacak hedef cihazi listeden secer.
28 - Secimleri Kaldir: Hafizadaki hedef secimlerini temizler.

29 - Klon Aglar: Hedef agin kopyasi olan sahte yayinlar acar.
30 - Ozel mesaj Yayini: Ag isimleri uzerinden ozel mesajlar/linkler yayinlar. (Esp icine gomulu rickroll muhabbeti gibi)
31 - Kayitli WiFi Taklidi: Cihazlarin tarama isteklerine sahte yanitlar doner.
32 - Aga Baglan: Gercek bir WiFi agina baglanti kurar.

34 - Wardriving (GPS): Bulunan aglari konum bilgisiyle kaydeder.
35 - PineScan: Pineapple cihazlarina ozel tarama modudur.
36 - MAC Takip (MacTrack): Belirli bir MAC adresini goruldugunde uyarir.
37 - Paket Istatistikleri: Yakalanan paket yogunlugunu gosterir.
38 - Sessiz Veri Avcisi: Baglanan cihazlarin MAC, IP, isletim sistemi ve DNS sorgularini analiz eder.
39 - Dosya Sistemi (ls): Cihaz hafizasindaki dosyalari listeler.

100 - Yardim Menusu: Fonksiyon ve komut rehberini acar.
99 - Cihaz Durumu (Info): RAM, CPU ve versiyon bilgilerini ozetler.
)helptext";

const char PROGMEM manuel_komutlar_metni[] = R"helptext(
MANUEL KOMUT REHBERI (Is Akislari)

Deauth (Baglanti Koparma):
1) scanap -> Agi tarar
2) stopscan -> Taramayi durdurur
3) list -a -> Aglari listeler
4) select -a [index] -> Hedefi secer
5) attack -t deauth -> Saldiriyi baslatir
6) reboot -> Saldiriyi bitirir ve yeniden baslatir

Kurban Modemi Klonlama (Evil Twin):
1) scanap -> Agi tarar
2) stopscan -> Taramayi durdurur
3) list -a -> Agları listeler
4) select -a [index] -> Hedefi secer
5) attack -t beacon -a -> Kurban agi tum bilgileriyle klonlar

Ozel Isimli Ag Spam:
* ssid -a -n "testwifi" -> Ag ismi belirler
* attack -t beacon -l -> Belirlenen isimde coklu ag yayar
* attack -t beacon -r -> Rastgele isimli aglar yayar
* list -s -> Listedeki ag isimlerini gosterir
* clearlist -s -> Listeyi temizler

Bluetooth Spam:
* blespam -t [apple/samsung/windows/all] -> Hedef modele spam yapar

Bluetooth Sniffing:
* sniffbt -> Civardaki Bluetooth cihazlari tespit eder
* sniffskim -> Civarda kart kopyalayici (skimmer) var mi kontrol eder

Ag Islemleri:
* join -a [index] -p [sifre] -> Hedef WiFi agina baglanir
* arpscan -> Agdaki cihazlarin IP ve MAC adreslerini listeler
* list -c -> Bulunan cihazlari numarali liste olarak doker
* portscan -a -t [index] -> Secilen cihazdaki acik portlari arar

Ag Trafigi Izleme:
1) channel [kanal] -> Hedef kanali secer (Genelde 7-11 arasi)
2) sniffraw -> Trafik ciktilarini verir

BILGI: RSSI degeri 0'a ne kadar yakinsa (Or: -30), hedef o kadar yakindadir.
NOT: sniffraw'da 'Data' artmiyorsa yanlis kanaldasin veya veri trafigi yoktur.
)helptext";

const char PROGMEM mac_analiz_rehberi_metni[] = R"helptext(
MAC ADRESI ILE NELER YAPILABILIR? (Stratejik Rehber)

7. Secenek (Cihaz Kesfi) ile yakaladiginiz MAC adresleri su islere yarar:

1) Hedef Belirleme (Targeting):
Saldiri modulleri (Deauth, Probe Spam vb.) "korleme" calismaz. Birine saldirmak icin once onun dijital kimligini (MAC) bilmeniz gerekir.
* Kullanim: Yakalanan MAC'i 'Hedef Belirle' (Secim) kısmına girerek o cihaza ozel operasyon baslatabilirsiniz.

2) Varlik ve Aliskanlik Analizi (Tracking):
Isim yazmasa bile, MAC adresi cihazin "parmak izidir".
* Istihbarat: Hedefin ne zaman gelip gittigini, hangi saatlerde aktif oldugunu sadece bu hayalet adresleri takip ederek haritalandirabilirsiniz.

3) Cihaz Profilleme (Vendor Intel):
MAC adresinin ilk 3 bayti (Orn: 00:4C:42) ureticiyi soyler.
* Analiz: Ortamda Apple cihazi coksa 'Apple Spam' acmak cok daha etkili olur. Cihaz turune gore spesifik saldirilar (exploit) secebilirsiniz.

4) Cihaz Klonlama ve Spoofing:
Klonlama: Yakaladiginiz bir cihazın MAC adresini kendi ESP32'nize tanımlayabilirsiniz.
* Teknik: Boylece sistemleri "Ben o cihazim" diye kandirip yetkisiz giris denemeleri yapabilir, aglardaki guvenligi test edebilirsiniz.
)helptext";

void CommandLine::printLargeString(const char *p) {
  while (*p) {
    size_t len = 0;
    while (p[len] && p[len] != '\n')
      len++;
    char line_buf[len + 1];
    memcpy(line_buf, p, len);
    line_buf[len] = '\0';
    Serial.println(line_buf);
    p += len;
    if (*p == '\n')
      p++;
    delay(1);
  }
}

void CommandLine::RunSetup() {
  printLargeString(vessel_ascii_art);

  menu_mode = true;
  current_menu_layer = 0;
  printMainMenu();
}

String CommandLine::getSerialInput() {
  String input = "";

  if (Serial.available() > 0)
    input = Serial.readStringUntil('\n');

  input.trim();
  return input;
}

void CommandLine::printMainMenu() {
  Serial.println(F("                                                           "
                   "                                          "));
  Serial.println(F("Tarama / Arama:                     Dinleme / Tarama:      "
                   "             Saldiri (WiFi/BT):           "));
  Serial.println(F("1 - Ag Taramasi (AP)                8 - Raw & Beacon "
                   "Tarama             11 - Apple Spam (Chaos)      "));
  Serial.println(F("2 - STA Tarama (Hedef Gerekir)      9 - Handshake (PMKID)  "
                   "             12 - Samsung Spam (Chaos)    "));
  Serial.println(F("3 - Sinyal Seviyesi                 10 - Deauth Tarama     "
                   "             13 - BLE Spam Menu           "));
  Serial.println(F("4 - Ping (Baglanti Gerekir)                                "
                   "                                          "));
  Serial.println(F("5 - Port Tarama (Baglanti Gerekir)                         "
                   "                                          "));
  Serial.println(F("6 - ARP Scan (Baglanti Gerekir)                            "
                   "                                          "));
  Serial.println(F("7 - Cihaz Kesfi (AKTIF)                                    "
                   "                                          "));
  Serial.println(F("                                                           "
                   "                                          "));
  Serial.println(F("Yonetim:                            WiFi Saldiri:          "
                   "             Social / Phishing:           "));
  Serial.println(F("14 - MAC Klon AP (Hedef Gerekir)    17 - Hedefe Deauth "
                   "(Hedef Gerekir)  21 - Oltalama (Google)       "));
  Serial.println(F("15 - MAC Klon STA (Hedef Gerekir)   18 - Herkese Deauth    "
                   "             22 - Karma (Spoof)           "));
  Serial.println(F("16 - Rastgele MAC                   19 - Active EAPOL "
                   "[GELIS.]          23 - Dinamik Yonlendirme     "));
  Serial.println(F("                                    20 - Channel ve Modem "
                   "Banlama                                    "));
  Serial.println(F("                                                           "
                   "                                          "));
  Serial.println(F("Hedef Belirleme:                    Wifi Sahte Ag:         "
                   "             ETC:                         "));
  Serial.println(F("24 - Cihazlari Listele              28 - Klon Aglar (Hedef "
                   "Gerekir)     33 - Wardriving (GPS)        "));
  Serial.println(F("25 - Ag (AP) Sec                    29 - Rastgele Sahte Ag "
                   "Seli         34 - PineScan                "));
  Serial.println(F("26 - Istasyon (STA) Sec             30 - Ozel Mesaj Yayini (Rickroll)   35 - MAC Takip (MacTrack)    "));
  Serial.println(F("27 - Secimleri Kaldir               31 - Kayitli WiFi "
                   "Taklidi           36 - Paket Istatistikleri    "));
  Serial.println(F("                                    32 - Aga Baglan (Hedef "
                   "Gerekir)     37 - LED Yonetimi            "));
  Serial.println(F("                                                           "
                   "             38 - Sessiz Veri Avcisi      "));
  Serial.println(F("                                                           "
                   "             39 - Dosya Sistemi (ls)      "));
  Serial.println(F("                                                           "
                   "                                          "));
  Serial.println(
      F("100 - Fonksiyon Aciklamalari        99 - Cihaz Durumu (Info) "
        "                                          "));
  Serial.println(
      F("98 - Terminale Don (CLI)            0 - Ayarlari Sifirla     "
        "                                          "));
  Serial.println(F("                                                           "
                   "                                          "));
  Serial.print(F("Secim Yapiniz... (0-100): "));
}

void CommandLine::printMenuLayer(int layer) {
  Serial.println(F("\n--------------------------------"));
  switch (layer) {
  case 13:
    Serial.println(F("--- BLUETOOTH SPAM (DOS) ---"));
    Serial.println(F("1 - Apple Cihazlar (Sour Apple)"));
    Serial.println(F("2 - Samsung Cihazlar"));
    Serial.println(F("3 - Windows Cihazlar"));
    Serial.println(F("4 - Google Cihazlar"));
    Serial.println(F("5 - Tum Cihazlar (Karma Spam)"));
    Serial.println(F("0 - Geri Don"));
    Serial.print(F("Secim Yapiniz: "));
    break;
  case 100:
    Serial.println(F("--- FONKSIYON VE KOMUT REHBERI ---"));
    Serial.println(F("1 - Fonksiyon Aciklamalari"));
    Serial.println(F("2 - Manuel Komut Rehberi (Is Akislari)"));
    Serial.println(F("3 - MAC Adresi ile Neler Yapilabilir?"));
    Serial.println(F("0 - Geri Don"));
    Serial.print(F("Secim Yapiniz: "));
    break;
  case 25:
    Serial.println(F("--- HEDEF AG (AP) SECIMI ---"));
    Serial.println(F("Once '23' ile listeye bakin. Secilen agin IDsini girin "
                     "(orn: 0, 1, 2)"));
    Serial.println(F("0 - Geri Don (Iptal)"));
    Serial.print(F("Secim Yapiniz: "));
    break;
  case 26:
    Serial.println(F("--- KULLANICI (STA) SECIMI ---"));
    Serial.println(
        F("Once '23' ile listeye bakin. Secilen cihazin IDsini girin "
          "(orn: 0, 1, 2)"));
    Serial.println(F("0 - Geri Don (Iptal)"));
    Serial.print(F("Secim Yapiniz: "));
    break;
  case 14:
    Serial.println(F("--- MAC KLONLA (AP) ---"));
    Serial.println(F("Klonlanacak agin IDsini yazin."));
    Serial.println(F("0 - Geri Don (Iptal)"));
    Serial.print(F("Secim Yapiniz: "));
    break;
  case 15:
    Serial.println(F("--- MAC KLONLA (STA) ---"));
    Serial.println(F("Klonlanacak cihazin IDsini yazin."));
    Serial.println(F("0 - Geri Don (Iptal)"));
    Serial.print(F("Secim Yapiniz: "));
    break;
  case 37:
    Serial.println(F("--- LED YONETIMI ---"));
    Serial.println(F("1 - Gokkusagi (Rainbow)"));
    Serial.println(F("2 - Kirmizi"));
    Serial.println(F("3 - Yesil"));
    Serial.println(F("4 - Mavi"));
    Serial.println(F("5 - LED'i Kapat (Durdur)"));
    Serial.println(F("0 - Geri Don"));
    Serial.print(F("Secim Yapiniz: "));
    break;
  case 30:
    Serial.println(F("--- OZEL MESAJ YAYINI ---"));
    Serial.println(F("Mesajlarinizi girin."));
    Serial.println(F("0 - Geri Don (Iptal)"));
    Serial.print(F("Secim Yapiniz: "));
    break;
  }
}

void CommandLine::handleMenuInput(String input) {
  if (input == "menu") {
    current_menu_layer = 0;
    menu_mode = true;
    printMainMenu();
    return;
  }

  if (input == "stopscan" || input == "stop" || input == "q") {
    this->runCommand(STOPSCAN_CMD);
    if (current_menu_layer != 0) {
      current_menu_layer = 0; // Return to main menu
      printMainMenu();
    } else {
      printMainMenu();
    }
    return;
  }

  if (current_menu_layer == 30 && custom_text_target_count > 0 &&
      custom_text_current_count >= 0) {
    if (input == "0" || input == "iptal") {
      custom_text_target_count = -1;
      custom_text_current_count = -1;
      current_menu_layer = 0;
      printMainMenu();
      return;
    }

    char prefix[10];
    sprintf(prefix, "%02d ", custom_text_current_count + 1);
    String custom_ssid = String(prefix) + input;
    this->runCommand("ssid -a -n \"" + custom_ssid + "\"");

    custom_text_current_count++;

    if (custom_text_current_count < custom_text_target_count) {
      char buffer[50];
      sprintf(buffer, "%02d ", custom_text_current_count + 1);
      Serial.print(F("Mesaj "));
      Serial.print(custom_text_current_count + 1);
      Serial.print(F("/"));
      Serial.print(custom_text_target_count);
      Serial.print(F(" (Basina '"));
      Serial.print(buffer);
      Serial.print(F("' eklenecek, Iptal icin 0): "));
    } else {
      Serial.println(
          F("\n[Bildiri] Mesajlar basariyla kaydedildi! Yayin basliyor..."));
      custom_text_target_count = -1;
      custom_text_current_count = -1;
      this->runCommand("attack -t beacon -l");
      current_menu_layer = 0;
      printMainMenu();
    }
    return;
  }

  // Interactive menu inputs (Ping, Port Scan, Join PW, etc.)
  if (menu_input_mode != -1) {
    if (input == "0" || input == "iptal") {
      menu_input_mode = -1;
      menu_input_step = -1;
      menu_input_target_index = -1;
      menu_input_buffer = "";
      current_menu_layer = 0;
      printMainMenu();
      return;
    }

    if (menu_input_mode == 32) {  // Join WiFi
      if (menu_input_step == 2) { // Password entry
        String password = input;
        Serial.println("\n[Bildiri] Baglanti kuruluyor...");
        this->runCommand("join -a " + String(menu_input_target_index) + " -p " +
                         password);
        menu_input_mode = -1;
        menu_input_step = -1;
        current_menu_layer = 0;
        printMainMenu();
        return;
      }
    } else if (menu_input_mode == 4) { // Ping
      if (menu_input_step == 1) {
        String ip = input;
        Serial.println("\n[Bildiri] Ping baslatiliyor: " + ip);
        this->runCommand("pingscan"); // Start the scan
        menu_input_mode = -1;
        menu_input_step = -1;
        current_menu_layer = 0;
        printMainMenu();
        return;
      }
    } else if (menu_input_mode == 5) { // Port Scan
      if (menu_input_step == 1) {
        String ip = input;
        Serial.println("\n[Bildiri] Port tarama baslatiliyor: " + ip);
        this->runCommand("portscan -s http"); // Example service or we could ask
        menu_input_mode = -1;
        menu_input_step = -1;
        current_menu_layer = 0;
        printMainMenu();
        return;
      }
    }
    return;
  }

  int choice = input.toInt();
  if (input != "0" && choice == 0) {
    // Not a number but not 0, pass through for advanced usage
    this->runCommand(input);
    return;
  }

  if (current_menu_layer == 0) {
    switch (choice) {
    case 0:
      this->runCommand("settings -r");
      break;
    case 98:
      menu_mode = false;
      Serial.println(F("\n[Bildiri] Terminal moduna gecildi. Menuye donmek "
                       "icin 'menu' yazin."));
      Serial.print("> ");
      break;
    case 1:
      this->runCommand("scanap");
      break;
    case 2:
      this->runCommand("scansta");
      break;
    case 3:
      this->runCommand("sigmon");
      break;
    case 4: // Ping
      menu_input_mode = 4;
      menu_input_step = 1;
      Serial.print(F("\nHedef IP adresi girin (Iptal icin 0): "));
      break;
    case 5: // Port Scan
      menu_input_mode = 5;
      menu_input_step = 1;
      Serial.print(F("\nHedef IP adresi girin (Iptal icin 0): "));
      break;
    case 6: // ARP Scan
      this->runCommand("arpscan");
      break;
    case 7: // Cihaz Kesfi
      this->runCommand("passive");
      break;
    case 8:
      this->runCommand("sniffraw");
      break;
    case 9:
      this->runCommand("sniffpmkid");
      break;
    case 10:
      this->runCommand("sniffdeauth");
      break;
    case 11:
      this->runCommand("blespam -t apple");
      break;
    case 12:
      this->runCommand("blespam -t samsung");
      break;
    case 13:
      current_menu_layer = 13;
      printMenuLayer(13);
      break;
    case 14:
      current_menu_layer = 14;
      printMenuLayer(14);
      break;
    case 15:
      current_menu_layer = 15;
      printMenuLayer(15);
      break;
    case 16:
      this->runCommand("randapmac");
      break;
    case 17:
      this->runCommand("attack -t deauth -c");
      break;
    case 18:
      this->runCommand("attack -t deauth");
      break;
    case 19:
      this->runCommand("sniffpmkid -d");
      break;
    case 20:
      this->runCommand("attack -t csa");
      break;
    case 21:
      wifi_scan_obj.StartScan(WIFI_SCAN_PHISHER);
      break;
    case 22:
      this->runCommand("karma -p 0");
      break;
    case 23:
      wifi_scan_obj.StartScan(WIFI_SCAN_DYNAMIC_PORTAL);
      break;
    case 24:
      this->runCommand("list -a -c -s");
      break;
    case 25:
      current_menu_layer = 24;
      printMenuLayer(24);
      break;
    case 26:
      current_menu_layer = 25;
      printMenuLayer(25);
      break;
    case 27:
      this->runCommand("clearlist -a -c -s");
      break;
    case 28:
      this->runCommand("attack -t beacon -l");
      break;
    case 29:
      this->runCommand("attack -t beacon -r");
      break;
    case 30:
      current_menu_layer = 30;
      custom_text_target_count = 0;
      Serial.println(F("\n--- OZEL MESAJ YAYINI ---"));
      Serial.print(F("Kac adet mesaj birakmak istiyorsunuz? (1-50 arasi bir "
                     "sayi girin, Iptal icin 0): "));
      break;
    case 31:
      this->runCommand("attack -t probe");
      break;
    case 32:
      menu_input_mode = 31;
      menu_input_step = 1;
      current_menu_layer = 24; // Use AP select menu
      printMenuLayer(24);
      break;
    case 33:
      this->runCommand("wardrive");
      break;
    case 34:
      this->runCommand("sniffpinescan");
      break;
    case 35:
      this->runCommand("mactrack");
      break;
    case 36:
      this->runCommand("packetcount");
      break;
    case 37:
      current_menu_layer = 37;
      printMenuLayer(37);
      break;
    case 38:
      wifi_scan_obj.StartScan(WIFI_SCAN_SILENT_HUNTER);
      break;
    case 39:
      this->runCommand("ls /");
      break;
    case 99:
      this->runCommand("info");
      break;
    case 100:
      current_menu_layer = 100;
      printMenuLayer(100);
      break;
    }
  } else {
    if (choice == 0) {
      current_menu_layer = 0;
      printMainMenu();
      return;
    }

    switch (current_menu_layer) {
    case 100: // Help Menu
      switch (choice) {
      case 1:
        printLargeString(fonksiyon_rehberi_metni);
        printMenuLayer(100);
        break;
      case 2:
        printLargeString(manuel_komutlar_metni);
        printMenuLayer(100);
        break;
      case 3:
        printLargeString(mac_analiz_rehberi_metni);
        printMenuLayer(100);
        break;
      }
      break;
    case 30: // Ozel Mesaj Yayini count entry
      if (custom_text_target_count == 0) {
        int count = choice;
        if (count == 0 || count > 50) {
          Serial.println(
              F("Iptal edildi veya gecersiz sayi. Ana menuye donuluyor."));
          current_menu_layer = 0;
          printMainMenu();
        } else {
          custom_text_target_count = count;
          custom_text_current_count = 0;
          this->runCommand("clearlist -s");
          Serial.println(F("\nLutfen mesajlari sirayla girin."));

          char buffer[50];
          sprintf(buffer, "%02d ", custom_text_current_count + 1);
          Serial.print(F("Mesaj "));
          Serial.print(custom_text_current_count + 1);
          Serial.print(F("/"));
          Serial.print(custom_text_target_count);
          Serial.print(F(" (Basina '"));
          Serial.print(buffer);
          Serial.print(F("' eklenecek, Iptal icin 0): "));
        }
      }
      break;
    case 13: // BLE Spam Menu
      switch (choice) {
      case 1:
        this->runCommand("blespam -t apple");
        break;
      case 2:
        this->runCommand("blespam -t samsung");
        break;
      case 3:
        this->runCommand("blespam -t windows");
        break;
      case 4:
        this->runCommand("blespam -t google");
        break;
      case 5:
        this->runCommand("blespam -t all");
        break;
      default:
        Serial.println(F("Gecersiz."));
        printMenuLayer(13);
      }
      break;
    case 24: // AP Selection Menu
      if (menu_input_mode == 32 && menu_input_step == 1) {
        menu_input_target_index = choice;
        menu_input_step = 2;
        Serial.print(F("\nLutfen ag sifresini girin (Iptal icin 0): "));
      } else {
        this->runCommand("select -a " + String(choice));
        current_menu_layer = 0;
        printMainMenu();
      }
      break;
    case 25: // STA Selection Menu
      this->runCommand("select -c " + String(choice));
      current_menu_layer = 0;
      printMainMenu();
      break;
    case 14: // MAC Clone AP
      this->runCommand("cloneapmac -a " + String(choice));
      current_menu_layer = 0;
      printMainMenu();
      break;
    case 15: // MAC Clone STA
      this->runCommand("clonestamac -s " + String(choice));
      current_menu_layer = 0;
      printMainMenu();
      break;
    case 37: // LED Settings
      switch (choice) {
      case 1:
        this->runCommand("led -p rainbow");
        break;
      case 2:
        this->runCommand("led -s #FF0000");
        break; // Red
      case 3:
        this->runCommand("led -s #00FF00");
        break; // Green
      case 4:
        this->runCommand("led -s #0000FF");
        break; // Blue
      case 5:
        this->runCommand("led -s #000000"); // Turn off
        break;
      default:
        Serial.println(F("Gecersiz."));
        printMenuLayer(37);
      }
      break;
    }
  }
}

void CommandLine::main(uint32_t currentTime) {
  String input = this->getSerialInput();

  if (input != "") {
    if (menu_mode) {
      handleMenuInput(input);
    } else {
      if (input == "menu") {
        menu_mode = true;
        current_menu_layer = 0;
        printMainMenu();
      } else {
        this->runCommand(input);
        Serial.print("> ");
      }
    }
  }
}

LinkedList<String> CommandLine::parseCommand(String input, char *delim) {
  LinkedList<String> cmd_args;

  bool inQuote = false;
  bool inApostrophe = false;
  String buffer = "";

  for (int i = 0; i < input.length(); i++) {
    char c = input.charAt(i);

    if (c == '"') {
      // Check if the quote is within an apostrophe
      if (inApostrophe) {
        buffer += c;
      } else {
        inQuote = !inQuote;
      }
    } else if (c == '\'') {
      // Check if the apostrophe is within a quote
      if (inQuote) {
        buffer += c;
      } else {
        inApostrophe = !inApostrophe;
      }
    } else if (!inQuote && !inApostrophe && strchr(delim, c) != NULL) {
      cmd_args.add(buffer);
      buffer = "";
    } else {
      buffer += c;
    }
  }

  // Add the last argument
  if (!buffer.isEmpty()) {
    cmd_args.add(buffer);
  }

  return cmd_args;
}

int CommandLine::argSearch(LinkedList<String> *cmd_args_list, String key) {
  for (int i = 0; i < cmd_args_list->size(); i++) {
    if (cmd_args_list->get(i) == key)
      return i;
  }

  return -1;
}

bool CommandLine::checkValueExists(LinkedList<String> *cmd_args_list,
                                   int index) {
  if (index < cmd_args_list->size() - 1)
    return true;

  return false;
}

bool CommandLine::inRange(int max, int index) {
  if ((index >= 0) && (index < max))
    return true;

  return false;
}

bool CommandLine::apSelected() {
  for (int i = 0; i < access_points->size(); i++) {
    if (access_points->get(i).selected)
      return true;
  }

  return false;
}

bool CommandLine::hasSSIDs() {
  if (ssids->size() == 0)
    return false;

  return true;
}

void CommandLine::showCounts(int selected, int unselected) {
  Serial.print((String)selected + " selected");

  if (unselected != -1)
    Serial.print(", " + (String)unselected + " unselected");

  Serial.println("");
}

String CommandLine::toLowerCase(String str) {
  str.toLowerCase();
  return str;
}

void CommandLine::filterAccessPoints(String filter) {
  int count_selected = 0;
  int count_unselected = 0;

  // Split the filter string into individual filters
  LinkedList<String> filters;
  int start = 0;
  int end = filter.indexOf(" or ");
  while (end != -1) {
    filters.add(filter.substring(start, end));
    start = end + 4;
    end = filter.indexOf(" or ", start);
  }
  filters.add(filter.substring(start));

  // Loop over each access point and check if it matches any of the filters
  for (int i = 0; i < access_points->size(); i++) {
    bool matchesFilter = false;
    for (int j = 0; j < filters.size(); j++) {
      String f = toLowerCase(filters.get(j));
      if (f.startsWith("equals ")) {
        String ssidEquals = f.substring(7);
        if ((ssidEquals.charAt(0) == '\"' &&
             ssidEquals.charAt(ssidEquals.length() - 1) == '\"' &&
             ssidEquals.length() > 1) ||
            (ssidEquals.charAt(0) == '\'' &&
             ssidEquals.charAt(ssidEquals.length() - 1) == '\'' &&
             ssidEquals.length() > 1)) {
          ssidEquals = ssidEquals.substring(1, ssidEquals.length() - 1);
        }
        if (access_points->get(i).essid.equalsIgnoreCase(ssidEquals)) {
          matchesFilter = true;
          break;
        }
      } else if (f.startsWith("contains ")) {
        String ssidContains = f.substring(9);
        if ((ssidContains.charAt(0) == '\"' &&
             ssidContains.charAt(ssidContains.length() - 1) == '\"' &&
             ssidContains.length() > 1) ||
            (ssidContains.charAt(0) == '\'' &&
             ssidContains.charAt(ssidContains.length() - 1) == '\'' &&
             ssidContains.length() > 1)) {
          ssidContains = ssidContains.substring(1, ssidContains.length() - 1);
        }
        String essid = access_points->get(i).essid;
        essid.toLowerCase();
        if (essid.indexOf(ssidContains) != -1) {
          matchesFilter = true;
          break;
        }
      }
    }
    // Toggles the selected state of the AP
    AccessPoint new_ap = access_points->get(i);
    new_ap.selected = matchesFilter;
    access_points->set(i, new_ap);

    if (matchesFilter) {
      count_selected++;
    } else {
      count_unselected++;
    }
  }

  this->showCounts(count_selected, count_unselected);
}

void CommandLine::runCommand(String input) {
  if (input == "")
    return;

  if (wifi_scan_obj.scanning() &&
      wifi_scan_obj.currentScanMode == WIFI_SCAN_GPS_NMEA) {
    if (input != STOPSCAN_CMD)
      return;
  } else
    Serial.println("#" + input);

  LinkedList<String> cmd_args = this->parseCommand(input, " ");

  //// Admin commands
  // Help
  if (cmd_args.get(0) == HELP_CMD) {
    Serial.println(HELP_HEAD);
    Serial.println(HELP_CH_CMD);
    Serial.println(HELP_SETTINGS_CMD);
    Serial.println(HELP_CLEARAP_CMD_A);
    Serial.println(HELP_REBOOT_CMD);
    Serial.println(HELP_UPDATE_CMD_A);
    Serial.println(HELP_LS_CMD);
    Serial.println(HELP_LED_CMD);
    Serial.println(HELP_GPS_DATA_CMD);
    Serial.println(HELP_GPS_CMD);
    Serial.println(HELP_NMEA_CMD);
    Serial.println(HELP_GPS_POI_CMD);
    Serial.println(HELP_GPS_TRACKER_CMD);

    // WiFi sniff/scan
    Serial.println(HELP_EVIL_PORTAL_CMD);
    Serial.println(HELP_KARMA_CMD);
    Serial.println(HELP_PACKET_COUNT_CMD);
    Serial.println(HELP_PING_CMD);
    Serial.println(HELP_ARP_SCAN_CMD);
    Serial.println(HELP_PORT_SCAN_CMD);
    Serial.println(HELP_SIGSTREN_CMD);
    Serial.println(HELP_SCAN_ALL_CMD);
    Serial.println(HELP_SCANAP_CMD);
    Serial.println(HELP_SCANSTA_CMD);
    Serial.println(HELP_SNIFF_RAW_CMD);
    Serial.println(HELP_SNIFF_BEACON_CMD);
    Serial.println(HELP_SNIFF_PROBE_CMD);
    Serial.println(HELP_SNIFF_PWN_CMD);
    Serial.println(HELP_SNIFF_PINESCAN_CMD);
    Serial.println(HELP_SNIFF_MULTISSID_CMD);
    Serial.println(HELP_SNIFF_ESP_CMD);
    Serial.println(HELP_SNIFF_DEAUTH_CMD);
    Serial.println(HELP_SNIFF_PMKID_CMD);
    Serial.println(HELP_SNIFF_SAE_CMD);
    Serial.println(HELP_STOPSCAN_CMD);
#ifdef HAS_GPS
    Serial.println(HELP_WARDRIVE_CMD);
#endif
    Serial.println(HELP_MAC_TRACK_CMD);

    // WiFi attack
    Serial.println(HELP_ATTACK_CMD);

    // WiFi Aux
    Serial.println(HELP_INFO_CMD);
    Serial.println(HELP_LIST_AP_CMD_A);
    Serial.println(HELP_LIST_AP_CMD_B);
    Serial.println(HELP_LIST_AP_CMD_C);
    Serial.println(HELP_LIST_AP_CMD_D);
    Serial.println(HELP_LIST_AP_CMD_E);
    Serial.println(HELP_LIST_AP_CMD_F);
    Serial.println(HELP_SEL_CMD_A);
    Serial.println(HELP_SSID_CMD_A);
    Serial.println(HELP_SSID_CMD_B);
    Serial.println(HELP_SAVE_CMD);
    Serial.println(HELP_LOAD_CMD);
    Serial.println(HELP_JOIN_CMD);
    Serial.println(HELP_MAC_CMD_A);
    Serial.println(HELP_MAC_CMD_B);
    Serial.println(HELP_MAC_CMD_C);
    Serial.println(HELP_MAC_CMD_D);
    Serial.println(HELP_ADD_CMD_A);
    Serial.println(HELP_ADD_CMD_B);

// Bluetooth sniff/scan
#ifdef HAS_BT
    Serial.println(HELP_BT_SNIFF_CMD);
    Serial.println(HELP_BT_SPAM_CMD);
    Serial.println(HELP_BT_SPOOFAT_CMD);
// Serial.println(HELP_BT_SWIFTPAIR_SPAM_CMD);
// Serial.println(HELP_BT_SAMSUNG_SPAM_CMD);
// Serial.println(HELP_BT_SPAM_ALL_CMD);
#ifdef HAS_GPS
    Serial.println(HELP_BT_WARDRIVE_CMD);
#endif
    Serial.println(HELP_BT_SKIM_CMD);
#endif
    Serial.println(HELP_FOOT);
    return;
  }

  // Stop Scan
  if (cmd_args.get(0) == STOPSCAN_CMD) {
    // if (wifi_scan_obj.currentScanMode == OTA_UPDATE) {
    //   wifi_scan_obj.currentScanMode = WIFI_SCAN_OFF;
    // #ifdef HAS_SCREEN
    //   menu_function_obj.changeMenu(menu_function_obj.updateMenu.parentMenu);
    // #endif
    //  WiFi.softAPdisconnect(true);
    //  web_obj.shutdownServer();
    //  return;
    //}

    int f_arg = this->argSearch(&cmd_args, "-f");

    uint8_t old_scan_mode = wifi_scan_obj.currentScanMode;

    if (f_arg != -1) {
      WiFi.disconnect(true);
      delay(100);
    }

    wifi_scan_obj.StartScan(WIFI_SCAN_OFF);

    Serial.println(F("[Bildiri] Tarama/Saldiri islemi sonlandirildi."));

    if (old_scan_mode == WIFI_SCAN_GPS_NMEA)
      Serial.println(F("END OF NMEA STREAM"));
    else if (old_scan_mode == WIFI_SCAN_GPS_DATA)
      Serial.println(F("Stopping GPS data updates"));
    else
      Serial.println(F("Stopping WiFi tran/recv"));

// If we don't do this, the text and button coordinates will be off
#ifdef HAS_SCREEN
    display_obj.init();
    menu_function_obj.changeMenu(menu_function_obj.current_menu);
#endif
  } else if (cmd_args.get(0) == GPS_DATA_CMD) {
#ifdef HAS_GPS
    if (gps_obj.getGpsModuleStatus()) {
      Serial.print(F("Getting GPS Data. Stop with "));
      Serial.println((String)STOPSCAN_CMD);
      wifi_scan_obj.currentScanMode = WIFI_SCAN_GPS_DATA;
#ifdef HAS_SCREEN
      menu_function_obj.changeMenu(&menu_function_obj.gpsInfoMenu);
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_GPS_DATA, TFT_CYAN);
    }
#endif
  } else if (cmd_args.get(0) == GPS_CMD) {
#ifdef HAS_GPS
    if (gps_obj.getGpsModuleStatus()) {
      int get_arg = this->argSearch(&cmd_args, "-g");
      int track_arg = this->argSearch(&cmd_args, "-t");
      int nmea_arg = this->argSearch(&cmd_args, "-n");

      if (get_arg != -1) {
        String gps_info = cmd_args.get(get_arg + 1);

        if (gps_info == "fix")
          Serial.println("Fix: " + gps_obj.getFixStatusAsString());
        else if (gps_info == "sat")
          Serial.println("Sats: " + gps_obj.getNumSatsString());
        else if (gps_info == "lat")
          Serial.println("Lat: " + gps_obj.getLat());
        else if (gps_info == "lon")
          Serial.println("Lon: " + gps_obj.getLon());
        else if (gps_info == "alt")
          Serial.println("Alt: " + (String)gps_obj.getAlt());
        else if (gps_info == "accuracy")
          Serial.println("Accuracy: " + (String)gps_obj.getAccuracy());
        else if (gps_info == "date")
          Serial.println("Date/Time: " + gps_obj.getDatetime());
        else if (gps_info == "text") {
          Serial.println(gps_obj.getText());
        } else if (gps_info == "nmea") {
          int notparsed_arg = this->argSearch(&cmd_args, "-p");
          int notimp_arg = this->argSearch(&cmd_args, "-i");
          int recd_arg = this->argSearch(&cmd_args, "-r");
          if (notparsed_arg == -1 && notimp_arg == -1 && recd_arg == -1) {
            gps_obj.sendSentence(Serial, gps_obj.generateGXgga().c_str());
            gps_obj.sendSentence(Serial, gps_obj.generateGXrmc().c_str());
          } else if (notparsed_arg == -1 && notimp_arg == -1)
            Serial.println(gps_obj.getNmea());
          else if (notparsed_arg == -1)
            Serial.println(gps_obj.getNmeaNotimp());
          else
            Serial.println(gps_obj.getNmeaNotparsed());
        } else
          Serial.println(F("You did not provide a valid argument"));
      } else if (nmea_arg != -1) {
        String nmea_type = cmd_args.get(nmea_arg + 1);

        if (nmea_type == "native" || nmea_type == "all" || nmea_type == "gps" ||
            nmea_type == "glonass" || nmea_type == "galileo" ||
            nmea_type == "navic" || nmea_type == "qzss" ||
            nmea_type == "beidou") {
          if (nmea_type == "beidou") {
            int beidou_bd_arg = this->argSearch(&cmd_args, "-b");
            if (beidou_bd_arg != -1)
              nmea_type = "beidou_bd";
          }
          gps_obj.setType(nmea_type);
          Serial.print(F("GPS Output Type Set To: "));
          Serial.println(nmea_type);
        } else
          Serial.println(F("You did not provide a valid argument"));
      } else if (track_arg != -1) {
        wifi_scan_obj.currentScanMode = GPS_TRACKER;
#ifdef HAS_SCREEN
        menu_function_obj.changeMenu(&menu_function_obj.gpsInfoMenu);
#endif
        wifi_scan_obj.StartScan(GPS_TRACKER, TFT_CYAN);
      } else if (cmd_args.size() > 1)
        Serial.println(F("You did not provide a valid flag"));
      else
        Serial.println(F("You did not provide an argument"));
    }
#endif
  } else if (cmd_args.get(0) == NMEA_CMD) {
#ifdef HAS_GPS
    if (gps_obj.getGpsModuleStatus()) {
#ifdef HAS_SCREEN
      menu_function_obj.changeMenu(&menu_function_obj.gpsInfoMenu);
#endif
      Serial.println(F("NMEA STREAM FOLLOWS"));
      wifi_scan_obj.currentScanMode = WIFI_SCAN_GPS_NMEA;
      wifi_scan_obj.StartScan(WIFI_SCAN_GPS_NMEA, TFT_CYAN);
    }
#endif
  }
  // LED command
  else if (cmd_args.get(0) == LED_CMD) {
    int hex_arg = this->argSearch(&cmd_args, "-s");
    int pat_arg = this->argSearch(&cmd_args, "-p");
#ifdef PIN
    if (hex_arg != -1) {
      String hexstring = cmd_args.get(hex_arg + 1);
      int number = (int)strtol(&hexstring[1], NULL, 16);
      int r = number >> 16;
      int g = number >> 8 & 0xFF;
      int b = number & 0xFF;
      // Serial.println(r);
      // Serial.println(g);
      // Serial.println(b);
      led_obj.setColor(r, g, b);
      led_obj.setMode(MODE_CUSTOM);
    } else if (pat_arg != -1) {
      String pat_name = cmd_args.get(pat_arg + 1);
      pat_name.toLowerCase();
      if (pat_name == "rainbow") {
        led_obj.setMode(MODE_RAINBOW);
      }
    }
// #else
//   Serial.println(F("This hardware does not support neopixel"));
#endif
  }
  // ls command
  else if (cmd_args.get(0) == LS_CMD) {
#ifdef HAS_SD
    if (cmd_args.size() > 1)
      sd_obj.listDir(cmd_args.get(1));
    else
      Serial.println(F("You did not provide a dir to list"));
#else
    Serial.println(F("SD support disabled, cannot use command"));
    return;
#endif
  }

  // Channel command
  else if (cmd_args.get(0) == CH_CMD) {
    // Search for channel set arg
    int ch_set = this->argSearch(&cmd_args, "-s");

    if (cmd_args.size() == 1) {
      Serial.print(F("Current channel: "));
      Serial.println(wifi_scan_obj.set_channel);
    } else if (ch_set != -1) {
      wifi_scan_obj.set_channel = cmd_args.get(ch_set + 1).toInt();
      wifi_scan_obj.changeChannel();
      Serial.println(
          F("[Bildiri] Kanal ayarlandi. Bu kanaldaki trafik dinlenecek."));
      Serial.print(F("Set channel: "));
      Serial.println(wifi_scan_obj.set_channel);
    }
  }
  // Clear APs
  else if (cmd_args.get(0) == CLEARAP_CMD) {
    int ap_sw = this->argSearch(&cmd_args, "-a"); // APs
    int ss_sw = this->argSearch(&cmd_args, "-s"); // SSIDs
    int cl_sw = this->argSearch(&cmd_args, "-c"); // Stations

    if (ap_sw != -1) {
#ifdef HAS_SCREEN
      menu_function_obj.changeMenu(&menu_function_obj.clearAPsMenu);
#endif
      Serial.println(F("[Bildiri] Liste temizleniyor..."));
      wifi_scan_obj.RunClearAPs();
    }

    if (ss_sw != -1) {
#ifdef HAS_SCREEN
      menu_function_obj.changeMenu(&menu_function_obj.clearSSIDsMenu);
#endif
      wifi_scan_obj.RunClearSSIDs();
    }

    if (cl_sw != -1) {
#ifdef HAS_SCREEN
      menu_function_obj.changeMenu(&menu_function_obj.clearAPsMenu);
#endif
      wifi_scan_obj.RunClearStations();
    }
  }

  else if (cmd_args.get(0) == SETTINGS_CMD) {
    int ss_sw = this->argSearch(&cmd_args, "-s");      // Set setting
    int re_sw = this->argSearch(&cmd_args, "-r");      // Reset setting
    int en_sw = this->argSearch(&cmd_args, "enable");  // enable setting
    int da_sw = this->argSearch(&cmd_args, "disable"); // disable setting

    if (re_sw != -1) {
      settings_obj.createDefaultSettings(SPIFFS);
      return;
    }

    if (ss_sw == -1) {
      settings_obj.printJsonSettings(settings_obj.getSettingsString());
    } else {
      bool result = false;
      String setting_name = cmd_args.get(ss_sw + 1);
      if (en_sw != -1)
        result = settings_obj.saveSetting<bool>(setting_name, true);
      else if (da_sw != -1)
        result = settings_obj.saveSetting<bool>(setting_name, false);
      else {
        Serial.println(F("You did not properly enable/disable this setting."));
        return;
      }

      if (!result) {
        Serial.print(F("Could not successfully update setting \""));
        Serial.println(setting_name + "\"");
        return;
      }
    }
  }

  else if (cmd_args.get(0) == REBOOT_CMD) {
    Serial.println(F("[Bildiri] Cihaz yeniden baslatiliyor..."));
    Serial.println(F("Rebooting..."));
    ESP.restart();
  }

  //// WiFi/Bluetooth Scan/Attack commands
  if (!wifi_scan_obj.scanning()) {
    // Dump pcap/log to serial too, valid for all scan/attack commands
    wifi_scan_obj.save_serial = this->argSearch(&cmd_args, "-serial") != -1;

    // Signal strength scan
    if (cmd_args.get(0) == SIGSTREN_CMD) {
      Serial.print(F("Starting Signal Strength Scan. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_SIG_STREN, TFT_MAGENTA);
      wifi_scan_obj.renderPacketRate();
    }
    // Packet count
    else if (cmd_args.get(0) == PACKET_COUNT_CMD) {
      Serial.print(F("Starting Packet Count Scan. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_PACKET_RATE, TFT_ORANGE);
    }
    // Wardrive
    else if (cmd_args.get(0) == WARDRIVE_CMD) {
#ifdef HAS_GPS
      if (gps_obj.getGpsModuleStatus()) {
        int sta_sw = this->argSearch(&cmd_args, "-s");
        int flk_sw = this->argSearch(&cmd_args, "-f");

        if (flk_sw != -1) {
          Serial.print(F("Starting Flock Wardrive. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_SCAN_FLOCK_WARDRIVE, TFT_GREEN);
        } else if (sta_sw != -1) {
          Serial.print(F("Starting Station Wardrive. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(WIFI_SCAN_STATION_WAR_DRIVE, TFT_GREEN);
        } else {
          Serial.print(F("Starting Wardrive. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(WIFI_SCAN_WAR_DRIVE, TFT_GREEN);
        }
      } else
        Serial.println(F("GPS Module not detected"));
#else
      Serial.println(F("GPS not supported"));
#endif
    }
    // Karma
    else if (cmd_args.get(0) == KARMA_CMD) {
      int pr_sw = this->argSearch(&cmd_args, "-p");

      if (pr_sw == -1) {
        Serial.println(F("You did not provide a target index"));
        return;
      }

      int pr_index = cmd_args.get(pr_sw + 1).toInt();

      if ((pr_index < 0) || (pr_index > probe_req_ssids->size() - 1)) {
        Serial.println(F("The provided index was not in range"));
        return;
      }

      if (evil_portal_obj.setAP(probe_req_ssids->get(pr_index).essid)) {
        Serial.print(F("Starting Karma Attack with "));
        Serial.print(probe_req_ssids->get(pr_index).essid);
        Serial.print(F(". Stop with "));
        Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
        display_obj.clearScreen();
        menu_function_obj.drawStatusBar();
#endif
        wifi_scan_obj.StartScan(WIFI_SCAN_EVIL_PORTAL, TFT_ORANGE);
        wifi_scan_obj.setMac();
      } else {
        Serial.println(F("Unable to set AP ESSID"));
        return;
      }

    }
    // AP Scan
    else if (cmd_args.get(0) == EVIL_PORTAL_CMD) {
      int cmd_sw = this->argSearch(&cmd_args, "-c");
      int html_sw = this->argSearch(&cmd_args, "-w");

      if (cmd_sw != -1) {
        String et_command = cmd_args.get(cmd_sw + 1);
        if (et_command == "start") {
          Serial.print(F("Starting Evil Portal. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          if (html_sw != -1) {
            String target_html_name = cmd_args.get(html_sw + 1);
            evil_portal_obj.target_html_name = target_html_name;
            evil_portal_obj.using_serial_html = false;
            Serial.print(F("Set html file as "));
            Serial.println(evil_portal_obj.target_html_name);
          }
          // else {
          //   evil_portal_obj.target_html_name = "index.html";
          // }
          wifi_scan_obj.StartScan(WIFI_SCAN_EVIL_PORTAL, TFT_MAGENTA);
        } else if (et_command == "reset") {

        } else if (et_command == "ack") {

        } else if (et_command == "sethtml") {
          String target_html_name = cmd_args.get(cmd_sw + 2);
          evil_portal_obj.target_html_name = target_html_name;
          evil_portal_obj.using_serial_html = false;
          Serial.print(F("Set html file as "));
          Serial.println(evil_portal_obj.target_html_name);
        } else if (et_command == "sethtmlstr") {
          evil_portal_obj.setHtmlFromSerial();
        } else if (et_command == "setap") {
          int target_ap_index = cmd_args.get(cmd_sw + 2).toInt();
          if ((target_ap_index >= 0) &&
              (target_ap_index < access_points->size())) {
            evil_portal_obj.setAP(access_points->get(target_ap_index).essid);
            AccessPoint new_ap = access_points->get(target_ap_index);
            new_ap.selected = true;
            access_points->set(target_ap_index, new_ap);

            evil_portal_obj.ap_index = target_ap_index;
          }
        }
      }
    } else if (cmd_args.get(0) == SCAN_ALL_CMD) {
      Serial.print(F("Scanning for APs and Stations. Stop with "));
      Serial.println(STOPSCAN_CMD);
      wifi_scan_obj.StartScan(WIFI_SCAN_AP_STA, TFT_MAGENTA);
    } else if (cmd_args.get(0) == SCANAP_CMD) {
      int full_sw = -1;
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif

      if (full_sw == -1) {
        Serial.println(F("[Bildiri] Ag taramasi (AP Scan) baslatiliyor..."));
        Serial.print(F("Starting AP scan. Stop with "));
        Serial.println(STOPSCAN_CMD);
        wifi_scan_obj.StartScan(WIFI_SCAN_TARGET_AP, TFT_MAGENTA);
      } else {
        Serial.print(F("Starting Full AP scan. Stop with "));
        Serial.println(STOPSCAN_CMD);
        wifi_scan_obj.StartScan(WIFI_SCAN_TARGET_AP_FULL, TFT_MAGENTA);
      }
    }
    // Raw sniff
    else if (cmd_args.get(0) == SNIFF_RAW_CMD) {
      Serial.println(
          F("[Bildiri] Ag trafigi paket paket (Raw) izlenmeye baslaniyor..."));
      Serial.println(F("Not: Cikti hizlica akacaktir. Mgmt ve Data paketlerini "
                       "kontrol edin. Kanal i onceden secin."));
      Serial.print(F("Starting Raw sniff. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_RAW_CAPTURE, TFT_WHITE);
    }
    // Scan stations
    else if (cmd_args.get(0) == SCANSTA_CMD) {
      if (access_points->size() < 1)
        Serial.print(F("The AP list is empty. Scan APs first with "));
      Serial.println(SCANAP_CMD);

      Serial.print(F("Starting Station scan. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_STATION, TFT_ORANGE);
    }
    // Beacon sniff
    else if (cmd_args.get(0) == SNIFF_BEACON_CMD) {
      Serial.print(F("Starting Beacon sniff. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_AP, TFT_MAGENTA);
    }
    // SAE sniff
    else if (cmd_args.get(0) == SNIFF_SAE_CMD) {
      Serial.print(F("Starting SAE Commit sniff. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_SAE_COMMIT, TFT_MAGENTA);
    }
    // Probe sniff
    else if (cmd_args.get(0) == SNIFF_PROBE_CMD) {
      Serial.print(F("Starting Probe sniff. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_PROBE, TFT_MAGENTA);
    }
    // Deauth sniff
    else if (cmd_args.get(0) == SNIFF_DEAUTH_CMD) {
      Serial.print(F("Starting Deauth sniff. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_DEAUTH, TFT_RED);
    }
    // Pwn sniff
    else if (cmd_args.get(0) == SNIFF_PWN_CMD) {
      Serial.print(F("Starting Pwnagotchi sniff. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_PWN, TFT_MAGENTA);
    }
    // PineScan sniff
    else if (cmd_args.get(0) == SNIFF_PINESCAN_CMD) {
      Serial.print(F("Starting Pinescan sniff. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_PINESCAN, TFT_MAGENTA);
    }
    // MultiSSID sniff
    else if (cmd_args.get(0) == SNIFF_MULTISSID_CMD) {
      Serial.print(F("Starting MultiSSID sniff. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_MULTISSID, TFT_MAGENTA);
    }
    // Espressif sniff
    else if (cmd_args.get(0) == SNIFF_ESP_CMD) {
      Serial.print(F("Starting Espressif device sniff. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_ESPRESSIF, TFT_MAGENTA);
    }
    // PMKID sniff
    else if (cmd_args.get(0) == SNIFF_PMKID_CMD) {
      int ch_sw = this->argSearch(&cmd_args, "-c");
      int d_sw = this->argSearch(&cmd_args, "-d"); // Deauth for pmkid
      int l_sw = this->argSearch(&cmd_args, "-l"); // Only run on list

      if (l_sw != -1) {
        if (!this->apSelected()) {
          Serial.println("You don't have any targets selected. Use " +
                         (String)SEL_CMD);
          return;
        }
      }

      if (ch_sw != -1) {
        wifi_scan_obj.set_channel = cmd_args.get(ch_sw + 1).toInt();
        wifi_scan_obj.changeChannel();
        Serial.println("Set channel: " + (String)wifi_scan_obj.set_channel);
      }

      if (d_sw == -1) {
        Serial.println("Starting PMKID sniff on channel " +
                       (String)wifi_scan_obj.set_channel + ". Stop with " +
                       (String)STOPSCAN_CMD);
        wifi_scan_obj.StartScan(WIFI_SCAN_EAPOL, TFT_VIOLET);
      } else if ((d_sw != -1) && (l_sw != -1)) {
        Serial.println(
            "Starting TARGETED PMKID sniff with deauthentication on channel " +
            (String)wifi_scan_obj.set_channel + ". Stop with " +
            (String)STOPSCAN_CMD);
        wifi_scan_obj.StartScan(WIFI_SCAN_ACTIVE_LIST_EAPOL, TFT_VIOLET);
      } else {
        Serial.println(
            "Starting PMKID sniff with deauthentication on channel " +
            (String)wifi_scan_obj.set_channel + ". Stop with " +
            (String)STOPSCAN_CMD);
        wifi_scan_obj.StartScan(WIFI_SCAN_ACTIVE_EAPOL, TFT_VIOLET);
      }
    }
    // MAC Tracking
    else if (cmd_args.get(0) == MAC_TRACK_CMD) {
      Serial.print(F("Starting MAC Tracker. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_SCAN_DETECT_FOLLOW, TFT_MAGENTA);
    }

    //// MAC Address commands    (Added by H4W9_4)
    // Generate random MAC for AP
    if (cmd_args.get(0) == MAC_CMD_A) {
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.RunGenerateRandomMac(true);
    }

    // Generate random MAC for STA
    else if (cmd_args.get(0) == MAC_CMD_B) {
// Serial.println("Setting STA MAC: " + macToString(this->sta_mac));
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.RunGenerateRandomMac(false);
    }

    // Clone MAC for AP
    else if (cmd_args.get(0) == MAC_CMD_C) {
      int ap_sw = this->argSearch(&cmd_args, "-a"); // APs

      if (ap_sw == -1) {
        Serial.println(F("You did not provide a target index"));
        return;
      }

      int ap_index = cmd_args.get(ap_sw + 1).toInt();

      if ((ap_index < 0) || (ap_index > access_points->size() - 1)) {
        Serial.println(F("The provided index was not in range"));
        return;
      }

      if (ap_sw != -1) {
#ifdef HAS_SCREEN
        display_obj.clearScreen();
        menu_function_obj.drawStatusBar();
#endif
        int filter_ap = cmd_args.get(ap_sw + 1).toInt();
        wifi_scan_obj.RunSetMac(access_points->get(filter_ap).bssid, true);
      }
    }

    // Clone MAC for STA
    else if (cmd_args.get(0) == MAC_CMD_D) {
      int cl_sw = this->argSearch(&cmd_args, "-s"); // Stations

      if (cl_sw == -1) {
        Serial.println(F("You did not provide a target index"));
        return;
      }

      int sta_index = cmd_args.get(cl_sw + 1).toInt();

      if ((sta_index < 0) || (sta_index > stations->size() - 1)) {
        Serial.println(F("The provided index was not in range"));
        return;
      }

      if (cl_sw != -1) {
#ifdef HAS_SCREEN
        display_obj.clearScreen();
        menu_function_obj.drawStatusBar();
#endif
        int filter_sta = cmd_args.get(cl_sw + 1).toInt();
        wifi_scan_obj.RunSetMac(stations->get(filter_sta).mac, false);
      }
    }
    //// End MAC Address commands    (Added by H4W9_4)

    //// WiFi attack commands
    // attack
    if (cmd_args.get(0) == ATTACK_CMD) {
      int attack_type_switch = this->argSearch(&cmd_args, "-t"); // Required
      int list_beacon_sw = this->argSearch(&cmd_args, "-l");
      int rand_beacon_sw = this->argSearch(&cmd_args, "-r");
      int ap_beacon_sw = this->argSearch(&cmd_args, "-a");
      int src_addr_sw = this->argSearch(&cmd_args, "-s");
      int dst_addr_sw = this->argSearch(&cmd_args, "-d");
      int targ_sw = this->argSearch(&cmd_args, "-c");

      if (attack_type_switch == -1) {
        Serial.println(F("You must specify an attack type"));
        return;
      } else {
        String attack_type = cmd_args.get(attack_type_switch + 1);

        // Branch on attack type
        if (attack_type == ATTACK_TYPE_DEAUTH) {
          // Default to broadcast
          if ((dst_addr_sw == -1) && (targ_sw == -1)) {
            Serial.println(F("Sending to broadcast..."));
            wifi_scan_obj.dst_mac = "ff:ff:ff:ff:ff:ff";
          }
          // Dest addr specified
          else if (dst_addr_sw != -1) {
            wifi_scan_obj.dst_mac = cmd_args.get(dst_addr_sw + 1);
            Serial.println("Sending to " + wifi_scan_obj.dst_mac + "...");
          }
          // Station list specified
          else if (targ_sw != -1)
            Serial.println(F("Sending to Station list"));

          // Source addr not specified
          if (src_addr_sw == -1) {
            if (!this->apSelected()) {
              Serial.println("You don't have any targets selected. Use " +
                             (String)SEL_CMD);
              return;
            }
#ifdef HAS_SCREEN
            display_obj.clearScreen();
            menu_function_obj.drawStatusBar();
#endif
            Serial.println("Starting Deauthentication attack. Stop with " +
                           (String)STOPSCAN_CMD);
            // Station list not specified
            if (targ_sw == -1)
              wifi_scan_obj.StartScan(WIFI_ATTACK_DEAUTH, TFT_RED);
            // Station list specified
            else {
              Serial.println(F("[Bildiri] Secilen kurbanlara Deauth (Baglanti "
                               "Koparma) saldirisi baslatiliyor..."));
              wifi_scan_obj.StartScan(WIFI_ATTACK_DEAUTH_TARGETED, TFT_ORANGE);
            }
          }
          // Source addr specified
          else {
            String src_mac_str = cmd_args.get(src_addr_sw + 1);
            sscanf(src_mac_str.c_str(), "%2hhx:%2hhx:%2hhx:%2hhx:%2hhx:%2hhx",
                   &wifi_scan_obj.src_mac[0], &wifi_scan_obj.src_mac[1],
                   &wifi_scan_obj.src_mac[2], &wifi_scan_obj.src_mac[3],
                   &wifi_scan_obj.src_mac[4], &wifi_scan_obj.src_mac[5]);

#ifdef HAS_SCREEN
            display_obj.clearScreen();
            menu_function_obj.drawStatusBar();
#endif
            Serial.println(
                "Starting Manual Deauthentication attack. Stop with " +
                (String)STOPSCAN_CMD);
            wifi_scan_obj.StartScan(WIFI_ATTACK_DEAUTH_MANUAL, TFT_RED);
          }
        } else if (attack_type == ATTACK_TYPE_BM) {
          // Attack all
          if (targ_sw == -1) {
            Serial.println(
                "Starting Bad Msg attack against all stations. Stop with " +
                (String)STOPSCAN_CMD);
#ifdef HAS_SCREEN
            display_obj.clearScreen();
            menu_function_obj.drawStatusBar();
#endif
            wifi_scan_obj.StartScan(WIFI_ATTACK_BAD_MSG, TFT_RED);
          }
          // Target clients
          else {
            Serial.println("Starting targeted Bad Msg attack. Stop with " +
                           (String)STOPSCAN_CMD);
#ifdef HAS_SCREEN
            display_obj.clearScreen();
            menu_function_obj.drawStatusBar();
#endif
            wifi_scan_obj.StartScan(WIFI_ATTACK_BAD_MSG_TARGETED, TFT_YELLOW);
          }
        } else if (attack_type == ATTACK_TYPE_S) {
          // Attack all
          if (targ_sw == -1) {
            Serial.println(
                "Starting Sleep attack against all stations. Stop with " +
                (String)STOPSCAN_CMD);
#ifdef HAS_SCREEN
            display_obj.clearScreen();
            menu_function_obj.drawStatusBar();
#endif
            wifi_scan_obj.StartScan(WIFI_ATTACK_SLEEP, TFT_RED);
          }
          // Target clients
          else {
            Serial.println("Starting targeted Sleep attack. Stop with " +
                           (String)STOPSCAN_CMD);
#ifdef HAS_SCREEN
            display_obj.clearScreen();
            menu_function_obj.drawStatusBar();
#endif
            wifi_scan_obj.StartScan(WIFI_ATTACK_SLEEP_TARGETED, TFT_MAGENTA);
          }
        } else if (attack_type == ATTACK_TYPE_BEACON) {
          // spam by list
          if (list_beacon_sw != -1) {
            if (!this->hasSSIDs()) {
              Serial.println("You don't have any SSIDs in your list. Use " +
                             (String)SSID_CMD);
              return;
            }
#ifdef HAS_SCREEN
            display_obj.clearScreen();
            menu_function_obj.drawStatusBar();
#endif
            Serial.println(F("[Bildiri] Secili aglari klonlama (Evil Twin / "
                             "Beacon) baslatiliyor..."));
            Serial.println("Starting Beacon list spam. Stop with " +
                           (String)STOPSCAN_CMD);
            wifi_scan_obj.StartScan(WIFI_ATTACK_BEACON_LIST, TFT_RED);
          }
          // spam with random
          else if (rand_beacon_sw != -1) {
#ifdef HAS_SCREEN
            display_obj.clearScreen();
            menu_function_obj.drawStatusBar();
#endif
            Serial.println(F("[Bildiri] Rastgele isimlerle sahte ag (Beacon) "
                             "spami baslatiliyor..."));
            Serial.println("Starting random Beacon spam. Stop with " +
                           (String)STOPSCAN_CMD);
            wifi_scan_obj.StartScan(WIFI_ATTACK_BEACON_SPAM, TFT_ORANGE);
          }
          // Spam from AP list
          else if (ap_beacon_sw != -1) {
            if (!this->apSelected()) {
              Serial.println("You don't have any targets selected. Use " +
                             (String)SEL_CMD);
              return;
            }
#ifdef HAS_SCREEN
            display_obj.clearScreen();
            menu_function_obj.drawStatusBar();
#endif
            Serial.println(F("[Bildiri] Hedef agin tum ismini klonlayarak Evil "
                             "Twin (Beacon Spam) baslatiliyor..."));
            Serial.println("Starting Targeted AP Beacon spam. Stop with " +
                           (String)STOPSCAN_CMD);
            wifi_scan_obj.StartScan(WIFI_ATTACK_AP_SPAM, TFT_MAGENTA);
          } else {
            Serial.println("You did not specify a beacon attack type");
          }
        } else if (attack_type == ATTACK_TYPE_PROBE) {
          if (!this->apSelected()) {
            Serial.println("You don't have any targets selected. Use " +
                           (String)SEL_CMD);
            return;
          }
          Serial.println("Starting Probe spam. Stop with " +
                         (String)STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(WIFI_ATTACK_AUTH, TFT_RED);
        } else if (attack_type == ATTACK_TYPE_RR) {
          Serial.println("Starting Rick Roll Beacon spam. Stop with " +
                         (String)STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(WIFI_ATTACK_RICK_ROLL, TFT_YELLOW);
        } else if (attack_type == ATTACK_TYPE_FUNNY) {
          Serial.print(F("Starting Funny SSID Beacon spam. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(WIFI_ATTACK_FUNNY_BEACON, TFT_CYAN);
        } else if (attack_type == ATTACK_TYPE_SAE) {
          Serial.print(F("Starting SAE Commit spam. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(WIFI_ATTACK_SAE_COMMIT, TFT_CYAN);
        } else if (attack_type == ATTACK_TYPE_CSA) {
          Serial.print(
              F("Starting Channel Switch Announcement attack. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(WIFI_ATTACK_CSA, TFT_CYAN);
        } else if (attack_type == ATTACK_TYPE_QUIET) {
          Serial.print(F("Starting Quite Time attack. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(WIFI_ATTACK_QUIET, TFT_CYAN);
        } else {
          Serial.println(F("Attack type not properly defined"));
          return;
        }
      }
    }

    //// Bluetooth scan/attack commands
    // Bluetooth scan
    if (cmd_args.get(0) == BT_SNIFF_CMD) {
#ifdef HAS_BT
      int bt_type_sw = this->argSearch(&cmd_args, "-t");

      // Specifying type of bluetooth sniff
      if (bt_type_sw != -1) {
        String bt_type = cmd_args.get(bt_type_sw + 1);

        bt_type.toLowerCase();

        // Airtag sniff
        if (bt_type == "airtag") {
          Serial.print(F("Starting Airtag sniff. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_SCAN_AIRTAG, TFT_WHITE);
        } else if (bt_type == "flipper") {
          Serial.print(F("Starting Flipper sniff. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_SCAN_FLIPPER, TFT_ORANGE);
        } else if (bt_type == "flock") {
          Serial.print(F("Starting Flock sniff. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_SCAN_FLOCK, TFT_ORANGE);
        } else if (bt_type == "meta") {
          Serial.print(F("Starting Meta sniff. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_SCAN_RAYBAN, TFT_ORANGE);
        }
      }
      // General bluetooth sniff
      else {
        Serial.println(F(
            "[Bildiri] Cevredeki Bluetooth cihazlar taraniyor (Sniffing)..."));
        Serial.print(F("Starting Bluetooth scan. Stop with "));
        Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
        display_obj.clearScreen();
        menu_function_obj.drawStatusBar();
#endif
        wifi_scan_obj.StartScan(BT_SCAN_ALL, TFT_GREEN);
      }
#else
      Serial.println(F("Bluetooth not supported"));
#endif
    } else if (cmd_args.get(0) == BT_SPOOFAT_CMD) {
      int at_sw = this->argSearch(&cmd_args, "-t");
      if (at_sw != -1) {
#ifdef HAS_BT
        int target_mac = cmd_args.get(at_sw + 1).toInt();
        if (target_mac < airtags->size()) {
          for (int i = 0; i < airtags->size(); i++) {
            AirTag at = airtags->get(i);
            if (i == target_mac)
              at.selected = true;
            else
              at.selected = false;
            airtags->set(i, at);
          }
          Serial.print(F("Spoofing Airtag: "));
          Serial.println(airtags->get(target_mac).mac);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_SPOOF_AIRTAG, TFT_WHITE);
        } else {
          Serial.print(F("Provided index is out of range: "));
          Serial.println(target_mac);
          return;
        }
#endif
      }
    } else if (cmd_args.get(0) == BT_SPAM_CMD) {
      int bt_type_sw = this->argSearch(&cmd_args, "-t");
      if (bt_type_sw != -1) {
        String bt_type = cmd_args.get(bt_type_sw + 1);

        if (bt_type == "apple") {
#ifdef HAS_BT
          Serial.println(
              F("[Bildiri] Apple cihazlara Bluetooth Spam baslatiliyor..."));
          Serial.print(F("Starting Sour Apple attack. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_ATTACK_SOUR_APPLE, TFT_GREEN);
#else
          Serial.println(F("Bluetooth not supported"));
#endif
        } else if (bt_type == "windows") {
#ifdef HAS_BT
          Serial.println(
              F("[Bildiri] Windows cihazlara Bluetooth Spam baslatiliyor..."));
          Serial.print(F("Starting Swiftpair Spam attack. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_ATTACK_SWIFTPAIR_SPAM, TFT_CYAN);
#else
          Serial.println(F("Bluetooth not supported"));
#endif
        } else if (bt_type == "samsung") {
#ifdef HAS_BT
          Serial.println(
              F("[Bildiri] Samsung cihazlara Bluetooth Spam baslatiliyor..."));
          Serial.print(F("Starting Samsung Spam attack. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_ATTACK_SAMSUNG_SPAM, TFT_CYAN);
#else
          Serial.println(F("Bluetooth not supported"));
#endif
        } else if (bt_type == "google") {
#ifdef HAS_BT
          Serial.print(F("Starting Google Spam attack. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_ATTACK_GOOGLE_SPAM, TFT_CYAN);
#else
          Serial.println(F("Bluetooth not supported"));
#endif
        } else if (bt_type == "flipper") {
#ifdef HAS_BT
          Serial.print(F("Starting Flipper Spam attack. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_ATTACK_FLIPPER_SPAM, TFT_ORANGE);
#else
          Serial.println(F("Bluetooth not supported"));
#endif
        } else if (bt_type == "all") {
#ifdef HAS_BT
          Serial.println(F(
              "[Bildiri] Tum markalara karma Bluetooth Spam baslatiliyor..."));
          Serial.print(F("Starting BT Spam All attack. Stop with "));
          Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(BT_ATTACK_SPAM_ALL, TFT_MAGENTA);
#else
          Serial.println(F("Bluetooth not supported"));
#endif
        } else {
          Serial.println(F("You did not specify a correct spam type"));
        }
      }
    }
    // Wardrive
    else if (cmd_args.get(0) == BT_WARDRIVE_CMD) {
#ifdef HAS_BT
#ifdef HAS_GPS
      if (gps_obj.getGpsModuleStatus()) {

        Serial.print(F("Starting BT Wardrive. Stop with "));
        Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
        display_obj.clearScreen();
        menu_function_obj.drawStatusBar();
#endif
        wifi_scan_obj.StartScan(BT_SCAN_WAR_DRIVE, TFT_GREEN);
      } else
        Serial.println(F("GPS Module not detected"));
#else
      Serial.println(F("GPS not supported"));
#endif
#else
      Serial.println(F("Bluetooth not supported"));
#endif

    }
    // Bluetooth CC Skimmer scan
    else if (cmd_args.get(0) == BT_SKIM_CMD) {
#ifdef HAS_BT
      Serial.println(
          F("[Bildiri] Cevre kart kopyalayici (Skimmer) cihazlar araniyor..."));
      Serial.print(F("Starting Bluetooth CC Skimmer scan. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(BT_SCAN_SKIMMERS, TFT_MAGENTA);
#else
      Serial.println(F("Bluetooth not supported"));
#endif
    }

    else if (cmd_args.get(0) == PASSIVE_CMD) {
      Serial.println(F("[Bildiri] Pasif Cihaz Kesfi baslatiliyor..."));
      Serial.println(
          F("Cihazlara herhangi bir paket gonderilmez, sadece hava dinlenir."));
      Serial.print(F("Durdurmak icin: "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.RunPassiveDiscovery(WIFI_SCAN_PASSIVE_DISCOVERY, TFT_CYAN);
    }

    // Update command
    if (cmd_args.get(0) == UPDATE_CMD) {
      // int w_sw = this->argSearch(&cmd_args, "-w"); // Web update
      int sd_sw = this->argSearch(&cmd_args, "-s"); // SD Update

      // Update via OTA
      // if (w_sw != -1) {
      //  Serial.println("Starting Marauder OTA Update. Stop with " +
      //  (String)STOPSCAN_CMD); wifi_scan_obj.currentScanMode = OTA_UPDATE;
      // #ifdef HAS_SCREEN
      //  menu_function_obj.changeMenu(menu_function_obj.updateMenu);
      // #endif
      //  web_obj.setupOTAupdate();
      //}
      // Update via SD
      if (sd_sw != -1) {
#ifdef HAS_SD
        if (!sd_obj.supported) {
          Serial.println(
              F("SD card is not connected. Cannot perform SD Update"));
          return;
        }
        wifi_scan_obj.currentScanMode = OTA_UPDATE;
        sd_obj.runUpdate();
#else
        Serial.println(F("SD card support disabled. Cannot perform SD Update"));
        return;
#endif
      }
    }
  }

  if (wifi_scan_obj.wifi_connected) {
    // Ping Scan
    if (cmd_args.get(0) == PING_CMD) {
      Serial.print(F("Starting Ping Scan. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_PING_SCAN, TFT_GREEN);
    }

    if (cmd_args.get(0) == ARP_SCAN_CMD) {
#ifndef HAS_DUAL_BAND
      Serial.println(
          F("[Bildiri] Agdaki cihazlarin IP ve MAC adresleri taraniyor..."));
      Serial.print(F("Starting ARP Scan. Stop with "));
      Serial.println(STOPSCAN_CMD);
#ifdef HAS_SCREEN
      display_obj.clearScreen();
      menu_function_obj.drawStatusBar();
#endif
      wifi_scan_obj.StartScan(WIFI_ARP_SCAN, TFT_CYAN);
#endif
    }

    // GPS POI
    if (cmd_args.get(0) == GPS_POI_CMD) {
#ifdef HAS_GPS
      int start_sw = this->argSearch(&cmd_args, "-s");
      int mark_sw = this->argSearch(&cmd_args, "-m");
      int end_sw = this->argSearch(&cmd_args, "-e");

      if (start_sw != -1) {
        wifi_scan_obj.StartScan(GPS_POI, TFT_CYAN);
        wifi_scan_obj.currentScanMode = WIFI_SCAN_OFF;
#ifdef HAS_SCREEN
        menu_function_obj.changeMenu(&menu_function_obj.gpsPOIMenu);
#endif
      } else if (mark_sw != -1) {
        wifi_scan_obj.currentScanMode = GPS_POI;
#ifdef HAS_SCREEN
        display_obj.tft.setCursor(0, TFT_HEIGHT / 2);
        display_obj.clearScreen();
#endif
        if (wifi_scan_obj.RunGPSInfo(true, false, true)) {
#ifdef HAS_SCREEN
          display_obj.showCenterText("POI Logged", TFT_HEIGHT / 2);
#endif
        } else {
#ifdef HAS_SCREEN
          display_obj.showCenterText("POI Log Failed", TFT_HEIGHT / 2);
#endif
        }
        wifi_scan_obj.currentScanMode = WIFI_SCAN_OFF;
        delay(2000);
// wifi_scan_obj.StartScan(WIFI_SCAN_OFF);
#ifdef HAS_SCREEN
        menu_function_obj.changeMenu(&menu_function_obj.gpsPOIMenu);
#endif
      } else if (end_sw != -1) {
        wifi_scan_obj.currentScanMode = GPS_POI;
        wifi_scan_obj.StartScan(WIFI_SCAN_OFF);
#ifdef HAS_SCREEN
        menu_function_obj.changeMenu(menu_function_obj.gpsPOIMenu.parentMenu);
#endif
      }
#else
      Serial.println(F("Your hardware doesn't have GPS, silly"));
      return;
#endif
    }

    // Port Scan
    if (cmd_args.get(0) == PORT_SCAN_CMD) {
      int all_sw = this->argSearch(&cmd_args, "-a");
      int ip_sw = this->argSearch(&cmd_args, "-t");
      int port_sw = this->argSearch(&cmd_args, "-s");

      // Check they specified ip index
      if (ip_sw != -1) {
        int ip_index = cmd_args.get(ip_sw + 1).toInt();

        // Check provided index is in list
        if (ip_index < ipList->size()) {

          // Full port scan
          if (all_sw != -1) {
            Serial.println("Selected: " + ipList->get(ip_index).toString());
            wifi_scan_obj.current_scan_ip = ipList->get(ip_index);
#ifdef HAS_SCREEN
            display_obj.clearScreen();
            menu_function_obj.drawStatusBar();
#endif
            wifi_scan_obj.StartScan(WIFI_PORT_SCAN_ALL, TFT_BLUE);
          }
        } else {
          Serial.println(F("The IP index specified is out of range"));
          return;
        }
      } else if (port_sw != -1) {
        String port_name = cmd_args.get(port_sw + 1);
        port_name.toUpperCase();
        uint8_t target_mode = 0;
        if (port_name == "SSH")
          target_mode = WIFI_SCAN_SSH;
        else if (port_name == "TELNET")
          target_mode = WIFI_SCAN_TELNET;
        else if (port_name == "DNS")
          target_mode = WIFI_SCAN_DNS;
        else if (port_name == "HTTP")
          target_mode = WIFI_SCAN_HTTP;
        else if (port_name == "SMTP")
          target_mode = WIFI_SCAN_SMTP;
        else if (port_name == "HTTPS")
          target_mode = WIFI_SCAN_HTTPS;
        else if (port_name == "RDP")
          target_mode = WIFI_SCAN_RDP;

        if (target_mode != 0) {
          Serial.println(
              F("[Bildiri] Secilen cihazin acik portlari arastiriliyor..."));
          Serial.print(F("Starting port scan for service "));
          Serial.println(port_name);
#ifdef HAS_SCREEN
          display_obj.clearScreen();
          menu_function_obj.drawStatusBar();
#endif
          wifi_scan_obj.StartScan(target_mode, TFT_CYAN);
        } else {
          Serial.println(F("You did not specify a supported service"));
          return;
        }
      } else {
        Serial.println(F("You did not specify an IP index"));
        return;
      }
    }
  }

  int count_selected = 0;
  //// WiFi aux commands
  // List access points
  if (cmd_args.get(0) == LIST_AP_CMD) {
    int ap_sw = this->argSearch(&cmd_args, "-a");
    int ss_sw = this->argSearch(&cmd_args, "-s");
    int cl_sw = this->argSearch(&cmd_args, "-c");
    int at_sw = this->argSearch(&cmd_args, "-t");
    int ip_sw = this->argSearch(&cmd_args, "-i");
    int pr_sw = this->argSearch(&cmd_args, "-p");

    // List APs
    if (ap_sw != -1) {
      Serial.println(F("[Bildiri] Ag tarama sonuclari listeleniyor..."));
      for (int i = 0; i < access_points->size(); i++) {
        if (access_points->get(i).selected) {
          Serial.println("[" + (String)i +
                         "][CH:" + (String)access_points->get(i).channel +
                         "] " + access_points->get(i).essid + " " +
                         (String)access_points->get(i).rssi + " (selected)");
          count_selected += 1;
        } else
          Serial.println("[" + (String)i +
                         "][CH:" + (String)access_points->get(i).channel +
                         "] " + access_points->get(i).essid + " " +
                         (String)access_points->get(i).rssi);
      }
      this->showCounts(count_selected);
    }
    // List IPs
    else if (ip_sw != -1) {
      for (int i = 0; i < ipList->size(); i++) {
        Serial.println("[" + (String)i + "] " + ipList->get(i).toString());
      }
    }
    // List Probes
    else if (pr_sw != -1) {
      for (int i = 0; i < probe_req_ssids->size(); i++) {
        Serial.println("[" + (String)i + "] " + probe_req_ssids->get(i).essid);
      }
    }
    // List SSIDs
    else if (ss_sw != -1) {
      for (int i = 0; i < ssids->size(); i++) {
        if (ssids->get(i).selected) {
          Serial.println("[" + (String)i + "] " + ssids->get(i).essid +
                         " (selected)");
          count_selected += 1;
        } else
          Serial.println("[" + (String)i + "] " + ssids->get(i).essid);
      }
      this->showCounts(count_selected);
    }
    // List Stations
    else if (cl_sw != -1) {
      Serial.println(F("[Bildiri] Istemciler/Cihazlar listeleniyor..."));
      char sta_mac[] = "00:00:00:00:00:00";
      for (int x = 0; x < access_points->size(); x++) {
        Serial.println("[" + (String)x + "] " + access_points->get(x).essid +
                       " " + (String)access_points->get(x).rssi + ":");
        for (int i = 0; i < access_points->get(x).stations->size(); i++) {
          wifi_scan_obj.getMAC(
              sta_mac,
              stations->get(access_points->get(x).stations->get(i)).mac, 0);
          if (stations->get(access_points->get(x).stations->get(i)).selected) {
            Serial.print("  [" +
                         (String)access_points->get(x).stations->get(i) + "] ");
            Serial.print(sta_mac);
            Serial.println(F(" (selected)"));
            count_selected += 1;
          } else {
            Serial.print("  [" +
                         (String)access_points->get(x).stations->get(i) + "] ");
            Serial.println(sta_mac);
          }
        }
      }
      this->showCounts(count_selected);
    }
    // List airtags
    else if (at_sw != -1) {
      for (int i = 0; i < airtags->size(); i++) {
        Serial.println("[" + (String)i + "]MAC: " + airtags->get(i).mac);
      }
    } else {
      Serial.println(F("You did not specify which list to show"));
      return;
    }
  } else if (cmd_args.get(0) == INFO_CMD) {
    int ap_sw = this->argSearch(&cmd_args, "-a");

    if (ap_sw != -1) {
      int filter_ap = cmd_args.get(ap_sw + 1).toInt();
      wifi_scan_obj.RunAPInfo(filter_ap, false);
    } else {
      wifi_scan_obj.currentScanMode = SHOW_INFO;
#ifdef HAS_SCREEN
      menu_function_obj.changeMenu(&menu_function_obj.infoMenu);
#endif
      wifi_scan_obj.RunInfo();
    }
  } else if (cmd_args.get(0) == JOIN_CMD) {
    int ap_sw = this->argSearch(&cmd_args, "-a");
    int pw_sw = this->argSearch(&cmd_args, "-p");
    int s_sw = this->argSearch(&cmd_args, "-s");

    if ((ap_sw != -1) && (pw_sw != -1)) {
      int index = cmd_args.get(ap_sw + 1).toInt();
      String password = cmd_args.get(pw_sw + 1);
      Serial.println(
          F("[Bildiri] Belirtilen parolayla hedef aga baglaniliyor..."));
      Serial.println("Using SSID: " + (String)access_points->get(index).essid +
                     " Password: " + (String)password);
      // wifi_scan_obj.currentScanMode = LV_JOIN_WIFI;
      // wifi_scan_obj.StartScan(LV_JOIN_WIFI, TFT_YELLOW);
      wifi_scan_obj.joinWiFi(access_points->get(index).essid, password, false);
#ifdef HAS_SCREEN
#ifdef HAS_MINI_KB
      menu_function_obj.changeMenu(menu_function_obj.current_menu);
#endif
#endif
    } else if (s_sw != -1) {
      String ssid = settings_obj.loadSetting<String>("ClientSSID");
      String pw = settings_obj.loadSetting<String>("ClientPW");

      if ((ssid != "") && (pw != "")) {
        wifi_scan_obj.joinWiFi(ssid, pw, false);
#ifdef HAS_SCREEN
        menu_function_obj.changeMenu(menu_function_obj.current_menu);
#endif
      } else {
        Serial.println(F("There are no saved WiFi credentials"));
      }
    } else {
      Serial.println(F("You did not provide the proper args"));
      return;
    }
  }
  // Select access points or stations
  else if (cmd_args.get(0) == SEL_CMD) {
    // Get switches
    int ap_sw = this->argSearch(&cmd_args, "-a");
    int ss_sw = this->argSearch(&cmd_args, "-s");
    int cl_sw = this->argSearch(&cmd_args, "-c");
    int filter_sw = this->argSearch(&cmd_args, "-f");

    count_selected = 0;
    int count_unselected = 0;
    // select Access points
    if (ap_sw != -1) {

      // If the filters parameter was specified
      if (filter_sw != -1) {
        String filter_ap = cmd_args.get(filter_sw + 1);
        this->filterAccessPoints(filter_ap);
      } else {
        // Get list of indices
        LinkedList<String> ap_index =
            this->parseCommand(cmd_args.get(ap_sw + 1), ",");

        // Select ALL APs
        if (cmd_args.get(ap_sw + 1) == "all") {
          Serial.println(F("[Bildiri] Tum hedefler kurban olarak secildi."));
          for (int i = 0; i < access_points->size(); i++) {
            if (access_points->get(i).selected) {
              // Unselect "selected" ap
              AccessPoint new_ap = access_points->get(i);
              new_ap.selected = false;
              access_points->set(i, new_ap);
              count_unselected += 1;
            } else {
              // Select "unselected" ap
              AccessPoint new_ap = access_points->get(i);
              new_ap.selected = true;
              access_points->set(i, new_ap);
              count_selected += 1;
            }
          }
          this->showCounts(count_selected, count_unselected);
        }
        // Select specific APs
        else {
          Serial.println(
              F("[Bildiri] Belirtilen hedefler kurban olarak seciliyor..."));
          // Mark APs as selected
          for (int i = 0; i < ap_index.size(); i++) {
            int index = ap_index.get(i).toInt();
            if (!this->inRange(access_points->size(), index)) {
              Serial.print(F("Index not in range: "));
              Serial.println(index);
              continue;
            }
            if (access_points->get(index).selected) {
              // Unselect "selected" ap
              AccessPoint new_ap = access_points->get(index);
              new_ap.selected = false;
              access_points->set(index, new_ap);
              count_unselected += 1;
            } else {
              // Select "unselected" ap
              AccessPoint new_ap = access_points->get(index);
              new_ap.selected = true;
              access_points->set(index, new_ap);
              count_selected += 1;
            }
          }
          this->showCounts(count_selected, count_unselected);
        }
      }
    } else if (cl_sw != -1) {
      LinkedList<String> sta_index =
          this->parseCommand(cmd_args.get(cl_sw + 1), ",");

      // Select all Stations
      if (cmd_args.get(cl_sw + 1) == "all") {
        for (int i = 0; i < stations->size(); i++) {
          if (stations->get(i).selected) {
            // Unselect "selected" ap
            Station new_sta = stations->get(i);
            new_sta.selected = false;
            stations->set(i, new_sta);
            count_unselected += 1;
          } else {
            // Select "unselected" ap
            Station new_sta = stations->get(i);
            new_sta.selected = true;
            stations->set(i, new_sta);
            count_selected += 1;
          }
        }
        this->showCounts(count_selected, count_unselected);
      }
      // Select specific Stations
      else {
        // Mark Stations as selected
        for (int i = 0; i < sta_index.size(); i++) {
          int index = sta_index.get(i).toInt();
          if (!this->inRange(stations->size(), index)) {
            Serial.print(F("Index not in range: "));
            Serial.println(index);
            continue;
          }
          if (stations->get(index).selected) {
            // Unselect "selected" ap
            Station new_sta = stations->get(index);
            new_sta.selected = false;
            stations->set(index, new_sta);
            count_unselected += 1;
          } else {
            // Select "unselected" ap
            Station new_sta = stations->get(index);
            new_sta.selected = true;
            stations->set(index, new_sta);
            count_selected += 1;
          }
        }
        this->showCounts(count_selected, count_unselected);
      }
    }
    // select ssids
    else if (ss_sw != -1) {
      // Get list of indices
      LinkedList<String> ss_index =
          this->parseCommand(cmd_args.get(ss_sw + 1), ",");

      // Select ALL SSIDs
      if (cmd_args.get(ss_sw + 1) == "all") {
        for (int i = 0; i < ssids->size(); i++) {
          if (ssids->get(i).selected) {
            ssid new_ssid = ssids->get(i);
            new_ssid.selected = false;
            ssids->set(i, new_ssid);
            count_unselected += 1;
          } else {
            ssid new_ssid = ssids->get(i);
            new_ssid.selected = true;
            ssids->set(i, new_ssid);
            count_selected += 1;
          }
        }
      } else {
        // Mark SSIDs as selected
        for (int i = 0; i < ss_index.size(); i++) {
          int index = ss_index.get(i).toInt();
          if (!this->inRange(ssids->size(), index)) {
            Serial.print(F("Index not in range: "));
            Serial.println(index);
            continue;
          }
          if (ssids->get(index).selected) {
            ssid new_ssid = ssids->get(index);
            new_ssid.selected = false;
            ssids->set(index, new_ssid);
            count_unselected += 1;
          } else {
            ssid new_ssid = ssids->get(index);
            new_ssid.selected = true;
            ssids->set(index, new_ssid);
            count_selected += 1;
          }
        }
      }
      this->showCounts(count_selected, count_unselected);
    } else {
      Serial.println(F("You did not specify which list to select from"));
      return;
    }
  } else if (cmd_args.get(0) == SAVE_CMD) {
    int ap_sw = this->argSearch(&cmd_args, "-a");
    int st_sw = this->argSearch(&cmd_args, "-s");

    if (ap_sw != -1) {
#ifdef HAS_SCREEN
      menu_function_obj.changeMenu(&menu_function_obj.saveAPsMenu);
#endif
      wifi_scan_obj.RunSaveAPList(true);
    } else if (st_sw != -1) {
#ifdef HAS_SCREEN
      menu_function_obj.changeMenu(&menu_function_obj.saveSSIDsMenu);
#endif
      wifi_scan_obj.RunSaveSSIDList(true);
    }
  } else if (cmd_args.get(0) == LOAD_CMD) {
    int ap_sw = this->argSearch(&cmd_args, "-a");
    int st_sw = this->argSearch(&cmd_args, "-s");

    if (ap_sw != -1) {
#ifdef HAS_SCREEN
      menu_function_obj.changeMenu(&menu_function_obj.loadAPsMenu);
#endif
      wifi_scan_obj.RunLoadAPList();
    } else if (st_sw != -1) {
#ifdef HAS_SCREEN
      menu_function_obj.changeMenu(&menu_function_obj.loadSSIDsMenu);
#endif
      wifi_scan_obj.RunLoadSSIDList();
    }
  }

  // Add AP or station manually
  else if (cmd_args.get(0) == ADD_CMD) {
    int ap_sw = this->argSearch(&cmd_args, "-a");
    int sta_sw = this->argSearch(&cmd_args, "-c");
    int bssid_sw = this->argSearch(&cmd_args, "-b");

    if (ap_sw != -1) {
      // add -a -b <mac> [-ch <channel>] [-e <ssid>]
      if (bssid_sw == -1 || !this->checkValueExists(&cmd_args, bssid_sw)) {
        Serial.println(F("BSSID required: add -a -b <mac>"));
        return;
      }

      String mac_str = cmd_args.get(bssid_sw + 1);
      uint8_t mac[6];
      if (sscanf(mac_str.c_str(), "%2hhx:%2hhx:%2hhx:%2hhx:%2hhx:%2hhx",
                 &mac[0], &mac[1], &mac[2], &mac[3], &mac[4], &mac[5]) != 6) {
        Serial.println(F("Invalid MAC address format: use XX:XX:XX:XX:XX:XX"));
        return;
      }

      // Duplicate check
      for (int i = 0; i < access_points->size(); i++) {
        bool match = true;
        for (int x = 0; x < 6; x++) {
          if (mac[x] != access_points->get(i).bssid[x]) {
            match = false;
            break;
          }
        }
        if (match) {
          Serial.print(F("AP already exists at ["));
          Serial.print(i);
          Serial.print(F("]: "));
          Serial.println(access_points->get(i).essid);
          return;
        }
      }

      int ch_sw = this->argSearch(&cmd_args, "-ch");
      uint8_t channel = 1;
      if (ch_sw != -1 && this->checkValueExists(&cmd_args, ch_sw))
        channel = cmd_args.get(ch_sw + 1).toInt();

      int essid_sw = this->argSearch(&cmd_args, "-e");
      String essid = mac_str;
      if (essid_sw != -1 && this->checkValueExists(&cmd_args, essid_sw))
        essid = cmd_args.get(essid_sw + 1);

      AccessPoint ap;
      ap.essid = essid;
      ap.channel = channel;
      memcpy(ap.bssid, mac, 6);
      ap.selected = true;
      ap.stations = new LinkedList<uint16_t>();
      ap.beacon[0] = 0;
      ap.beacon[1] = 0;
      ap.rssi = -127;
      ap.packets = 0;
      ap.sec = 0;
      ap.wps = false;
      ap.man = "";
      ap.has_msg_1 = false;
      ap.has_msg_2 = false;
      ap.has_msg_3 = false;
      ap.has_msg_4 = false;

      access_points->add(ap);

      Serial.print(F("Added AP ["));
      Serial.print(access_points->size() - 1);
      Serial.print(F("][CH:"));
      Serial.print(channel);
      Serial.print(F("] "));
      Serial.print(essid);
      Serial.println(F(" (selected)"));
    } else if (sta_sw != -1) {
      // add -c -b <mac> -ap <ap_index>
      if (bssid_sw == -1 || !this->checkValueExists(&cmd_args, bssid_sw)) {
        Serial.println(F("MAC required: add -c -b <mac> -ap <index>"));
        return;
      }

      int ap_idx_sw = this->argSearch(&cmd_args, "-ap");
      if (ap_idx_sw == -1 || !this->checkValueExists(&cmd_args, ap_idx_sw)) {
        Serial.println(F("AP index required: add -c -b <mac> -ap <index>"));
        return;
      }

      int ap_index = cmd_args.get(ap_idx_sw + 1).toInt();
      if (!this->inRange(access_points->size(), ap_index)) {
        Serial.print(F("AP index not in range: "));
        Serial.println(ap_index);
        return;
      }

      String mac_str = cmd_args.get(bssid_sw + 1);
      uint8_t mac[6];
      if (sscanf(mac_str.c_str(), "%2hhx:%2hhx:%2hhx:%2hhx:%2hhx:%2hhx",
                 &mac[0], &mac[1], &mac[2], &mac[3], &mac[4], &mac[5]) != 6) {
        Serial.println(F("Invalid MAC address format: use XX:XX:XX:XX:XX:XX"));
        return;
      }

      // Duplicate check
      for (int i = 0; i < stations->size(); i++) {
        bool match = true;
        for (int x = 0; x < 6; x++) {
          if (mac[x] != stations->get(i).mac[x]) {
            match = false;
            break;
          }
        }
        if (match) {
          Serial.print(F("Station already exists at ["));
          Serial.print(i);
          Serial.println(F("]"));
          return;
        }
      }

      Station sta;
      memcpy(sta.mac, mac, 6);
      sta.selected = true;
      sta.packets = 0;
      sta.ap = ap_index;

      stations->add(sta);

      // Link station to AP
      AccessPoint ap = access_points->get(ap_index);
      ap.stations->add(stations->size() - 1);
      access_points->set(ap_index, ap);

      Serial.print(F("Added station ["));
      Serial.print(stations->size() - 1);
      Serial.print(F("] -> AP ["));
      Serial.print(ap_index);
      Serial.print(F("] "));
      Serial.print(ap.essid);
      Serial.println(F(" (selected)"));
    } else {
      Serial.println(
          F("Usage: add -a -b <mac> or add -c -b <mac> -ap <index>"));
    }
  }

  // SSID stuff
  else if (cmd_args.get(0) == SSID_CMD) {
    int add_sw = this->argSearch(&cmd_args, "-a");
    int gen_sw = this->argSearch(&cmd_args, "-g");
    int spc_sw = this->argSearch(&cmd_args, "-n");
    int rem_sw = this->argSearch(&cmd_args, "-r");

    // Add ssid
    if (add_sw != -1) {
      // Generate random
      if (gen_sw != -1) {
        int gen_count = cmd_args.get(gen_sw + 1).toInt();
        wifi_scan_obj.generateSSIDs(gen_count);
      }
      // Add specific
      else if (spc_sw != -1) {
        String essid = cmd_args.get(spc_sw + 1);
        wifi_scan_obj.addSSID(essid);
      } else {
        Serial.println(F("You did not specify how to add SSIDs"));
      }
    }
    // Remove SSID
    else if (rem_sw != -1) {
      int index = cmd_args.get(rem_sw + 1).toInt();
      if (!this->inRange(ssids->size(), index)) {
        Serial.print(F("Index not in range: "));
        Serial.println(index);
        return;
      }
      ssids->remove(index);
    } else {
      Serial.println(F("You did not specify whether to add or remove SSIDs"));
      return;
    }
  }
}