//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GPBMessage.h>

@class EIDEventIdMessage, FOOTFootprintsRequestContext, GWSClickTrackingContext, GWSEventIdContext, GWSFrontlineInfoContext, GWSHumanInitiatedContext, GWSLanguageContext, GWSLocalizationContext, GWSLogicalEventIdContext, GWSRefererContext, GWSSearchApiClientContext, GWSSearchDomainContext, GWSSecurityContext, GWSUserAgentContext, GWSUserIpContext, GWSVisualElementGraftingContext, GWSZwiebackCookieRequestContext;

@interface MS2SearchApiRequestContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GWSClickTrackingContext *clickTrackingContext; // @dynamic clickTrackingContext;
@property(retain, nonatomic) GWSSearchApiClientContext *clientContext; // @dynamic clientContext;
@property(retain, nonatomic) EIDEventIdMessage *eventIdContext; // @dynamic eventIdContext;
@property(retain, nonatomic) FOOTFootprintsRequestContext *footprintsRequestContext; // @dynamic footprintsRequestContext;
@property(retain, nonatomic) GWSFrontlineInfoContext *frontlineInfoContext; // @dynamic frontlineInfoContext;
@property(nonatomic) _Bool hasClickTrackingContext; // @dynamic hasClickTrackingContext;
@property(nonatomic) _Bool hasClientContext; // @dynamic hasClientContext;
@property(nonatomic) _Bool hasEventIdContext; // @dynamic hasEventIdContext;
@property(nonatomic) _Bool hasFootprintsRequestContext; // @dynamic hasFootprintsRequestContext;
@property(nonatomic) _Bool hasFrontlineInfoContext; // @dynamic hasFrontlineInfoContext;
@property(nonatomic) _Bool hasHumanInitiatedContext; // @dynamic hasHumanInitiatedContext;
@property(nonatomic) _Bool hasLanguageContext; // @dynamic hasLanguageContext;
@property(nonatomic) _Bool hasLocalizationContext; // @dynamic hasLocalizationContext;
@property(nonatomic) _Bool hasLogicalEventIdContext; // @dynamic hasLogicalEventIdContext;
@property(nonatomic) _Bool hasParentEventIdContext; // @dynamic hasParentEventIdContext;
@property(nonatomic) _Bool hasRefererContext; // @dynamic hasRefererContext;
@property(nonatomic) _Bool hasSearchDomainContext; // @dynamic hasSearchDomainContext;
@property(nonatomic) _Bool hasSecurityContext; // @dynamic hasSecurityContext;
@property(nonatomic) _Bool hasUserAgentContext; // @dynamic hasUserAgentContext;
@property(nonatomic) _Bool hasUserIpContext; // @dynamic hasUserIpContext;
@property(nonatomic) _Bool hasVisualElementGraftingContext; // @dynamic hasVisualElementGraftingContext;
@property(nonatomic) _Bool hasZwiebackCookieContext; // @dynamic hasZwiebackCookieContext;
@property(retain, nonatomic) GWSHumanInitiatedContext *humanInitiatedContext; // @dynamic humanInitiatedContext;
@property(retain, nonatomic) GWSLanguageContext *languageContext; // @dynamic languageContext;
@property(retain, nonatomic) GWSLocalizationContext *localizationContext; // @dynamic localizationContext;
@property(retain, nonatomic) GWSLogicalEventIdContext *logicalEventIdContext; // @dynamic logicalEventIdContext;
@property(retain, nonatomic) GWSEventIdContext *parentEventIdContext; // @dynamic parentEventIdContext;
@property(retain, nonatomic) GWSRefererContext *refererContext; // @dynamic refererContext;
@property(retain, nonatomic) GWSSearchDomainContext *searchDomainContext; // @dynamic searchDomainContext;
@property(retain, nonatomic) GWSSecurityContext *securityContext; // @dynamic securityContext;
@property(retain, nonatomic) GWSUserAgentContext *userAgentContext; // @dynamic userAgentContext;
@property(retain, nonatomic) GWSUserIpContext *userIpContext; // @dynamic userIpContext;
@property(retain, nonatomic) GWSVisualElementGraftingContext *visualElementGraftingContext; // @dynamic visualElementGraftingContext;
@property(retain, nonatomic) GWSZwiebackCookieRequestContext *zwiebackCookieContext; // @dynamic zwiebackCookieContext;

@end
