/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSNumber;

@interface AWSEC2DescribeAccountAttributesRequest : AWSRequest {
	NSArray* _attributeNames;
	NSNumber* _dryRun;
}
@property(retain, nonatomic) NSArray* attributeNames;
@property(retain, nonatomic) NSNumber* dryRun;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
