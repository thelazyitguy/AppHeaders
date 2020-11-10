//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOBaseContentView.h>

@class GHKChatQueueContentViewObjectGM2, UIImageView, UILabel, UIView;

@interface GHKChatQueueContentViewGM2 : GOOBaseContentView
{
    GHKChatQueueContentViewObjectGM2 *_object;
    UIView *_container;
    UIImageView *_backgroundIcon;
    UILabel *_queuePositionInfo;
    UILabel *_queueNotificationInfo;
    UILabel *_backToAppInfo;
}

+ (id)backToAppInfoText;
+ (id)notificationInfoTextDependingOnAPNSRegistration;
+ (id)notificationInfoText;
+ (id)positionInfoText:(long long)arg1;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (id)infoStringForPosition:(long long)arg1;
- (void).cxx_destruct;
- (void)setConstraints;
- (void)didTapBackToApp;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
