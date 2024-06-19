# Load .env file
set dotenv-load

init:
    cmake --preset default

build:
    cmake --build build

run:
    ./build/$PROJECT_NAME