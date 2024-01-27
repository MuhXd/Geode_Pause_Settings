#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/ClassName.hpp>
//#include <Geode/modify/GameOptionsLayer.hpp>
#include <Geode/binding/GameOptionsLayer.hpp>
#include <Geode/binding/GJBaseGameLayer.hpp>


using namespace geode::prelude;

class $modify(GJBaseGameLayer) {
	 bool init() {
		if (!GJBaseGameLayer::init())
            return false;
			
		FLAlertLayer::create("Pause Test", "Hello from my custom mod!", "YAY!")->show(); 
	 }
};
