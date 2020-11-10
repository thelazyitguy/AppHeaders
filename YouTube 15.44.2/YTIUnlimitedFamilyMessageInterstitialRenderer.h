//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnlimitedFamilyMessageInterstitialRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIFormattedString *content; // @dynamic content;
@property(retain, nonatomic) YTIButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(retain, nonatomic) YTIFormattedString *footer; // @dynamic footer;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasFooter; // @dynamic hasFooter;
@property(nonatomic) _Bool hasOnCloseCommand; // @dynamic hasOnCloseCommand;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTICommand *onCloseCommand; // @dynamic onCloseCommand;
@property(retain, nonatomic) NSMutableArray *onDismissCommandsArray; // @dynamic onDismissCommandsArray;
@property(readonly, nonatomic) unsigned long long onDismissCommandsArray_Count; // @dynamic onDismissCommandsArray_Count;
@property(retain, nonatomic) NSMutableArray *onOpenCommandsArray; // @dynamic onOpenCommandsArray;
@property(readonly, nonatomic) unsigned long long onOpenCommandsArray_Count; // @dynamic onOpenCommandsArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

