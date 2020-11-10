//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIOptionNavigationItemRenderer, YTIOptionSelectableItemRenderer, YTIOptionServiceItemRenderer, YTIOptionsRenderer;

@interface YTIOptionItemSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNavigationItem; // @dynamic hasNavigationItem;
@property(nonatomic) _Bool hasOptionSelectableItemRenderer; // @dynamic hasOptionSelectableItemRenderer;
@property(nonatomic) _Bool hasServiceItem; // @dynamic hasServiceItem;
@property(nonatomic) _Bool hasSubOptions; // @dynamic hasSubOptions;
@property(retain, nonatomic) YTIOptionNavigationItemRenderer *navigationItem; // @dynamic navigationItem;
@property(retain, nonatomic) YTIOptionSelectableItemRenderer *optionSelectableItemRenderer; // @dynamic optionSelectableItemRenderer;
@property(retain, nonatomic) YTIOptionServiceItemRenderer *serviceItem; // @dynamic serviceItem;
@property(retain, nonatomic) YTIOptionsRenderer *subOptions; // @dynamic subOptions;

@end

