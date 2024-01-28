//
// Created by livello on 27.01.2024.
//

#ifndef AUTOWIRE_CUTTER_ESP32_MAIN_H
#define AUTOWIRE_CUTTER_ESP32_MAIN_H

#endif //AUTOWIRE_CUTTER_ESP32_MAIN_H

struct Component {
	int x, y;  // Position
	int w, h;  // Size
	int value;  // Current value of the cell.
	boolean highlighted;  // Whether the cell is the currently highlighted cell.
	boolean selected;  // Whether the cell is currently the selected one, where its value will be controlled by the encoder.
	boolean btn;  // If it is a button or not.
};
void g_setup();

void handleOLEDDisplay();

void drawWire();

void handleAllComponents();

void drawComponent(Component comp);

void drawText(String text, int x, int y);

void runAutoCuttingStripping();

void cut();

void strip();

void moveBlade(int steps);

void moveWire(int steps);

int getEncoderPos();