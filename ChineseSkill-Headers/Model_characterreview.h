/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface Model_characterreview : XXUnknownSuperclass {
	BOOL _isDownloaded;
	int _CharId;
	NSString* _Character;
	NSString* _Pinyin;
	NSString* _Translation;
	NSString* _Explanation;
	NSString* _Audio;
	NSString* _ImagePic;
	NSString* _DirCode;
	NSString* _PartOptions;
	NSString* _PartAnswer;
	NSMutableArray* _m_partList;
	NSMutableArray* _m_answerList;
	int _LessonId;
	int _UnitId;
	int _LevelId;
	int _Status;
	int _Proficient;
}
@property(retain, nonatomic) NSString* Audio;
@property(assign) int CharId;
@property(retain, nonatomic) NSString* Character;
@property(retain, nonatomic) NSString* DirCode;
@property(retain, nonatomic) NSString* Explanation;
@property(retain, nonatomic) NSString* ImagePic;
@property(assign) int LessonId;
@property(assign) int LevelId;
@property(retain, nonatomic) NSString* PartAnswer;
@property(retain, nonatomic) NSString* PartOptions;
@property(retain, nonatomic) NSString* Pinyin;
@property(assign) int Proficient;
@property(assign) int Status;
@property(retain, nonatomic) NSString* Translation;
@property(assign) int UnitId;
@property(assign) BOOL isDownloaded;
@property(retain, nonatomic) NSMutableArray* m_answerList;
@property(retain, nonatomic) NSMutableArray* m_partList;
- (id)init;
- (void).cxx_destruct;
- (void)InitPartList;
- (void)InitanswerList;
@end
