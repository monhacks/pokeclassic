 #ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"

// Temporary Flags
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)
#define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
#define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
#define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
#define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
#define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // Unused Flag
#define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag
#define FLAG_TEMP_11     (TEMP_FLAGS_START + 0x11)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + 0x12)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + 0x13)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + 0x14)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + 0x15)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + 0x16)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + 0x17)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + 0x18)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + 0x19)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + 0x1A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + 0x1B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + 0x1C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + 0x1D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + 0x1E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + 0x1F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F
        
#define FLAG_SYS_NO_COLLISION       0x20 // Unused Flag //DEBUG
#define FLAG_SYS_NO_ENCOUNTER       0x21 // Unused Flag //DEBUG
#define FLAG_SYS_NO_TRAINER_SEE     0x22 // Unused Flag //DEBUG
#define FLAG_SYS_NO_BAG_USE         0x23 // Unused Flag //DEBUG
#define FLAG_SYS_NO_CATCHING        0x24 // Unused Flag //DEBUG
#define FLAG_SYS_PC_FROM_DEBUG_MENU 0x25 // Unused Flag //DEBUG

//HMS
#define FLAG_RECEIVED_HM01    		0x26
#define FLAG_RECEIVED_HM02    		0x27
#define FLAG_RECEIVED_HM03    		0x28
#define FLAG_RECEIVED_HM04    		0x29
#define FLAG_RECEIVED_HM05 			0x2A

//Key Items
#define FLAG_RECEIVED_POKEBLOCK_CASE    0x2B
#define FLAG_RECEIVED_WAILMER_PAIL    	0x2C 
#define FLAG_RECEIVED_OLD_ROD    		0x2D 
#define FLAG_RECEIVED_GOOD_ROD    		0x2E 
#define FLAG_RECEIVED_SUPER_ROD    		0x2F 
#define FLAG_RECEIVED_ITEMFINDER   		0x30
#define FLAG_RECEIVED_COIN_CASE    		0x31 
#define FLAG_RECEIVED_EXP_SHARE    		0x32 
#define FLAG_RECEIVED_POKENAV    		0x33
#define FLAG_RECEIVED_BIKE    			0x34

//Story Flags
#define FLAG_SET_CLOCK                      0x35
#define FLAG_MET_OAK_ROUTE_1                0x36 
#define FLAG_GOT_POTION_ON_ROUTE_1          0x37
#define FLAG_MET_CEDAR                      0x38 // Used for Optional Dialogue
#define FLAG_GOT_OLD_AMBER                  0x39
#define FLAG_RESSURECTED_AERODACTYL         0x3A 
#define FLAG_GOT_AERODACTYL_REWARD          0x3B
#define FLAG_GOT_BROCK_REWARD               0x3C 
#define FLAG_BOUGHT_MAGIKARP                0x3E 
#define FLAG_GOT_FOSSIL_FROM_MT_MOON        0x3F 
#define FLAG_GOT_SS_TICKET    		        0x40 
#define FLAG_RECOVERED_STOLEN_TM    		0x41 
#define FLAG_UNUSED_0x042    		0x42 
#define FLAG_UNUSED_0x043    		0x43 // Unused Flag
#define FLAG_UNUSED_0x044    		0x44 // Unused Flag
#define FLAG_UNUSED_0x045    		0x45 // Unused Flag
#define FLAG_UNUSED_0x046    		0x46 // Unused Flag
#define FLAG_UNUSED_0x047    		0x47 // Unused Flag
#define FLAG_UNUSED_0x048    		0x48 // Unused Flag
#define FLAG_UNUSED_0x049    		0x49 // Unused Flag
#define FLAG_UNUSED_0x04A    		0x4A // Unused Flag
#define FLAG_UNUSED_0x04B    		0x4B // Unused Flag
#define FLAG_UNUSED_0x04C    		0x4C // Unused Flag
#define FLAG_UNUSED_0x04D    		0x4D // Unused Flag
#define FLAG_UNUSED_0x04E    		0x4E // Unused Flag
#define FLAG_UNUSED_0x04F    		0x4F // Unused Flag
#define FLAG_UNUSED_0x050    		0x50
#define FLAG_UNUSED_0x051    		0x51
#define FLAG_UNUSED_0x052    		0x52
#define FLAG_UNUSED_0x053    		0x53 
#define FLAG_UNUSED_0x054    		0x54
#define FLAG_UNUSED_0x055    		0x55  
#define FLAG_UNUSED_0x056         	0x56  
#define FLAG_UNUSED_0x057         	0x57
#define FLAG_UNUSED_0x058           0x58
#define FLAG_UNUSED_0x059           0x59
#define FLAG_UNUSED_0x05A           0x5A
#define FLAG_UNUSED_0x05B        	0x5B
#define FLAG_UNUSED_0x05C    		0x5C
#define FLAG_UNUSED_0x05D           0x5D 
#define FLAG_UNUSED_0x05E           0x5E
#define FLAG_UNUSED_0x05F         	0x5F
#define FLAG_UNUSED_0x060          	0x60
#define FLAG_UNUSED_0x061           0x61
#define FLAG_UNUSED_0x062           0x62
#define FLAG_UNUSED_0x063			0x63
#define FLAG_UNUSED_0x064           0x64 // 
#define FLAG_UNUSED_0x065           0x65 //
#define FLAG_UNUSED_0x066           0x66 //
#define FLAG_UNUSED_0x067           0x67 //
#define FLAG_UNUSED_0x068           0x68 
#define FLAG_UNUSED_0x069     		0x69
#define FLAG_UNUSED_0x06A           0x6A
#define FLAG_UNUSED_0x06B           0x6B
#define FLAG_UNUSED_0x06C           0x6C // 
#define FLAG_UNUSED_0x06D           0x6D
#define FLAG_UNUSED_0x06E           0x6E
#define FLAG_UNUSED_0x06F  			0x6F
#define FLAG_UNUSED_0x070  			0x70
#define FLAG_UNUSED_0x071 			0x71 
#define FLAG_UNUSED_0x072      		0x72 
#define FLAG_UNUSED_0x073           0x73
#define FLAG_UNUSED_0x074           0x74
#define FLAG_UNUSED_0x075     		0x75 
#define FLAG_UNUSED_0x076         	0x76
#define FLAG_UNUSED_0x077     		0x77
#define FLAG_UNUSED_0x078           0x78
#define FLAG_UNUSED_0x079           0x79
#define FLAG_UNUSED_0x07A           0x7A
#define FLAG_UNUSED_0x07B           0x7B
#define FLAG_UNUSED_0x07C           0x7C
#define FLAG_UNUSED_0x07D        	0x7D
#define FLAG_UNUSED_0x07E     		0x7E
#define FLAG_UNUSED_0x07F     		0x7F
#define FLAG_UNUSED_0x080       	0x80 
#define FLAG_UNUSED_0x081  			0x81
#define FLAG_UNUSED_0x082         			0x82
#define FLAG_UNUSED_0x083           		0x83
#define FLAG_UNUSED_0x084          			0x84
#define FLAG_UNUSED_0x085            		0x85
#define FLAG_UNUSED_0x086             		0x86
#define FLAG_UNUSED_0x087  					0x87
#define FLAG_UNUSED_0x088 					0x88 
#define FLAG_UNUSED_0x089                   0x89
#define FLAG_UNUSED_0x08A          			0x8A 
#define FLAG_UNUSED_0x08B   				0x8B
#define FLAG_UNUSED_0x08C             		0x8C
#define FLAG_UNUSED_0x08D         			0x8D
#define FLAG_UNUSED_0x08E              		0x8E
#define FLAG_UNUSED_0x08F           		0x8F
#define FLAG_UNUSED_0x090           		0x90
#define FLAG_UNUSED_0x091                   0x91
#define FLAG_UNUSED_0x092                   0x92
#define FLAG_UNUSED_0x093         			0x93
#define FLAG_UNUSED_0x094       			0x94
#define FLAG_UNUSED_0x095           		0x95
#define FLAG_UNUSED_0x096           		0x96 
#define FLAG_UNUSED_0x097               	0x97
#define FLAG_UNUSED_0x098             		0x98
#define FLAG_UNUSED_0x099    				0x99
#define FLAG_UNUSED_0x09A  					0x9A
#define FLAG_UNUSED_0x09B     				0x9B
#define FLAG_UNUSED_0x09C      				0x9C
#define FLAG_UNUSED_0x09D      				0x9D
#define FLAG_UNUSED_0x09E   				0x9E
#define FLAG_UNUSED_0x09F 					0x9F
#define FLAG_UNUSED_0x0A0              		0xA0
#define FLAG_UNUSED_0x0A1            		0xA1
#define FLAG_UNUSED_0x0A2              		0xA2
#define FLAG_UNUSED_0x0A3             		0xA3
#define FLAG_UNUSED_0x0A4            		0xA4
#define FLAG_UNUSED_0x0A5                   0xA5
#define FLAG_UNUSED_0x0A6                  	0xA6
#define FLAG_UNUSED_0x0A7                  	0xA7
#define FLAG_UNUSED_0x0A8                   0xA8
#define FLAG_UNUSED_0x0A9                   0xA9
#define FLAG_UNUSED_0x0AA                  	0xAA
#define FLAG_UNUSED_0x0AB                  	0xAB
#define FLAG_UNUSED_0x0AC                  	0xAC
#define FLAG_UNUSED_0x0AD        			0xAD
#define FLAG_UNUSED_0x0AE                   0xAE
#define FLAG_UNUSED_0x0AF                   0xAF
#define FLAG_UNUSED_0x0B0                   0xB0
#define FLAG_UNUSED_0x0B1                   0xB1
#define FLAG_UNUSED_0x0B2               	0xB2
#define FLAG_UNUSED_0x0B3                 	0xB3
#define FLAG_UNUSED_0x0B4                  	0xB4
#define FLAG_UNUSED_0x0B5                 	0xB5
#define FLAG_UNUSED_0x0B6                   0xB6
#define FLAG_UNUSED_0x0B7                   0xB7
#define FLAG_UNUSED_0x0B8                   0xB8
#define FLAG_UNUSED_0x0B9                 	0xB9
#define FLAG_UNUSED_0x0BA                   0xBA
#define FLAG_UNUSED_0x0BB                   0xBB
#define FLAG_UNUSED_0x0BC                	0xBC
#define FLAG_UNUSED_0x0BD         			0xBD
#define FLAG_UNUSED_0x0BE        			0xBE
#define FLAG_UNUSED_0x0BF  					0xBF
#define FLAG_UNUSED_0x0C0     				0xC0
#define FLAG_UNUSED_0x0C1                  	0xC1
#define FLAG_UNUSED_0x0C2   				0xC2
#define FLAG_UNUSED_0x0C3  					0xC3 //
#define FLAG_UNUSED_0x0C4  					0xC4 //
#define FLAG_UNUSED_0x0C5   				0xC5 //
#define FLAG_UNUSED_0x0C6   				0xC6 //
#define FLAG_UNUSED_0x0C7           		0xC7
#define FLAG_UNUSED_0x0C8              		0xC8
#define FLAG_UNUSED_0x0C9             		0xC9
#define FLAG_UNUSED_0x0CA            		0xCA
#define FLAG_UNUSED_0x0CB           		0xCB
#define FLAG_UNUSED_0x0CC          			0xCC
#define FLAG_UNUSED_0x0CD    				0xCD
#define FLAG_UNUSED_0x0CE    				0xCE
#define FLAG_UNUSED_0x0CF        			0xCF
#define FLAG_UNUSED_0x0D0   				0xD0
#define FLAG_UNUSED_0x0D1           		0xD1
#define FLAG_UNUSED_0x0D2        			0xD2
#define FLAG_UNUSED_0x0D3       			0xD3
#define FLAG_UNUSED_0x0D4        			0xD4
#define FLAG_UNUSED_0x0D5  					0xD5
#define FLAG_UNUSED_0x0D6         			0xD6
#define FLAG_UNUSED_0x0D7         			0xD7
#define FLAG_UNUSED_0x0D8           		0xD8
#define FLAG_UNUSED_0x0D9      				0xD9
#define FLAG_UNUSED_0x0DA           		0xDA
#define FLAG_UNUSED_0x0DB        			0xDB
#define FLAG_UNUSED_0x0DC                 	0xDC 
#define FLAG_UNUSED_0x0DD             		0xDD
#define FLAG_UNUSED_0x0DE         			0xDE
#define FLAG_UNUSED_0x0DF           		0xDF
#define FLAG_UNUSED_0x0E0          			0xE0
#define FLAG_UNUSED_0x0E1              		0xE1
#define FLAG_UNUSED_0x0E2           		0xE2
#define FLAG_UNUSED_0x0E3               	0xE3
#define FLAG_UNUSED_0x0E4               	0xE4
#define FLAG_UNUSED_0x0E5                   0xE5
#define FLAG_UNUSED_0x0E6                  	0xE6
#define FLAG_UNUSED_0x0E7                	0xE7
#define FLAG_UNUSED_0x0E8                  	0xE8
#define FLAG_UNUSED_0x0E9                   0xE9
#define FLAG_UNUSED_0x0EA                  	0xEA
#define FLAG_UNUSED_0x0EB                  	0xEB
#define FLAG_UNUSED_0x0EC         			0xEC
#define FLAG_UNUSED_0x0ED          			0xED
#define FLAG_UNUSED_0x0EE            		0xEE
#define FLAG_UNUSED_0x0EF                	0xEF
#define FLAG_UNUSED_0x0F0                 	0xF0
#define FLAG_UNUSED_0x0F1                 	0xF1
#define FLAG_UNUSED_0x0F2                 	0xF2
#define FLAG_UNUSED_0x0F3                 	0xF3
#define FLAG_UNUSED_0x0F4                  	0xF4
#define FLAG_UNUSED_0x0F5           		0xF5
#define FLAG_UNUSED_0x0F6 					0xF6
#define FLAG_UNUSED_0x0F7      				0xF7
#define FLAG_UNUSED_0x0F8           		0xF8
#define FLAG_UNUSED_0x0F9          			0xF9
#define FLAG_UNUSED_0x0FA          			0xFA
#define FLAG_UNUSED_0x0FB            		0xFB
#define FLAG_UNUSED_0x0FC            		 0xFC
#define FLAG_UNUSED_0x0FD         			 0xFD
#define FLAG_UNUSED_0x0FE               	 0xFE
#define FLAG_UNUSED_0x0FF        			 0xFF
#define FLAG_UNUSED_0x100            		 0x100
#define FLAG_UNUSED_0x101                	 0x101
#define FLAG_UNUSED_0x102             		 0x102
#define FLAG_UNUSED_0x103        			 0x103
#define FLAG_UNUSED_0x104                    0x104
#define FLAG_UNUSED_0x105                    0x105
#define FLAG_UNUSED_0x106                    0x106
#define FLAG_UNUSED_0x107              		 0x107
#define FLAG_UNUSED_0x108                    0x108
#define FLAG_UNUSED_0x109                    0x109
#define FLAG_UNUSED_0x10A          			 0x10A
#define FLAG_UNUSED_0x10B     				 0x10B
#define FLAG_UNUSED_0x10C    				 0x10C
#define FLAG_UNUSED_0x10D                  	 0x10D
#define FLAG_UNUSED_0x10E          			 0x10E
#define FLAG_UNUSED_0x10F   				 0x10F
#define FLAG_UNUSED_0x110              		 0x110
#define FLAG_UNUSED_0x111               	 0x111
#define FLAG_UNUSED_0x112         			 0x112
#define FLAG_UNUSED_0x113             		 0x113
#define FLAG_UNUSED_0x114             		 0x114
#define FLAG_UNUSED_0x115            		 0x115
#define FLAG_UNUSED_0x116           		 0x116
#define FLAG_UNUSED_0x117             		 0x117
#define FLAG_UNUSED_0x118              		 0x118
#define FLAG_UNUSED_0x119   				 0x119
#define FLAG_UNUSED_0x11A   				 0x11A
#define FLAG_UNUSED_0x11B   				 0x11B
#define FLAG_UNUSED_0x11C  					 0x11C
#define FLAG_UNUSED_0x11D  					 0x11D
#define FLAG_UNUSED_0x11E  					 0x11E
#define FLAG_UNUSED_0x11F  					 0x11F
#define FLAG_UNUSED_0x120  					 0x120
#define FLAG_UNUSED_0x121  					 0x121
#define FLAG_UNUSED_0x122					 0x122
#define FLAG_UNUSED_0x123        	       	 0x123
#define FLAG_UNUSED_0x124               	 0x124
#define FLAG_UNUSED_0x125 					 0x125
#define FLAG_UNUSED_0x126                    0x126
#define FLAG_UNUSED_0x127            		 0x127
#define FLAG_UNUSED_0x128   				 0x128
#define FLAG_UNUSED_0x129          			 0x129
#define FLAG_UNUSED_0x12A                	 0x12A
#define FLAG_UNUSED_0x12B   				 0x12B
#define FLAG_UNUSED_0x12C     				 0x12C
#define FLAG_UNUSED_0x12D   		 	     0x12D
#define FLAG_UNUSED_0x12E   				 0x12E
#define FLAG_UNUSED_0x12F                    0x12F
#define FLAG_UNUSED_0x130     				 0x130
#define FLAG_UNUSED_0x131      				 0x131
#define FLAG_UNUSED_0x132 					 0x132
#define FLAG_UNUSED_0x133 					 0x133
#define FLAG_UNUSED_0x134           		 0x134
#define FLAG_UNUSED_0x135       			 0x135
#define FLAG_UNUSED_0x136              		 0x136
#define FLAG_UNUSED_0x137      				 0x137 
#define FLAG_UNUSED_0x138                    0x138
#define FLAG_UNUSED_0x139    				 0x139
#define FLAG_UNUSED_0x13A            		 0x13A
#define FLAG_UNUSED_0x13B               	 0x13B
#define FLAG_UNUSED_0x13C               	 0x13C
#define FLAG_UNUSED_0x13D             		 0x13D
#define FLAG_UNUSED_0x13E 					 0x13E
#define FLAG_UNUSED_0x13F   	 			 0x13F
#define FLAG_UNUSED_0x140      				 0x140
#define FLAG_UNUSED_0x141                 	 0x141
#define FLAG_UNUSED_0x142  					 0x142
#define FLAG_UNUSED_0x143     				 0x143
#define FLAG_UNUSED_0x144         			 0x144
#define FLAG_UNUSED_0x145        			 0x145
#define FLAG_UNUSED_0x146  					 0x146
#define FLAG_UNUSED_0x147 					 0x147

