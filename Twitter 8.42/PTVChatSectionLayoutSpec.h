//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVChatSectionLayoutSpec : NSObject
{
}

+ (id)ChatBarButtonImageHighlightColor;
+ (id)ChatBarButtonImageColor;
+ (struct CGRect)GiftingMessageFrameForTopMessage:(id)arg1 BottomMessage:(id)arg2 UseLargeChatFont:(_Bool)arg3 RowPadding:(_Bool)arg4 ContainerSize:(struct CGSize)arg5;
+ (id)GiftingBottomMessageAttributed:(id)arg1 UseLargeChatFont:(_Bool)arg2;
+ (id)GiftingTopMessageAttributed:(id)arg1 UseLargeChatFont:(_Bool)arg2;
+ (id)GiftingBottomMessageFont:(_Bool)arg1;
+ (id)GiftingTopMessageFont:(_Bool)arg1;
+ (struct CGRect)CandyImageFrameWithDisplayStyle:(long long)arg1 UsernameLabelSize:(struct CGSize)arg2 ContainerSize:(struct CGSize)arg3;
+ (id)CandyImageForDisplayStyle:(long long)arg1;
+ (id)SuperfanImage;
+ (id)CallInImage;
+ (id)ContributorImage;
+ (id)FollowingIcon;
+ (struct CGRect)ModerationPunishmentProgressBarFrame:(_Bool)arg1 ChatSectionDividingLineFrame:(struct CGRect)arg2;
+ (struct CGRect)HeartSize:(struct CGSize)arg1 ContainerSize:(struct CGSize)arg2;
+ (double)TextViewPlaceholderHeight:(_Bool)arg1;
+ (struct UIEdgeInsets)TextViewContentEdgeInsets:(_Bool)arg1;
+ (double)MinimumCollapsedTextViewAreaHeight:(_Bool)arg1;
+ (double)ReadOnlyLockImagePadding;
+ (id)ReadOnlyLockImage;
+ (struct CGRect)ReplyImageFrameWithSize:(struct CGSize)arg1;
+ (struct CGRect)VipBadgeImageFrameWithHidden:(_Bool)arg1 CandyDisplayStyle:(long long)arg2 UsernameLabelSize:(struct CGSize)arg3 VipBadgeSize:(struct CGSize)arg4 ContainerSize:(struct CGSize)arg5;
+ (struct CGRect)AvatarColorBackgroundFrame:(struct CGSize)arg1;
+ (struct CGRect)AvatarFrame:(struct CGSize)arg1;
+ (struct CGSize)UsernameSize:(id)arg1 BlockState:(long long)arg2 UseLargeChatFont:(_Bool)arg3 ContainerSize:(struct CGSize)arg4;
+ (id)UsernameAttributed:(id)arg1 BlockState:(long long)arg2 UseLargeChatFont:(_Bool)arg3;
+ (struct CGRect)UsernameFrame:(struct CGSize)arg1 CandyDisplayStyle:(long long)arg2;
+ (struct CGRect)ReportIconFrameWithIconSize:(struct CGSize)arg1 IsHidden:(_Bool)arg2 ContainerSize:(struct CGSize)arg3;
+ (struct CGRect)LargeBlockImageFrame:(struct CGSize)arg1 AvatarSize:(struct CGSize)arg2;
+ (id)BlockedChatAttributed:(id)arg1 UseLargeChatFont:(_Bool)arg2;
+ (double)ChatCandyInnerPadding;
+ (id)ChatAttributed:(id)arg1 UseLargeChatFont:(_Bool)arg2;
+ (struct CGSize)ChatSize:(id)arg1 UseLargeChatFont:(_Bool)arg2 ContainerSize:(struct CGSize)arg3;
+ (struct CGRect)ChatMutedMessageFrame:(id)arg1 WithContainerSize:(struct CGSize)arg2;
+ (struct CGRect)ChatMessageFrameWithUsernameSize:(struct CGSize)arg1 CandyDisplayStyle:(long long)arg2 containerSize:(struct CGSize)arg3;
+ (struct CGRect)ChatContainerView:(id)arg1 UsernameLabelSize:(struct CGSize)arg2 CandyDisplayStyle:(long long)arg3 IsVipBadged:(_Bool)arg4 VipBadgeSize:(struct CGSize)arg5 UseLargeChatFont:(_Bool)arg6 ModeratorMuted:(_Bool)arg7 MutedText:(id)arg8 ContainerSize:(struct CGSize)arg9;
+ (id)UnmutedAlertAttributed:(id)arg1 ReporterDisplayName:(id)arg2 UseLargeChatFont:(_Bool)arg3;
+ (id)MutedAlertAttributed:(id)arg1 ReporterDisplayName:(id)arg2 UseLargeChatFont:(_Bool)arg3;
+ (struct CGSize)UnmutedAlertLabelSize:(id)arg1 ReporterDisplayName:(id)arg2 UseLargeChatFont:(_Bool)arg3 TableViewSize:(struct CGSize)arg4;
+ (struct CGSize)MutedAlertLabelSize:(id)arg1 ReporterDisplayName:(id)arg2 UseLargeChatFont:(_Bool)arg3 TableViewSize:(struct CGSize)arg4;
+ (id)BlockedAlertAttributed:(id)arg1 UseLargeChatFont:(_Bool)arg2;
+ (struct CGSize)BlockedAlertLabelSize:(id)arg1 UseLargeChatFont:(_Bool)arg2 TableViewSize:(struct CGSize)arg3;
+ (struct CGRect)SharedOnSocialMediaAlertContainerViewFrame:(double)arg1 TableViewCellSize:(struct CGSize)arg2;
+ (id)SharedOnIconForMessageType:(long long)arg1;
+ (id)SharedOnFacebookIcon;
+ (id)SharedOnTwitterIcon;
+ (id)SharedOnSocialMediaAlertAttributedWithUsername:(id)arg1 ShareMessageType:(long long)arg2 UseLargeChatFont:(_Bool)arg3;
+ (struct CGSize)SharedOnSocialMediaAlertLabelSizeWithUsername:(id)arg1 ShareMessageType:(long long)arg2 UseLargeChatFont:(_Bool)arg3 TableViewSize:(struct CGSize)arg4;
+ (struct CGRect)SharedOnSocialAlertLabelFrame:(struct CGSize)arg1;
+ (double)AlertSuperfanInnerPadding;
+ (struct CGRect)AlertSuperfanImageFrame:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;
+ (id)AlertAccessibilityString:(id)arg1 DisplayName:(id)arg2 Message:(id)arg3 RenderNewUserWelcomeMessage:(_Bool)arg4 IsModerator:(_Bool)arg5 UseLargeChatFont:(_Bool)arg6;
+ (id)AlertAttributed:(id)arg1 Message:(id)arg2 RenderNewUserWelcomeMessage:(_Bool)arg3 IsModerator:(_Bool)arg4 UseLargeChatFont:(_Bool)arg5;
+ (struct CGSize)AlertLabelSize:(id)arg1 Message:(id)arg2 IsSuperFan:(_Bool)arg3 RenderNewUserWelcomeMessage:(_Bool)arg4 IsModerator:(_Bool)arg5 UseLargeChatFont:(_Bool)arg6 TableViewSize:(struct CGSize)arg7;
+ (struct CGRect)AlertLabelFrame:(struct CGSize)arg1 IsSuperfan:(_Bool)arg2;
+ (struct CGRect)AlertLabelFrame:(struct CGSize)arg1;
+ (struct CGRect)AlertContainerViewFrame:(double)arg1 IsSuperfan:(_Bool)arg2 TableViewCellSize:(struct CGSize)arg3;
+ (id)ShareBroadcastImageHighlighted:(_Bool)arg1;
+ (id)ShareBroadcastImage:(_Bool)arg1;
+ (struct CGSize)ShareBroadcastLabelSizeWithOverrideCopy:(id)arg1 ShareCellTriggeredByScreenshot:(_Bool)arg2 UseLargeChatFont:(_Bool)arg3 TableViewCellSize:(struct CGSize)arg4;
+ (struct CGRect)ShareBroadcastButtonFrame:(_Bool)arg1 ContainerSize:(struct CGSize)arg2;
+ (struct CGRect)LTRShareBroadcastButtonFrame:(_Bool)arg1;
+ (struct CGRect)ShareBroadcastLabelFrameWithTableViewCellSize:(struct CGSize)arg1 ShareCellTriggeredByScreenshot:(_Bool)arg2;
+ (id)ShareBroadcastAttributedStringWithOverrideCopy:(id)arg1 WasShareTriggeredByScreenshot:(_Bool)arg2 UseLargeChatFont:(_Bool)arg3;
+ (id)UnfollowBroadcasterImage;
+ (id)FollowBroadcasterImageHighlighted;
+ (id)FollowBroadcasterImage;
+ (struct CGRect)UnfollowBroadcasterButtonFrame:(double)arg1;
+ (struct CGRect)FollowBroadcasterButtonFrame:(double)arg1;
+ (struct CGRect)FollowBroadcasterLabelFrame:(_Bool)arg1 TableViewCellSize:(struct CGSize)arg2;
+ (id)FollowBroadcasterAttributedString:(id)arg1 UseLargeChatFont:(_Bool)arg2;
+ (id)ScrubbingPromptAttributedString;
+ (id)InChatPromptAttributed:(id)arg1 UseLargeChatFont:(_Bool)arg2;
+ (struct CGRect)ChatPromptLabelFrameForContainerSize:(struct CGSize)arg1 IconSize:(struct CGSize)arg2;
+ (double)ChatPromptLabelWidthForContainerSize:(struct CGSize)arg1 IconSize:(struct CGSize)arg2;
+ (struct CGRect)ChatPromptIconFrameForContainerSize:(struct CGSize)arg1 IconSize:(struct CGSize)arg2;
+ (double)ChatPromptIconPadding;
+ (struct CGRect)BroadcastIsLiveAudioImageFrame:(struct CGSize)arg1 BroadcastIsLiveLabelWidth:(double)arg2 TableCellContentViewSize:(struct CGSize)arg3;
+ (struct CGRect)BroadcastLiveOrBroadcasterLeftLabelFrame:(struct CGSize)arg1;
+ (double)BroadcastLiveWidth;
+ (id)LiveAttributed;
+ (id)BroadcastStartedLocallyAttributedString;
+ (struct CGRect)TableViewFrame:(struct CGSize)arg1;
+ (struct CGRect)LTRTableViewFrame:(struct CGSize)arg1;
+ (id)GuestCallerAlertMessageFont:(_Bool)arg1;
+ (id)ShareMessageFontBold:(_Bool)arg1;
+ (id)ShareMessageFont:(_Bool)arg1;
+ (id)FollowMessageFont:(_Bool)arg1;
+ (id)FollowDisplayNameFont:(_Bool)arg1;
+ (id)AlertNewUserMessageFont:(_Bool)arg1;
+ (id)AlertMessageFont:(_Bool)arg1;
+ (id)AlertDisplayNameFont:(_Bool)arg1;
+ (id)UsernameFont:(_Bool)arg1;
+ (id)ChatFont:(_Bool)arg1;
+ (id)TimeLabelFont:(_Bool)arg1;
+ (id)TextViewPlaceholderFont:(_Bool)arg1;
+ (double)ShareBroadcastImageTopPadding;
+ (double)FollowBroadcasterImageTopPadding;
+ (double)ParticipantsButtonAndLabelSpacingX;
+ (double)InChatPromptCellHeightForMessage:(id)arg1 Icon:(id)arg2 UseLargeChatFont:(_Bool)arg3 WithTableViewSize:(struct CGSize)arg4;
+ (double)InChatPromptCellHeight:(id)arg1 UseLargeChatFont:(_Bool)arg2 WithTableViewSize:(struct CGSize)arg3;
+ (double)ShareBroadcastCellHeightWithTableViewSize:(struct CGSize)arg1 OverrideCopy:(id)arg2 ShareCellTriggeredByScreenshot:(_Bool)arg3 UseLargeChatFont:(_Bool)arg4;
+ (double)FollowBroadcasterCellHeight:(id)arg1 TableViewSize:(struct CGSize)arg2 UseLargeChatFont:(_Bool)arg3;
+ (double)BroadcastStartFinishCellHeight:(long long)arg1 TableViewSize:(struct CGSize)arg2;
+ (double)UnmutedAlertCellHeight:(id)arg1 ReporterDisplayName:(id)arg2 UseLargeChatFont:(_Bool)arg3 TableViewSize:(struct CGSize)arg4;
+ (double)MutedAlertCellHeight:(id)arg1 ReporterDisplayName:(id)arg2 UseLargeChatFont:(_Bool)arg3 TableViewSize:(struct CGSize)arg4;
+ (double)BlockedAlertCellHeight:(id)arg1 UseLargeChatFont:(_Bool)arg2 TableViewSize:(struct CGSize)arg3;
+ (double)SharedOnSocialMediaAlertCellHeightWithUsername:(id)arg1 ShareMessageType:(long long)arg2 UseLargeChatFont:(_Bool)arg3 TableViewSize:(struct CGSize)arg4;
+ (double)AlertCellHeight:(id)arg1 Message:(id)arg2 IsSuperfan:(_Bool)arg3 RenderNewUserWelcomeMessage:(_Bool)arg4 IsModerator:(_Bool)arg5 UseLargeChatFont:(_Bool)arg6 TableViewSize:(struct CGSize)arg7;
+ (double)ChatCellHeight:(id)arg1 UseLargeChatFont:(_Bool)arg2 TableViewSize:(struct CGSize)arg3;
+ (struct CGSize)TextViewDividingLineSize:(struct CGSize)arg1;
+ (double)TextViewDividerMargin;
+ (double)XLeftPaddingBetweenVipBadge;
+ (double)ChatCellSpacingY;
+ (double)AvatarWidth;
+ (double)ActionButtonWidth;
+ (double)HeartSectionWidth;
+ (struct UIEdgeInsets)ChatInnerPadding;
+ (struct UIEdgeInsets)AlertInnerPadding;
+ (struct UIEdgeInsets)BlockCountAndImageOuterPadding;
+ (struct UIEdgeInsets)ShareBroadcastLabelPadding;
+ (struct UIEdgeInsets)FollowBroadcasterLabelPadding;
+ (struct UIEdgeInsets)TextViewOuterPadding;
+ (struct UIEdgeInsets)TableOuterPadding;
+ (double)LargeFontMultiplier;
+ (_Bool)IsIPad;
+ (double)CornerRadius;

@end

