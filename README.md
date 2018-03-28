# Card Meta Game
A "card" game with automatic meta game balancing. Inspired by
 - Botters of the Galaxy (codingame.com)
 - Hearthstone
 - Magic The Gathering

The main idea is to have a stock auction based meta game that affects the cost of the cards in game. This should naturally balance the game as powerful cards will become more expensive and worse cards cheaper. Perhaps the stock based meta game is not really necessary and we can adjust the cost of cards based on what cards were used in a win/loss and the ranks of the players.

# Ideas
 - Simultaneous turn-based with short enough turns to give a real-time aspect, but long enough to think for a bit and to avoid click frenzy and excess server data. Micro is script-controlled by server, macro is executed by player. 1 second turns? Max 4k for game state, max 250 turn games, so max 1 MB replay per game, hopefully.
 - Mana charges over time
 - Small square map with each player's spawn location at left mid and right mid
 - A main tower instead of a hero
 - Minions have health and attack
 - Minions additionally have X,Y-location, movement speed and attack range
 - Minions have inventory? They can load new items in range of main tower. Or anywhere?
 - Health potions
 - No magic spells in first iteration of game
 - All weapons have an attack range and attack speed. Can they be thrown?
 - No fog of war

# Architecture
 - ReasonML server-side and client-side
 - MySQL for storage
 - Client hosted on github pages, server runs on emh.lart.no
 - Client/server communicate using JSON
 - Simple e-mail/password authentication
