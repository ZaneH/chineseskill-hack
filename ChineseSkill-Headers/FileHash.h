/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ChineseSkillNew-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface FileHash : XXUnknownSuperclass {
}
+ (id)hashOfFileAtPath:(id)path withComputationContext:(FileHashComputationContext*)computationContext;
+ (id)md5HashOfFileAtPath:(id)path;
+ (id)sha1HashOfFileAtPath:(id)path;
+ (id)sha512HashOfFileAtPath:(id)path;
@end
