//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTCommentPriorityModel-Protocol.h>
#import <Module_Framework/YTCompanionAdRendererProtocol-Protocol.h>

@class NSData, NSMutableArray, NSString, YTIElementRendererCompatibilityOptions, YTIInteractionLoggingClientData, YTISeparatorDetails;
@protocol YTDismissalFollowUpViewModel;

@interface YTIElementRenderer : GPBMessage <YTCommentPriorityModel, YTCompanionAdRendererProtocol>
{
}

+ (id)descriptor;
@property(readonly, nonatomic) int priority;
@property(retain, nonatomic, setter=yt_setDismissalReasonsRenderer:) id <YTDismissalFollowUpViewModel> yt_dismissalReasonsRenderer;
@property(retain, nonatomic, setter=yt_setDismissalRenderer:) id <YTDismissalFollowUpViewModel> yt_dismissalRenderer;
@property(readonly, nonatomic) _Bool hasCompletionAction;
@property(readonly, nonatomic) int completionAction;
@property(readonly, nonatomic) NSData *elementData;
@property(readonly, nonatomic) _Bool hasElementData;
@property(retain, nonatomic, setter=yt_setClientData:) YTIInteractionLoggingClientData *yt_clientData;

// Remaining properties
@property(retain, nonatomic) YTIElementRendererCompatibilityOptions *compatibilityOptions; // @dynamic compatibilityOptions;
@property(retain, nonatomic) NSMutableArray *datasArray; // @dynamic datasArray;
@property(readonly, nonatomic) unsigned long long datasArray_Count; // @dynamic datasArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasCompatibilityOptions; // @dynamic hasCompatibilityOptions;
@property(nonatomic) _Bool hasSeparatorDetails; // @dynamic hasSeparatorDetails;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTISeparatorDetails *separatorDetails; // @dynamic separatorDetails;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