//Mystery Gifts
#define FLAG_RECEIVED_AURORA_TICKET          0x148
#define FLAG_RECEIVED_MYSTIC_TICKET          0x149
#define FLAG_RECEIVED_OLD_SEA_MAP            0x14A
#define FLAG_WONDER_CARD_UNUSED_1            0x14B // These Wonder Card flags are referenced but never set
#define FLAG_WONDER_CARD_UNUSED_2            0x14C
#define FLAG_WONDER_CARD_UNUSED_3            0x14D
#define FLAG_WONDER_CARD_UNUSED_4            0x14E
#define FLAG_WONDER_CARD_UNUSED_5            0x14F
#define FLAG_WONDER_CARD_UNUSED_6            0x150
#define FLAG_WONDER_CARD_UNUSED_7            0x151
#define FLAG_WONDER_CARD_UNUSED_8            0x152
#define FLAG_WONDER_CARD_UNUSED_9            0x153
#define FLAG_WONDER_CARD_UNUSED_10           0x154
#define FLAG_WONDER_CARD_UNUSED_11           0x155
#define FLAG_WONDER_CARD_UNUSED_12           0x156
#define FLAG_WONDER_CARD_UNUSED_13           0x157
#define FLAG_WONDER_CARD_UNUSED_14           0x158
#define FLAG_WONDER_CARD_UNUSED_15           0x159
#define FLAG_WONDER_CARD_UNUSED_16           0x15A
#define FLAG_WONDER_CARD_UNUSED_17           0x15B
#define NUM_WONDER_CARD_FLAGS                (1 + FLAG_WONDER_CARD_UNUSED_17 - FLAG_RECEIVED_AURORA_TICKET)

// Trainer Rematch Flags
#define FLAG_MATCH_CALL_REGISTERED              0x15C
#define FLAG_REMATCH_JANICE                    0x15D // Lass Janice on Route 3
#define FLAG_REMATCH_BEN                       0x15E // Youngster Ben on Route 3
#define FLAG_REMATCH_UNUSED_2                  0x15F
#define FLAG_REMATCH_UNUSED_3                  0x160
#define FLAG_REMATCH_UNUSED_4                  0x161
#define FLAG_REMATCH_UNUSED_5                  0x162
#define FLAG_REMATCH_UNUSED_6                  0x163
#define FLAG_REMATCH_UNUSED_7                  0x164
#define FLAG_REMATCH_UNUSED_8                  0x165
#define FLAG_REMATCH_UNUSED_9                  0x166
#define FLAG_REMATCH_UNUSED_10                 0x167
#define FLAG_REMATCH_UNUSED_11                 0x168
#define FLAG_REMATCH_UNUSED_12                 0x169
#define FLAG_REMATCH_UNUSED_13                 0x16A
#define FLAG_REMATCH_UNUSED_14                 0x16B
#define FLAG_REMATCH_UNUSED_15                 0x16C
#define FLAG_REMATCH_UNUSED_16                 0x16D
#define FLAG_REMATCH_UNUSED_17                 0x16E
#define FLAG_REMATCH_UNUSED_18                 0x16F
#define FLAG_REMATCH_UNUSED_19                 0x170
#define FLAG_REMATCH_UNUSED_20                 0x171
#define FLAG_REMATCH_UNUSED_21                 0x172
#define FLAG_REMATCH_UNUSED_22                 0x173
#define FLAG_REMATCH_UNUSED_23                 0x174
#define FLAG_REMATCH_UNUSED_24                 0x175
#define FLAG_REMATCH_UNUSED_25                 0x176
#define FLAG_REMATCH_UNUSED_26                 0x177
#define FLAG_REMATCH_UNUSED_27                 0x178
#define FLAG_REMATCH_UNUSED_28                 0x179
#define FLAG_REMATCH_UNUSED_29                 0x17A
#define FLAG_REMATCH_UNUSED_30                 0x17B
#define FLAG_REMATCH_UNUSED_31                 0x17C
#define FLAG_REMATCH_UNUSED_32                 0x17D
#define FLAG_REMATCH_UNUSED_33                 0x17E
#define FLAG_REMATCH_UNUSED_34                 0x17F
#define FLAG_REMATCH_UNUSED_35                 0x180
#define FLAG_REMATCH_UNUSED_36                 0x181
#define FLAG_REMATCH_UNUSED_37                 0x182
#define FLAG_REMATCH_UNUSED_38                 0x183
#define FLAG_REMATCH_UNUSED_39                 0x184
#define FLAG_REMATCH_UNUSED_40                 0x185
#define FLAG_REMATCH_UNUSED_41                 0x186
#define FLAG_REMATCH_UNUSED_42                 0x187
#define FLAG_REMATCH_UNUSED_43                 0x188
#define FLAG_REMATCH_UNUSED_44                 0x189
#define FLAG_REMATCH_UNUSED_45                 0x18A
#define FLAG_REMATCH_UNUSED_46                 0x18B
#define FLAG_REMATCH_UNUSED_47                 0x18C
#define FLAG_REMATCH_UNUSED_48                 0x18D
#define FLAG_REMATCH_UNUSED_49                 0x18E
#define FLAG_REMATCH_UNUSED_50                 0x18F
#define FLAG_REMATCH_UNUSED_51                 0x190
#define FLAG_REMATCH_UNUSED_52                 0x191
#define FLAG_REMATCH_UNUSED_53                 0x192
#define FLAG_REMATCH_UNUSED_54                 0x193
#define FLAG_REMATCH_UNUSED_55                 0x194
#define FLAG_REMATCH_UNUSED_56                 0x195
#define FLAG_REMATCH_UNUSED_57                 0x196
#define FLAG_REMATCH_UNUSED_58                 0x197
#define FLAG_REMATCH_UNUSED_59                 0x198
#define FLAG_REMATCH_UNUSED_60                 0x199
#define FLAG_REMATCH_UNUSED_61                 0x19A
#define FLAG_REMATCH_UNUSED_62                 0x19B
#define FLAG_REMATCH_UNUSED_63                 0x19C
#define FLAG_REMATCH_SPECIAL_TRAINER           0x19D //Special Rematches Start here. Unused aside from rematch enums
#define FLAG_REMATCH_ELITE_FOUR                0x19E // Unused aside from rematch enums

