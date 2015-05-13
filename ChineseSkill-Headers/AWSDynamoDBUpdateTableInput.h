/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSArray, AWSDynamoDBProvisionedThroughput;

@interface AWSDynamoDBUpdateTableInput : AWSRequest {
	NSArray* _globalSecondaryIndexUpdates;
	AWSDynamoDBProvisionedThroughput* _provisionedThroughput;
	NSString* _tableName;
}
@property(retain, nonatomic) NSArray* globalSecondaryIndexUpdates;
@property(retain, nonatomic) AWSDynamoDBProvisionedThroughput* provisionedThroughput;
@property(retain, nonatomic) NSString* tableName;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)globalSecondaryIndexUpdatesJSONTransformer;
+ (id)provisionedThroughputJSONTransformer;
- (void).cxx_destruct;
@end
