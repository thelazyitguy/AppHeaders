//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

#import <Module_Framework/YTInnerTubeSectionRenderers-Protocol.h>

@class NSData, NSMutableArray, NSString, YTIBooleanFormFieldSupportedRenderers, YTIConfirmMultiRecipientShareDialogueSupportedRenderers, YTIFormattedString, YTIMessageInputSupportedRenderers, YTIRenderer, YTISharePanelHeaderSupportedRenderers, YTISharePanelPromoSupportedRenderers;

@interface YTIUnifiedSharePanelRenderer : GPBMessage <YTInnerTubeSectionRenderers>
{
}

+ (id)descriptor;
- (id)sectionRenderers;

// Remaining properties
@property(retain, nonatomic) YTIConfirmMultiRecipientShareDialogueSupportedRenderers *confirmMultiRecipientShareDialogueRenderer; // @dynamic confirmMultiRecipientShareDialogueRenderer;
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasConfirmMultiRecipientShareDialogueRenderer; // @dynamic hasConfirmMultiRecipientShareDialogueRenderer;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasMessageInput; // @dynamic hasMessageInput;
@property(nonatomic) _Bool hasNativeShareCheckbox; // @dynamic hasNativeShareCheckbox;
@property(nonatomic) _Bool hasRemoveIdentityPrompt; // @dynamic hasRemoveIdentityPrompt;
@property(nonatomic) _Bool hasSearch; // @dynamic hasSearch;
@property(nonatomic) _Bool hasSharePanelPromoSupportedRenderers; // @dynamic hasSharePanelPromoSupportedRenderers;
@property(nonatomic) _Bool hasSharePanelVersion; // @dynamic hasSharePanelVersion;
@property(nonatomic) _Bool hasShowLoadingSpinner; // @dynamic hasShowLoadingSpinner;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTISharePanelHeaderSupportedRenderers *header; // @dynamic header;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTIMessageInputSupportedRenderers *messageInput; // @dynamic messageInput;
@property(retain, nonatomic) YTIBooleanFormFieldSupportedRenderers *nativeShareCheckbox; // @dynamic nativeShareCheckbox;
@property(retain, nonatomic) YTIFormattedString *removeIdentityPrompt; // @dynamic removeIdentityPrompt;
@property(retain, nonatomic) YTIRenderer *search; // @dynamic search;
@property(retain, nonatomic) YTISharePanelPromoSupportedRenderers *sharePanelPromoSupportedRenderers; // @dynamic sharePanelPromoSupportedRenderers;
@property(nonatomic) int sharePanelVersion; // @dynamic sharePanelVersion;
@property(nonatomic) _Bool showLoadingSpinner; // @dynamic showLoadingSpinner;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

