/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSModel.h"

@class NSArray, NSNumber;

@interface AWSKinesisListStreamsOutput : AWSModel {
	NSNumber* _hasMoreStreams;
	NSArray* _streamNames;
}
@property(retain, nonatomic) NSNumber* hasMoreStreams;
@property(retain, nonatomic) NSArray* streamNames;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@end
