//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewAdapter.h>

#import <T1Twitter/T1VoiceTimelineStatusTableViewCellDelegate-Protocol.h>

@class TFNTwitterAccount;
@protocol T1VoiceTimelineStatusRowAdapterDelegate;

@interface T1VoiceTimelineStatusRowAdapter : TFNItemsDataViewAdapter <T1VoiceTimelineStatusTableViewCellDelegate>
{
    id <T1VoiceTimelineStatusRowAdapterDelegate> _delegate;
    TFNTwitterAccount *_account;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1VoiceTimelineStatusRowAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)_t1_statusOption;
- (void)voiceStatusCell:(id)arg1 didTapBodyForStatus:(id)arg2;
- (void)voiceStatusCell:(id)arg1 didTapAvatarForStatus:(id)arg2;
- (void)voiceStatusCell:(id)arg1 didTapActionForStatus:(id)arg2;
- (void)dataViewController:(id)arg1 willDisplayCell:(id)arg2 forItem:(id)arg3 withOptions:(id)arg4 atIndexPath:(id)arg5;
- (id)dataViewController:(id)arg1 tableViewCellForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 estimatedTableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (double)dataViewController:(id)arg1 tableViewHeightForItem:(id)arg2 withOptions:(id)arg3 atIndexPath:(id)arg4;
- (id)initWithAccount:(id)arg1 delegate:(id)arg2;
- (id)init;

@end

