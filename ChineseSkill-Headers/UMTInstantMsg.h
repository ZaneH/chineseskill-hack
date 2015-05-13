/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray;

@interface UMTInstantMsg : XXUnknownSuperclass <NSCoding> {
	NSString* __id;
	NSMutableArray* __errors;
	NSMutableArray* __events;
	BOOL __id_isset;
	BOOL __errors_isset;
	BOOL __events_isset;
}
@property(retain, nonatomic, getter=errors, setter=setErrors:) NSMutableArray* errors;
@property(retain, nonatomic, getter=events, setter=setEvents:) NSMutableArray* events;
@property(retain, nonatomic, getter=id, setter=setId:) NSString* id;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithId:(id)anId errors:(id)errors events:(id)events;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (BOOL)errorsIsSet;
- (BOOL)eventsIsSet;
- (BOOL)idIsSet;
- (void)read:(id)read;
- (void)unsetErrors;
- (void)unsetEvents;
- (void)unsetId;
- (void)write:(id)write;
@end
