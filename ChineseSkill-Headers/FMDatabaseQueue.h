/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, FMDatabase;

@interface FMDatabaseQueue : XXUnknownSuperclass {
	NSString* _path;
	dispatch_queue_s* _queue;
	FMDatabase* _db;
	int _openFlags;
}
@property(readonly, assign) int openFlags;
@property(retain) NSString* path;
+ (Class)databaseClass;
+ (id)databaseQueueWithPath:(id)path;
+ (id)databaseQueueWithPath:(id)path flags:(int)flags;
- (id)init;
- (id)initWithPath:(id)path;
- (id)initWithPath:(id)path flags:(int)flags;
- (void).cxx_destruct;
- (void)beginTransaction:(BOOL)transaction withBlock:(id)block;
- (void)close;
- (id)database;
- (void)dealloc;
- (void)inDatabase:(id)database;
- (void)inDeferredTransaction:(id)deferredTransaction;
- (id)inSavePoint:(id)savePoint;
- (void)inTransaction:(id)transaction;
@end
