/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSAutoScalingDetachInstancesAnswer : AWSModel {
	NSArray* _activities;
}
@property(retain, nonatomic) NSArray* activities;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)activitiesJSONTransformer;
- (void).cxx_destruct;
@end