// Mew Flags
#define FLAG_CAUGHT_MEW                  	 0x19F
#define FLAG_DEFEATED_MEW                 	 0x1A0
#define FLAG_HIDE_MEW            		 	 0x1A1
#define FLAG_SHOWN_OLD_SEA_MAP               0x1A2

//Move Tutor Flags
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER       0x1A3
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT       0x1A4
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER   0x1A5
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC         0x1A6
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME     0x1A7
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK    0x1A8
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE    0x1A9
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH  0x1AA
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE   0x1AB
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION     0x1AC

//More Unused Flags
#define FLAG_IN_GAME_TRADE_MR_MIME           0x1AD
#define FLAG_UNUSED_0x1AE                    0x1AE
#define FLAG_UNUSED_0x1AF                    0x1AF
#define FLAG_UNUSED_0x1B0                    0x1B0
#define FLAG_UNUSED_0x1B1                    0x1B1
#define FLAG_UNUSED_0x1B2                    0x1B2
#define FLAG_UNUSED_0x1B3                    0x1B3
#define FLAG_UNUSED_0x1B4                    0x1B4
#define FLAG_UNUSED_0x1B5                    0x1B5
#define FLAG_UNUSED_0x1B6                    0x1B6
#define FLAG_UNUSED_0x1B7                    0x1B7
#define FLAG_AIDE_LOCATION_1                 0x1B8 // Aide moves to Route 2
#define FLAG_AIDE_LOCATION_2                 0x1B9 // Aide moves to Route 10
#define FLAG_AIDE_LOCATION_3                 0x1BA // Aide moves to Route 11
#define FLAG_AIDE_LOCATION_4               	 0x1BB // Aide moves to Route 4
#define FLAG_AIDE_LOCATION_5                 0x1BC // Aide moves to Route 5
#define FLAG_QUEUE_AIDE_CALL           		 0x1BD // Aide is prepped to call player about a new item
#define FLAG_GOT_SEVEN_BADGES                0x1BE // Used for Scott Match Call tracking
#define FLAG_UNUSED_0x1BF           		 0x1BF
#define FLAG_UNUSED_0x1C0               	 0x1C0
#define FLAG_UNUSED_0x1C1 					 0x1C1
#define FLAG_UNUSED_0x1C2 					 0x1C2
#define FLAG_UNUSED_0x1C3 					 0x1C3
#define FLAG_UNUSED_0x1C4 					 0x1C4
#define FLAG_UNUSED_0x1C5 					 0x1C5
#define FLAG_UNUSED_0x1C6               	 0x1C6
#define FLAG_UNUSED_0x1C7                    0x1C7
#define FLAG_UNUSED_0x1C8       			 0x1C8
#define FLAG_UNUSED_0x1C9        			 0x1C9
#define FLAG_UNUSED_0x1CA                    0x1CA
#define FLAG_UNUSED_0x1CB 					 0x1CB
#define FLAG_UNUSED_0x1CC         			 0x1CC
#define FLAG_UNUSED_0x1CD          			 0x1CD
#define FLAG_UNUSED_0x1CE           		 0x1CE
#define FLAG_UNUSED_0x1CF         			 0x1CF
#define FLAG_UNUSED_0x1D0           		 0x1D0
#define FLAG_UNUSED_0x1D1       			 0x1D1
#define FLAG_UNUSED_0x1D2      				 0x1D2
#define FLAG_UNUSED_0x1D3       			 0x1D3
#define FLAG_UNUSED_0x1D4        			 0x1D4
#define FLAG_UNUSED_0x1D5       			 0x1D5
#define FLAG_UNUSED_0x1D6      				 0x1D6
#define FLAG_UNUSED_0x1D7        			 0x1D7
#define FLAG_UNUSED_0x1D8 					 0x1D8
#define FLAG_UNUSED_0x1D9        			 0x1D9
#define FLAG_UNUSED_0x1DA                    0x1DA
#define FLAG_UNUSED_0x1DB		             0x1DB
#define FLAG_UNUSED_0x1DC                 	 0x1DC
#define FLAG_UNUSED_0x1DD                  	 0x1DD
#define FLAG_UNUSED_0x1DE                    0x1DE
#define FLAG_UNUSED_0x1DF                    0x1DF
#define FLAG_UNUSED_0x1E0                    0x1E0
#define FLAG_UNUSED_0x1E1                    0x1E1
#define FLAG_UNUSED_0x1E2                    0x1E2
#define FLAG_UNUSED_0x1E3                    0x1E3

// Mystery Gift Flags (Unknown)
#define FLAG_MYSTERY_GIFT_DONE               0x1E4
#define FLAG_MYSTERY_GIFT_1                  0x1E5
#define FLAG_MYSTERY_GIFT_2                  0x1E6
#define FLAG_MYSTERY_GIFT_3                  0x1E7
#define FLAG_MYSTERY_GIFT_4                  0x1E8
#define FLAG_MYSTERY_GIFT_5                  0x1E9
#define FLAG_MYSTERY_GIFT_6                  0x1EA
#define FLAG_MYSTERY_GIFT_7                  0x1EB
#define FLAG_MYSTERY_GIFT_8                  0x1EC
#define FLAG_MYSTERY_GIFT_9                  0x1ED
#define FLAG_MYSTERY_GIFT_10                 0x1EE
#define FLAG_MYSTERY_GIFT_11                 0x1EF
#define FLAG_MYSTERY_GIFT_12                 0x1F0
#define FLAG_MYSTERY_GIFT_13                 0x1F1
#define FLAG_MYSTERY_GIFT_14                 0x1F2
#define FLAG_MYSTERY_GIFT_15                 0x1F3

// Hidden Items
#define FLAG_HIDDEN_ITEMS_START                         0x1F4
#define FLAG_HIDDEN_ITEM_VIRIDIAN_FOREST_ANTIDOTE       (FLAG_HIDDEN_ITEMS_START + 0x00)
#define FLAG_HIDDEN_ITEM_VIRIDIAN_FOREST_POTION         (FLAG_HIDDEN_ITEMS_START + 0x01)
#define FLAG_HIDDEN_ITEM_PEWTER_CITY_POKE_BALL          (FLAG_HIDDEN_ITEMS_START + 0x02)
#define FLAG_HIDDEN_ITEM_ROUTE3_ORAN_BERRY              (FLAG_HIDDEN_ITEMS_START + 0x03)
#define FLAG_HIDDEN_ITEM_ROUTE4_PERSIM_BERRY            (FLAG_HIDDEN_ITEMS_START + 0x04)
#define FLAG_HIDDEN_ITEM_ROUTE4_GREAT_BALL              (FLAG_HIDDEN_ITEMS_START + 0x05)
#define FLAG_HIDDEN_ITEM_ROUTE4_RAZZ_BERRY              (FLAG_HIDDEN_ITEMS_START + 0x06)
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_TINY_MUSHROOM      (FLAG_HIDDEN_ITEMS_START + 0x07)
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_TINY_MUSHROOM_2    (FLAG_HIDDEN_ITEMS_START + 0x08)
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_TINY_MUSHROOM_3    (FLAG_HIDDEN_ITEMS_START + 0x09)
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_BIG_MUSHROOM       (FLAG_HIDDEN_ITEMS_START + 0x0A)
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_BIG_MUSHROOM_2     (FLAG_HIDDEN_ITEMS_START + 0x0B)
#define FLAG_HIDDEN_ITEM_MT_MOON_B1F_BIG_MUSHROOM_3     (FLAG_HIDDEN_ITEMS_START + 0x0C)
#define FLAG_HIDDEN_ITEM_MT_MOON_B2F_ETHER       		(FLAG_HIDDEN_ITEMS_START + 0x0D)
#define FLAG_HIDDEN_ITEM_MT_MOON_B2F_MOON_STONE         (FLAG_HIDDEN_ITEMS_START + 0x0E)
#define FLAG_HIDDEN_ITEM_CERULEAN_CITY_RARE_CANDY       (FLAG_HIDDEN_ITEMS_START + 0x0F)
#define FLAG_HIDDEN_ITEM_16             (FLAG_HIDDEN_ITEMS_START + 0x10)
#define FLAG_HIDDEN_ITEM_17             (FLAG_HIDDEN_ITEMS_START + 0x11)
#define FLAG_HIDDEN_ITEM_18         	(FLAG_HIDDEN_ITEMS_START + 0x12)
#define FLAG_HIDDEN_ITEM_19            	(FLAG_HIDDEN_ITEMS_START + 0x13)
#define FLAG_HIDDEN_ITEM_20            	(FLAG_HIDDEN_ITEMS_START + 0x14)
#define FLAG_HIDDEN_ITEM_21           	(FLAG_HIDDEN_ITEMS_START + 0x15)
#define FLAG_HIDDEN_ITEM_22             (FLAG_HIDDEN_ITEMS_START + 0x16)
#define FLAG_HIDDEN_ITEM_23          	(FLAG_HIDDEN_ITEMS_START + 0x17)
#define FLAG_HIDDEN_ITEM_24            	(FLAG_HIDDEN_ITEMS_START + 0x18)
#define FLAG_HIDDEN_ITEM_25             (FLAG_HIDDEN_ITEMS_START + 0x19)
#define FLAG_HIDDEN_ITEM_26             (FLAG_HIDDEN_ITEMS_START + 0x1A)
#define FLAG_HIDDEN_ITEM_27           	(FLAG_HIDDEN_ITEMS_START + 0x1B)
#define FLAG_HIDDEN_ITEM_28             (FLAG_HIDDEN_ITEMS_START + 0x1C)
#define FLAG_HIDDEN_ITEM_29         	(FLAG_HIDDEN_ITEMS_START + 0x1D)
#define FLAG_HIDDEN_ITEM_30             (FLAG_HIDDEN_ITEMS_START + 0x1E)
#define FLAG_HIDDEN_ITEM_31             (FLAG_HIDDEN_ITEMS_START + 0x1F)
#define FLAG_HIDDEN_ITEM_32             (FLAG_HIDDEN_ITEMS_START + 0x20)
#define FLAG_HIDDEN_ITEM_33             (FLAG_HIDDEN_ITEMS_START + 0x21)
#define FLAG_HIDDEN_ITEM_34          	(FLAG_HIDDEN_ITEMS_START + 0x22)
#define FLAG_HIDDEN_ITEM_35       		(FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_HIDDEN_ITEM_36             (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_HIDDEN_ITEM_37             (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_HIDDEN_ITEM_38       		(FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_HIDDEN_ITEM_39             (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_40             (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_41             (FLAG_HIDDEN_ITEMS_START + 0x29)
#define FLAG_HIDDEN_ITEM_42             (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_43             (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_HIDDEN_ITEM_44             (FLAG_HIDDEN_ITEMS_START + 0x2C)
#define FLAG_HIDDEN_ITEM_45             (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_46             (FLAG_HIDDEN_ITEMS_START + 0x2E)
#define FLAG_HIDDEN_ITEM_47             (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_48        		(FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_49       		(FLAG_HIDDEN_ITEMS_START + 0x31)
#define FLAG_HIDDEN_ITEM_50             (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_51             (FLAG_HIDDEN_ITEMS_START + 0x33)
#define FLAG_HIDDEN_ITEM_52             (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_53             (FLAG_HIDDEN_ITEMS_START + 0x35)
#define FLAG_HIDDEN_ITEM_54             (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_55             (FLAG_HIDDEN_ITEMS_START + 0x37)
#define FLAG_HIDDEN_ITEM_56             (FLAG_HIDDEN_ITEMS_START + 0x38)
#define FLAG_HIDDEN_ITEM_57             (FLAG_HIDDEN_ITEMS_START + 0x39)
#define FLAG_HIDDEN_ITEM_58      	    (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_59     		(FLAG_HIDDEN_ITEMS_START + 0x3B)
#define FLAG_HIDDEN_ITEM_60     		(FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_61           	(FLAG_HIDDEN_ITEMS_START + 0x3D)
#define FLAG_HIDDEN_ITEM_62             (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_63             (FLAG_HIDDEN_ITEMS_START + 0x3F)
#define FLAG_HIDDEN_ITEM_64             (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_65             (FLAG_HIDDEN_ITEMS_START + 0x41)
#define FLAG_HIDDEN_ITEM_66             (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_67            	(FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_68             (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_69             (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_70             (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_71             (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_72             (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_73             (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_74             (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_75             (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_76             (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_77             (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_78          	(FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_79             (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_80          	(FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_81          	(FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_82         	(FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_83          	(FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_84             (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_85             (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_86             (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_87             (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_88             (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_89             (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_90           	(FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_91             (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_92             (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_93             (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_94             (FLAG_HIDDEN_ITEMS_START + 0x5E)
#define FLAG_HIDDEN_ITEM_95           	(FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_96            	(FLAG_HIDDEN_ITEMS_START + 0x60)
#define FLAG_HIDDEN_ITEM_97             (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_98             (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_99             (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_100            (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_101           	(FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_102            (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_103           	(FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_104            (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_105 			(FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_106   			(FLAG_HIDDEN_ITEMS_START + 0x6A)
#define FLAG_HIDDEN_ITEM_107         	(FLAG_HIDDEN_ITEMS_START + 0x6B)
#define FLAG_HIDDEN_ITEM_108        	(FLAG_HIDDEN_ITEMS_START + 0x6C)
#define FLAG_HIDDEN_ITEM_109           	(FLAG_HIDDEN_ITEMS_START + 0x6D)
#define FLAG_HIDDEN_ITEM_110            (FLAG_HIDDEN_ITEMS_START + 0x6E)
#define FLAG_HIDDEN_ITEM_111            (FLAG_HIDDEN_ITEMS_START + 0x6F)

