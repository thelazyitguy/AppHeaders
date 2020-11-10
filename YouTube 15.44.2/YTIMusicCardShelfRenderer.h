//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIIcon, YTIRenderer;

@interface YTIMusicCardShelfRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @dynamic buttonsArray;
@property(readonly, nonatomic) unsigned long long buttonsArray_Count; // @dynamic buttonsArray_Count;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) YTIIcon *endIcon; // @dynamic endIcon;
@property(nonatomic) _Bool hasEndIcon; // @dynamic hasEndIcon;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasOnTap; // @dynamic hasOnTap;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *header; // @dynamic header;
@property(retain, nonatomic) YTIRenderer *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *onTap; // @dynamic onTap;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIRenderer *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

