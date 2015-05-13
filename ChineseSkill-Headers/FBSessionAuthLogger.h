/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, FBSession, NSString;

@interface FBSessionAuthLogger : XXUnknownSuperclass {
	NSString* _ID;
	NSMutableDictionary* _extras;
	FBSession* _session;
	NSString* _authMethod;
}
@property(copy, nonatomic) NSString* ID;
@property(copy, nonatomic) NSString* authMethod;
@property(retain, nonatomic) NSMutableDictionary* extras;
@property(assign, nonatomic) FBSession* session;
- (id)initWithSession:(id)session;
- (id)initWithSession:(id)session ID:(id)anId authMethod:(id)method;
- (void)addExtrasForNextEvent:(id)nextEvent;
- (void)dealloc;
- (void)logEndAuthMethodWithResult:(id)result error:(id)error;
- (void)logEndAuthWithResult:(id)result error:(id)error;
- (void)logEvent:(id)event params:(id)params;
- (void)logEvent:(id)event result:(id)result error:(id)error;
- (void)logStartAuth;
- (void)logStartAuthMethod:(id)method;
- (id)newEventParameters;
@end
