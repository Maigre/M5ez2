//  This is the dark theme. See how little you need to change for a different look?

{
	ezTheme theme;

	theme.name = "monoDay";										// Change this when making theme
	theme.displayName = "ДЕНЬ";								// Change this when making theme
	theme.background = 0xEF7D;
	theme.foreground = TFT_BLACK;
	// theme.header_height = 23;
	// theme.GFXfont* header_font = &FreeMono9pt7b;
	// theme.header_hmargin = 5;
	// theme.header_tmargin = 3;
	theme.header_bgcolor = TFT_BLUE;
	theme.header_fgcolor = TFT_WHITE;
	// theme.GFXfont* print_font = mono6x8;					
	theme.print_color = theme.foreground;					
	// theme.GFXfont* clock_font = mono12x16;
	// theme.longpress_time = 250;								//milliseconds
	// theme.button_height = 19;								
	// theme.GFXfont* button_font = &FreeMono9pt7b;			
	// theme.button_tmargin = 1;								
	// theme.button_hmargin = 5;								
	// theme.button_gap = 3;									
	// theme.button_radius = 8;								
	// theme.button_bgcolor_b = TFT_BLUE;					
	// theme.button_bgcolor_t = TFT_PURPLE;					
	// theme.button_fgcolor = TFT_WHITE;					
	// theme.button_longcolor = TFT_CYAN;					
	// theme.input_top = 50;									// pixels below ez.canvas.top()
	// theme.input_hmargin = 10;								// The distance between text box and edge of screen
	// theme.input_vmargin = 10;								// Vertical margin _inside_ the text box
	// theme.GFXfont* input_font = &FreeMono12pt7b;		
	// theme.GFXfont* input_keylock_font = &FreeMono9pt7b;
	theme.input_bgcolor = TFT_BLACK;
	// theme.input_fgcolor = TFT_GREEN;						
	// theme.input_cursor_blink = 500;							// milliseconds
	// theme.input_faces_btns = 18;							
	// theme.GFXfont* tb_font = &FreeMono9pt7b;				
	theme.tb_color = theme.foreground;							
	// theme.tb_hmargin = 5;
	// theme.menu_lmargin = 20;								
	// theme.menu_rmargin = 10;
	// theme.menu_arrows_lmargin = 5;
	theme.menu_item_color = theme.foreground;					
	theme.menu_sel_bgcolor = theme.foreground;					
	theme.menu_sel_fgcolor = theme.background;					
	// theme.GFXfont* menu_big_font = &FreeMono12pt7b;			
	// theme.GFXfont* menu_small_font = &FreeMono9pt7b;		
	// theme.menu_item_hmargin = 10;							
	// theme.menu_item_radius = 8;							
	// theme.GFXfont* msg_font = &FreeMono12pt7b;				
	theme.msg_color = theme.foreground;						
	// theme.msg_hmargin = 20;

	// theme.progressbar_line_width = 4;						
	// theme.progressbar_width = 25;							
	theme.progressbar_color = theme.foreground;				
	// theme.signal_interval = 2000;						
	// theme.signal_bar_width = 4;							
	// theme.signal_bar_gap = 2;

	// theme.battery_bar_width = 42;
	// theme.battery_bar_gap = 2;
	// theme.battery_0_fgcolor = TFT_RED; 
	// theme.battery_25_fgcolor = TFT_ORANGE;
	// theme.battery_50_fgcolor = TFT_YELLOW;
	// theme.battery_75_fgcolor = TFT_GREENYELLOW;
	// theme.battery_100_fgcolor = TFT_GREEN;

#if defined (ARDUINO_M5Stack_Core_ESP32) || defined (ARDUINO_M5STACK_FIRE)
	theme.lcd_brightness_default = 0x8;
	theme.btn_brightness_default = 0x0;
#elif defined (ARDUINO_LOLIN_D32_PRO) //TTGO T4 v1.3
	theme.lcd_brightness_default = 0x8;
	theme.btn_brightness_default = 0x0;
#elif defined (ARDUINO_M5Stick_C)
	theme.lcd_brightness_default = 0x8;
	theme.btn_brightness_default = 0x0;
// #elif defined (ARDUINO_M5Stick_C_Plus)	//Not in Arduino-ESP, yet?
	// theme.lcd_brightness_default = 0x8;
	// theme.btn_brightness_default = 0x0;
#elif defined (ARDUINO_M5STACK_Core2)
	theme.lcd_brightness_default = 0x8;
	theme.btn_brightness_default = 0x0;
#elif defined (ARDUINO_ESP32_DEV)	//M35
	theme.lcd_brightness_default = 0x8;
	theme.btn_brightness_default = 0x0;
#elif defined (ARDUINO_D1_MINI32)	//K36
	theme.lcd_brightness_default = 0x8;
	theme.btn_brightness_default = 0x0;
#elif defined (ARDUINO_FROG_ESP32) || defined (ARDUINO_WESP32)	//K46 || K46v2
	theme.lcd_brightness_default = 0x8;
	theme.btn_brightness_default = 0x0;
#endif
	
	theme.add();
}