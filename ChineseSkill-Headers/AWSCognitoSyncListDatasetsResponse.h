/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSArray, NSNumber;

@interface AWSCognitoSyncListDatasetsResponse : AWSModel {
	NSNumber* _count;
	NSArray* _datasets;
	NSString* _nextToken;
}
@property(retain, nonatomic) NSNumber* count;
@property(retain, nonatomic) NSArray* datasets;
@property(retain, nonatomic) NSString* nextToken;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)datasetsJSONTransformer;
- (void).cxx_destruct;
@end