#define FLAG_UNUSED_0x264  0x264 // Unused Flag
#define FLAG_UNUSED_0x265  0x265 // Unused Flag
#define FLAG_UNUSED_0x266  0x266 // Unused Flag
#define FLAG_UNUSED_0x267  0x267 // Unused Flag
#define FLAG_UNUSED_0x268  0x268 // Unused Flag
#define FLAG_UNUSED_0x269  0x269 // Unused Flag
#define FLAG_UNUSED_0x26A  0x26A // Unused Flag
#define FLAG_UNUSED_0x26B  0x26B // Unused Flag
#define FLAG_UNUSED_0x26C  0x26C // Unused Flag
#define FLAG_UNUSED_0x26D  0x26D // Unused Flag
#define FLAG_UNUSED_0x26E  0x26E // Unused Flag
#define FLAG_UNUSED_0x26F  0x26F // Unused Flag
#define FLAG_UNUSED_0x270  0x270 // Unused Flag
#define FLAG_UNUSED_0x271  0x271 // Unused Flag
#define FLAG_UNUSED_0x272  0x272 // Unused Flag
#define FLAG_UNUSED_0x273  0x273 // Unused Flag
#define FLAG_UNUSED_0x274  0x274 // Unused Flag
#define FLAG_UNUSED_0x275  0x275 // Unused Flag
#define FLAG_UNUSED_0x276  0x276 // Unused Flag
#define FLAG_UNUSED_0x277  0x277 // Unused Flag
#define FLAG_UNUSED_0x278  0x278 // Unused Flag
#define FLAG_UNUSED_0x279  0x279 // Unused Flag
#define FLAG_UNUSED_0x27A  0x27A // Unused Flag
#define FLAG_UNUSED_0x27B  0x27B // Unused Flag
#define FLAG_UNUSED_0x27C  0x27C // Unused Flag
#define FLAG_UNUSED_0x27D  0x27D // Unused Flag
#define FLAG_UNUSED_0x27E  0x27E // Unused Flag
#define FLAG_UNUSED_0x27F  0x27F // Unused Flag
#define FLAG_UNUSED_0x280  0x280 // Unused Flag
#define FLAG_UNUSED_0x281  0x281 // Unused Flag
#define FLAG_UNUSED_0x282  0x282 // Unused Flag
#define FLAG_UNUSED_0x283  0x283 // Unused Flag
#define FLAG_UNUSED_0x284  0x284 // Unused Flag
#define FLAG_UNUSED_0x285  0x285 // Unused Flag
#define FLAG_UNUSED_0x286  0x286 // Unused Flag
#define FLAG_UNUSED_0x287  0x287 // Unused Flag
#define FLAG_UNUSED_0x288  0x288 // Unused Flag
#define FLAG_UNUSED_0x289  0x289 // Unused Flag
#define FLAG_UNUSED_0x28A  0x28A // Unused Flag
#define FLAG_UNUSED_0x28B  0x28B // Unused Flag
#define FLAG_UNUSED_0x28C  0x28C // Unused Flag
#define FLAG_UNUSED_0x28D  0x28D // Unused Flag
#define FLAG_UNUSED_0x28E  0x28E // Unused Flag
#define FLAG_UNUSED_0x28F  0x28F // Unused Flag
#define FLAG_UNUSED_0x290  0x290 // Unused Flag
#define FLAG_UNUSED_0x291  0x291 // Unused Flag
#define FLAG_UNUSED_0x292  0x292 // Unused Flag
#define FLAG_UNUSED_0x293  0x293 // Unused Flag
#define FLAG_UNUSED_0x294  0x294 // Unused Flag
#define FLAG_UNUSED_0x295  0x295 // Unused Flag
#define FLAG_UNUSED_0x296  0x296 // Unused Flag
#define FLAG_UNUSED_0x297  0x297 // Unused Flag
#define FLAG_UNUSED_0x298  0x298 // Unused Flag
#define FLAG_UNUSED_0x299  0x299 // Unused Flag
#define FLAG_UNUSED_0x29A  0x29A // Unused Flag
#define FLAG_UNUSED_0x29B  0x29B // Unused Flag
#define FLAG_UNUSED_0x29C  0x29C // Unused Flag
#define FLAG_UNUSED_0x29D  0x29D // Unused Flag
#define FLAG_UNUSED_0x29E  0x29E // Unused Flag
#define FLAG_UNUSED_0x29F  0x29F // Unused Flag
#define FLAG_UNUSED_0x2A0  0x2A0 // Unused Flag
#define FLAG_UNUSED_0x2A1  0x2A1 // Unused Flag
#define FLAG_UNUSED_0x2A2  0x2A2 // Unused Flag
#define FLAG_UNUSED_0x2A3  0x2A3 // Unused Flag
#define FLAG_UNUSED_0x2A4  0x2A4 // Unused Flag
#define FLAG_UNUSED_0x2A5  0x2A5 // Unused Flag
#define FLAG_UNUSED_0x2A6  0x2A6 // Unused Flag
#define FLAG_UNUSED_0x2A7  0x2A7 // Unused Flag
#define FLAG_UNUSED_0x2A8  0x2A8 // Unused Flag
#define FLAG_UNUSED_0x2A9  0x2A9 // Unused Flag
#define FLAG_UNUSED_0x2AA  0x2AA // Unused Flag
#define FLAG_UNUSED_0x2AB  0x2AB // Unused Flag
#define FLAG_UNUSED_0x2AC  0x2AC // Unused Flag
#define FLAG_UNUSED_0x2AD  0x2AD // Unused Flag
#define FLAG_UNUSED_0x2AE  0x2AE // Unused Flag
#define FLAG_UNUSED_0x2AF  0x2AF // Unused Flag
#define FLAG_UNUSED_0x2B0  0x2B0 // Unused Flag
#define FLAG_UNUSED_0x2B1  0x2B1 // Unused Flag
#define FLAG_UNUSED_0x2B2  0x2B2 // Unused Flag
#define FLAG_UNUSED_0x2B3  0x2B3 // Unused Flag
#define FLAG_UNUSED_0x2B4  0x2B4 // Unused Flag
#define FLAG_UNUSED_0x2B5  0x2B5 // Unused Flag
#define FLAG_UNUSED_0x2B6  0x2B6 // Unused Flag
#define FLAG_UNUSED_0x2B7  0x2B7 // Unused Flag
#define FLAG_UNUSED_0x2B8  0x2B8 // Unused Flag
#define FLAG_UNUSED_0x2B9  0x2B9 // Unused Flag
#define FLAG_UNUSED_0x2BA  0x2BA // Unused Flag
#define FLAG_UNUSED_0x2BB  0x2BB // Unused Flag

// Event Flags
#define FLAG_HIDE_APPRENTICE                     					0x2BC
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                0x2BD
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                				0x2BE
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                               0x2BF
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                               0x2C0
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                               0x2C1
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                              	0x2C2
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                               0x2C3
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                               0x2C4
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                               0x2C5
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           0x2C6
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2           0x2C7
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1               0x2C8
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2               0x2C9
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3               0x2CA
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4               0x2CB
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5               0x2CC
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6            	0x2CD
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                             0x2CE

#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          0x2CF
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2 							0x2D0
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3              			0x2D1
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1          				0x2D2
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                          0x2D3
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                    		0x2D4
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                        	0x2D5
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                          0x2D6
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER  				0x2D7
#define FLAG_HIDE_FANCLUB_OLD_LADY                        			0x2D8
#define FLAG_HIDE_FANCLUB_BOY                                       0x2D9
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                     			0x2DA
#define FLAG_HIDE_FANCLUB_LADY                          			0x2DB
#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                    	0x2DC
#define FLAG_HIDE_BATTLE_TOWER_REPORTER              				0x2DD

