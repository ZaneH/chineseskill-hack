ARCHS := armv7 armv7s arm64
TARGET := iphone:8.2:7.0

ChineseSkillHack_FRAMEWORKS = UIKit Foundation

include theos/makefiles/common.mk

TWEAK_NAME = ChineseSkillHack
ChineseSkillHack_FILES = Tweak.xm

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"