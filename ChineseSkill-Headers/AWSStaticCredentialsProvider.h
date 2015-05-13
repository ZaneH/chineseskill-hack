/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSCredentialsProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

@interface AWSStaticCredentialsProvider : XXUnknownSuperclass <AWSCredentialsProvider> {
	NSString* _accessKey;
	NSString* _secretKey;
}
@property(retain, nonatomic) NSString* accessKey;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign, nonatomic) NSDate* expiration;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* secretKey;
@property(readonly, assign, nonatomic) NSString* sessionKey;
@property(readonly, assign) Class superclass;
+ (id)credentialsWithAccessKey:(id)accessKey secretKey:(id)key;
+ (id)credentialsWithCredentialsFilename:(id)credentialsFilename;
- (id)initWithAccessKey:(id)accessKey secretKey:(id)key;
- (void).cxx_destruct;
@end
