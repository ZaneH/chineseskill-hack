/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWSDynamoDBGetItemInput : AWSRequest {
	NSArray* _attributesToGet;
	NSNumber* _consistentRead;
	NSDictionary* _key;
	int _returnConsumedCapacity;
	NSString* _tableName;
}
@property(retain, nonatomic) NSArray* attributesToGet;
@property(retain, nonatomic) NSNumber* consistentRead;
@property(retain, nonatomic) NSDictionary* key;
@property(assign, nonatomic) int returnConsumedCapacity;
@property(retain, nonatomic) NSString* tableName;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)keyJSONTransformer;
+ (id)returnConsumedCapacityJSONTransformer;
- (void).cxx_destruct;
@end
