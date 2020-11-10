//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTInnerTubeSectionRenderer-Protocol.h>
#import <Module_Framework/YTInnerTubeSectionRenderers-Protocol.h>

@class NSData, NSMutableArray, NSString, YTILiveChatActionPanelSupportedRenderers, YTILiveChatHeaderSupportedRenderers, YTILiveChatItemListSupportedRenderers, YTILiveChatParticipantsListSupportedRenderers, YTILiveChatPopoutMessageSupportedRenderers, YTILiveChatRendererClientMessages, YTILiveChatTickerSupportedRenderers, YTIRenderer;

@interface YTILiveChatRenderer : GPBMessage <YTInnerTubeSectionRenderer, YTInnerTubeSectionRenderers>
{
}

+ (id)descriptor;
- (id)sectionRenderers;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;
@property(nonatomic) double ychReplayDataStartTime;

// Remaining properties
@property(retain, nonatomic) YTILiveChatActionPanelSupportedRenderers *actionPanel; // @dynamic actionPanel;
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) YTILiveChatRendererClientMessages *clientMessages; // @dynamic clientMessages;
@property(retain, nonatomic) NSMutableArray *continuationsArray; // @dynamic continuationsArray;
@property(readonly, nonatomic) unsigned long long continuationsArray_Count; // @dynamic continuationsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableArray *emojisArray; // @dynamic emojisArray;
@property(readonly, nonatomic) unsigned long long emojisArray_Count; // @dynamic emojisArray_Count;
@property(nonatomic) _Bool hasActionPanel; // @dynamic hasActionPanel;
@property(nonatomic) _Bool hasClientMessages; // @dynamic hasClientMessages;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasInitialDisplayState; // @dynamic hasInitialDisplayState;
@property(nonatomic) _Bool hasIsReplay; // @dynamic hasIsReplay;
@property(nonatomic) _Bool hasItemList; // @dynamic hasItemList;
@property(nonatomic) _Bool hasParticipantsList; // @dynamic hasParticipantsList;
@property(nonatomic) _Bool hasPopoutMessage; // @dynamic hasPopoutMessage;
@property(nonatomic) _Bool hasPromotion; // @dynamic hasPromotion;
@property(nonatomic) _Bool hasShowHideButton; // @dynamic hasShowHideButton;
@property(nonatomic) _Bool hasTicker; // @dynamic hasTicker;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasViewerName; // @dynamic hasViewerName;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTILiveChatHeaderSupportedRenderers *header; // @dynamic header;
@property(nonatomic) int initialDisplayState; // @dynamic initialDisplayState;
@property(nonatomic) _Bool isReplay; // @dynamic isReplay;
@property(retain, nonatomic) YTILiveChatItemListSupportedRenderers *itemList; // @dynamic itemList;
@property(retain, nonatomic) YTILiveChatParticipantsListSupportedRenderers *participantsList; // @dynamic participantsList;
@property(retain, nonatomic) YTILiveChatPopoutMessageSupportedRenderers *popoutMessage; // @dynamic popoutMessage;
@property(retain, nonatomic) YTIRenderer *promotion; // @dynamic promotion;
@property(retain, nonatomic) YTIRenderer *showHideButton; // @dynamic showHideButton;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTILiveChatTickerSupportedRenderers *ticker; // @dynamic ticker;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(copy, nonatomic) NSString *viewerName; // @dynamic viewerName;

@end

