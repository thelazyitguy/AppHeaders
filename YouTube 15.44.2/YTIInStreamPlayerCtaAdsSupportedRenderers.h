//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIAppPromoAdCtaRenderer, YTICollapsibleAdCtaRenderer, YTIElementsAdCtaRenderer;

@interface YTIInStreamPlayerCtaAdsSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;
- (_Bool)hasElementsAdCtaRenderer;
- (_Bool)hasCollapsibleAdCtaRenderer;
- (_Bool)hasAppPromoAdCtaRenderer;

// Remaining properties
@property(retain, nonatomic) YTIAppPromoAdCtaRenderer *appPromoAdCtaRenderer; // @dynamic appPromoAdCtaRenderer;
@property(retain, nonatomic) YTICollapsibleAdCtaRenderer *collapsibleAdCtaRenderer; // @dynamic collapsibleAdCtaRenderer;
@property(retain, nonatomic) YTIElementsAdCtaRenderer *elementsAdCtaRenderer; // @dynamic elementsAdCtaRenderer;
@property(readonly, nonatomic) int rendererOneOfCase; // @dynamic rendererOneOfCase;

@end

