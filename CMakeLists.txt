cmake_minimum_required(VERSION 3.30)
project(PKMNTest)
include(FetchContent)
FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz)
FetchContent_MakeAvailable(json)

add_executable(PKMNTest src/main.cpp src/LTexture.cpp src/Pokemon.cpp src/BattleController.cpp src/PokemonTeam.cpp src/JsonReader.cpp src/PokeDex.cpp src/Species.cpp)
target_link_libraries(PKMNTest SDL2 SDL2_image nlohmann_json::nlohmann_json)