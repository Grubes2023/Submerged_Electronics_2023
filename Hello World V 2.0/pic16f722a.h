// Not Sure if this is nescessary but here it is if it iss


/* Generated on 2016-07-26
===============================================================================
      P I C   T D D   R E A D Y   R E G I S T E R   D E F I N I T I O N
===============================================================================

Created by Tibor Simon - tiborsimon.io
Generator script:  https://github.com/tiborsimon/pic-definition-converter

Based on the register definition header file v1.37 provided by Microchip.
Original definition date and license: */

// Generated 11/03/2016 GMT

/*
* Copyright © 2016, Microchip Technology Inc. and its subsidiaries ("Microchip")
* All rights reserved.
*
* This software is developed by Microchip Technology Inc. and its subsidiaries ("Microchip").
*
* Redistribution and use in source and binary forms, with or without modification, are
* permitted provided that the following conditions are met:
*
*     1. Redistributions of source code must retain the above copyright notice, this list of
*        conditions and the following disclaimer.
*
*     2. Redistributions in binary form must reproduce the above copyright notice, this list
*        of conditions and the following disclaimer in the documentation and/or other
*        materials provided with the distribution.
*
*     3. Microchip's name may not be used to endorse or promote products derived from this
*        software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
* PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
* LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
* THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*  */

#ifndef _PIC16F722A_H_
#define _PIC16F722A_H_

