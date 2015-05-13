/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AVAudioPlayerDelegate.h"
#import "DataModelViewController.h"

@class UIButton, NSMutableArray, Model_db_character, UILabel, NSString, UIPartButton, AVAudioPlayer, UIView;

__attribute__((visibility("hidden")))
@interface OneCharacterTestEasyViewController : DataModelViewController <AVAudioPlayerDelegate> {
	UILabel* _todoLabel;
	UILabel* _translationLabel;
	UIButton* _audioButton;
	UIView* _answerContainer;
	UIPartButton* _curTouchButton;
	Model_db_character* _m_model;
	NSMutableArray* _m_answerList;
	AVAudioPlayer* _m_avPlayer;
	int _nCurAnswer;
	int _nResult;
	int _playAudioCount;
}
@property(assign, nonatomic) __weak UIView* answerContainer;
@property(assign, nonatomic) __weak UIButton* audioButton;
@property(retain, nonatomic) UIPartButton* curTouchButton;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* m_answerList;
@property(retain, nonatomic) AVAudioPlayer* m_avPlayer;
@property(retain, nonatomic) Model_db_character* m_model;
@property(assign) int nCurAnswer;
@property(assign) int nResult;
@property(assign, nonatomic) int playAudioCount;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) __weak UILabel* todoLabel;
@property(assign, nonatomic) __weak UILabel* translationLabel;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BeginEnableCheckButton:(id)button;
- (id)CheckResult;
- (void)InitModelData:(id)data;
- (void)PlayWordAudio;
- (void)ShowOptionsView;
- (void)WordClicked:(id)clicked;
- (void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
- (void)didReceiveMemoryWarning;
- (void)playRecordSound:(id)sound;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
@end
