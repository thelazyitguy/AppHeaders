//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIBooleanFormFieldRenderer, YTIIconLinkRenderer, YTIPrivacyBadgeRenderer;

@interface YTIShelfPrivacySupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBooleanFormFieldRenderer *booleanFormFieldRenderer; // @dynamic booleanFormFieldRenderer;
@property(nonatomic) _Bool hasBooleanFormFieldRenderer; // @dynamic hasBooleanFormFieldRenderer;
@property(nonatomic) _Bool hasIconLinkRenderer; // @dynamic hasIconLinkRenderer;
@property(nonatomic) _Bool hasPrivacyBadgeRenderer; // @dynamic hasPrivacyBadgeRenderer;
@property(retain, nonatomic) YTIIconLinkRenderer *iconLinkRenderer; // @dynamic iconLinkRenderer;
@property(retain, nonatomic) YTIPrivacyBadgeRenderer *privacyBadgeRenderer; // @dynamic privacyBadgeRenderer;

@end

