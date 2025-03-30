cmake_minimum_required(VERSION 3.30)
project(PKMNTest)
include(FetchContent)
FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz)
FetchContent_MakeAvailable(json)

add_executable(PKMNTest src/main.cpp src/LTexture.cpp src/Pokemon.cpp src/BattleController.cpp src/PokemonTeam.cpp src/JsonReader.cpp src/PokeDex.cpp src/Species.cpp src/Types.cpp src/Abilities.cpp src/EggGroups.cpp src/Nature.cpp src/Gender.cpp src/Stats.cpp src/BattlingPokemon.cpp src/Status.cpp src/loopfunctions/Update.cpp src/loopfunctions/Delay.cpp src/loopfunctions/Render.cpp src/loopfunctions/InputHandler.cpp src/loopfunctions/HandlerRegistry.cpp src/Listener.cpp src/TestListener.cpp)
target_link_libraries(PKMNTest SDL2 SDL2_image nlohmann_json::nlohmann_json)