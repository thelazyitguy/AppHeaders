//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIAccessibilitySupportedDatas, YTICommand, YTIContinuationData, YTIFormattedString, YTIIcon;

@interface YTINavigationDropdownItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIContinuationData *continuation; // @dynamic continuation;
@property(readonly, nonatomic) int destinationOneOfCase; // @dynamic destinationOneOfCase;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIsDisabled; // @dynamic hasIsDisabled;
@property(nonatomic) _Bool hasIsSelected; // @dynamic hasIsSelected;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(nonatomic) _Bool isDisabled; // @dynamic isDisabled;
@property(nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;

@end

