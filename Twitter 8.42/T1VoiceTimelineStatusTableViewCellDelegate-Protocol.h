//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class T1VoiceTimelineStatusTableViewCell;
@protocol T1StatusViewModel;

@protocol T1VoiceTimelineStatusTableViewCellDelegate
- (void)voiceStatusCell:(T1VoiceTimelineStatusTableViewCell *)arg1 didTapBodyForStatus:(id <T1StatusViewModel>)arg2;
- (void)voiceStatusCell:(T1VoiceTimelineStatusTableViewCell *)arg1 didTapAvatarForStatus:(id <T1StatusViewModel>)arg2;
- (void)voiceStatusCell:(T1VoiceTimelineStatusTableViewCell *)arg1 didTapActionForStatus:(id <T1StatusViewModel>)arg2;
@end