#define FLAG_HIDE_MOM_PLAYERS_ROOM                                 	0x2DE
#define FLAG_HIDE_OAK_ROUTE1      									0x2DF
#define FLAG_HIDE_PIKACHU_ROUTE1          							0x2E0
#define FLAG_HIDE_OAK_IN_LAB             							0x2E1
#define FLAG_HIDE_RIVAL_IN_LAB                              		0x2E2
#define FLAG_HIDE_OAK_LAB_POKEBALL                           		0x2E3
#define FLAG_HIDE_POKEDEX_ON_TABLE                            		0x2E4
#define FLAG_HIDE_MOM_PALLET_TOWN                               	0x2E5
#define FLAG_HIDE_OFFICER_JENNY_VIRIDIAN_CITY                       0x2E6
#define FLAG_HIDE_AIDE_OAK_LAB                       				0x2E7
#define FLAG_HIDE_AIDE_ROUTE2                          				0x2E8
#define FLAG_HIDE_AIDE_ROUTE10            							0x2E9
#define FLAG_HIDE_AIDE_ROUTE11                    					0x2EA
#define FLAG_HIDE_AIDE_ROUTE16                  					0x2EB
#define FLAG_HIDE_AIDE_ROUTE15               						0x2EC
#define FLAG_HIDE_RIVAL_ROUTE_22                            		0x2ED
#define FLAG_HIDE_PEWTER_MUSEUM_GUIDE                               0x2EE
#define FLAG_HIDE_PEWTER_CITY_GYM_GUIDE                        		0x2EF
#define FLAG_HIDE_MT_MOON_ROCKETS                       			0x2F0
#define FLAG_HIDE_DOME_FOSSIL            							0x2F1
#define FLAG_HIDE_HELIX_FOSSIL         								0x2F2
#define FLAG_HIDE_MT_MOON_JESSIE_JAMES        						0x2F3
#define FLAG_HIDE_ROUTE4_POLICE        								0x2F4
#define FLAG_HIDE_CERULEAN_RIVAL               						0x2F5
#define FLAG_HIDE_CERULEAN_TM28                						0x2F6
#define FLAG_HIDE_CERULEAN_ROCKET                    				0x2F7
#define FLAG_HIDE_CERULEAN_CAVE_GUARD    							0x2F8
#define FLAG_HIDE_UNUSED_35             							0x2F9
#define FLAG_HIDE_UNUSED_36                 						0x2FA
#define FLAG_HIDE_UNUSED_37                                         0x2FB
#define FLAG_HIDE_UNUSED_38                      					0x2FC
#define FLAG_HIDE_UNUSED_39                               			0x2FD
#define FLAG_HIDE_UNUSED_40                            				0x2FE
#define FLAG_HIDE_UNUSED_41                  						0x2FF
#define FLAG_HIDE_UNUSED_42                        					0x300
#define FLAG_HIDE_UNUSED_43                    						0x301
#define FLAG_HIDE_UNUSED_44                        					0x302
#define FLAG_HIDE_UNUSED_45                        					0x303
#define FLAG_HIDE_UNUSED_46                            				0x304
#define FLAG_HIDE_UNUSED_47                           				0x305
#define FLAG_HIDE_UNUSED_48         								0x306
#define FLAG_HIDE_UNUSED_49                           				0x307
#define FLAG_HIDE_UNUSED_50                          				0x308
#define FLAG_HIDE_UNUSED_51                          				0x309
#define FLAG_HIDE_UNUSED_52                          				0x30A
#define FLAG_HIDE_UNUSED_53                          				0x30B
#define FLAG_HIDE_UNUSED_54                        					0x30C
#define FLAG_HIDE_UNUSED_55                            				0x30D
#define FLAG_HIDE_UNUSED_56                                			0x30E
#define FLAG_HIDE_UNUSED_57                                			0x30F
#define FLAG_HIDE_UNUSED_58          								0x310
#define FLAG_HIDE_UNUSED_59              							0x311
#define FLAG_HIDE_UNUSED_60                                   		0x312
#define FLAG_HIDE_UNUSED_61                            				0x313
#define FLAG_HIDE_UNUSED_62                               			0x314
#define FLAG_HIDE_UNUSED_63                                			0x315
#define FLAG_HIDE_UNUSED_64                                       	0x316
#define FLAG_HIDE_UNUSED_65                                			0x317
#define FLAG_HIDE_UNUSED_66                                    		0x318
#define FLAG_HIDE_UNUSED_67               							0x319
#define FLAG_HIDE_UNUSED_68                            				0x31A
#define FLAG_HIDE_UNUSED_69                             				0x31B
#define FLAG_HIDE_UNUSED_70                          					0x31C
#define FLAG_HIDE_UNUSED_71                          					0x31D
#define FLAG_HIDE_UNUSED_72                          					0x31E
#define FLAG_HIDE_UNUSED_73                          					0x31F
#define FLAG_HIDE_UNUSED_74                                           0x320
#define FLAG_HIDE_UNUSED_75                                           0x321
#define FLAG_HIDE_UNUSED_76                    						0x322
#define FLAG_HIDE_UNUSED_77                   						0x323
#define FLAG_HIDE_UNUSED_78                               			0x324
#define FLAG_HIDE_UNUSED_79                        					0x325
#define FLAG_HIDE_UNUSED_80                							0x326
#define FLAG_HIDE_UNUSED_81                   						0x327
#define FLAG_HIDE_UNUSED_82     										0x328
#define FLAG_HIDE_UNUSED_83         									0x329
#define FLAG_HIDE_UNUSED_84                           				0x32A
#define FLAG_HIDE_UNUSED_85     										0x32B
#define FLAG_HIDE_UNUSED_86      										0x32C
#define FLAG_HIDE_UNUSED_87                     						0x32D
#define FLAG_HIDE_UNUSED_88                               			0x32E
#define FLAG_HIDE_UNUSED_89     										0x32F
#define FLAG_HIDE_UNUSED_90                           				0x330
#define FLAG_HIDE_UNUSED_91       									0x331
#define FLAG_HIDE_UNUSED_92           								0x332
#define FLAG_HIDE_UNUSED_93                              				0x333
#define FLAG_HIDE_UNUSED_94                        					0x334
#define FLAG_HIDE_UNUSED_95         									0x335
#define FLAG_HIDE_UNUSED_96         									0x336
#define FLAG_HIDE_UNUSED_97                          					0x337
#define FLAG_HIDE_UNUSED_98                          					0x338
#define FLAG_HIDE_UNUSED_99                         					0x339
#define FLAG_HIDE_UNUSED_100                            				0x33A
#define FLAG_HIDE_UNUSED_101                             				0x33B
#define FLAG_HIDE_UNUSED_102                     						0x33C
#define FLAG_HIDE_UNUSED_103                      						0x33D
#define FLAG_HIDE_UNUSED_104                         					0x33E
#define FLAG_HIDE_UNUSED_105               							0x33F
#define FLAG_HIDE_UNUSED_106                							0x340
#define FLAG_HIDE_UNUSED_107                               			0x341
#define FLAG_HIDE_UNUSED_108                                  			0x342
#define FLAG_HIDE_UNUSED_109                       					0x343
#define FLAG_HIDE_UNUSED_110              								0x344
#define FLAG_HIDE_UNUSED_111                                   		0x345
#define FLAG_HIDE_UNUSED_112     										0x346
#define FLAG_HIDE_UNUSED_113                             				0x347
#define FLAG_HIDE_UNUSED_114                      						0x348
#define FLAG_HIDE_UNUSED_115               							0x349
#define FLAG_HIDE_UNUSED_116                         					0x34A
#define FLAG_HIDE_UNUSED_117                      						0x34B
#define FLAG_HIDE_UNUSED_118                           				0x34C
#define FLAG_HIDE_UNUSED_119                  							0x34D
#define FLAG_HIDE_UNUSED_120                      						0x34E
#define FLAG_HIDE_UNUSED_121                           				0x34F
#define FLAG_HIDE_UNUSED_122          								0x350
#define FLAG_HIDE_UNUSED_123          									0x351
#define FLAG_HIDE_UNUSED_124                   						0x352
#define FLAG_HIDE_UNUSED_125                                   		0x353
#define FLAG_HIDE_UNUSED_126                         					0x354
#define FLAG_HIDE_UNUSED_127                          					0x355
#define FLAG_HIDE_UNUSED_128                         					0x356
#define FLAG_HIDE_UNUSED_129                                			0x357
#define FLAG_HIDE_UNUSED_130                              				0x358
#define FLAG_HIDE_UNUSED_131                              				0x359
#define FLAG_HIDE_UNUSED_132                       					0x35A
#define FLAG_HIDE_UNUSED_133                     						0x35B
#define FLAG_HIDE_UNUSED_134                    						0x35C
#define FLAG_HIDE_UNUSED_135                           				0x35D
#define FLAG_HIDE_UNUSED_136          									0x35E
#define FLAG_HIDE_UNUSED_137              								0x35F
#define FLAG_HIDE_UNUSED_138           									0x360
#define FLAG_HIDE_UNUSED_139           									0x361
#define FLAG_HIDE_UNUSED_140                               				0x362
#define FLAG_HIDE_UNUSED_141                                          	0x363 // Set, however has no purpose.
#define FLAG_HIDE_UNUSED_142                          					0x364
#define FLAG_HIDE_UNUSED_143          									0x365
#define FLAG_HIDE_UNUSED_144                            				0x366
#define FLAG_HIDE_UNUSED_145                 							 0x367
#define FLAG_HIDE_UNUSED_146                          					0x368
#define FLAG_HIDE_UNUSED_147    										0x369
#define FLAG_HIDE_UNUSED_148                           					0x36A
#define FLAG_HIDE_UNUSED_149                         					0x36B
#define FLAG_HIDE_UNUSED_150                          					 0x36C
#define FLAG_HIDE_UNUSED_151                               				0x36D
#define FLAG_HIDE_UNUSED_152                         					0x36E
#define FLAG_HIDE_UNUSED_153                             				0x36F
#define FLAG_HIDE_UNUSED_154                              				0x370
#define FLAG_HIDE_UNUSED_155                              		 0x371
#define FLAG_HIDE_UNUSED_156                          					0x372
#define FLAG_HIDE_UNUSED_157         								0x373
#define FLAG_HIDE_UNUSED_158     									0x374
#define FLAG_HIDE_UNUSED_159     										0x375
#define FLAG_HIDE_UNUSED_160           								0x376
#define FLAG_HIDE_UNUSED_161    										0x377
#define FLAG_HIDE_UNUSED_162                             				0x378
#define FLAG_HIDE_UNUSED_163                  							0x379
#define FLAG_HIDE_UNUSED_164                               			0x37A
#define FLAG_HIDE_UNUSED_165                               			0x37B
#define FLAG_HIDE_UNUSED_166                      						0x37C
#define FLAG_HIDE_UNUSED_167                      						0x37D
#define FLAG_HIDE_UNUSED_168                        					0x37E
#define FLAG_HIDE_UNUSED_169         									0x37F
#define FLAG_HIDE_UNUSED_170          									0x380
#define FLAG_HIDE_UNUSED_171                                   		0x381
#define FLAG_HIDE_UNUSED_172                                   		0x382
#define FLAG_HIDE_UNUSED_173                               			0x383
#define FLAG_HIDE_UNUSED_174                               			0x384
#define FLAG_HIDE_UNUSED_175                           0x385
#define FLAG_HIDE_UNUSED_176                           0x386
#define FLAG_HIDE_UNUSED_177                           0x387
#define FLAG_HIDE_UNUSED_178                           0x388
#define FLAG_HIDE_UNUSED_179                     						0x389
#define FLAG_HIDE_UNUSED_180                      						0x38A
#define FLAG_HIDE_UNUSED_181                                 			0x38B
#define FLAG_HIDE_UNUSED_182                  							0x38C
#define FLAG_HIDE_UNUSED_183                     						0x38D
#define FLAG_HIDE_UNUSED_184                         					0x38E
#define FLAG_HIDE_UNUSED_185              								0x38F
#define FLAG_HIDE_UNUSED_186                             				0x390
#define FLAG_HIDE_UNUSED_187                              				0x391
#define FLAG_HIDE_UNUSED_188                        					0x392
#define FLAG_HIDE_UNUSED_189                                          	0x393 // Set, however has no purpose.
#define FLAG_HIDE_UNUSED_190                             				0x394
#define FLAG_HIDE_UNUSED_191                          					0x395
#define FLAG_HIDE_UNUSED_192                             				0x396
#define FLAG_HIDE_UNUSED_193                                   		0x397
#define FLAG_HIDE_UNUSED_194                              				0x398
#define FLAG_HIDE_UNUSED_195                              				0x399
#define FLAG_HIDE_UNUSED_196                           				0x39A
#define FLAG_HIDE_UNUSED_197                           				0x39B
#define FLAG_HIDE_UNUSED_198                               			0x39C
#define FLAG_HIDE_UNUSED_199                     						0x39D
#define FLAG_HIDE_UNUSED_200                              				0x39E
#define FLAG_HIDE_UNUSED_201                             				0x39F
#define FLAG_HIDE_UNUSED_202                        					0x3A0
#define FLAG_HIDE_UNUSED_203                              				0x3A1
#define FLAG_HIDE_UNUSED_204                      						0x3A2	
#define FLAG_HIDE_UNUSED_205                             				0x3A3
#define FLAG_HIDE_UNUSED_206                             				0x3A4
#define FLAG_HIDE_UNUSED_207                      						0x3A5
#define FLAG_HIDE_UNUSED_208                     						0x3A6
#define FLAG_HIDE_UNUSED_209                                          	0x3A7
#define FLAG_HIDE_UNUSED_210                                           0x3A8
#define FLAG_HIDE_UNUSED_211                                         	0x3A9
#define FLAG_HIDE_UNUSED_212                            				0x3AA
#define FLAG_HIDE_UNUSED_213                           				0x3AB
#define FLAG_HIDE_UNUSED_214                      						0x3AC
#define FLAG_HIDE_UNUSED_215               							0x3AD
#define FLAG_HIDE_UNUSED_216                          					0x3AE
#define FLAG_HIDE_UNUSED_217                 						0x3AF
#define FLAG_HIDE_UNUSED_218                                  		0x3B0
#define FLAG_HIDE_UNUSED_219                                   	0x3B1
#define FLAG_HIDE_UNUSED_220                       				0x3B2
#define FLAG_HIDE_UNUSED_221                          				0x3B3
#define FLAG_HIDE_UNUSED_222                        				0x3B4
#define FLAG_HIDE_UNUSED_223              							0x3B5
#define FLAG_HIDE_UNUSED_224                       					0x3B6
#define FLAG_HIDE_UNUSED_225                       					0x3B7
#define FLAG_HIDE_UNUSED_226                                  		0x3B8
#define FLAG_HIDE_UNUSED_227                                  		0x3B9
#define FLAG_HIDE_UNUSED_228                                  		0x3BA
#define FLAG_HIDE_UNUSED_229                                  		0x3BB
#define FLAG_HIDE_UNUSED_230                                 		0x3BC
#define FLAG_HIDE_UNUSED_231                                 		0x3BD
#define FLAG_HIDE_UNUSED_232                                 		0x3BE
#define FLAG_HIDE_UNUSED_233                                 		0x3BF
#define FLAG_HIDE_UNUSED_234                        				0x3C0
#define FLAG_HIDE_UNUSED_235                       					0x3C1
#define FLAG_HIDE_UNUSED_236      									0x3C2
#define FLAG_HIDE_UNUSED_237                          				0x3C3
#define FLAG_HIDE_UNUSED_238                          				0x3C4
#define FLAG_HIDE_UNUSED_239								 		0x3C5
#define FLAG_HIDE_UNUSED_240                                  		0x3C6
#define FLAG_HIDE_UNUSED_241                						0x3C7
#define FLAG_HIDE_UNUSED_242       									0x3C8
#define FLAG_HIDE_UNUSED_243                             			0x3C9
#define FLAG_HIDE_UNUSED_244                          				0x3CA
#define FLAG_HIDE_UNUSED_245                               			0x3CB
#define FLAG_HIDE_UNUSED_246                                  		0x3CC
#define FLAG_HIDE_UNUSED_247                            			0x3CD
#define FLAG_HIDE_UNUSED_248                            			0x3CE
#define FLAG_HIDE_UNUSED_249                            			0x3CF
#define FLAG_HIDE_UNUSED_250                            			0x3D0
#define FLAG_HIDE_UNUSED_251                      					0x3D1
#define FLAG_HIDE_UNUSED_252                      					0x3D2
#define FLAG_HIDE_UNUSED_253                                		0x3D3
#define FLAG_HIDE_UNUSED_254      									0x3D4
#define FLAG_HIDE_UNUSED_255                   						0x3D5
#define FLAG_HIDE_UNUSED_256                               			0x3D6
#define FLAG_HIDE_UNUSED_257                              			0x3D7
#define FLAG_HIDE_UNUSED_258                						0x3D8
#define FLAG_HIDE_UNUSED_259                               			0x3D9
#define FLAG_HIDE_UNUSED_260                               			0x3DA
#define FLAG_HIDE_UNUSED_261                               			0x3DB
#define FLAG_HIDE_UNUSED_262                               			0x3DC
#define FLAG_HIDE_UNUSED_263                               			0x3DD
#define FLAG_HIDE_UNUSED_264                               			0x3DE
#define FLAG_HIDE_UNUSED_265                                     	0x3DF
#define FLAG_HIDE_UNUSED_266                 						0x3E0
#define FLAG_HIDE_UNUSED_267         								0x3E1
#define FLAG_HIDE_UNUSED_268                       					0x3E2
#define FLAG_HIDE_UNUSED_269                              			0x3E3
#define FLAG_HIDE_UNUSED_270                          				0x3E4
#define FLAG_HIDE_UNUSED_271                            			0x3E5
#define FLAG_HIDE_UNUSED_272                           				0x3E6
#define FLAG_HIDE_UNUSED_273                						0x3E7

