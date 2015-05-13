/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString;

@interface AWSCognitoSyncUnsubscribeFromDatasetRequest : AWSRequest {
	NSString* _datasetName;
	NSString* _deviceId;
	NSString* _identityId;
	NSString* _identityPoolId;
}
@property(retain, nonatomic) NSString* datasetName;
@property(retain, nonatomic) NSString* deviceId;
@property(retain, nonatomic) NSString* identityId;
@property(retain, nonatomic) NSString* identityPoolId;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
