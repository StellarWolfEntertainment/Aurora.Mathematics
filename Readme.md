# Aurora Mathematics Library

[![GitHub License](https://img.shields.io/github/license/StellarWolfEntertainment/Aurora.Mathematics)](LICENSE)
[![GitHub Release](https://img.shields.io/github/v/release/StellarWolfEntertainment/Aurora.Mathematics?include_prereleases)](https://github.com/StellarWolfEntertainment/Aurora.Mathematics/releases)
[![GitHub issues](https://img.shields.io/github/issues/StellarWolfEntertainment/Aurora.Mathematics)](https://github.com/StellarWolfEntertainment/Aurora.Mathematics/issues)
[![Language](https://img.shields.io/badge/Language-C++-blue)](https://en.cppreference.com/)

## Overview

The Aurora Mathematics Library is a collection of math related types and functions, and serves as one of the core libraries of the Aurora Game Engine.

### Key Highlights

- **Vectors:** This library contains the types `vec2`, `vec3`, `vec4`, `ivec2`, `ivec3`, and `ivec4`, each type contains a number of functionalities including but not limited to *swizzle properties*, *intertype conversions*, for the floating point vectors they also contain a number of *interpolation methods*
- **Matrices:** This library includes base types for matrices starting with `matrix<T, int, int>` from which any size and type of matrix can be defined, the standard matrix sizes 'NxM' through 2-4 have also been defined in the format of `matrixNxM<T>`, concrete matrix types `mat2`, `mat3`, and `mat4` have also been defined deriving from `matrixSxS<float>` containing properties for `determinant`, and `trace` as well as methods for `adjugating`, `inverting`, `transposing`. `mat3` contains a number of methods for creating 2D transformation matrices, and `mat4` contains the same for 3D transformations.
- **Colors:** This library contains 3 color structs that can be used interchangeably `col` (a floating point RGBA representation), `col32` (an integer RGBA representation backed by `uint8_t` values), and an `hsv` (a floating point HSVA representation)
- **Angles:** This library contains an angle struct that defines trignometric functions, as well as angle interpolation and angle wrapping, it represents an angle without a specific 'unit type', and can be used as either degrees or radians, it also defines literal suffixes 'deg' for creating an angle as a representation of the specified degrees, and 'rad' for doing the same as a representation of the specified radians. (**NOTE:** these suffixes do not use the 'standard' '_' prefix)
- **Temperature:** This library also contains a temperature struct that defines a 'unitless' temperature representation, it can be created and accessed as 'Celsius', 'Fahrenheit', or as 'Kelvin', it also defines the literal suffixes 'cel', 'fah', and 'kel'. (**NOTE:** these suffixes do not use the 'standard' '_' prefix)
- **Math:** The real core of this library, is the 'math' file, which contains a number of methods ranging from `interpolation` to `trigonometry` and much more, the trig functions in this file operate with and return (when returning angles) degrees, and **not** radians. The math file also defines a methods 'precision' which is used to calculate the 'epsilon' properties value, which in turn is used by the `approximately` method, to compare the absolute difference between 2 floating-point values against a threshold (calculated as 1e-precision), if the precision is set to less than 0, then the `approximately` method will behave as an 'exact equality' check.

### Why Aurora Mathematics?

- **Flexibility:** From allowing users to work with angles and temperatures in the units they prefer, to the ability to customize the precision of 'approximate equality', this library aims to provide as flexible a usage as possible.
- **Ease of Use:** With a user-friendly API, and a 'total include' file (useable by including '&lt;Aurora/mathematics.h&gt;), working with the functions and types in this library is as quick and simple as possible.
- **Efficiency:** This library is built to be as optimized as possible (albiet at this time that is still a work in progress) making this library suitable for everything math related from simple equations to complex 3D rendering applications and simulations.

### Supported Platforms

This library contains no platform specific calls and is suitable for use by any and all platforms

## Getting Started

Follow these steps to quickly integrate the Aurora Mathematics Library as a static library into your project:

### 1. Download the Library

Download the latest release of the Aurora Mathematics Library from the [Releases](https://github.com/StellarWolfEntertainment/Aurora.Mathematics/releases) page.

### 2. Link the Library

Extract the downloaded files and locate the static library file (e.g., `Aurora.Mathematics.a` on Unix-like systems or `Aurora.Mathematics.lib` on Windows). Add the library to your project and ensure it is correctly linked during the build process.
**Note:** that at this time the only currently available 'compiled' version of the library is for Windows.

### 3. Include Headers

Include the necessary headers in your C++ files where you intend to use the Aurora Mathematics Library features:

```cpp
#include <Aurora/Mathematics/vec2.h>
#include <Aurora/Mathematics/mat2.h>
// Include other headers as needed
```

or to include the entire library

```cpp
#include <Aurora/mathematics.h>
// Include other headers as needed
```

### 4. Start Using The Library

You can now start using the library in your C++ project. For example:

```cpp
// Example using vectors
Aurora::Mathematics::vec3 myVector(1.0f, 2.0f, 3.0f);
float length = myVector.length();
```

### 5. Explore Documentation
For more detailed information on the available types and functions, refer to the libraries documentation.
**Note:** While this library is still under construction there is no currently available documentation page.

That's it! You're now ready to leverage the power of the Aurora Mathematics Library in your project. If you encounter any issues or have questions, feel free to open an [open an issue](https://github.com/StellarWolfEntertainment/Aurora.Mathematics/issues).

## Release Notes

Document the changes and improvements in each release. Link to the [Releases](https://github.com/StellarWolfEntertainment/Aurora.Mathematics/releases) page for more details.

## License

This project is licensed under the [MIT License](LICENSE.md).

## Dependencies

This library requires only the standard C++ libraries, and has no third party dependencies.