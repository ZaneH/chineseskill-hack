/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWSDynamoDBScanInput : AWSRequest {
	NSArray* _attributesToGet;
	int _conditionalOperator;
	NSDictionary* _exclusiveStartKey;
	NSNumber* _limit;
	int _returnConsumedCapacity;
	NSDictionary* _scanFilter;
	NSNumber* _segment;
	int _select;
	NSString* _tableName;
	NSNumber* _totalSegments;
}
@property(retain, nonatomic) NSArray* attributesToGet;
@property(assign, nonatomic) int conditionalOperator;
@property(retain, nonatomic) NSDictionary* exclusiveStartKey;
@property(retain, nonatomic) NSNumber* limit;
@property(assign, nonatomic) int returnConsumedCapacity;
@property(retain, nonatomic) NSDictionary* scanFilter;
@property(retain, nonatomic) NSNumber* segment;
@property(assign, nonatomic) int select;
@property(retain, nonatomic) NSString* tableName;
@property(retain, nonatomic) NSNumber* totalSegments;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)conditionalOperatorJSONTransformer;
+ (id)exclusiveStartKeyJSONTransformer;
+ (id)returnConsumedCapacityJSONTransformer;
+ (id)scanFilterJSONTransformer;
+ (id)selectJSONTransformer;
- (void).cxx_destruct;
@end
