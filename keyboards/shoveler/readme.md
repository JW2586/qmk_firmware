# Shoveler

The Shoveler is a planck compatible PCB that replaces the two innermost columns with a modular segment.

* Keyboard Maintainer: [Jawick](https://github.com/JW2586)
* Hardware Supported: RP2040

Make example for this keyboard (after setting up your build environment):

    make shoveler:default

Example of flashing this keyboard:

    make shoveler:default:flash

Enter the bootloader by:
- Press the key mapped to reset (bottom left key in FUNC layer/layer 3)
- Press the reset button on the PCB
- Connect GND and RST pins on pro micro

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