// Item Ball Flags
#define FLAG_VIRIDIAN_CITY_POTION                                  	0x3E8
#define FLAG_ROUTE2_ETHER                               			0x3E9
#define FLAG_ROUTE2_PARALYZE_HEAL                                   0x3EA
#define FLAG_HIDE_VIRIDIAN_FOREST_POTION                            0x3EB
#define FLAG_HIDE_VIRIDIAN_FOREST_POTION_2                          0x3EC
#define FLAG_HIDE_VIRIDIAN_FOREST_ANTIDOTE                          0x3ED
#define FLAG_HIDE_VIRIDIAN_FOREST_POKE_BALL                         0x3EE
#define FLAG_HIDE_ROUTE4_TM05                                		0x3EF
#define FLAG_HIDE_MT_MOON_1F_MOON_STONE                             0x3F0
#define FLAG_HIDE_MT_MOON_1F_ESCAPE_ROPE                            0x3F1
#define FLAG_HIDE_MT_MOON_1F_RARE_CANDY                             0x3F2
#define FLAG_HIDE_MT_MOON_1F_POTION                                 0x3F3
#define FLAG_HIDE_MT_MOON_1F_TM09                               	0x3F4
#define FLAG_HIDE_MT_MOON_1F_PARALYZE_HEAL                          0x3F5
#define FLAG_HIDE_MT_MOON_B2F_ANTIDOTE                              0x3F6
#define FLAG_HIDE_MT_MOON_B2F_STAR_PIECE                            0x3F7
#define FLAG_HIDE_MT_MOON_B2F_REVIVE                           		0x3F8
#define FLAG_HIDE_MT_MOON_B2F_TM46                                  0x3F9
#define FLAG_UNUSED_ITEM_0x3FA                                    	0x3FA
#define FLAG_UNUSED_ITEM_0x3FB                                 		0x3FB
#define FLAG_UNUSED_ITEM_0x3FC                                  	0x3FC
#define FLAG_UNUSED_ITEM_0x3FD                                   	0x3FD
#define FLAG_UNUSED_ITEM_0x3FE                              		0x3FE
#define FLAG_UNUSED_ITEM_0x3FF                                  	0x3FF
#define FLAG_UNUSED_ITEM_0x400                             			0x400
#define FLAG_UNUSED_ITEM_0x401                                    	0x401
#define FLAG_UNUSED_ITEM_0x402                               		0x402
#define FLAG_UNUSED_ITEM_0x403                              		0x403
#define FLAG_UNUSED_ITEM_0x404                              		0x404
#define FLAG_UNUSED_ITEM_0x405                         				0x405
#define FLAG_UNUSED_ITEM_0x406                                		0x406
#define FLAG_UNUSED_ITEM_0x407                               		0x407
#define FLAG_UNUSED_ITEM_0x408                                 		0x408
#define FLAG_UNUSED_ITEM_0x409                              		0x409
#define FLAG_UNUSED_ITEM_0x40A                                   	0x40A
#define FLAG_UNUSED_ITEM_0x40B                                  	0x40B
#define FLAG_UNUSED_ITEM_0x40C                             			0x40C
#define FLAG_UNUSED_ITEM_0x40D                               		0x40D
#define FLAG_UNUSED_ITEM_0x40E                              		0x40E
#define FLAG_UNUSED_ITEM_0x40F                         				0x40F
#define FLAG_UNUSED_ITEM_0x410                            	 		0x410
#define FLAG_UNUSED_ITEM_0x411                            			0x411
#define FLAG_UNUSED_ITEM_0x412                           			0x412
#define FLAG_UNUSED_ITEM_0x413                            			0x413
#define FLAG_UNUSED_ITEM_0x414                          			0x414
#define FLAG_UNUSED_ITEM_0x415                     					0x415
#define FLAG_UNUSED_ITEM_0x416                     					0x416
#define FLAG_UNUSED_ITEM_0x417                          			0x417
#define FLAG_UNUSED_ITEM_0x418                          			0x418
#define FLAG_UNUSED_ITEM_0x419                         				0x419
#define FLAG_UNUSED_ITEM_0x41A                      				0x41A
#define FLAG_UNUSED_ITEM_0x41B                       				0x41B
#define FLAG_UNUSED_ITEM_0x41C                            			0x41C
#define FLAG_UNUSED_ITEM_0x41D                           			0x41D
#define FLAG_UNUSED_ITEM_0x41E                       				0x41E
#define FLAG_UNUSED_ITEM_0x41F                          			0x41F
#define FLAG_UNUSED_ITEM_0x420                        				0x420
#define FLAG_UNUSED_ITEM_0x421                               		0x421
#define FLAG_UNUSED_ITEM_0x422                             			0x422
#define FLAG_UNUSED_ITEM_0x423                    					0x423
#define FLAG_UNUSED_ITEM_0x424                 						0x424
#define FLAG_UNUSED_ITEM_0x425                 						0x425
#define FLAG_UNUSED_ITEM_0x426                  					0x426
#define FLAG_UNUSED_ITEM_0x427                 						0x427
#define FLAG_UNUSED_ITEM_0x428                  					0x428
#define FLAG_UNUSED_ITEM_0x429                  					0x429
#define FLAG_UNUSED_ITEM_0x42A                            			0x42A
#define FLAG_UNUSED_ITEM_0x42B                						0x42B
#define FLAG_UNUSED_ITEM_0x42C                  					0x42C
#define FLAG_UNUSED_ITEM_0x42D                    					0x42D
#define FLAG_UNUSED_ITEM_0x42E                             			0x42E
#define FLAG_UNUSED_ITEM_0x42F                       				0x42F
#define FLAG_UNUSED_ITEM_0x430                        				0x430
#define FLAG_UNUSED_ITEM_0x431                      				0x431
#define FLAG_UNUSED_ITEM_0x432                            			0x432
#define FLAG_UNUSED_ITEM_0x433                           			0x433
#define FLAG_UNUSED_ITEM_0x434                         				0x434
#define FLAG_UNUSED_ITEM_0x435    									0x435
#define FLAG_UNUSED_ITEM_0x436       								0x436
#define FLAG_UNUSED_ITEM_0x437                               		0x437
#define FLAG_UNUSED_ITEM_0x438                         				0x438
#define FLAG_UNUSED_ITEM_0x439                     					0x439
#define FLAG_UNUSED_ITEM_0x43A                  					0x43A
#define FLAG_UNUSED_ITEM_0x43B                  					0x43B
#define FLAG_UNUSED_ITEM_0x43C                        				0x43C
#define FLAG_UNUSED_ITEM_0x43D                             			0x43D
#define FLAG_UNUSED_ITEM_0x43E                            			0x43E
#define FLAG_UNUSED_ITEM_0x43F                   			 		0x43F
#define FLAG_UNUSED_ITEM_0x440                        				0x440
#define FLAG_UNUSED_ITEM_0x441                                  	0x441
#define FLAG_UNUSED_ITEM_0x442                      				0x442
#define FLAG_UNUSED_ITEM_0x443                                  	0x443
#define FLAG_UNUSED_ITEM_0x444                               		0x444
#define FLAG_UNUSED_ITEM_0x445                              		0x445
#define FLAG_UNUSED_ITEM_0x446                      				0x446
#define FLAG_UNUSED_ITEM_0x447              					 	0x447
#define FLAG_UNUSED_ITEM_0x448              						0x448
#define FLAG_UNUSED_ITEM_0x449              						0x449
#define FLAG_UNUSED_ITEM_0x44A                   					0x44A
#define FLAG_UNUSED_ITEM_0x44B                  					0x44B
#define FLAG_UNUSED_ITEM_0x44C        								0x44C
#define FLAG_UNUSED_ITEM_0x44D    									0x44D
#define FLAG_UNUSED_ITEM_0x44E          							0x44E
#define FLAG_UNUSED_ITEM_0x44F                                		0x44F
#define FLAG_UNUSED_ITEM_0x450                             			0x450
#define FLAG_UNUSED_ITEM_0x451                             			0x451
#define FLAG_UNUSED_ITEM_0x452                          			0x452
#define FLAG_UNUSED_ITEM_0x453                            			0x453
#define FLAG_UNUSED_ITEM_0x454                               		0x454
#define FLAG_UNUSED_ITEM_0x455                                  	0x455
#define FLAG_UNUSED_ITEM_0x456                      				0x456
#define FLAG_UNUSED_ITEM_0x457                            			0x457
#define FLAG_UNUSED_ITEM_0x458                        				0x458
#define FLAG_UNUSED_ITEM_0x459               						0x459
#define FLAG_UNUSED_ITEM_0x45A                              		0x45A
#define FLAG_UNUSED_ITEM_0x45B                              		0x45B
#define FLAG_UNUSED_ITEM_0x45C                             			0x45C
#define FLAG_UNUSED_ITEM_0x45D                     					0x45D
#define FLAG_UNUSED_ITEM_0x45E                              		0x45E
#define FLAG_UNUSED_ITEM_0x45F                         				0x45F
#define FLAG_UNUSED_ITEM_0x460                            			0x460
#define FLAG_UNUSED_ITEM_0x461                            			0x461
#define FLAG_UNUSED_ITEM_0x462                            			0x462
#define FLAG_UNUSED_ITEM_0x463                        				0x463
#define FLAG_UNUSED_ITEM_0x464                      				0x464
#define FLAG_UNUSED_ITEM_0x465                 						0x465
#define FLAG_UNUSED_ITEM_0x466                 						0x466
#define FLAG_UNUSED_ITEM_0x467                   					0x467
#define FLAG_UNUSED_ITEM_0x468                                      0x468
#define FLAG_UNUSED_ITEM_0x469                             			0x469
#define FLAG_UNUSED_ITEM_0x46A                           			0x46A
#define FLAG_UNUSED_ITEM_0x46B                 						0x46B
#define FLAG_UNUSED_ITEM_0x46C                           			0x46C
#define FLAG_UNUSED_ITEM_0x46D                     	 				0x46D
#define FLAG_UNUSED_ITEM_0x46E                                 		0x46E
#define FLAG_UNUSED_ITEM_0x46F                                 		0x46F
#define FLAG_UNUSED_ITEM_0x470                                      0x470
#define FLAG_UNUSED_ITEM_0x471                                   	0x471
#define FLAG_UNUSED_ITEM_0x472                                      0x472
#define FLAG_UNUSED_ITEM_0x473                              		0x473
#define FLAG_UNUSED_ITEM_0x474                                		0x474
#define FLAG_UNUSED_ITEM_0x475                                 		0x475
#define FLAG_UNUSED_ITEM_0x476                                  	0x476
#define FLAG_UNUSED_ITEM_0x477                            			0x477
#define FLAG_UNUSED_ITEM_0x478                             			0x478
#define FLAG_UNUSED_ITEM_0x479                                      0x479
#define FLAG_UNUSED_ITEM_0x47A                                 		0x47A
#define FLAG_UNUSED_ITEM_0x47B                                		0x47B
#define FLAG_UNUSED_ITEM_0x47C                                  	0x47C
#define FLAG_UNUSED_ITEM_0x47D                                 		0x47D
#define FLAG_UNUSED_ITEM_0x47E                                  	0x47E
#define FLAG_UNUSED_ITEM_0x47F                       				0x47F
#define FLAG_UNUSED_ITEM_0x480                                  	0x480
#define FLAG_UNUSED_ITEM_0x481                            			0x481
#define FLAG_UNUSED_ITEM_0x482                             			0x482
#define FLAG_UNUSED_ITEM_0x483                             			0x483
#define FLAG_UNUSED_ITEM_0x484                                 		0x484
#define FLAG_UNUSED_ITEM_0x485                              		0x485
#define FLAG_UNUSED_ITEM_0x486                                 		0x486
#define FLAG_UNUSED_ITEM_0x487                             			0x487
#define FLAG_UNUSED_ITEM_0x488                           			0x488
#define FLAG_UNUSED_ITEM_0x489                                  	0x489
#define FLAG_UNUSED_ITEM_0x48A                            			0x48A
#define FLAG_UNUSED_ITEM_0x48B                            			0x48B
#define FLAG_UNUSED_ITEM_0x48C                  	 				0x48C
#define FLAG_UNUSED_ITEM_0x48D                  					0x48D
#define FLAG_UNUSED_ITEM_0x48E                       				0x48E
#define FLAG_UNUSED_ITEM_0x48F                        				0x48F
#define FLAG_UNUSED_ITEM_0x490                       				0x490
#define FLAG_UNUSED_ITEM_0x491                     					0x491
#define FLAG_UNUSED_ITEM_0x492                  					0x492

