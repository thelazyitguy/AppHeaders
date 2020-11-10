//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTICompanionAdCallToActionSupportedRenderers, YTIFormattedString, YTIMenuSupportedRenderers, YTIRenderer, YTIThumbnailDetails;

@interface YTICompanionAdRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *adCompleteCommand; // @dynamic adCompleteCommand;
@property(nonatomic) _Bool autohide; // @dynamic autohide;
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(retain, nonatomic) YTICompanionAdCallToActionSupportedRenderers *callToAction; // @dynamic callToAction;
@property(retain, nonatomic) YTIRenderer *companionExtension; // @dynamic companionExtension;
@property(nonatomic) int completionAction; // @dynamic completionAction;
@property(retain, nonatomic) YTIRenderer *descriptionClickCommand; // @dynamic descriptionClickCommand;
@property(retain, nonatomic) YTIFormattedString *descriptionText; // @dynamic descriptionText;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasAdCompleteCommand; // @dynamic hasAdCompleteCommand;
@property(nonatomic) _Bool hasAutohide; // @dynamic hasAutohide;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasCallToAction; // @dynamic hasCallToAction;
@property(nonatomic) _Bool hasCompanionExtension; // @dynamic hasCompanionExtension;
@property(nonatomic) _Bool hasCompletionAction; // @dynamic hasCompletionAction;
@property(nonatomic) _Bool hasDescriptionClickCommand; // @dynamic hasDescriptionClickCommand;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasIconClickCommand; // @dynamic hasIconClickCommand;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasSecondaryButton; // @dynamic hasSecondaryButton;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleClickCommand; // @dynamic hasTitleClickCommand;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUseRoundThumbnail; // @dynamic hasUseRoundThumbnail;
@property(retain, nonatomic) YTIRenderer *iconClickCommand; // @dynamic iconClickCommand;
@property(retain, nonatomic) NSMutableArray *impressionCommandsArray; // @dynamic impressionCommandsArray;
@property(readonly, nonatomic) unsigned long long impressionCommandsArray_Count; // @dynamic impressionCommandsArray_Count;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIRenderer *secondaryButton; // @dynamic secondaryButton;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIRenderer *titleClickCommand; // @dynamic titleClickCommand;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) _Bool useRoundThumbnail; // @dynamic useRoundThumbnail;

@end

