void ____citireSenzori();
void ____ajustareTraiectorie();
void ____controlMotoare();

double ___ajustare;
double ___SA1;
double ___SA2;
double ___SA3;
double ___SA4;
double ___SA5;
int _input_SA1 = A1;
int _input_SA3 = A3;
int _input_SA2 = A2;
int _output_MS = 9;
int _input_SA5 = A5;
int _input_SA4 = A4;
int _output_MS2 = 7;
int _output_MS1 = 6;
int _led_L = 13;
int _output_MD = 10;
int _output_MD2 = 5;
int _output_MD1 = 4;

void ____citireSenzori() {
    ___SA1 = analogRead(_input_SA1);
    ___SA2 = analogRead(_input_SA2);
    ___SA3 = analogRead(_input_SA3);
    ___SA4 = analogRead(_input_SA4);
    ___SA5 = analogRead(_input_SA5);
}

void ____ajustareTraiectorie() {
    if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 > 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 > 200 ) ) ) && ( ___SA5 > 200 ) ) {
        ___ajustare = 0; // mijloc vede
    } else {
        if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 < 200 ) ) && ( ( ___SA3 > 200 ) && ( ___SA4 > 200 ) ) ) && ( ___SA5 > 200 ) ) {
            ___ajustare = 1; // stanga vede
        } else {
            if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 > 200 ) ) && ( ( ___SA3 > 200 ) && ( ___SA4 < 200 ) ) ) && ( ___SA5 > 200 ) ) {
                ___ajustare = 2; // dreapta vede
            } else {
                if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 < 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 > 200 ) ) ) && ( ___SA5 > 200 ) ) {
                    ___ajustare = 3; // mijloc + stanga vede
                } else {
                    if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 > 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 < 200 ) ) ) && ( ___SA5 > 200 ) ) {
                        ___ajustare = 4; // mijloc + dreapta vede
                    } else {
                        if ( ( ( ( ___SA1 < 200 ) && ( ___SA2 < 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 > 200 ) ) ) && ( ___SA5 > 200 ) ) {
                            ___ajustare = 5; // mijloc + stanga + capat stanga vede
                        } else {
                            if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 > 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 < 200 ) ) ) && ( ___SA5 < 200 ) ) {
                                ___ajustare = 6; // mijloc + dreapta + capat dreapta vede
                            } else {
                                if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 > 200 ) ) && ( ( ___SA3 > 200 ) && ( ___SA4 < 200 ) ) ) && ( ___SA5 < 200 ) ) {
                                    ___ajustare = 7; // dreapta + capat dreapta vede
                                } else {
                                    if ( ( ( ( ___SA1 < 200 ) && ( ___SA2 < 200 ) ) && ( ( ___SA3 > 200 ) && ( ___SA4 > 200 ) ) ) && ( ___SA5 > 200 ) ) {
                                        ___ajustare = 8; // stanga + stanga capat vede
                                    } else {
                                        if ( ( ( ( ___SA1 < 200 ) && ( ___SA2 < 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 < 200 ) ) ) && ( ___SA5 < 200 ) ) {
                                            ___ajustare = 9; // stop
                                        } else { 
                                            if ( ( ( ( ___SA1 < 200 ) && ( ___SA2 < 200 ) ) && ( ( ___SA3 > 200 ) && ( ___SA4 < 200 ) ) ) && ( ___SA5 > 200 ) ) {
                                                ___ajustare = 10; // dreapta + stanga + capat stanga vede
                                            } else {
                                                if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 < 200 ) ) && ( ( ___SA3 > 200 ) && ( ___SA4 < 200 ) ) ) && ( ___SA5 < 200 ) ) {
                                                    ___ajustare = 11; // stanga + dreapta + capat dreapta vede
                                                } else {
                                                    if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 < 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 < 200 ) ) ) && ( ___SA5 < 200 ) ) {
                                                        ___ajustare = 12; // stanga + mijloc + dreapta + capat dreapta
                                                    } else {
                                                        if ( ( ( ( ___SA1 < 200 ) && ( ___SA2 < 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 < 200 ) ) ) && ( ___SA5 > 200 ) ) {
                                                            ___ajustare = 13; // dreapta + mijloc + stanga + capat stanga
                                                        } else {
                                                            if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 < 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 < 200 ) ) ) && ( ___SA5 > 200 ) ) {
                                                                ___ajustare = 14; // stanga + mijloc + dreapta
                                                            } else {
                                                                if ( ( ( ( ___SA1 < 200 ) && ( ___SA2 > 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 > 200 ) ) ) && ( ___SA5 > 200 ) ) {
                                                                    ___ajustare = 15; // mijloc + capat stanga
                                                                } else {
                                                                    if ( ( ( ( ___SA1 > 200 ) && ( ___SA2 > 200 ) ) && ( ( ___SA3 < 200 ) && ( ___SA4 > 200 ) ) ) && ( ___SA5 < 200 ) ) {
                                                                        ___ajustare = 16; // mijloc + capat dreapta
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } 
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void ____controlMotoare() {
    analogWrite(_output_MD, (int)255); // viteza motorului drept 0 - 255
    analogWrite(_output_MS, (int)255); // viteza motorului stang 0 - 255
    if ( ___ajustare == 0 ) {
        digitalWrite(_output_MD1, (int)1); // mijloc vede
        digitalWrite(_output_MD2, (int)0);
        digitalWrite(_output_MS1, (int)1);
        digitalWrite(_output_MS2, (int)0);
    } else {
        if ( ___ajustare == 1 ) {
            digitalWrite(_output_MD1, (int)0); // stanga vede
            digitalWrite(_output_MD2, (int)0);
            digitalWrite(_output_MS1, (int)1);
            digitalWrite(_output_MS2, (int)0);
        } else {
            if ( ___ajustare == 2 ) {
                digitalWrite(_output_MD1, (int)1); // dreapta vede
                digitalWrite(_output_MD2, (int)0);
                digitalWrite(_output_MS1, (int)0);
                digitalWrite(_output_MS2, (int)0);
            } else {
                if ( ___ajustare == 3 ) {
                    digitalWrite(_output_MD1, (int)0); // mijloc + stanga vede
                    digitalWrite(_output_MD2, (int)0);
                    digitalWrite(_output_MS1, (int)1);
                    digitalWrite(_output_MS2, (int)0);
                } else {
                    if ( ___ajustare == 4 ) {
                        digitalWrite(_output_MD1, (int)1); // mijloc + dreapta vede
                        digitalWrite(_output_MD2, (int)0);
                        digitalWrite(_output_MS1, (int)0);
                        digitalWrite(_output_MS2, (int)0);
                    } else {
                        if ( ___ajustare == 5 ) {
                            digitalWrite(_output_MD1, (int)0); // mijloc + stanga + capat stanga vede
                            digitalWrite(_output_MD2, (int)1);
                            digitalWrite(_output_MS1, (int)1);
                            digitalWrite(_output_MS2, (int)0);
                        } else {
                            if ( ___ajustare == 6 ) {
                                digitalWrite(_output_MD1, (int)1); // mijloc + dreapta + capat dreapta vede
                                digitalWrite(_output_MD2, (int)0);
                                digitalWrite(_output_MS1, (int)0);
                                digitalWrite(_output_MS2, (int)1);
                            } else {
                                if ( ___ajustare == 7 ) {
                                    digitalWrite(_output_MD1, (int)1); // dreapta + capat dreapta vede
                                    digitalWrite(_output_MD2, (int)0);
                                    digitalWrite(_output_MS1, (int)0);
                                    digitalWrite(_output_MS2, (int)1);
                                } else {
                                    if ( ___ajustare == 8 ) {
                                        digitalWrite(_output_MD1, (int)0); // stanga + stanga capat vede
                                        digitalWrite(_output_MD2, (int)1);
                                        digitalWrite(_output_MS1, (int)1);
                                        digitalWrite(_output_MS2, (int)0);
                                    } else {
                                        if ( ___ajustare == 9 ) {
                                            digitalWrite(_output_MD1, (int)0); // stop
                                            digitalWrite(_output_MD2, (int)0);
                                            digitalWrite(_output_MS1, (int)0);
                                            digitalWrite(_output_MS2, (int)0);
                                        } else {
                                            if ( ___ajustare == 10 ) {
                                               digitalWrite(_output_MD1, (int)0); // stanga + dreapta + dreapta capat vede
                                               digitalWrite(_output_MD2, (int)0);
                                               digitalWrite(_output_MS1, (int)1);
                                               digitalWrite(_output_MS2, (int)0);
                                           } else {
                                               if ( ___ajustare == 11 ) {
                                                  digitalWrite(_output_MD1, (int)1); // dreapta + stanga + stanga capat vede
                                                  digitalWrite(_output_MD2, (int)0);
                                                  digitalWrite(_output_MS1, (int)0);
                                                  digitalWrite(_output_MS2, (int)0);
                                               } else {
                                                    if ( ___ajustare == 12 ) {
                                                       digitalWrite(_output_MD1, (int)1); // stanga + mijloc + dreapta + capat dreapta
                                                       digitalWrite(_output_MD2, (int)0);
                                                       digitalWrite(_output_MS1, (int)0);
                                                       digitalWrite(_output_MS2, (int)1);
                                                    } else {
                                                        if ( ___ajustare == 13 ) {
                                                           digitalWrite(_output_MD1, (int)0); // dreapta + mijloc + stanga + capat stanga
                                                           digitalWrite(_output_MD2, (int)1);
                                                           digitalWrite(_output_MS1, (int)1);
                                                           digitalWrite(_output_MS2, (int)0);
                                                        } else {
                                                            if ( ___ajustare == 14 ) {
                                                               digitalWrite(_output_MD1, (int)1); // stanga + mijloc + dreapta
                                                               digitalWrite(_output_MD2, (int)0);
                                                               digitalWrite(_output_MS1, (int)1);
                                                               digitalWrite(_output_MS2, (int)0);
                                                            } else {
                                                                if ( ___ajustare == 15 ) {
                                                                   digitalWrite(_output_MD1, (int)0); // mijloc + capat stanga
                                                                   digitalWrite(_output_MD2, (int)1);
                                                                   digitalWrite(_output_MS1, (int)1);
                                                                   digitalWrite(_output_MS2, (int)0);
                                                                } else {
                                                                    if ( ___ajustare == 16 ) {
                                                                       digitalWrite(_output_MD1, (int)1); // mijloc + capat stanga
                                                                       digitalWrite(_output_MD2, (int)0);
                                                                       digitalWrite(_output_MS1, (int)0);
                                                                       digitalWrite(_output_MS2, (int)1);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                               }
                                           }
                                        } 
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}



void setup()
{
    pinMode(_input_SA1, INPUT);
    pinMode(_input_SA3, INPUT);
    pinMode(_input_SA2, INPUT);
    pinMode(_output_MS, OUTPUT);
    pinMode(_input_SA5, INPUT);
    pinMode(_input_SA4, INPUT);
    pinMode(_output_MS1, OUTPUT);
    pinMode(_output_MS2, OUTPUT);
    pinMode(_led_L, OUTPUT);
    pinMode(_output_MD, OUTPUT);
    pinMode(_output_MD2, OUTPUT);
    pinMode(_output_MD1, OUTPUT);
    ___ajustare = 0;
    ___SA1 = 0;
    ___SA2 = 0;
    ___SA3 = 0;
    ___SA4 = 0;
    ___SA5 = 0;
}

void loop(){
    ____citireSenzori();
    ____ajustareTraiectorie();
    ____controlMotoare();
    delay(10);
}
