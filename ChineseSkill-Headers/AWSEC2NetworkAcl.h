/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString, NSArray, NSNumber;

@interface AWSEC2NetworkAcl : AWSModel {
	NSArray* _associations;
	NSArray* _entries;
	NSNumber* _isDefault;
	NSString* _networkAclId;
	NSArray* _tags;
	NSString* _vpcId;
}
@property(retain, nonatomic) NSArray* associations;
@property(retain, nonatomic) NSArray* entries;
@property(retain, nonatomic) NSNumber* isDefault;
@property(retain, nonatomic) NSString* networkAclId;
@property(retain, nonatomic) NSArray* tags;
@property(retain, nonatomic) NSString* vpcId;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)associationsJSONTransformer;
+ (id)entriesJSONTransformer;
+ (id)tagsJSONTransformer;
- (void).cxx_destruct;
@end
