//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIElementRenderer, YTIFormattedString, YTILiveChatAutoModMessageRenderer, YTILiveChatDonationAnnouncementRenderer, YTILiveChatLegacyPaidMessageRenderer, YTILiveChatMembershipItemRenderer, YTILiveChatModeChangeMessageRenderer, YTILiveChatModerationMessageRenderer, YTILiveChatPaidMessageRenderer, YTILiveChatPaidStickerRenderer, YTILiveChatPlaceholderItemRenderer, YTILiveChatTextMessageRenderer, YTILiveChatViewerEngagementMessageRenderer;

@interface YTILiveChatItemSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;
@property(retain, nonatomic) YTIFormattedString *ychDeletedStatusMessage;
@property(retain, nonatomic) YTIFormattedString *ychOriginalContentMessage;
@property(nonatomic) _Bool ychIsDeleted;
- (void)copyYchPropertiesTo:(id)arg1;
- (id)copy;

// Remaining properties
@property(retain, nonatomic) YTIElementRenderer *elementRenderer; // @dynamic elementRenderer;
@property(readonly, nonatomic) int itemOneOfCase; // @dynamic itemOneOfCase;
@property(retain, nonatomic) YTILiveChatAutoModMessageRenderer *liveChatAutoModMessageRenderer; // @dynamic liveChatAutoModMessageRenderer;
@property(retain, nonatomic) YTILiveChatDonationAnnouncementRenderer *liveChatDonationAnnouncementRenderer; // @dynamic liveChatDonationAnnouncementRenderer;
@property(retain, nonatomic) YTILiveChatLegacyPaidMessageRenderer *liveChatLegacyPaidMessageRenderer; // @dynamic liveChatLegacyPaidMessageRenderer;
@property(retain, nonatomic) YTILiveChatMembershipItemRenderer *liveChatMembershipItemRenderer; // @dynamic liveChatMembershipItemRenderer;
@property(retain, nonatomic) YTILiveChatModeChangeMessageRenderer *liveChatModeChangeMessageRenderer; // @dynamic liveChatModeChangeMessageRenderer;
@property(retain, nonatomic) YTILiveChatModerationMessageRenderer *liveChatModerationMessageRenderer; // @dynamic liveChatModerationMessageRenderer;
@property(retain, nonatomic) YTILiveChatPaidMessageRenderer *liveChatPaidMessageRenderer; // @dynamic liveChatPaidMessageRenderer;
@property(retain, nonatomic) YTILiveChatPaidStickerRenderer *liveChatPaidStickerRenderer; // @dynamic liveChatPaidStickerRenderer;
@property(retain, nonatomic) YTILiveChatPlaceholderItemRenderer *liveChatPlaceholderItemRenderer; // @dynamic liveChatPlaceholderItemRenderer;
@property(retain, nonatomic) YTILiveChatTextMessageRenderer *liveChatTextMessageRenderer; // @dynamic liveChatTextMessageRenderer;
@property(retain, nonatomic) YTILiveChatViewerEngagementMessageRenderer *liveChatViewerEngagementMessageRenderer; // @dynamic liveChatViewerEngagementMessageRenderer;

@end

