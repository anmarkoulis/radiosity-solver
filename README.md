# Commands to use

```bash
rm -rf build
mkdir build
cd build
cmake ../Radiosity
make
make test
make install
mkdir coverage
cd coverage
lcov -d ../src -c -o coverage.info
genhtml coverage.info
cd ../../
```