#define FLAG_UNUSED_0x493                                           0x493 // Unused Flag
#define FLAG_UNUSED_0x494                                           0x494 // Unused Flag
#define FLAG_UNUSED_0x495                                           0x495 // Unused Flag
#define FLAG_UNUSED_0x496                                           0x496 // Unused Flag
#define FLAG_UNUSED_0x497                                           0x497 // Unused Flag
#define FLAG_UNUSED_0x498                                           0x498 // Unused Flag
#define FLAG_UNUSED_0x499                                           0x499 // Unused Flag
#define FLAG_UNUSED_0x49A                                           0x49A // Unused Flag
#define FLAG_UNUSED_0x49B                                           0x49B // Unused Flag
#define FLAG_UNUSED_0x49C                                           0x49C // Unused Flag
#define FLAG_UNUSED_0x49D                                           0x49D // Unused Flag
#define FLAG_UNUSED_0x49E                                           0x49E // Unused Flag
#define FLAG_UNUSED_0x49F                                           0x49F // Unused Flag
#define FLAG_UNUSED_0x4A0                                           0x4A0 // Unused Flag
#define FLAG_UNUSED_0x4A1                                           0x4A1 // Unused Flag
#define FLAG_UNUSED_0x4A2                                           0x4A2 // Unused Flag
#define FLAG_UNUSED_0x4A3                                           0x4A3 // Unused Flag
#define FLAG_UNUSED_0x4A4                                           0x4A4 // Unused Flag
#define FLAG_UNUSED_0x4A5                                           0x4A5 // Unused Flag
#define FLAG_UNUSED_0x4A6                                           0x4A6 // Unused Flag
#define FLAG_UNUSED_0x4A7                                           0x4A7 // Unused Flag
#define FLAG_UNUSED_0x4A8                                           0x4A8 // Unused Flag
#define FLAG_UNUSED_0x4A9                                           0x4A9 // Unused Flag
#define FLAG_UNUSED_0x4AA                                           0x4AA // Unused Flag
#define FLAG_UNUSED_0x4AB                                           0x4AB // Unused Flag
#define FLAG_UNUSED_0x4AC                                           0x4AC // Unused Flag
#define FLAG_UNUSED_0x4AD                                           0x4AD // Unused Flag
#define FLAG_UNUSED_0x4AE                                           0x4AE // Unused Flag
#define FLAG_UNUSED_0x4AF                                           0x4AF // Unused Flag
#define FLAG_UNUSED_0x4B0                                           0x4B0 // Unused Flag
#define FLAG_UNUSED_0x4B1                                           0x4B1 // Unused Flag
#define FLAG_UNUSED_0x4B2                                           0x4B2 // Unused Flag
#define FLAG_UNUSED_0x4B3                                           0x4B3 // Unused Flag
#define FLAG_UNUSED_0x4B4                                           0x4B4 // Unused Flag
#define FLAG_UNUSED_0x4B5                                           0x4B5 // Unused Flag
#define FLAG_UNUSED_0x4B6                                           0x4B6 // Unused Flag
#define FLAG_UNUSED_0x4B7                                           0x4B7 // Unused Flag
#define FLAG_UNUSED_0x4B8                                           0x4B8 // Unused Flag
#define FLAG_UNUSED_0x4B9                                           0x4B9 // Unused Flag
#define FLAG_UNUSED_0x4BA                                           0x4BA // Unused Flag
#define FLAG_UNUSED_0x4BB                                           0x4BB // Unused Flag
#define FLAG_UNUSED_0x4BC                                           0x4BC // Unused Flag
#define FLAG_UNUSED_0x4BD                                           0x4BD // Unused Flag
#define FLAG_UNUSED_0x4BE                                           0x4BE // Unused Flag
#define FLAG_UNUSED_0x4BF                                           0x4BF // Unused Flag
#define FLAG_UNUSED_0x4C0                                           0x4C0 // Unused Flag
#define FLAG_UNUSED_0x4C1                                           0x4C1 // Unused Flag
#define FLAG_UNUSED_0x4C2                                           0x4C2 // Unused Flag
#define FLAG_UNUSED_0x4C3                                           0x4C3 // Unused Flag
#define FLAG_UNUSED_0x4C4                                           0x4C4 // Unused Flag
#define FLAG_UNUSED_0x4C5                                           0x4C5 // Unused Flag
#define FLAG_UNUSED_0x4C6                                           0x4C6 // Unused Flag
#define FLAG_UNUSED_0x4C7                                           0x4C7 // Unused Flag
#define FLAG_UNUSED_0x4C8                                           0x4C8 // Unused Flag
#define FLAG_UNUSED_0x4C9                                           0x4C9 // Unused Flag
#define FLAG_UNUSED_0x4CA                                           0x4CA // Unused Flag
#define FLAG_UNUSED_0x4CB                                           0x4CB // Unused Flag
#define FLAG_UNUSED_0x4CC                                           0x4CC // Unused Flag
#define FLAG_UNUSED_0x4CD                                           0x4CD // Unused Flag
#define FLAG_UNUSED_0x4CE                                           0x4CE // Unused Flag
#define FLAG_UNUSED_0x4CF                                           0x4CF // Unused Flag
#define FLAG_UNUSED_0x4D0                                           0x4D0 // Unused Flag
#define FLAG_UNUSED_0x4D1                                           0x4D1 // Unused Flag
#define FLAG_UNUSED_0x4D2                                           0x4D2 // Unused Flag
#define FLAG_UNUSED_0x4D3                                           0x4D3 // Unused Flag
#define FLAG_UNUSED_0x4D4                                           0x4D4 // Unused Flag
#define FLAG_UNUSED_0x4D5                                           0x4D5 // Unused Flag
#define FLAG_UNUSED_0x4D6                                           0x4D6 // Unused Flag
#define FLAG_UNUSED_0x4D7                                           0x4D7 // Unused Flag
#define FLAG_UNUSED_0x4D8                                           0x4D8 // Unused Flag
#define FLAG_UNUSED_0x4D9                                           0x4D9 // Unused Flag
#define FLAG_UNUSED_0x4DA                                           0x4DA // Unused Flag
#define FLAG_UNUSED_0x4DB                                           0x4DB // Unused Flag
#define FLAG_UNUSED_0x4DC                                           0x4DC // Unused Flag
#define FLAG_UNUSED_0x4DD                                           0x4DD // Unused Flag
#define FLAG_UNUSED_0x4DE                                           0x4DE // Unused Flag
#define FLAG_UNUSED_0x4DF                                           0x4DF // Unused Flag
#define FLAG_UNUSED_0x4E0                                           0x4E0 // Unused Flag
#define FLAG_UNUSED_0x4E1                                           0x4E1 // Unused Flag
#define FLAG_UNUSED_0x4E2                                           0x4E2 // Unused Flag
#define FLAG_UNUSED_0x4E3                                           0x4E3 // Unused Flag
#define FLAG_UNUSED_0x4E4                                           0x4E4 // Unused Flag
#define FLAG_UNUSED_0x4E5                                           0x4E5 // Unused Flag
#define FLAG_UNUSED_0x4E6                                           0x4E6 // Unused Flag
#define FLAG_UNUSED_0x4E7                                           0x4E7 // Unused Flag
#define FLAG_UNUSED_0x4E8                                           0x4E8 // Unused Flag
#define FLAG_UNUSED_0x4E9                                           0x4E9 // Unused Flag
#define FLAG_REGISTERED_BILL                                        0x4EA
#define FLAG_REGISTERED_LOOKER                                      0x4EB
#define FLAG_REGISTERED_SCOTT                                       0x4EC
#define FLAG_REGISTERED_AIDE                                        0x4ED
#define FLAG_REGISTERED_DAISY                                       0x4EE
#define FLAG_REGISTERED_RIVAL                            			0x4EF
#define FLAG_REGISTERED_PROF_OAK                         			0x4F9
#define FLAG_HAS_MATCH_CALL                                         0x4FA