#define STATUS                        0
#define C                             1
#define CARRY                         2
#define DC                            3
#define ZERO                          4
#define Z                             5
#define nPD                           6
#define nTO                           7
#define RP0                           8
#define RP                            9
#define RP1                           10
#define IRP                           11
#define PORTA                         12
#define RA0                           13
#define RA1                           14
#define RA2                           15
#define RA3                           16
#define RA4                           17
#define RA5                           18
#define RA6                           19
#define RA7                           20
#define PORTB                         21
#define RB0                           22
#define RB1                           23
#define RB2                           24
#define RB3                           25
#define RB4                           26
#define RB5                           27
#define RB6                           28
#define RB7                           29
#define PORTC                         30
#define RC0                           31
#define RC1                           32
#define RC2                           33
#define RC3                           34
#define RC4                           35
#define RC5                           36
#define RC6                           37
#define RC7                           38
#define PORTE                         39
#define RE3                           40
#define INTCON                        41
#define RBIF                          42
#define IOCIF                         43
#define INTF                          44
#define T0IF                          45
#define TMR0IF                        46
#define IOCIE                         47
#define RBIE                          48
#define INTE                          49
#define T0IE                          50
#define TMR0IE                        51
#define PEIE                          52
#define GIE                           53
#define PIR1                          54
#define TMR1IF                        55
#define TMR2IF                        56
#define CCP1IF                        57
#define SSPIF                         58
#define TXIF                          59
#define RCIF                          60
#define ADIF                          61
#define TMR1GIF                       62
#define PIR2                          63
#define CCP2IF                        64
#define T1CON                         65
#define TMR1ON                        66
#define T1SYNC                        67
#define nT1SYNC                       68
#define T1INSYNC                      69
#define T1OSCEN                       70
#define T1CKPS0                       71
#define T1CKPS                        72
#define T1CKPS1                       73
#define TMR1CS0                       74
#define TMR1CS                        75
#define TMR1CS1                       76
#define T2CON                         77
#define T2CKPS0                       78
#define T2CKPS                        79
#define T2CKPS1                       80
#define TMR2ON                        81
#define TOUTPS0                       82
#define TOUTPS                        83
#define TOUTPS1                       84
#define TOUTPS2                       85
#define TOUTPS3                       86
#define SSPCON                        87
#define SSPM0                         88
#define SSPM                          89
#define SSPM1                         90
#define SSPM2                         91
#define SSPM3                         92
#define CKP                           93
#define SSPEN                         94
#define SSPOV                         95
#define WCOL                          96
#define CCP1CON                       97
#define CCP1M0                        98
#define CCP1M                         99
#define CCP1M1                        100
#define CCP1M2                        101
#define CCP1M3                        102
#define CCP1Y                         103
#define DC1B                          104
#define DC1B0                         105
#define CCP1X                         106
#define DC1B1                         107
#define RCSTA                         108
#define RCD8                          109
#define RX9D                          110
#define OERR                          111
#define FERR                          112
#define ADDEN                         113
#define CREN                          114
#define SREN                          115
#define RC8_9                         116
#define RC9                           117
#define RX9                           118
#define nRC8                          119
#define SPEN                          120
#define CCP2CON                       121
#define CCP2M                         122
#define CCP2M0                        123
#define CCP2M1                        124
#define CCP2M2                        125
#define CCP2M3                        126
#define DC2B0                         127
#define CCP2Y                         128
#define DC2B                          129
#define DC2B1                         130
#define CCP2X                         131
#define ADCON0                        132
#define ADON                          133
#define nDONE                         134
#define GO_nDONE                      135
#define GO_DONE                       136
#define GO                            137
#define CHS                           138
#define CHS0                          139
#define CHS1                          140
#define CHS2                          141
#define CHS3                          142
#define OPTION_REG                    143
#define PS                            144
#define PS0                           145
#define PS1                           146
#define PS2                           147
#define PSA                           148
#define T0SE                          149
#define T0CS                          150
#define INTEDG                        151
#define nRBPU                         152
#define TRISA                         153
#define TRISA0                        154
#define TRISA1                        155
#define TRISA2                        156
#define TRISA3                        157
#define TRISA4                        158
#define TRISA5                        159
#define TRISA6                        160
#define TRISA7                        161
#define TRISB                         162
#define TRISB0                        163
#define TRISB1                        164
#define TRISB2                        165
#define TRISB3                        166
#define TRISB4                        167
#define TRISB5                        168
#define TRISB6                        169
#define TRISB7                        170
#define TRISC                         171
#define TRISC0                        172
#define TRISC1                        173
#define TRISC2                        174
#define TRISC3                        175
#define TRISC4                        176
#define TRISC5                        177
#define TRISC6                        178
#define TRISC7                        179
#define TRISE                         180
#define TRISE3                        181
#define PIE1                          182
#define TMR1IE                        183
#define TMR2IE                        184
#define CCP1IE                        185
#define SSPIE                         186
#define TXIE                          187
#define RCIE                          188
#define ADIE                          189
#define TMR1GIE                       190
#define PIE2                          191
#define CCP2IE                        192
#define PCON                          193
#define nBOR                          194
#define nBO                           195
#define nPOR                          196
#define T1GCON                        197
#define T1GSS0                        198
#define T1GSS                         199
#define T1GSS1                        200
#define T1GVAL                        201
#define T1GGO_nDONE                   202
#define T1GGO                         203
#define T1G_nDONE                     204
#define T1GGO_DONE                    205
#define T1GSPM                        206
#define T1GTM                         207
#define T1GPOL                        208
#define TMR1GE                        209
#define OSCCON                        210
#define ICSS                          211
#define ICSL                          212
#define IRCF                          213
#define IRCF0                         214
#define IRCF1                         215
#define OSCTUNE                       216
#define TUN0                          217
#define TUN                           218
#define TUN1                          219
#define TUN2                          220
#define TUN3                          221
#define TUN4                          222
#define TUN5                          223
#define SSPSTAT                       224
#define BF                            225
#define UA                            226
#define R_nW                          227
#define READ_WRITE                    228
#define I2C_READ                      229
#define nW                            230
#define R                             231
#define nWRITE                        232
#define R_W                           233
#define S                             234
#define I2C_START                     235
#define I2C_STOP                      236
#define P                             237
#define nA                            238
#define D_A                           239
#define D_nA                          240
#define D                             241
#define DATA_ADDRESS                  242
#define nADDRESS                      243
#define I2C_DATA                      244
#define CKE                           245
#define SMP                           246
#define WPUB0                         247
#define WPU0                          248
#define WPUB                          249
#define WPUB1                         250
#define WPU1                          251
#define WPUB2                         252
#define WPU2                          253
#define WPUB3                         254
#define WPU3                          255
#define WPUB4                         256
#define WPU4                          257
#define WPUB5                         258
#define WPU5                          259
#define WPUB6                         260
#define WPU6                          261
#define WPUB7                         262
#define WPU7                          263
#define IOCB0                         264
#define IOC0                          265
#define IOCB                          266
#define IOCB1                         267
#define IOC1                          268
#define IOC2                          269
#define IOCB2                         270
#define IOCB3                         271
#define IOC3                          272
#define IOC4                          273
#define IOCB4                         274
#define IOCB5                         275
#define IOC5                          276
#define IOCB6                         277
#define IOC6                          278
#define IOCB7                         279
#define IOC7                          280
#define TXSTA                         281
#define TXD8                          282
#define TX9D                          283
#define TRMT                          284
#define BRGH                          285
#define SYNC                          286
#define TXEN                          287
#define TX8_9                         288
#define TX9                           289
#define nTX8                          290
#define CSRC                          291
#define BRG0                          292
#define SPBRG                         293
#define BRG1                          294
#define BRG2                          295
#define BRG3                          296
#define BRG4                          297
#define BRG5                          298
#define BRG6                          299
#define BRG7                          300
#define APFCON                        301
#define CCP2SEL                       302
#define SSSEL                         303
#define FVRCON                        304
#define ADFVR0                        305
#define ADFVR1                        306
#define FVREN                         307
#define FVRRDY                        308
#define FVRST                         309
#define ADCON1                        310
#define ADREF                         311
#define ADREF0                        312
#define ADREF1                        313
#define ADCS0                         314
#define ADCS                          315
#define ADCS1                         316
#define ADCS2                         317
#define CPSCON0                       318
#define T0XCS                         319
#define CPSOUT                        320
#define CPSRNG                        321
#define CPSRNG0                       322
#define CPSRNG1                       323
#define CPSON                         324
#define CPSCON1                       325
#define CPSCH                         326
#define CPSCH0                        327
#define CPSCH1                        328
#define CPSCH2                        329
#define CPSCH3                        330
#define ANSELA                        331
#define ANSA0                         332
#define ANSA                          333
#define ANSA1                         334
#define ANSA2                         335
#define ANSA3                         336
#define ANSA4                         337
#define ANSA5                         338
#define ANSELB                        339
#define ANSB0                         340
#define ANSB                          341
#define ANSB1                         342
#define ANSB2                         343
#define ANSB3                         344
#define ANSB4                         345
#define ANSB5                         346
#define PMCON1                        347
#define RD                            348
#define PMRD                          349

#endif // _PIC16F722A_H_