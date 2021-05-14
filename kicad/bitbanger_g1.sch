EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "BITBANGER G1"
Date "2021-05-11"
Rev ""
Comp ""
Comment1 "I might be mistaken on the pinout for the rotary encoder"
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Device:R_POT RV1
U 1 1 609A78B5
P 6900 3600
F 0 "RV1" H 6830 3646 50  0000 R CNN
F 1 "10k" H 6830 3555 50  0000 R CNN
F 2 "" H 6900 3600 50  0001 C CNN
F 3 "~" H 6900 3600 50  0001 C CNN
	1    6900 3600
	1    0    0    -1  
$EndComp
$Comp
L MCU_Module:Arduino_Nano_v3.x Nano
U 1 1 609A5C20
P 6050 3550
F 0 "Nano" H 6050 2461 50  0000 C CNN
F 1 "Arduino_Nano_v3.x" H 6050 2370 50  0000 C CNN
F 2 "Module:Arduino_Nano" H 6050 3550 50  0001 C CIN
F 3 "http://www.mouser.com/pdfdocs/Gravitech_Arduino_Nano3_0.pdf" H 6050 3550 50  0001 C CNN
	1    6050 3550
	1    0    0    -1  
$EndComp
$Comp
L Sensor_Motion:MPU-6050 U1
U 1 1 609A95C9
P 4350 3500
F 0 "U1" H 4350 2711 50  0000 C CNN
F 1 "MPU-6050" H 4350 2620 50  0000 C CNN
F 2 "Sensor_Motion:InvenSense_QFN-24_4x4mm_P0.5mm" H 4350 2700 50  0001 C CNN
F 3 "https://store.invensense.com/datasheets/invensense/MPU-6050_DataSheet_V3%204.pdf" H 4350 3350 50  0001 C CNN
	1    4350 3500
	1    0    0    -1  
$EndComp
$Comp
L Device:Speaker Output
U 1 1 609AF88C
P 7350 4900
F 0 "Output" H 7520 4896 50  0000 L CNN
F 1 "Speaker" H 7520 4805 50  0000 L CNN
F 2 "" H 7350 4700 50  0001 C CNN
F 3 "~" H 7340 4850 50  0001 C CNN
	1    7350 4900
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D1
U 1 1 609AFFE4
P 6900 5000
F 0 "D1" H 6893 5217 50  0000 C CNN
F 1 "LED" H 6893 5126 50  0000 C CNN
F 2 "" H 6900 5000 50  0001 C CNN
F 3 "~" H 6900 5000 50  0001 C CNN
	1    6900 5000
	1    0    0    -1  
$EndComp
Wire Wire Line
	7150 5000 7050 5000
Wire Wire Line
	7150 4900 5400 4900
Wire Wire Line
	5400 4900 5400 3450
Wire Wire Line
	5400 3450 5550 3450
Wire Wire Line
	6750 5000 6150 5000
Wire Wire Line
	6250 2550 6900 2550
Wire Wire Line
	6150 5000 6150 4650
Connection ~ 6150 4550
Wire Wire Line
	7050 3850 6750 3850
Wire Wire Line
	6750 3850 6750 3750
Wire Wire Line
	6750 3750 6550 3750
Wire Wire Line
	7050 3600 7050 3850
Wire Wire Line
	6900 3750 6900 4550
Wire Wire Line
	7600 2800 7600 2400
Wire Wire Line
	7600 2400 6250 2400
Wire Wire Line
	6250 2400 6250 2500
Connection ~ 6250 2550
Wire Wire Line
	6900 2550 6900 3450
$Comp
L Device:Rotary_Encoder_Switch SW1
U 1 1 609AEEC5
P 7300 2900
F 0 "SW1" H 7300 3267 50  0000 C CNN
F 1 "Rotary_Encoder_Switch" H 7300 3176 50  0000 C CNN
F 2 "" H 7150 3060 50  0000 C CNN
F 3 "~" H 7300 3160 50  0001 C CNN
	1    7300 2900
	1    0    0    -1  
$EndComp
Text Label 7650 2800 0    50   ~ 0
A=SW
Text Label 7650 2900 0    50   ~ 0
C=DT
Text Label 7650 3000 0    50   ~ 0
B=CLK
Text Label 7900 2800 0    50   ~ 0
S1=VCC
Text Label 7900 2900 0    50   ~ 0
S2=GND
Wire Wire Line
	7000 2800 7000 2300
Wire Wire Line
	7000 2300 5350 2300
Wire Wire Line
	5350 2300 5350 3150
Wire Wire Line
	5350 3150 5550 3150
Wire Wire Line
	7000 2900 6750 2900
Wire Wire Line
	6750 2900 6750 2250
Wire Wire Line
	6750 2250 5300 2250
Wire Wire Line
	5300 2250 5300 3350
Wire Wire Line
	5300 3350 5550 3350
Wire Wire Line
	7000 3000 6800 3000
Wire Wire Line
	6800 3000 6800 2200
Wire Wire Line
	6800 2200 5400 2200
Wire Wire Line
	5400 2200 5400 3250
Wire Wire Line
	5400 3250 5550 3250
Wire Wire Line
	6250 2500 4450 2500
Wire Wire Line
	4450 2500 4450 2800
Connection ~ 6250 2500
Wire Wire Line
	6250 2500 6250 2550
Wire Wire Line
	6900 4550 6150 4550
Wire Wire Line
	4350 4200 5250 4200
Wire Wire Line
	5250 4200 5250 4600
Wire Wire Line
	5250 4600 6150 4600
Connection ~ 6150 4600
Wire Wire Line
	6150 4600 6150 4550
Wire Wire Line
	7600 4650 6150 4650
Wire Wire Line
	7600 3000 7600 4650
Connection ~ 6150 4650
Wire Wire Line
	6150 4650 6150 4600
Wire Wire Line
	6550 3950 6650 3950
Wire Wire Line
	6650 3950 6650 5200
Wire Wire Line
	6650 5200 3450 5200
Wire Wire Line
	3450 5200 3450 3200
Wire Wire Line
	3450 3200 3650 3200
Wire Wire Line
	3650 3300 3500 3300
Wire Wire Line
	3500 3300 3500 5250
Wire Wire Line
	3500 5250 6700 5250
Wire Wire Line
	6700 5250 6700 4050
Wire Wire Line
	6700 4050 6550 4050
Text Label 4500 2900 0    50   ~ 0
VDD=VCC
$EndSCHEMATC
