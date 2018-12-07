#ifndef MOVIMENTOS_H
#define MOVIMENTOS_H

#include <stdio.h>
#include <stdbool.h>

#include "vector2.h"
#include "tabuleiro.h"
#include "path.h"

bool inside_board(Tabuleiro *tabuleiro, Vector2 vec);
bool city_valid(Tabuleiro *tabuleiro, Vector2 vec);
bool check_if_city_accessible(Tabuleiro* tabuleiro, Vector2 c);

Path inverte_caminho(Tabuleiro* tabuleiro, Path path);

Path* dijkstra2(Tabuleiro* tabuleiro, Vector2 ini, Vector2* destinos, int num_destinos);
unsigned short movimentos_find_better_path_cost(Tabuleiro* tabuleiro, Vector2 ini, Vector2 dest); //TODO tirar
Path movimentos_find_path(Tabuleiro* tabuleiro, Vector2 ini, Vector2 dest);

#endif
