/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSTimer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CheckAndDownloadChinesePinyin : XXUnknownSuperclass {
	bool _isInited;
	bool _isTempLocked;
	BOOL _unzipping;
	NSMutableDictionary* _materialDict;
	NSMutableDictionary* _m_smDic;
	NSMutableDictionary* _m_ymDic;
	NSTimer* _timer;
	NSMutableArray* _tempArray;
	NSMutableArray* _waitingDownloadPartId;
	NSMutableArray* _finishedDLPartId;
}
@property(retain, nonatomic) NSMutableArray* finishedDLPartId;
@property(assign) bool isInited;
@property(assign) bool isTempLocked;
@property(retain, nonatomic) NSMutableDictionary* m_smDic;
@property(retain, nonatomic) NSMutableDictionary* m_ymDic;
@property(retain, nonatomic) NSMutableDictionary* materialDict;
@property(retain, nonatomic) NSMutableArray* tempArray;
@property(retain, nonatomic) NSTimer* timer;
@property(assign, nonatomic) BOOL unzipping;
@property(retain, nonatomic) NSMutableArray* waitingDownloadPartId;
+ (id)sharedOperator;
- (id)init;
- (void).cxx_destruct;
- (void)AddOnePinyinAudio:(id)audio;
- (void)CheckAndDownloadAllPinyin;
- (void)CheckAndDownloadAllPinyinAudioWithCompressed;
- (void)InsertOneItemIntoDictionary:(id)dictionary KEY:(id)key;
- (BOOL)IsFileExist:(id)exist Path:(id)path;
- (void)LaunchToDownload;
- (void)Start;
- (void)deleteOneZipFileWithPartId:(int)partId;
- (float)getPinYinDownloadProgress;
- (float)getRatioWithPartId:(int)partId;
- (BOOL)isFileAlreadyDownloadWithPartId:(int)partId;
- (BOOL)isFileAlreadyUnzipedWithPartId:(int)partId;
- (void)redownloadWithPinyinPartId:(int)pinyinPartId;
- (void)unzipFileWithPartId:(int)partId;
- (void)updatePinyinStatusWithPartId:(int)partId;
@end
