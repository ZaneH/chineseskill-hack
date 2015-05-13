/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSMobileAnalyticsInternalEvent.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

@interface AWSMobileAnalyticsDefaultEvent : XXUnknownSuperclass <AWSMobileAnalyticsInternalEvent> {
	NSString* _eventType;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _metrics;
	unsigned long long _eventTimestamp;
}
@property(retain, nonatomic) NSMutableDictionary* attributes;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(assign, nonatomic) unsigned long long eventTimestamp;
@property(retain, nonatomic) NSString* eventType;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSMutableDictionary* metrics;
@property(readonly, assign) Class superclass;
+ (id)defaultEventFromEvent:(id)event withInsightsContext:(id)insightsContext withEventTimestamp:(unsigned long long)eventTimestamp;
+ (id)defaultEventWithInsightsContext:(id)insightsContext withEventTimestamp:(unsigned long long)eventTimestamp withEventType:(id)eventType;
- (id)initWithEventType:(id)eventType withAttributes:(id)attributes withMetrics:(id)metrics withEventTimestamp:(unsigned long long)eventTimestamp;
- (void).cxx_destruct;
- (void)addAttribute:(id)attribute forKey:(id)key;
- (void)addMetric:(id)metric forKey:(id)key;
- (id)allAttributes;
- (id)allMetrics;
- (id)attributeForKey:(id)key;
- (BOOL)hasAttributeForKey:(id)key;
- (BOOL)hasMetricForKey:(id)key;
- (id)metricForKey:(id)key;
- (id)toDictionary;
@end