#define FLAG_DEFEATED_RUSTBORO_GYM                                  0x4F2
#define FLAG_DEFEATED_DEWFORD_GYM                                   0x4F3
#define FLAG_DEFEATED_MAUVILLE_GYM                                  0x4F4
#define FLAG_DEFEATED_LAVARIDGE_GYM                                 0x4F5
#define FLAG_DEFEATED_PETALBURG_GYM                                 0x4F6
#define FLAG_DEFEATED_FORTREE_GYM                                   0x4F7
#define FLAG_DEFEATED_MOSSDEEP_GYM                                  0x4F8
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                0x4F9
#define FLAG_DEFEATED_METEOR_FALLS_STEVEN                           0x4FA

#define FLAG_DEFEATED_ELITE_4_SIDNEY                                0x4FB
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                0x4FC
#define FLAG_DEFEATED_ELITE_4_GLACIA                                0x4FD
#define FLAG_DEFEATED_ELITE_4_DRAKE                                 0x4FE

#define FLAG_UNUSED_0x4FF                                           0x4FF // Unused Flag

// Trainer Flags
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         0x500
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F

// System Flags

#define SYSTEM_FLAGS                                   (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_SYS_DEXNAV_GET                          (SYSTEM_FLAGS + 0x3) // dexnav shows in PokeNav
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_SYS_HIPSTER_MEET                        (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)
#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_PALLET_TOWN                	(SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_VIRIDIAN_CITY                  (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_PEWTER_CITY                   	(SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_CERULEAN_CITY                 	(SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_VERMILION_CITY                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_LAVENDER_TOWN                	(SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_CELADON_CITY                	(SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_SAFFRON_CITY                 	(SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_FUCHSIA_CITY                 	(SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_CINNABAR_ISLAND                (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_INDIGO_PLATEAU                 (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_BATTLE_FRONTIER                (SYSTEM_FLAGS + 0x1A) // Might be unncessary
#define FLAG_VISITED_UNUSED_2                  		(SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_UNUSED_3                  		(SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_UNUSED_4                		(SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_UNUSED_5              			(SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.


#define FLAG_SYS_DEXNAV_SEARCH                      (SYSTEM_FLAGS + 0x20)
#define FLAG_SHINY_CREATION                         (SYSTEM_FLAGS + 0x21) // force creation of a shiny mon
#define FLAG_SYS_DETECTOR_MODE                      (SYSTEM_FLAGS + 0x22) // allow player to find hidden mons

#define FLAG_HIDE_FOLLOWER             				(SYSTEM_FLAGS + 0x23) 
#define FLAG_SYS_GYM_LEADER_MATCH_CALL_ENABLED      (SYSTEM_FLAGS + 0x24) // Never set. Used to prevent Gym Leader match calls.
#define FLAG_UNUSED_0x885                           (SYSTEM_FLAGS + 0x25) // Unused Flag
#define FLAG_UNUSED_0x886                           (SYSTEM_FLAGS + 0x26) // Unused Flag
#define FLAG_UNUSED_0x887                  			(SYSTEM_FLAGS + 0x27) // Unused Flag

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)

#define FLAG_UNUSED_SYSTEM_FLAG_0x2E                (SYSTEM_FLAGS + 0x2E) 
#define FLAG_UNUSED_SYSTEM_FLAG_0x2F                (SYSTEM_FLAGS + 0x2F) 

#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // Unused Flag, leftover from R/S debug, presumably used by Emerald's debug too
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // Unused Flag, same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // Unused Flag, same as above
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)
#define FLAG_LANDMARK_MIRAGE_TOWER                  (SYSTEM_FLAGS + 0x83)

#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)
#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER        (SYSTEM_FLAGS + 0x85)
#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE           (SYSTEM_FLAGS + 0x86)
#define FLAG_PENDING_DAYCARE_EGG                	(SYSTEM_FLAGS + 0x87)

#define FLAG_DECORATION_1                           (SYSTEM_FLAGS + 0x88)
#define FLAG_DECORATION_2                           (SYSTEM_FLAGS + 0x89)
#define FLAG_DECORATION_3                           (SYSTEM_FLAGS + 0x8A)
#define FLAG_DECORATION_4                           (SYSTEM_FLAGS + 0x8B)
#define FLAG_DECORATION_5                           (SYSTEM_FLAGS + 0x8C)
#define FLAG_DECORATION_6                           (SYSTEM_FLAGS + 0x8D)
#define FLAG_DECORATION_7                           (SYSTEM_FLAGS + 0x8E)
#define FLAG_DECORATION_8                           (SYSTEM_FLAGS + 0x8F)
#define FLAG_DECORATION_9                           (SYSTEM_FLAGS + 0x90)
#define FLAG_DECORATION_10                          (SYSTEM_FLAGS + 0x91)
#define FLAG_DECORATION_11                          (SYSTEM_FLAGS + 0x92)
#define FLAG_DECORATION_12                          (SYSTEM_FLAGS + 0x93)
#define FLAG_DECORATION_13                          (SYSTEM_FLAGS + 0x94) 
#define FLAG_DECORATION_14                          (SYSTEM_FLAGS + 0x95)

#define FLAG_SECRET_BASE_REGISTRY_ENABLED           (SYSTEM_FLAGS + 0x96)
#define FLAG_HIDE_SECRET_BASE_TRAINER               (SYSTEM_FLAGS + 0x97) 

#define FLAG_CONTEST_SKETCH_CREATED                 (SYSTEM_FLAGS + 0x98) // Set but never read

#define FLAG_HIDE_CONTEST_POKE_BALL                	(SYSTEM_FLAGS + 0x99) // Always set after new game, object it hides is added directly

#define FLAG_NURSE_MENTIONS_GOLD_CARD               (SYSTEM_FLAGS + 0x9A) 
#define FLAG_POKERUS_EXPLAINED                      (SYSTEM_FLAGS + 0x9B)

#define FLAG_UNUSED_SYSTEM_FLAG_0x9C                (SYSTEM_FLAGS + 0x9C) 
#define FLAG_UNUSED_SYSTEM_FLAG_0x9D          		(SYSTEM_FLAGS + 0x9D) 
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER             (SYSTEM_FLAGS + 0x9E) // Retained for match call
#define FLAG_MET_SCOTT_ON_SS_TIDAL                  (SYSTEM_FLAGS + 0x9F) // Retained for match call
#define FLAG_UNUSED_SYSTEM_FLAG_0xA0                (SYSTEM_FLAGS + 0xA0) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xA1               	(SYSTEM_FLAGS + 0xA1)
#define FLAG_UNUSED_SYSTEM_FLAG_0xA2            	(SYSTEM_FLAGS + 0xA2) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xA3           		(SYSTEM_FLAGS + 0xA3) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xA4                (SYSTEM_FLAGS + 0xA4) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xA5                (SYSTEM_FLAGS + 0xA5)
#define FLAG_UNUSED_SYSTEM_FLAG_0xA6                (SYSTEM_FLAGS + 0xA6) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xA7              	(SYSTEM_FLAGS + 0xA7) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xA8                (SYSTEM_FLAGS + 0xA8) 
#define FLAG_ENABLE_JUAN_MATCH_CALL                 (SYSTEM_FLAGS + 0xA9) // Look into how Juan Rematch was using this, repurpose for Gym Leader match call?
#define FLAG_UNUSED_SYSTEM_FLAG_0xAA        		(SYSTEM_FLAGS + 0xAA) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xAB               	(SYSTEM_FLAGS + 0xAB) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xAD             	(SYSTEM_FLAGS + 0xAC) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xAC              	(SYSTEM_FLAGS + 0xAD) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xAE               	(SYSTEM_FLAGS + 0xAE) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xAF              	(SYSTEM_FLAGS + 0xAF) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xB0                (SYSTEM_FLAGS + 0xB0) 
#define FLAG_UNUSED_SYSTEM_FLAG_0xB1        		(SYSTEM_FLAGS + 0xB1)
#define FLAG_UNUSED_SYSTEM_FLAG_0xB2                (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_SCOTT_GIVES_BATTLE_POINTS              (SYSTEM_FLAGS + 0xB3) // Used for Scott script
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS           (SYSTEM_FLAGS + 0xB4) // Used for Scott script
#define FLAG_RECEIVED_SILVER_SHIELD                 (SYSTEM_FLAGS + 0xB5) // Used for Scott script
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS             (SYSTEM_FLAGS + 0xB6) // Used for Scott script
#define FLAG_RECEIVED_GOLD_SHIELD                   (SYSTEM_FLAGS + 0xB7) // Used for Scott script
#define FLAG_MET_BATTLE_FRONTIER_MANIAC             (SYSTEM_FLAGS + 0xB8) // Battle Frontier
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER            (SYSTEM_FLAGS + 0xB9) // Battle Frontier
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR        (SYSTEM_FLAGS + 0xBA) // Battle Frontier
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR         (SYSTEM_FLAGS + 0xBB) // Battle Frontier
#define FLAG_DEFEATED_KYOGRE                        (SYSTEM_FLAGS + 0xBC) // Retained, but unused in Pokeclassic
#define FLAG_DEFEATED_GROUDON                  		(SYSTEM_FLAGS + 0xBD) // Retained, but unused in Pokeclassic
#define FLAG_MIRAGE_TOWER_VISIBLE             		(SYSTEM_FLAGS + 0xBE) // Retained, but unused in Pokeclassic
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE             (SYSTEM_FLAGS + 0xBF) // Retained, but unused in Pokeclassic

// Daily Flags
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_FORCE_MIRAGE_TOWER_VISIBLE + (8 - FLAG_FORCE_MIRAGE_TOWER_VISIBLE % 8))
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x0)  
#define FLAG_DAILY_PICKED_LOTO_TICKET     			(DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x3)

//Gym Leader Daily Rematches
#define FLAG_DAILY_BROCK_REMATCH                    (DAILY_FLAGS_START + 0x4)
#define FLAG_DAILY_MISTY_REMATCH                    (DAILY_FLAGS_START + 0x5)
#define FLAG_DAILY_SURGE_REMATCH                    (DAILY_FLAGS_START + 0x6)
#define FLAG_DAILY_ERIKA_REMATCH                    (DAILY_FLAGS_START + 0x7)
#define FLAG_DAILY_SABRINA_REMATCH                  (DAILY_FLAGS_START + 0x8)
#define FLAG_DAILY_KOGA_REMATCH                     (DAILY_FLAGS_START + 0x9)
#define FLAG_DAILY_BLAINE_REMATCH               	(DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_RIVAL_REMATCH        			(DAILY_FLAGS_START + 0xB)

//Title Match Flags
#define FLAG_DAILY_IS_CURRENTLY_CHAMPION            (DAILY_FLAGS_START + 0xC)  // Champion status resets every day. Used for post-game content and dialogue differences
#define FLAG_DAILY_TITLE_MATCH     					(DAILY_FLAGS_START + 0xD)  // You only get one shot to retain the title every day.

//Daily Events
#define FLAG_DAILY_MT_MOON_MUSHROOMS        		(DAILY_FLAGS_START + 0xE)  // Hidden mushrooms in Mt. Moon reset each day

#define FLAG_UNUSED_0x92F          					(DAILY_FLAGS_START + 0xF)  // Unused Flag
#define FLAG_UNUSED_0x930       					(DAILY_FLAGS_START + 0x10)  // Unused Flag
#define FLAG_UNUSED_0x931               			(DAILY_FLAGS_START + 0x11)  // Unused Flag
#define FLAG_UNUSED_0x932        					(DAILY_FLAGS_START + 0x12)  // Unused Flag
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13)   // Unused Flag
#define FLAG_UNUSED_0x934                			(DAILY_FLAGS_START + 0x14)  // Unused Flag
#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15) // Unused Flag
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // Unused Flag
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // Unused Flag
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // Unused Flag
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // Unused Flag
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // Unused Flag
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // Unused Flag
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // Unused Flag
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // Unused Flag
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)

// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock)
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
#define FLAG_SAFE_FOLLOWER_MOVEMENT             (SPECIAL_FLAGS_START + 0x5) // When set, applymovement does not put the follower inside a pokeball
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)

#endif // GUARD_CONSTANTS_FLAGS_H
