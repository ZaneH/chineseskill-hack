/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface FBGraphObjectArray : XXUnknownSuperclass {
	NSMutableArray* _jsonArray;
}
- (id)initWrappingArray:(id)array;
- (void)addObject:(id)object;
- (unsigned)count;
- (void)dealloc;
- (void)graphObjectifyAll;
- (id)graphObjectifyAtIndex:(unsigned)index;
- (void)insertObject:(id)object atIndex:(unsigned)index;
- (id)objectAtIndex:(unsigned)index;
- (id)objectEnumerator;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned)index;
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;
- (id)reverseObjectEnumerator;
@end
