//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFGradientView.h>

@class UIButton;
@protocol IFFeedActionViewDelegate;

@interface _TtC8libFunny14FeedActionView : IFGradientView
{
    // Error parsing type: , name: buttonsBottomOffset
    // Error parsing type: , name: controlsAlpha
    // Error parsing type: , name: delegate
    // Error parsing type: , name: smileButton
    // Error parsing type: , name: unsmileButton
    // Error parsing type: , name: commentsButton
    // Error parsing type: , name: shareButton
    // Error parsing type: , name: saveButton
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: $__lazy_storage_$_heightConstraint
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithColors:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, readonly) UIButton *saveButton; // @synthesize saveButton;
@property(nonatomic, readonly) UIButton *shareButton; // @synthesize shareButton;
@property(nonatomic, readonly) UIButton *commentsButton; // @synthesize commentsButton;
@property(nonatomic, readonly) UIButton *unsmileButton; // @synthesize unsmileButton;
@property(nonatomic, readonly) UIButton *smileButton; // @synthesize smileButton;
@property(nonatomic) __weak id <IFFeedActionViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) double controlsAlpha; // @synthesize controlsAlpha;
- (void)updateViewConstraints;
@property(nonatomic) _Bool isUnsmileActive;
@property(nonatomic) _Bool isSmileActive;
@property(nonatomic) _Bool showUnsmileButton;
@property(nonatomic) double buttonsBottomOffset; // @synthesize buttonsBottomOffset;
@property(nonatomic, readonly) double heightWithoutOverlay;
@property(nonatomic) double height;

@end

