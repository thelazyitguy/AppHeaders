//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIMusicEntityRef, YTIRenderer;

@interface YTIMusicCollectionShelfRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMusicEntityRef *entityRef; // @dynamic entityRef;
@property(retain, nonatomic) YTIRenderer *firstItemTemplateRenderer; // @dynamic firstItemTemplateRenderer;
@property(nonatomic) _Bool hasEntityRef; // @dynamic hasEntityRef;
@property(nonatomic) _Bool hasFirstItemTemplateRenderer; // @dynamic hasFirstItemTemplateRenderer;
@property(nonatomic) _Bool hasItemTemplateRenderer; // @dynamic hasItemTemplateRenderer;
@property(nonatomic) _Bool hasMaxItemsDisplayed; // @dynamic hasMaxItemsDisplayed;
@property(nonatomic) _Bool hasShelfTemplateRenderer; // @dynamic hasShelfTemplateRenderer;
@property(retain, nonatomic) YTIRenderer *itemTemplateRenderer; // @dynamic itemTemplateRenderer;
@property(nonatomic) long long maxItemsDisplayed; // @dynamic maxItemsDisplayed;
@property(retain, nonatomic) YTIRenderer *shelfTemplateRenderer; // @dynamic shelfTemplateRenderer;

@end

