/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSNumber;

@interface AWSEC2CreateVpcPeeringConnectionRequest : AWSRequest {
	NSNumber* _dryRun;
	NSString* _peerOwnerId;
	NSString* _peerVpcId;
	NSString* _vpcId;
}
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) NSString* peerOwnerId;
@property(retain, nonatomic) NSString* peerVpcId;
@property(retain, nonatomic) NSString* vpcId;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
