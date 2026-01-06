# Quest Locator (Unreal Engine 5)

## Overview
Quest Locator is a gameplay-focused Unreal Engine project developed in **C++ with Blueprint integration**.  
The project explores **quest tracking, world interaction, and player guidance systems**, with an emphasis on clean gameplay architecture and extensibility.

This project was built to demonstrate how gameplay logic can be structured in a way that is **designer-friendly**, modular, and easy to expand as game complexity grows.

---

## Core Gameplay Systems

### 🔹 Quest System
- Modular quest definitions
- Support for multiple quest states (inactive, active, completed)
- Event-driven progression logic
- Clear separation between quest data and quest execution

**Technical Highlights**
- Data-driven quest configuration
- Minimal tick usage
- Quest logic decoupled from player character

---

### 🔹 World Location & Navigation
- Dynamic quest target tracking
- World-space indicators for quest objectives
- Player guidance without hard-coded paths

**Design Focus**
- Flexible objective placement
- Scalable to multiple active quests

---

### 🔹 Player Interaction
- Clean interaction handling between player and quest objects
- Blueprint-exposed interfaces for designers
- C++ core logic for reliability and performance

---

## Architecture Highlights
- Component-based gameplay design
- Clear ownership between systems
- Blueprint usage limited to presentation and configuration
- Systems designed to be reusable across different game types

---

## Technical Focus
- Unreal Engine gameplay framework
- C++ systems with Blueprint extension
- Data Assets for configuration
- Event-driven updates over per-frame ticking

---

## Project Goals
- Explore quest and objective tracking systems
- Demonstrate clean gameplay architecture
- Provide a foundation for expanding into larger quest-based games

---

## Tech Stack
- Unreal Engine 5
- C++
- Blueprints (designer-facing)
- Unreal Gameplay Framework

---

## Notes
This project focuses on **gameplay logic and system design** rather than production-ready content.  
More advanced system architecture and multiplayer-safe implementations can be found in the **AdvancedShooter** project.

---

## Author
**Felipe Augusto**  
Gameplay / Gameplay Systems Programmer  
Focus: Unreal Engine, C++, Gameplay Architecture
