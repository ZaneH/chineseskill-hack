/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class DACircularProgressView, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface CSAudioRecorderButton : XXUnknownSuperclass {
	BOOL _isRecording;
	float _voice;
	UIImageView* _voiceIndicator;
	NSString* _curAddActiveWord;
	int _preVolum;
	DACircularProgressView* _volumCircle;
}
@property(retain, nonatomic) NSString* curAddActiveWord;
@property(assign, nonatomic) BOOL isRecording;
@property(assign, nonatomic) int preVolum;
@property(assign, nonatomic) float voice;
@property(retain, nonatomic) UIImageView* voiceIndicator;
@property(retain, nonatomic) DACircularProgressView* volumCircle;
- (void).cxx_destruct;
- (void)setFrame:(CGRect)frame;
- (void)voiceVolumAnimationStopped:(BOOL)stopped;
@end
