//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class _TtC7SlackUI18SLKAvatarViewModel;

@interface _TtC7SlackUI13SLKAvatarView : UIView
{
    // Error parsing type: , name: enabled
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: $__lazy_storage_$_disableView
    // Error parsing type: , name: avatarImageView
    // Error parsing type: , name: secondaryImageView
    // Error parsing type: , name: secondaryBorderView
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSecondaryImageBorderWithColor:(id)arg1;
- (void)reset;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(long long)arg1 secondaryImageBorderColor:(id)arg2;
- (id)init;
@property(nonatomic, retain) _TtC7SlackUI18SLKAvatarViewModel *viewModel; // @synthesize viewModel;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(nonatomic, readonly) struct CGRect rectWithBadge;

@end
