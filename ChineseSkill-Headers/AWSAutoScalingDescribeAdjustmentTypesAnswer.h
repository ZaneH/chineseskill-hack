/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray;

@interface AWSAutoScalingDescribeAdjustmentTypesAnswer : AWSModel {
	NSArray* _adjustmentTypes;
}
@property(retain, nonatomic) NSArray* adjustmentTypes;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)adjustmentTypesJSONTransformer;
- (void).cxx_destruct;
@end
