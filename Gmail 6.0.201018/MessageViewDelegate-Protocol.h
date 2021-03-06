//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ExpandedMessageView, GBTAttachmentCardView, GBTSecurityBannerView, MessageView, NSURL, SafeLink;
@protocol JBTConversationMessage, JBTMessageAttachmentsMetadata;

@protocol MessageViewDelegate <NSObject>
- (void)messageView:(MessageView *)arg1 didRequestOpenFeedbackURL:(NSURL *)arg2;
- (void)messageView:(MessageView *)arg1 didForceToHTMLWithReason:(unsigned long long)arg2;
- (void)messageViewDidTapCancelScheduledSend:(MessageView *)arg1;
- (void)messageHeaderViewDidTapAvatar:(MessageView *)arg1;
- (void)messageHeaderViewDidTapHideImagesButton:(ExpandedMessageView *)arg1;
- (void)messageHeaderViewDidTapDisplayImagesButton:(ExpandedMessageView *)arg1;
- (void)messageViewDidChangeHeight:(MessageView *)arg1 scrollNeeded:(_Bool)arg2;
- (void)securityBannerView:(GBTSecurityBannerView *)arg1 performAction:(unsigned long long)arg2 forMessage:(id <JBTConversationMessage>)arg3;
- (void)messageViewDidReceiveAccessibilityFocus:(MessageView *)arg1;
- (void)messageViewDidTapFullMessageButton:(ExpandedMessageView *)arg1;
- (void)messageViewDidTapEncryptionLearnMoreButton:(MessageView *)arg1;
- (void)messageViewDidTapSignatureDetailsButton:(MessageView *)arg1;
- (void)messageViewDidTapEditButton:(MessageView *)arg1;
- (void)messageViewDidTapDiscardButton:(MessageView *)arg1;
- (void)messageViewDidTapMoreButton:(ExpandedMessageView *)arg1;
- (void)messageViewDidTapReplyButton:(MessageView *)arg1;
- (void)messageView:(MessageView *)arg1 didToggleSenderDetails:(_Bool)arg2;
- (void)messageView:(MessageView *)arg1 didToggleQuotedTextButtonForMessageRegionGroupAtIndex:(unsigned long long)arg2;
- (void)didTapOnDisabledAttachment:(MessageView *)arg1 metadata:(id <JBTMessageAttachmentsMetadata>)arg2;
- (void)messageView:(MessageView *)arg1 didSelectAttachmentCard:(GBTAttachmentCardView *)arg2;
- (void)messageView:(MessageView *)arg1 didSelectLink:(SafeLink *)arg2;
@end

