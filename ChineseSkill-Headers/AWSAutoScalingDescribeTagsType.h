/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSArray, NSNumber;

@interface AWSAutoScalingDescribeTagsType : AWSRequest {
	NSArray* _filters;
	NSNumber* _maxRecords;
	NSString* _nextToken;
}
@property(retain, nonatomic) NSArray* filters;
@property(retain, nonatomic) NSNumber* maxRecords;
@property(retain, nonatomic) NSString* nextToken;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)filtersJSONTransformer;
- (void).cxx_destruct;
@end
