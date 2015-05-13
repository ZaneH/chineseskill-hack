/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AWSMobileAnalyticsDefaultInterceptor.h"

@protocol AWSMobileAnalyticsInternalEventClient, AWSMobileAnalyticsConnectivity;

@interface AWSMobileAnalyticsRequestTimingInterceptor : AWSMobileAnalyticsDefaultInterceptor {
	id<AWSMobileAnalyticsConnectivity> _connectivity;
	id<AWSMobileAnalyticsInternalEventClient> _eventClient;
}
@property(retain, nonatomic) id<AWSMobileAnalyticsConnectivity> connectivity;
@property(assign, nonatomic) __weak id<AWSMobileAnalyticsInternalEventClient> eventClient;
- (id)initWithConnectivity:(id)connectivity withEventClient:(id)eventClient;
- (void).cxx_destruct;
- (void)after:(id)after;
- (void)recordRequestTimeEventOnResponse:(id)response;
- (id)timeZone;
@end
