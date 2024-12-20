(G-CODE GENERATED BY FLATCAM v8.994 - www.flatcam.org - Version Date: 2020/11/7)

(Name: CeilingFanControl-PTH.drl_cnc)
(Type: G-code from Geometry)
(Units: MM)

(Created on Sunday, 20 August 2023 at 21:15)

(This preprocessor is the default preprocessor used by FlatCAM.)
(It is made to work with MACH3 compatible motion controllers.)


(TOOLS DIAMETER: )
(Tool: 1 -> Dia: 1.0007599999999999)
(Tool: 2 -> Dia: 1.0998199999999998)
(Tool: 3 -> Dia: 1.39954)

(FEEDRATE Z: )
(Tool: 1 -> Feedrate: 25.0)
(Tool: 2 -> Feedrate: 25.0)
(Tool: 3 -> Feedrate: 25.0)

(FEEDRATE RAPIDS: )
(Tool: 1 -> Feedrate Rapids: 1500)
(Tool: 2 -> Feedrate Rapids: 1500)
(Tool: 3 -> Feedrate Rapids: 1500)

(Z_CUT: )
(Tool: 1 -> Z_Cut: -2.5)
(Tool: 2 -> Z_Cut: -2.5)
(Tool: 3 -> Z_Cut: -2.5)

(Tools Offset: )
(Tool: 1 -> Offset Z: 0.0)
(Tool: 2 -> Offset Z: 0.0)

(Z_MOVE: )
(Tool: 1 -> Z_Move: 1.0)
(Tool: 2 -> Z_Move: 1.0)
(Tool: 3 -> Z_Move: 1.0)

(Z Toolchange: 5.0 mm)
(X,Y Toolchange: 0.0000, 0.0000 mm)
(Z Start: None mm)
(Z End: 5.0 mm)
(X,Y End: 0.0000, 0.0000 mm)
(Steps per circle: 64)
(Preprocessor Excellon: default)

(X range:    5.2004 ...   29.4193  mm)
(Y range:  -24.1710 ...   24.8498  mm)

(Spindle Speed: 1000 RPM)
G21
G90
G94

G01 F25.00

M5
G00 Z5.0000
T1
G00 X0.0000 Y0.0000                
M6
(MSG, Change to Tool Dia = 1.0008 ||| Total drills for tool T1 = 21)
M0
G00 Z5.0000

G01 F25.00
M03 S1000
G00 X6.4488 Y-18.7100
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X8.8694 Y-23.6706
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X11.4094 Y-23.6706
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X13.9494 Y-23.6706
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X16.4894 Y-23.6706
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X19.0294 Y-23.6706
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X21.0995 Y-18.7100
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X21.0995 Y-16.1700
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X21.0995 Y-13.6300
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X21.0995 Y-11.0900
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X21.0995 Y-8.5500
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X28.8694 Y17.0100
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X26.3294 Y17.0100
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X23.7894 Y17.0100
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X17.5003 Y17.0710
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X14.9603 Y17.0710
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X12.4203 Y17.0710
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X6.4488 Y-8.5500
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X6.4488 Y-11.0900
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X6.4488 Y-13.6300
G01 Z-2.5000
G01 Z0
G00 Z1.0000
G00 X6.4488 Y-16.1700
G01 Z-2.5000
G01 Z0
G00 Z1.0000
M05
G00 Z5.00
G00 X0.0 Y0.0


