//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNBarButtonItem.h>

@class NSString, T1AvatarImageView;

@interface T1DashBarButtonItem : TFNBarButtonItem
{
    // Error parsing type: , name: containerView
}

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 delayTinting:(_Bool)arg4;
- (id)initWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithConfiguration:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
@property(nonatomic, copy) NSString *accessibilityValue;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)setAccount:(id)arg1;
@property(nonatomic, readonly) _Bool isDisplayingBadge;
@property(nonatomic, readonly) T1AvatarImageView *avatarView;

@end

