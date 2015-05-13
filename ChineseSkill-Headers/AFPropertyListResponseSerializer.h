/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import "AFHTTPResponseSerializer.h"


@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer {
	unsigned _format;
	unsigned _readOptions;
}
@property(assign, nonatomic) unsigned format;
@property(assign, nonatomic) unsigned readOptions;
+ (id)serializer;
+ (id)serializerWithFormat:(unsigned)format readOptions:(unsigned)options;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(NSZone*)zone;
- (void)encodeWithCoder:(id)coder;
- (id)responseObjectForResponse:(id)response data:(id)data error:(id*)error;
@end
