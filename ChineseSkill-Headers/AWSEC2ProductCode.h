/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSString;

@interface AWSEC2ProductCode : AWSModel {
	NSString* _productCodeId;
	int _productCodeType;
}
@property(retain, nonatomic) NSString* productCodeId;
@property(assign, nonatomic) int productCodeType;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)productCodeTypeJSONTransformer;
- (void).cxx_destruct;
@end
