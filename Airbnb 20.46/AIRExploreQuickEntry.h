//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRExploreQuickEntryLayout, AIRExploreSearchParams, NSString, NSURL, UIColor;

@interface AIRExploreQuickEntry : AIRModel
{
    NSString *_title;
    AIRExploreQuickEntryLayout *_layout;
    UIColor *_backgroundColor;
    NSString *_displayStyle;
    NSString *_ctaType;
    NSString *_subtitle;
    NSString *_fridayLoggingID;
    NSString *_fridayArrangementID;
    UIColor *_imageTextColor;
    UIColor *_textColor;
    NSURL *_iconUrl;
    NSURL *_imageUrl;
    NSURL *_ctaLink;
    AIRExploreSearchParams *_searchParams;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRExploreSearchParams *searchParams; // @synthesize searchParams=_searchParams;
@property(readonly, copy, nonatomic) NSURL *ctaLink; // @synthesize ctaLink=_ctaLink;
@property(readonly, copy, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, copy, nonatomic) NSURL *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(readonly, copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, copy, nonatomic) UIColor *imageTextColor; // @synthesize imageTextColor=_imageTextColor;
@property(readonly, copy, nonatomic) NSString *fridayArrangementID; // @synthesize fridayArrangementID=_fridayArrangementID;
@property(readonly, copy, nonatomic) NSString *fridayLoggingID; // @synthesize fridayLoggingID=_fridayLoggingID;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *ctaType; // @synthesize ctaType=_ctaType;
@property(readonly, copy, nonatomic) NSString *displayStyle; // @synthesize displayStyle=_displayStyle;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) AIRExploreQuickEntryLayout *layout; // @synthesize layout=_layout;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
