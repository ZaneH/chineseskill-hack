/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class NSString;

@protocol AWSMobileAnalyticsEvent <NSObject>
@property(readonly, assign, nonatomic) NSString* eventType;
- (void)addAttribute:(id)attribute forKey:(id)key;
- (void)addMetric:(id)metric forKey:(id)key;
- (id)allAttributes;
- (id)allMetrics;
- (id)attributeForKey:(id)key;
- (BOOL)hasAttributeForKey:(id)key;
- (BOOL)hasMetricForKey:(id)key;
- (id)metricForKey:(id)key;
@end
