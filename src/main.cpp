#include <Geode/Geode.hpp>
#include <Geode/modify/AppDelegate.hpp>

using namespace geode::prelude;

class $modify(FPSUnlockAppDelegate, AppDelegate) {
    bool applicationDidFinishLaunching() {
        if (!AppDelegate::applicationDidFinishLaunching())
            return false;

        CCDirector::sharedDirector()->setAnimationInterval(1.0 / 120.0);

        log::info("FPS Unlock enabled");
        return true;
    }
};
