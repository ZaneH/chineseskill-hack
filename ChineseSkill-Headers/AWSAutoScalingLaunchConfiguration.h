/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSDate, NSArray, NSNumber, AWSAutoScalingInstanceMonitoring;

@interface AWSAutoScalingLaunchConfiguration : AWSModel {
	NSNumber* _associatePublicIpAddress;
	NSArray* _blockDeviceMappings;
	NSDate* _createdTime;
	NSNumber* _ebsOptimized;
	NSString* _iamInstanceProfile;
	NSString* _imageId;
	AWSAutoScalingInstanceMonitoring* _instanceMonitoring;
	NSString* _instanceType;
	NSString* _kernelId;
	NSString* _keyName;
	NSString* _launchConfigurationARN;
	NSString* _launchConfigurationName;
	NSString* _placementTenancy;
	NSString* _ramdiskId;
	NSArray* _securityGroups;
	NSString* _spotPrice;
	NSString* _userData;
}
@property(retain, nonatomic) NSNumber* associatePublicIpAddress;
@property(retain, nonatomic) NSArray* blockDeviceMappings;
@property(retain, nonatomic) NSDate* createdTime;
@property(retain, nonatomic) NSNumber* ebsOptimized;
@property(retain, nonatomic) NSString* iamInstanceProfile;
@property(retain, nonatomic) NSString* imageId;
@property(retain, nonatomic) AWSAutoScalingInstanceMonitoring* instanceMonitoring;
@property(retain, nonatomic) NSString* instanceType;
@property(retain, nonatomic) NSString* kernelId;
@property(retain, nonatomic) NSString* keyName;
@property(retain, nonatomic) NSString* launchConfigurationARN;
@property(retain, nonatomic) NSString* launchConfigurationName;
@property(retain, nonatomic) NSString* placementTenancy;
@property(retain, nonatomic) NSString* ramdiskId;
@property(retain, nonatomic) NSArray* securityGroups;
@property(retain, nonatomic) NSString* spotPrice;
@property(retain, nonatomic) NSString* userData;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)blockDeviceMappingsJSONTransformer;
+ (id)createdTimeJSONTransformer;
+ (id)instanceMonitoringJSONTransformer;
- (void).cxx_destruct;
@end
