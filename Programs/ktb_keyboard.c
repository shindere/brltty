/*
 * BRLTTY - A background process providing access to the console screen (when in
 *          text mode) for a blind person using a refreshable braille display.
 *
 * Copyright (C) 1995-2015 by The BRLTTY Developers.
 *
 * BRLTTY comes with ABSOLUTELY NO WARRANTY.
 *
 * This is free software, placed under the terms of the
 * GNU General Public License, as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any
 * later version. Please see the file LICENSE-GPL for details.
 *
 * Web Page: http://brltty.com/
 *
 * This software is maintained by Dave Mielke <dave@mielke.cc>.
 */

#include "prologue.h"

#include "ktb_keyboard.h"

BEGIN_KEY_NAME_TABLE(keyboard)
  KBD_KEY_NAME(LETTER, A, "A"),
  KBD_KEY_NAME(LETTER, A, "LETTER_A"),

  KBD_KEY_NAME(LETTER, B, "B"),
  KBD_KEY_NAME(LETTER, B, "LETTER_B"),

  KBD_KEY_NAME(LETTER, C, "C"),
  KBD_KEY_NAME(LETTER, C, "LETTER_C"),

  KBD_KEY_NAME(LETTER, D, "D"),
  KBD_KEY_NAME(LETTER, D, "LETTER_D"),

  KBD_KEY_NAME(LETTER, E, "E"),
  KBD_KEY_NAME(LETTER, E, "LETTER_E"),

  KBD_KEY_NAME(LETTER, F, "F"),
  KBD_KEY_NAME(LETTER, F, "LETTER_F"),

  KBD_KEY_NAME(LETTER, G, "G"),
  KBD_KEY_NAME(LETTER, G, "LETTER_G"),

  KBD_KEY_NAME(LETTER, H, "H"),
  KBD_KEY_NAME(LETTER, H, "LETTER_H"),

  KBD_KEY_NAME(LETTER, I, "I"),
  KBD_KEY_NAME(LETTER, I, "LETTER_I"),

  KBD_KEY_NAME(LETTER, J, "J"),
  KBD_KEY_NAME(LETTER, J, "LETTER_J"),

  KBD_KEY_NAME(LETTER, K, "K"),
  KBD_KEY_NAME(LETTER, K, "LETTER_K"),

  KBD_KEY_NAME(LETTER, L, "L"),
  KBD_KEY_NAME(LETTER, L, "LETTER_L"),

  KBD_KEY_NAME(LETTER, M, "M"),
  KBD_KEY_NAME(LETTER, M, "LETTER_M"),

  KBD_KEY_NAME(LETTER, N, "N"),
  KBD_KEY_NAME(LETTER, N, "LETTER_N"),

  KBD_KEY_NAME(LETTER, O, "O"),
  KBD_KEY_NAME(LETTER, O, "LETTER_O"),

  KBD_KEY_NAME(LETTER, P, "P"),
  KBD_KEY_NAME(LETTER, P, "LETTER_P"),

  KBD_KEY_NAME(LETTER, Q, "Q"),
  KBD_KEY_NAME(LETTER, Q, "LETTER_Q"),

  KBD_KEY_NAME(LETTER, R, "R"),
  KBD_KEY_NAME(LETTER, R, "LETTER_R"),

  KBD_KEY_NAME(LETTER, S, "S"),
  KBD_KEY_NAME(LETTER, S, "LETTER_S"),

  KBD_KEY_NAME(LETTER, T, "T"),
  KBD_KEY_NAME(LETTER, T, "LETTER_T"),

  KBD_KEY_NAME(LETTER, U, "U"),
  KBD_KEY_NAME(LETTER, U, "LETTER_U"),

  KBD_KEY_NAME(LETTER, V, "V"),
  KBD_KEY_NAME(LETTER, V, "LETTER_V"),

  KBD_KEY_NAME(LETTER, W, "W"),
  KBD_KEY_NAME(LETTER, W, "LETTER_W"),

  KBD_KEY_NAME(LETTER, X, "X"),
  KBD_KEY_NAME(LETTER, X, "LETTER_X"),

  KBD_KEY_NAME(LETTER, Y, "Y"),
  KBD_KEY_NAME(LETTER, Y, "LETTER_Y"),

  KBD_KEY_NAME(LETTER, Z, "Z"),
  KBD_KEY_NAME(LETTER, Z, "LETTER_Z"),

  KBD_KEY_NAME(NUMBER, Zero, "Zero"),
  KBD_KEY_NAME(NUMBER, Zero, "NUMBER_Zero"),

  KBD_KEY_NAME(NUMBER, One, "One"),
  KBD_KEY_NAME(NUMBER, One, "NUMBER_One"),

  KBD_KEY_NAME(NUMBER, Two, "Two"),
  KBD_KEY_NAME(NUMBER, Two, "NUMBER_Two"),

  KBD_KEY_NAME(NUMBER, Three, "Three"),
  KBD_KEY_NAME(NUMBER, Three, "NUMBER_Three"),

  KBD_KEY_NAME(NUMBER, Four, "Four"),
  KBD_KEY_NAME(NUMBER, Four, "NUMBER_Four"),

  KBD_KEY_NAME(NUMBER, Five, "Five"),
  KBD_KEY_NAME(NUMBER, Five, "NUMBER_Five"),

  KBD_KEY_NAME(NUMBER, Six, "Six"),
  KBD_KEY_NAME(NUMBER, Six, "NUMBER_Six"),

  KBD_KEY_NAME(NUMBER, Seven, "Seven"),
  KBD_KEY_NAME(NUMBER, Seven, "NUMBER_Seven"),

  KBD_KEY_NAME(NUMBER, Eight, "Eight"),
  KBD_KEY_NAME(NUMBER, Eight, "NUMBER_Eight"),

  KBD_KEY_NAME(NUMBER, Nine, "Nine"),
  KBD_KEY_NAME(NUMBER, Nine, "NUMBER_Nine"),

  KBD_KEY_NAME(SYMBOL, Grave, "Grave"),
  KBD_KEY_NAME(SYMBOL, Grave, "SYMBOL_Grave"),

  KBD_KEY_NAME(SYMBOL, Minus, "Minus"),
  KBD_KEY_NAME(SYMBOL, Minus, "SYMBOL_Minus"),

  KBD_KEY_NAME(SYMBOL, Equals, "Equals"),
  KBD_KEY_NAME(SYMBOL, Equals, "SYMBOL_Equals"),

  KBD_KEY_NAME(SYMBOL, Backslash, "Backslash"),
  KBD_KEY_NAME(SYMBOL, Backslash, "SYMBOL_Backslash"),

  KBD_KEY_NAME(SYMBOL, LeftBracket, "LeftBracket"),
  KBD_KEY_NAME(SYMBOL, LeftBracket, "SYMBOL_LeftBracket"),

  KBD_KEY_NAME(SYMBOL, RightBracket, "RightBracket"),
  KBD_KEY_NAME(SYMBOL, RightBracket, "SYMBOL_RightBracket"),

  KBD_KEY_NAME(SYMBOL, Semicolon, "Semicolon"),
  KBD_KEY_NAME(SYMBOL, Semicolon, "SYMBOL_Semicolon"),

  KBD_KEY_NAME(SYMBOL, Apostrophe, "Apostrophe"),
  KBD_KEY_NAME(SYMBOL, Apostrophe, "SYMBOL_Apostrophe"),

  KBD_KEY_NAME(SYMBOL, Europe2, "Europe2"),
  KBD_KEY_NAME(SYMBOL, Europe2, "SYMBOL_Europe2"),

  KBD_KEY_NAME(SYMBOL, Comma, "Comma"),
  KBD_KEY_NAME(SYMBOL, Comma, "SYMBOL_Comma"),

  KBD_KEY_NAME(SYMBOL, Period, "Period"),
  KBD_KEY_NAME(SYMBOL, Period, "SYMBOL_Period"),

  KBD_KEY_NAME(SYMBOL, Slash, "Slash"),
  KBD_KEY_NAME(SYMBOL, Slash, "SYMBOL_Slash"),

  KBD_KEY_NAME(SYMBOL, Space, "Space"),
  KBD_KEY_NAME(SYMBOL, Space, "SYMBOL_Space"),

  KBD_KEY_NAME(ACTION, Enter, "Enter"),
  KBD_KEY_NAME(ACTION, Enter, "ACTION_Enter"),

  KBD_KEY_NAME(ACTION, Tab, "Tab"),
  KBD_KEY_NAME(ACTION, Tab, "ACTION_Tab"),

  KBD_KEY_NAME(ACTION, Escape, "Escape"),
  KBD_KEY_NAME(ACTION, Escape, "ACTION_Escape"),

  KBD_KEY_NAME(ACTION, Insert, "Insert"),
  KBD_KEY_NAME(ACTION, Insert, "ACTION_Insert"),

  KBD_KEY_NAME(ACTION, DeleteBackward, "DeleteBackward"),
  KBD_KEY_NAME(ACTION, DeleteBackward, "ACTION_DeleteBackward"),

  KBD_KEY_NAME(ACTION, DeleteForward, "DeleteForward"),
  KBD_KEY_NAME(ACTION, DeleteForward, "ACTION_DeleteForward"),

  KBD_KEY_NAME(ACTION, Home, "Home"),
  KBD_KEY_NAME(ACTION, Home, "ACTION_Home"),

  KBD_KEY_NAME(ACTION, End, "End"),
  KBD_KEY_NAME(ACTION, End, "ACTION_End"),

  KBD_KEY_NAME(ACTION, PageUp, "PageUp"),
  KBD_KEY_NAME(ACTION, PageUp, "ACTION_PageUp"),

  KBD_KEY_NAME(ACTION, PageDown, "PageDown"),
  KBD_KEY_NAME(ACTION, PageDown, "ACTION_PageDown"),

  KBD_KEY_NAME(ACTION, ArrowUp, "ArrowUp"),
  KBD_KEY_NAME(ACTION, ArrowUp, "ACTION_ArrowUp"),

  KBD_KEY_NAME(ACTION, ArrowDown, "ArrowDown"),
  KBD_KEY_NAME(ACTION, ArrowDown, "ACTION_ArrowDown"),

  KBD_KEY_NAME(ACTION, ArrowLeft, "ArrowLeft"),
  KBD_KEY_NAME(ACTION, ArrowLeft, "ACTION_ArrowLeft"),

  KBD_KEY_NAME(ACTION, ArrowRight, "ArrowRight"),
  KBD_KEY_NAME(ACTION, ArrowRight, "ACTION_ArrowRight"),

  KBD_KEY_NAME(ACTION, PrintScreen, "PrintScreen"),
  KBD_KEY_NAME(ACTION, PrintScreen, "ACTION_PrintScreen"),

  KBD_KEY_NAME(ACTION, SystemRequest, "SystemRequest"),
  KBD_KEY_NAME(ACTION, SystemRequest, "ACTION_SystemRequest"),

  KBD_KEY_NAME(ACTION, Pause, "Pause"),
  KBD_KEY_NAME(ACTION, Pause, "ACTION_Pause"),

  KBD_KEY_NAME(ACTION, GuiLeft, "GuiLeft"),
  KBD_KEY_NAME(ACTION, GuiLeft, "ACTION_GuiLeft"),

  KBD_KEY_NAME(ACTION, GuiRight, "GuiRight"),
  KBD_KEY_NAME(ACTION, GuiRight, "ACTION_GuiRight"),

  KBD_KEY_NAME(ACTION, Context, "Context"),
  KBD_KEY_NAME(ACTION, Context, "ACTION_Context"),
  KBD_KEY_NAME(ACTION, Context, "Application"),
  KBD_KEY_NAME(ACTION, Context, "ACTION_Application"),

  KBD_KEY_NAME(ACTION, Help, "ACTION_Help"),

  KBD_KEY_NAME(ACTION, Stop, "ACTION_Stop"),

  KBD_KEY_NAME(ACTION, Props, "ACTION_Props"),

  KBD_KEY_NAME(ACTION, Front, "ACTION_Front"),

  KBD_KEY_NAME(ACTION, Open, "ACTION_Open"),

  KBD_KEY_NAME(ACTION, Find, "ACTION_Find"),

  KBD_KEY_NAME(ACTION, Again, "ACTION_Again"),

  KBD_KEY_NAME(ACTION, Undo, "ACTION_Undo"),

  KBD_KEY_NAME(ACTION, Copy, "ACTION_Copy"),

  KBD_KEY_NAME(ACTION, Paste, "ACTION_Paste"),

  KBD_KEY_NAME(ACTION, Cut, "ACTION_Cut"),

  KBD_KEY_NAME(ACTION, Power, "ACTION_Power"),

  KBD_KEY_NAME(ACTION, Sleep, "ACTION_Sleep"),

  KBD_KEY_NAME(ACTION, Wakeup, "ACTION_Wakeup"),

  KBD_KEY_NAME(ACTION, Menu, "ACTION_Menu"),

  KBD_KEY_NAME(ACTION, Select, "Select"),
  KBD_KEY_NAME(ACTION, Select, "ACTION_Select"),

  KBD_KEY_NAME(ACTION, Cancel, "ACTION_Cancel"),

  KBD_KEY_NAME(ACTION, Clear, "ACTION_Clear"),

  KBD_KEY_NAME(ACTION, Prior, "ACTION_Prior"),

  KBD_KEY_NAME(ACTION, Return, "ACTION_Return"),

  KBD_KEY_NAME(ACTION, Separator, "ACTION_Separator"),

  KBD_KEY_NAME(ACTION, Out, "ACTION_Out"),

  KBD_KEY_NAME(ACTION, Oper, "ACTION_Oper"),

  KBD_KEY_NAME(ACTION, Clear_Again, "ACTION_Clear_Again"),

  KBD_KEY_NAME(ACTION, CrSel_Props, "ACTION_CrSel_Props"),

  KBD_KEY_NAME(ACTION, ExSel, "ACTION_ExSel"),

  KBD_KEY_NAME(MEDIA, Mute, "MEDIA_Mute"),

  KBD_KEY_NAME(MEDIA, VolumeDown, "MEDIA_VolumeDown"),

  KBD_KEY_NAME(MEDIA, VolumeUp, "MEDIA_VolumeUp"),

  KBD_KEY_NAME(MEDIA, Stop, "MEDIA_Stop"),

  KBD_KEY_NAME(MEDIA, Play, "MEDIA_Play"),

  KBD_KEY_NAME(MEDIA, Record, "MEDIA_Record"),

  KBD_KEY_NAME(MEDIA, Pause, "MEDIA_Pause"),

  KBD_KEY_NAME(MEDIA, PlayPause, "MEDIA_PlayPause"),

  KBD_KEY_NAME(MEDIA, Previous, "MEDIA_Previous"),

  KBD_KEY_NAME(MEDIA, Next, "MEDIA_Next"),

  KBD_KEY_NAME(MEDIA, Backward, "MEDIA_Backward"),

  KBD_KEY_NAME(MEDIA, Forward, "MEDIA_Forward"),

  KBD_KEY_NAME(MEDIA, Eject, "MEDIA_Eject"),

  KBD_KEY_NAME(MEDIA, Close, "MEDIA_Close"),

  KBD_KEY_NAME(MEDIA, EjectClose, "MEDIA_EjectClose"),

  KBD_KEY_NAME(FUNCTION, F1, "F1"),
  KBD_KEY_NAME(FUNCTION, F1, "FUNCTION_F1"),

  KBD_KEY_NAME(FUNCTION, F2, "F2"),
  KBD_KEY_NAME(FUNCTION, F2, "FUNCTION_F2"),

  KBD_KEY_NAME(FUNCTION, F3, "F3"),
  KBD_KEY_NAME(FUNCTION, F3, "FUNCTION_F3"),

  KBD_KEY_NAME(FUNCTION, F4, "F4"),
  KBD_KEY_NAME(FUNCTION, F4, "FUNCTION_F4"),

  KBD_KEY_NAME(FUNCTION, F5, "F5"),
  KBD_KEY_NAME(FUNCTION, F5, "FUNCTION_F5"),

  KBD_KEY_NAME(FUNCTION, F6, "F6"),
  KBD_KEY_NAME(FUNCTION, F6, "FUNCTION_F6"),

  KBD_KEY_NAME(FUNCTION, F7, "F7"),
  KBD_KEY_NAME(FUNCTION, F7, "FUNCTION_F7"),

  KBD_KEY_NAME(FUNCTION, F8, "F8"),
  KBD_KEY_NAME(FUNCTION, F8, "FUNCTION_F8"),

  KBD_KEY_NAME(FUNCTION, F9, "F9"),
  KBD_KEY_NAME(FUNCTION, F9, "FUNCTION_F9"),

  KBD_KEY_NAME(FUNCTION, F10, "F10"),
  KBD_KEY_NAME(FUNCTION, F10, "FUNCTION_F10"),

  KBD_KEY_NAME(FUNCTION, F11, "F11"),
  KBD_KEY_NAME(FUNCTION, F11, "FUNCTION_F11"),

  KBD_KEY_NAME(FUNCTION, F12, "F12"),
  KBD_KEY_NAME(FUNCTION, F12, "FUNCTION_F12"),

  KBD_KEY_NAME(FUNCTION, F13, "F13"),
  KBD_KEY_NAME(FUNCTION, F13, "FUNCTION_F13"),

  KBD_KEY_NAME(FUNCTION, F14, "F14"),
  KBD_KEY_NAME(FUNCTION, F14, "FUNCTION_F14"),

  KBD_KEY_NAME(FUNCTION, F15, "F15"),
  KBD_KEY_NAME(FUNCTION, F15, "FUNCTION_F15"),

  KBD_KEY_NAME(FUNCTION, F16, "F16"),
  KBD_KEY_NAME(FUNCTION, F16, "FUNCTION_F16"),

  KBD_KEY_NAME(FUNCTION, F17, "F17"),
  KBD_KEY_NAME(FUNCTION, F17, "FUNCTION_F17"),

  KBD_KEY_NAME(FUNCTION, F18, "F18"),
  KBD_KEY_NAME(FUNCTION, F18, "FUNCTION_F18"),

  KBD_KEY_NAME(FUNCTION, F19, "F19"),
  KBD_KEY_NAME(FUNCTION, F19, "FUNCTION_F19"),

  KBD_KEY_NAME(FUNCTION, F20, "F20"),
  KBD_KEY_NAME(FUNCTION, F20, "FUNCTION_F20"),

  KBD_KEY_NAME(FUNCTION, F21, "F21"),
  KBD_KEY_NAME(FUNCTION, F21, "FUNCTION_F21"),

  KBD_KEY_NAME(FUNCTION, F22, "F22"),
  KBD_KEY_NAME(FUNCTION, F22, "FUNCTION_F22"),

  KBD_KEY_NAME(FUNCTION, F23, "F23"),
  KBD_KEY_NAME(FUNCTION, F23, "FUNCTION_F23"),

  KBD_KEY_NAME(FUNCTION, F24, "F24"),
  KBD_KEY_NAME(FUNCTION, F24, "FUNCTION_F24"),

  KBD_KEY_NAME(MODIFIER, ShiftLeft, "ShiftLeft"),
  KBD_KEY_NAME(MODIFIER, ShiftLeft, "MODIFIER_ShiftLeft"),

  KBD_KEY_NAME(MODIFIER, ShiftRight, "ShiftRight"),
  KBD_KEY_NAME(MODIFIER, ShiftRight, "MODIFIER_ShiftRight"),

  KBD_KEY_NAME(MODIFIER, ControlLeft, "ControlLeft"),
  KBD_KEY_NAME(MODIFIER, ControlLeft, "MODIFIER_ControlLeft"),

  KBD_KEY_NAME(MODIFIER, ControlRight, "ControlRight"),
  KBD_KEY_NAME(MODIFIER, ControlRight, "MODIFIER_ControlRight"),

  KBD_KEY_NAME(MODIFIER, AltLeft, "AltLeft"),
  KBD_KEY_NAME(MODIFIER, AltLeft, "MODIFIER_AltLeft"),
  KBD_KEY_NAME(MODIFIER, AltLeft, "Alt"),
  KBD_KEY_NAME(MODIFIER, AltLeft, "MODIFIER_Alt"),

  KBD_KEY_NAME(MODIFIER, AltRight, "AltRight"),
  KBD_KEY_NAME(MODIFIER, AltRight, "MODIFIER_AltRight"),
  KBD_KEY_NAME(MODIFIER, AltRight, "AltGr"),
  KBD_KEY_NAME(MODIFIER, AltRight, "MODIFIER_AltGr"),

  KBD_KEY_NAME(LOCK, Capitals, "CapsLock"),
  KBD_KEY_NAME(LOCK, Capitals, "LOCK_Capitals"),

  KBD_KEY_NAME(LOCK, Scroll, "ScrollLock"),
  KBD_KEY_NAME(LOCK, Scroll, "LOCK_Scroll"),

  KBD_KEY_NAME(LOCK, Numbers, "NumLock"),
  KBD_KEY_NAME(LOCK, Numbers, "LOCK_Numbers"),

  KBD_KEY_NAME(KPNUMBER, Zero, "KP0"),
  KBD_KEY_NAME(KPNUMBER, Zero, "KPNUMBER_Zero"),

  KBD_KEY_NAME(KPNUMBER, One, "KP1"),
  KBD_KEY_NAME(KPNUMBER, One, "KPNUMBER_One"),

  KBD_KEY_NAME(KPNUMBER, Two, "KP2"),
  KBD_KEY_NAME(KPNUMBER, Two, "KPNUMBER_Two"),

  KBD_KEY_NAME(KPNUMBER, Three, "KP3"),
  KBD_KEY_NAME(KPNUMBER, Three, "KPNUMBER_Three"),

  KBD_KEY_NAME(KPNUMBER, Four, "KP4"),
  KBD_KEY_NAME(KPNUMBER, Four, "KPNUMBER_Four"),

  KBD_KEY_NAME(KPNUMBER, Five, "KP5"),
  KBD_KEY_NAME(KPNUMBER, Five, "KPNUMBER_Five"),

  KBD_KEY_NAME(KPNUMBER, Six, "KP6"),
  KBD_KEY_NAME(KPNUMBER, Six, "KPNUMBER_Six"),

  KBD_KEY_NAME(KPNUMBER, Seven, "KP7"),
  KBD_KEY_NAME(KPNUMBER, Seven, "KPNUMBER_Seven"),

  KBD_KEY_NAME(KPNUMBER, Eight, "KP8"),
  KBD_KEY_NAME(KPNUMBER, Eight, "KPNUMBER_Eight"),

  KBD_KEY_NAME(KPNUMBER, Nine, "KP9"),
  KBD_KEY_NAME(KPNUMBER, Nine, "KPNUMBER_Nine"),

  KBD_KEY_NAME(KPNUMBER, A, "KPA"),
  KBD_KEY_NAME(KPNUMBER, A, "KPNUMBER_A"),

  KBD_KEY_NAME(KPNUMBER, B, "KPB"),
  KBD_KEY_NAME(KPNUMBER, B, "KPNUMBER_B"),

  KBD_KEY_NAME(KPNUMBER, C, "KPC"),
  KBD_KEY_NAME(KPNUMBER, C, "KPNUMBER_C"),

  KBD_KEY_NAME(KPNUMBER, D, "KPD"),
  KBD_KEY_NAME(KPNUMBER, D, "KPNUMBER_D"),

  KBD_KEY_NAME(KPNUMBER, E, "KPE"),
  KBD_KEY_NAME(KPNUMBER, E, "KPNUMBER_E"),

  KBD_KEY_NAME(KPNUMBER, F, "KPF"),
  KBD_KEY_NAME(KPNUMBER, F, "KPNUMBER_F"),

  KBD_KEY_NAME(KPSYMBOL, DecimalSeparator, "KPSYMBOL_DecimalSeparator"),

  KBD_KEY_NAME(KPSYMBOL, ThousandsSeparator, "KPSYMBOL_ThousandsSeparator"),

  KBD_KEY_NAME(KPSYMBOL, 00, "KPSYMBOL_00"),

  KBD_KEY_NAME(KPSYMBOL, 000, "KPSYMBOL_000"),

  KBD_KEY_NAME(KPSYMBOL, Plus, "KPPlus"),
  KBD_KEY_NAME(KPSYMBOL, Plus, "KPSYMBOL_Plus"),

  KBD_KEY_NAME(KPSYMBOL, Minus, "KPMinus"),
  KBD_KEY_NAME(KPSYMBOL, Minus, "KPSYMBOL_Minus"),

  KBD_KEY_NAME(KPSYMBOL, Multiply, "KPMultiply"),
  KBD_KEY_NAME(KPSYMBOL, Multiply, "KPSYMBOL_Multiply"),

  KBD_KEY_NAME(KPSYMBOL, Divide, "KPDivide"),
  KBD_KEY_NAME(KPSYMBOL, Divide, "KPSYMBOL_Divide"),

  KBD_KEY_NAME(KPSYMBOL, Modulo, "KPSYMBOL_Modulo"),

  KBD_KEY_NAME(KPSYMBOL, Equals, "KPEquals"),
  KBD_KEY_NAME(KPSYMBOL, Equals, "KPSYMBOL_Equals"),

  KBD_KEY_NAME(KPSYMBOL, Less, "KPSYMBOL_Less"),

  KBD_KEY_NAME(KPSYMBOL, Greater, "KPSYMBOL_Greater"),

  KBD_KEY_NAME(KPSYMBOL, PlusMinus, "KPSYMBOL_PlusMinus"),

  KBD_KEY_NAME(KPSYMBOL, LeftParenthesis, "KPSYMBOL_LeftParenthesis"),

  KBD_KEY_NAME(KPSYMBOL, RightParenthesis, "KPSYMBOL_RightParenthesis"),

  KBD_KEY_NAME(KPSYMBOL, LeftBrace, "KPSYMBOL_LeftBrace"),

  KBD_KEY_NAME(KPSYMBOL, RightBrace, "KPSYMBOL_RightBrace"),

  KBD_KEY_NAME(KPSYMBOL, BitwiseAnd, "KPSYMBOL_BitwiseAnd"),

  KBD_KEY_NAME(KPSYMBOL, BitwiseOr, "KPSYMBOL_BitwiseOr"),

  KBD_KEY_NAME(KPSYMBOL, BitwiseXor, "KPSYMBOL_BitwiseXor"),

  KBD_KEY_NAME(KPSYMBOL, BooleanNot, "KPSYMBOL_BooleanNot"),

  KBD_KEY_NAME(KPSYMBOL, BooleanAnd, "KPSYMBOL_BooleanAnd"),

  KBD_KEY_NAME(KPSYMBOL, BooleanOr, "KPSYMBOL_BooleanOr"),

  KBD_KEY_NAME(KPSYMBOL, BooleanXor, "KPSYMBOL_BooleanXor"),

  KBD_KEY_NAME(KPSYMBOL, Space, "KPSYMBOL_Space"),

  KBD_KEY_NAME(KPSYMBOL, Period, "KPPeriod"),
  KBD_KEY_NAME(KPSYMBOL, Period, "KPSYMBOL_Period"),

  KBD_KEY_NAME(KPSYMBOL, Comma, "KPSYMBOL_Comma"),

  KBD_KEY_NAME(KPSYMBOL, Colon, "KPSYMBOL_Colon"),

  KBD_KEY_NAME(KPSYMBOL, At, "KPSYMBOL_At"),

  KBD_KEY_NAME(KPSYMBOL, Number, "KPSYMBOL_Number"),

  KBD_KEY_NAME(KPSYMBOL, CurrencyUnit, "KPSYMBOL_CurrencyUnit"),

  KBD_KEY_NAME(KPSYMBOL, CurrencySubunit, "KPSYMBOL_CurrencySubunit"),

  KBD_KEY_NAME(KPACTION, Enter, "KPEnter"),
  KBD_KEY_NAME(KPACTION, Enter, "KPACTION_Enter"),

  KBD_KEY_NAME(KPACTION, Backspace, "KPACTION_Backspace"),

  KBD_KEY_NAME(KPACTION, Tab, "KPACTION_Tab"),

  KBD_KEY_NAME(KPACTION, Clear, "KPACTION_Clear"),

  KBD_KEY_NAME(KPACTION, ClearEntry, "KPACTION_ClearEntry"),

  KBD_KEY_NAME(KPACTION, MemoryClear, "KPACTION_MemoryClear"),

  KBD_KEY_NAME(KPACTION, MemoryStore, "KPACTION_MemoryStore"),

  KBD_KEY_NAME(KPACTION, MemoryRecall, "KPACTION_MemoryRecall"),

  KBD_KEY_NAME(KPACTION, MemoryAdd, "KPACTION_MemoryAdd"),

  KBD_KEY_NAME(KPACTION, MemorySubtract, "KPACTION_MemorySubtract"),

  KBD_KEY_NAME(KPACTION, MemoryMultiply, "KPACTION_MemoryMultiply"),

  KBD_KEY_NAME(KPACTION, MemoryDivide, "KPACTION_MemoryDivide"),

  KBD_KEY_NAME(KPACTION, Binary, "KPACTION_Binary"),

  KBD_KEY_NAME(KPACTION, Octal, "KPACTION_Octal"),

  KBD_KEY_NAME(KPACTION, Decimal, "KPACTION_Decimal"),

  KBD_KEY_NAME(KPACTION, Hexadecimal, "KPACTION_Hexadecimal"),

  KBD_KEY_NAME(BRAILLE, Space, "Dot0"),
  KBD_KEY_NAME(BRAILLE, Space, "BRAILLE_Dot0"),
  KBD_KEY_NAME(BRAILLE, Space, "BRAILLE_Space"),

  KBD_KEY_NAME(BRAILLE, Dot1, "Dot1"),
  KBD_KEY_NAME(BRAILLE, Dot1, "BRAILLE_Dot1"),

  KBD_KEY_NAME(BRAILLE, Dot2, "Dot2"),
  KBD_KEY_NAME(BRAILLE, Dot2, "BRAILLE_Dot2"),

  KBD_KEY_NAME(BRAILLE, Dot3, "Dot3"),
  KBD_KEY_NAME(BRAILLE, Dot3, "BRAILLE_Dot3"),

  KBD_KEY_NAME(BRAILLE, Dot4, "Dot4"),
  KBD_KEY_NAME(BRAILLE, Dot4, "BRAILLE_Dot4"),

  KBD_KEY_NAME(BRAILLE, Dot5, "Dot5"),
  KBD_KEY_NAME(BRAILLE, Dot5, "BRAILLE_Dot5"),

  KBD_KEY_NAME(BRAILLE, Dot6, "Dot6"),
  KBD_KEY_NAME(BRAILLE, Dot6, "BRAILLE_Dot6"),

  KBD_KEY_NAME(BRAILLE, Dot7, "Dot7"),
  KBD_KEY_NAME(BRAILLE, Dot7, "BRAILLE_Dot7"),

  KBD_KEY_NAME(BRAILLE, Dot8, "Dot8"),
  KBD_KEY_NAME(BRAILLE, Dot8, "BRAILLE_Dot8"),

  KBD_KEY_NAME(BRAILLE, Backward, "Backward"),
  KBD_KEY_NAME(BRAILLE, Backward, "BRAILLE_Backward"),

  KBD_KEY_NAME(BRAILLE, Forward, "Forward"),
  KBD_KEY_NAME(BRAILLE, Forward, "BRAILLE_Forward"),

  KBD_GROUP_NAME(NUMBER, "NumberKey"),
  KBD_GROUP_NAME(FUNCTION, "FunctionKey"),
  KBD_GROUP_NAME(KPNUMBER, "KeypadNumberKey"),
  KBD_GROUP_NAME(ROUTING, "RoutingKey"),
END_KEY_NAME_TABLE

KEY_NAME_TABLES_DECLARATION(keyboard) = {
  KEY_NAME_TABLE(keyboard),
  LAST_KEY_NAME_TABLE
};
