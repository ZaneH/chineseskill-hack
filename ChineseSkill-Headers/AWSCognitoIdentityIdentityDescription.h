/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSString;

@interface AWSCognitoIdentityIdentityDescription : AWSModel {
	NSString* _identityId;
	NSArray* _logins;
}
@property(retain, nonatomic) NSString* identityId;
@property(retain, nonatomic) NSArray* logins;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
