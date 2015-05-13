/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSArray;

@interface AWSElasticLoadBalancingRemoveAvailabilityZonesInput : AWSRequest {
	NSArray* _availabilityZones;
	NSString* _loadBalancerName;
}
@property(retain, nonatomic) NSArray* availabilityZones;
@property(retain, nonatomic) NSString* loadBalancerName;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
