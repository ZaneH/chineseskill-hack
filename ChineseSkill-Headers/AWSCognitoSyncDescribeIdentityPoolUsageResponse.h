/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class AWSCognitoSyncIdentityPoolUsage;

@interface AWSCognitoSyncDescribeIdentityPoolUsageResponse : AWSModel {
	AWSCognitoSyncIdentityPoolUsage* _identityPoolUsage;
}
@property(retain, nonatomic) AWSCognitoSyncIdentityPoolUsage* identityPoolUsage;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)identityPoolUsageJSONTransformer;
- (void).cxx_destruct;
@end
