/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSCognitoIdentityGetOpenIdTokenResponse : AWSModel {
	NSString* _identityId;
	NSString* _token;
}
@property(retain, nonatomic) NSString* identityId;
@property(retain, nonatomic) NSString* token;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
