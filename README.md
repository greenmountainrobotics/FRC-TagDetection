directions for compilation:

- download wpilib source (the archive from the releases page), then install using `cmake` and `make`:
```sh
mkdir build-cmake && cd build-cmake
cmake .. -DWITH_JAVA=OFF -DWITH_JAVA_SOURCE=OFF -DWITH_CSCORE=OFF -DWITH_EXAMPLES=OFF -DWITH_TESTS=OFF -DWITH_GUI=OFF -DWITH_SIMULATION_MODULES=OFF
make install -jX
```

- install opencv using system package manager

- build this repo using cmake