/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITabBarItem;

__attribute__((visibility("hidden")))
@interface CSTabBarButton : XXUnknownSuperclass {
	UITabBarItem* _item;
}
@property(retain, nonatomic) UITabBarItem* item;
- (id)initWithFrame:(CGRect)frame;
- (void).cxx_destruct;
- (void)dealloc;
- (CGRect)imageRectForContentRect:(CGRect)contentRect;
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
- (void)setHighlighted:(BOOL)highlighted;
- (CGRect)titleRectForContentRect:(CGRect)contentRect;
@end
