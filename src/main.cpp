#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/binding/GameOptionsLayer.hpp>

using namespace geode::prelude;

class $modify(GameOptionsLayer) {
	 bool init() {
        if (!GameOptionsLayer::init())
            return false;
		FLAlertLayer::create("Pause Test", "Hello from my custom mod!", "YAY!")->show(); 
	 }
};
