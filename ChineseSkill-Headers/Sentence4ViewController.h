/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIPopoverControllerDelegate.h"
#import "AVAudioPlayerDelegate.h"
#import "ChineseSkillNew-Structs.h"
#import "UIScrollViewDelegate.h"
#import "myDelegate.h"
#import "DataModelViewController.h"

@class NSString, AVAudioPlayer, UIPopoverController, Model_db_sentence, UIMovingLabel, UIButton, Model_db_sentence040, WordExplainPoperViewController, WordPoperViewController, NSMutableArray, UILabel, UIScrollView;

__attribute__((visibility("hidden")))
@interface Sentence4ViewController : DataModelViewController <UIScrollViewDelegate, UIPopoverControllerDelegate, AVAudioPlayerDelegate, myDelegate> {
	UILabel* _todoLabel;
	UIScrollView* _titlePanel;
	UIButton* _audioButton;
	UIButton* _slowaudioButton;
	UIMovingLabel* _curTouchButton;
	Model_db_sentence* _m_data;
	Model_db_sentence040* _m_model;
	UIPopoverController* _m_popoverController;
	WordPoperViewController* _wordExplainPoper;
	WordExplainPoperViewController* _wordExplainDetailPoper;
	NSMutableArray* _m_answerList;
	NSMutableArray* _m_optionList;
	AVAudioPlayer* _m_avPlayer;
	int _nCurAnswer;
	int _nResult;
	int _playAudioCount;
}
@property(assign, nonatomic) __weak UIButton* audioButton;
@property(retain, nonatomic) UIMovingLabel* curTouchButton;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableArray* m_answerList;
@property(retain, nonatomic) AVAudioPlayer* m_avPlayer;
@property(retain, nonatomic) Model_db_sentence* m_data;
@property(retain, nonatomic) Model_db_sentence040* m_model;
@property(retain, nonatomic) NSMutableArray* m_optionList;
@property(retain, nonatomic) UIPopoverController* m_popoverController;
@property(assign) int nCurAnswer;
@property(assign) int nResult;
@property(assign, nonatomic) int playAudioCount;
@property(assign, nonatomic) __weak UIButton* slowaudioButton;
@property(readonly, assign) Class superclass;
@property(assign, nonatomic) __weak UIScrollView* titlePanel;
@property(assign, nonatomic) __weak UILabel* todoLabel;
@property(retain, nonatomic) WordExplainPoperViewController* wordExplainDetailPoper;
@property(retain, nonatomic) WordPoperViewController* wordExplainPoper;
- (id)initWithNibName:(id)nibName bundle:(id)bundle;
- (void).cxx_destruct;
- (void)BeginEnableCheckButton:(id)button;
- (id)CheckResult;
- (void)ClosePopupView:(id)view;
- (void)InitModelData:(id)data Data:(id)data2;
- (void)InitStemButtons0;
- (void)InitStemButtons1;
- (void)InitStemButtons2;
- (void)NodeBackHomeCheck;
- (void)PlaySlowAudio;
- (void)PlayWordAudio;
- (void)PopupWordExplainView:(id)view;
- (void)ReCalculatePositions;
- (void)ReOrderListNode;
- (void)ReleaseDelegateReference;
- (int)RetrivalWordWidth:(id)width;
- (int)RetrivalWordWidthForTitle:(id)title;
- (void)ShowOptionsView;
- (void)StemWordClicked:(id)clicked;
- (void)WordClicked:(id)clicked;
- (void)WordClickedAndBack:(id)back;
- (void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
- (void)didReceiveMemoryWarning;
- (void)playWordSlowSound:(id)sound;
- (void)playWordSound:(id)sound;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)viewDidAppear:(BOOL)view;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)view;
- (void)viewWillDisappear:(BOOL)view;
@end
