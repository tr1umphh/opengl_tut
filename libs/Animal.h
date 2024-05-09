/**
 * @file Fruit.h
 * @brief Fruit abstract class and its child
 * @copyright
 * Licensed under MIT
 *
 */

#ifndef _FRUIT_H
#define _FRUIT_H

#include <fmt/core.h>

#include <cstdint>
#include <string>

/**
 * @class Animal
 * @brief This is a abstract class for every fruit
 *
 */
class Animal {
 public:
  virtual void greeting() = 0;
  /**
   * @brief Set name of the animal
   *
   * @param name String name
   */
  void setName(std::string name) { this->name = name; }

  /**
   * @brief Set age
   *
   * @param age uint8 age
   */
  void setAge(uint8_t age) { this->age = age; }

 protected:
  std::string name;
  uint8_t age;
};

/**
 * @class Dog
 * @brief Just a dog man, what do u want?
 *
 */
class Dog : public Animal {
 public:
  Dog(std::string name, uint8_t age) {
    setName(name);
    setAge(age);
  }

  /**
   * @brief Greeting from derrived class
   */
  void greeting() {
    fmt::print("I'm a dog. My name is {}, I'm {} year old", name, age);
  }
};

#endif  // !_FRUIT_H
#define _FRUIT_H
