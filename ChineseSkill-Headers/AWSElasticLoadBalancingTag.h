/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSElasticLoadBalancingTag : AWSModel {
	NSString* _key;
	NSString* _value;
}
@property(retain, nonatomic) NSString* key;
@property(retain, nonatomic) NSString* value;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
