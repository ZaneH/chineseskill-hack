/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSArray, NSNumber;

@interface AWSEC2DescribeBundleTasksRequest : AWSRequest {
	NSArray* _bundleIds;
	NSNumber* _dryRun;
	NSArray* _filters;
}
@property(retain, nonatomic) NSArray* bundleIds;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSArray* filters;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)filtersJSONTransformer;
- (void).cxx_destruct;
@end
