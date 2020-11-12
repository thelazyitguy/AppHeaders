//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class DYNLabel, UISwitch;

@interface DYNCreateExternalUserRoomContentView : GOOBaseContentView
{
    UISwitch *_guestAccessSwitch;
    DYNLabel *_guestAccessLabel;
    DYNLabel *_guestAccessDescriptionLabel;
    _Bool _changeGuestAccessOptionEnabled;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool changeGuestAccessOptionEnabled; // @synthesize changeGuestAccessOptionEnabled=_changeGuestAccessOptionEnabled;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (_Bool)accessibilityActivate;
- (_Bool)isAccessibilityElement;
- (void)setForThreadedReplies:(_Bool)arg1;
- (void)didToggleGuestAccess;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateViewWithObject:(id)arg1;

@end
