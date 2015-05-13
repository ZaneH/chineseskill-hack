/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, AWSEC2ImportVolumeTaskDetails, NSArray, AWSEC2ImportInstanceTaskDetails;

@interface AWSEC2ConversionTask : AWSModel {
	NSString* _conversionTaskId;
	NSString* _expirationTime;
	AWSEC2ImportInstanceTaskDetails* _importInstance;
	AWSEC2ImportVolumeTaskDetails* _importVolume;
	int _state;
	NSString* _statusMessage;
	NSArray* _tags;
}
@property(retain, nonatomic) NSString* conversionTaskId;
@property(retain, nonatomic) NSString* expirationTime;
@property(retain, nonatomic) AWSEC2ImportInstanceTaskDetails* importInstance;
@property(retain, nonatomic) AWSEC2ImportVolumeTaskDetails* importVolume;
@property(assign, nonatomic) int state;
@property(retain, nonatomic) NSString* statusMessage;
@property(retain, nonatomic) NSArray* tags;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)importInstanceJSONTransformer;
+ (id)importVolumeJSONTransformer;
+ (id)stateJSONTransformer;
+ (id)tagsJSONTransformer;
- (void).cxx_destruct;
@end
