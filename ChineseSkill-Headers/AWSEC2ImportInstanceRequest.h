/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSRequest.h"

@class NSString, NSArray, AWSEC2ImportInstanceLaunchSpecification, NSNumber;

@interface AWSEC2ImportInstanceRequest : AWSRequest {
	NSString* _detail;
	NSArray* _diskImages;
	NSNumber* _dryRun;
	AWSEC2ImportInstanceLaunchSpecification* _launchSpecification;
	int _platform;
}
@property(retain, nonatomic) NSString* detail;
@property(retain, nonatomic) NSArray* diskImages;
@property(retain, nonatomic) NSNumber* dryRun;
@property(retain, nonatomic) AWSEC2ImportInstanceLaunchSpecification* launchSpecification;
@property(assign, nonatomic) int platform;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)diskImagesJSONTransformer;
+ (id)launchSpecificationJSONTransformer;
+ (id)platformJSONTransformer;
- (void).cxx_destruct;
@end
