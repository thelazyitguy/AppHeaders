//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, OrchInfoMessage, OrchTooltip, OrchUiField;

@interface OrchCardHeader : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) OrchInfoMessage *bannerTitle; // @dynamic bannerTitle;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @dynamic buttonArray;
@property(readonly, nonatomic) unsigned long long buttonArray_Count; // @dynamic buttonArray_Count;
@property(retain, nonatomic) NSMutableArray *collapsedIconArray; // @dynamic collapsedIconArray;
@property(readonly, nonatomic) unsigned long long collapsedIconArray_Count; // @dynamic collapsedIconArray_Count;
@property(copy, nonatomic) NSString *collapsedSubtitle; // @dynamic collapsedSubtitle;
@property(copy, nonatomic) NSString *collapsedTitle; // @dynamic collapsedTitle;
@property(nonatomic) _Bool hasCollapsedSubtitle; // @dynamic hasCollapsedSubtitle;
@property(nonatomic) _Bool hasCollapsedTitle; // @dynamic hasCollapsedTitle;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) NSMutableArray *iconArray; // @dynamic iconArray;
@property(readonly, nonatomic) unsigned long long iconArray_Count; // @dynamic iconArray_Count;
@property(retain, nonatomic) NSMutableArray *menuArray; // @dynamic menuArray;
@property(readonly, nonatomic) unsigned long long menuArray_Count; // @dynamic menuArray_Count;
@property(copy, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) int titleFieldOneOfCase; // @dynamic titleFieldOneOfCase;
@property(retain, nonatomic) OrchTooltip *tooltip; // @dynamic tooltip;
@property(retain, nonatomic) OrchUiField *uiFieldTitle; // @dynamic uiFieldTitle;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

