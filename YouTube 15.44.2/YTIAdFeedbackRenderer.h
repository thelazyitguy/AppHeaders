//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIRenderer;

@interface YTIAdFeedbackRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *cancelEndpoint; // @dynamic cancelEndpoint;
@property(retain, nonatomic) YTIFormattedString *cancelLabel; // @dynamic cancelLabel;
@property(retain, nonatomic) YTIRenderer *cancelRenderer; // @dynamic cancelRenderer;
@property(retain, nonatomic) YTIFormattedString *completionMessage; // @dynamic completionMessage;
@property(retain, nonatomic) YTIFormattedString *confirmLabel; // @dynamic confirmLabel;
@property(nonatomic) _Bool hasCancelEndpoint; // @dynamic hasCancelEndpoint;
@property(nonatomic) _Bool hasCancelLabel; // @dynamic hasCancelLabel;
@property(nonatomic) _Bool hasCancelRenderer; // @dynamic hasCancelRenderer;
@property(nonatomic) _Bool hasCompletionMessage; // @dynamic hasCompletionMessage;
@property(nonatomic) _Bool hasConfirmLabel; // @dynamic hasConfirmLabel;
@property(nonatomic) _Bool hasImpressionEndpoint; // @dynamic hasImpressionEndpoint;
@property(nonatomic) _Bool hasReasonsTitle; // @dynamic hasReasonsTitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUndoRenderer; // @dynamic hasUndoRenderer;
@property(retain, nonatomic) YTICommand *impressionEndpoint; // @dynamic impressionEndpoint;
@property(retain, nonatomic) NSMutableArray *reasonsArray; // @dynamic reasonsArray;
@property(readonly, nonatomic) unsigned long long reasonsArray_Count; // @dynamic reasonsArray_Count;
@property(retain, nonatomic) YTIFormattedString *reasonsTitle; // @dynamic reasonsTitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIRenderer *undoRenderer; // @dynamic undoRenderer;

@end

