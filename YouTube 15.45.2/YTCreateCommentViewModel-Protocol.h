//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSString, YTIButtonRenderer, YTIChannelCreationServiceEndpoint, YTICommand, YTIConfirmDialogRenderer, YTIEmojiPickerRenderer, YTIFormattedString, YTIThumbnailDetails, YTIZeroStepChannelCreationRenderer;

@protocol YTCreateCommentViewModel <NSObject>
@property(readonly, nonatomic) YTIZeroStepChannelCreationRenderer *zeroStepChannelCreationRenderer;
@property(readonly, nonatomic) YTIChannelCreationServiceEndpoint *channelCreationServiceEndpoint;
@property(readonly, nonatomic) _Bool hasZeroStepChannelCreationRenderer;
@property(readonly, nonatomic) _Bool hasChannelCreationServiceEndpoint;
@property(readonly, nonatomic) _Bool isEligibleForZeroStepChannelCreation;
@property(readonly, nonatomic) _Bool isFromDetailPage;
@property(retain, nonatomic) NSString *originatedCommentId;
@property(nonatomic) __weak YTIFormattedString *pollChoiceText;
@property(readonly, nonatomic) NSString *commentParams;
@property(readonly, nonatomic) YTIFormattedString *headerText;
@property(readonly, nonatomic) YTIButtonRenderer *emojiButtonRenderer;
@property(readonly, nonatomic) YTIEmojiPickerRenderer *emojiPickerRenderer;
@property(readonly, nonatomic) NSString *customEmojisEntityKey;
@property(readonly, nonatomic) _Bool hasCustomEmojisEntityKey;
@property(readonly, nonatomic) YTIFormattedString *editableText;
@property(readonly, nonatomic) YTIFormattedString *placeholderText;
@property(readonly, nonatomic) YTIThumbnailDetails *authorThumbnail;
@property(readonly, nonatomic) YTICommand *sendButtonServiceEndpoint;
@property(readonly, nonatomic) YTIButtonRenderer *cameraButtonRenderer;
@property(readonly, nonatomic) YTIButtonRenderer *cancelButtonRenderer;
@property(readonly, nonatomic) YTIButtonRenderer *sendButtonRenderer;
@property(readonly, nonatomic) _Bool hasHeaderText;
@property(readonly, nonatomic) _Bool hasEditableText;
@property(readonly, nonatomic) _Bool hasPlaceholderText;
@property(readonly, nonatomic) _Bool hasAuthorThumbnail;
@property(readonly, nonatomic) _Bool hasCameraButtonRenderer;
@property(readonly, nonatomic) _Bool hasSendButtonRenderer;
@property(readonly, nonatomic, getter=isForUpdate) _Bool forUpdate;
@property(readonly, nonatomic, getter=isForReply) _Bool forReply;
@property(readonly, nonatomic, getter=isForComment) _Bool forComment;
@property(readonly, nonatomic, getter=isForBackstagePost) _Bool forBackstagePost;
- (void)removeZeroStepChannelCreationEligibility;

@optional
@property(readonly, nonatomic) YTIConfirmDialogRenderer *noMoreCommentDialog;
@property(readonly, nonatomic) YTIConfirmDialogRenderer *commentWithoutVoteDialog;
@property(nonatomic) __weak id existingEntry;
@property(readonly, nonatomic) YTICommand *prepareAccountEndpoint;
@property(readonly, nonatomic) _Bool supportSmartCompose;
@property(readonly, nonatomic) _Bool showInputViewForPersistentCompose;
@end
