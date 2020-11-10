//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/MDCBottomDrawerHeader-Protocol.h>

@class MDCButton, NSLayoutConstraint;
@protocol ASMBottomDrawerHeaderDelegate;

@interface ASMBottomDrawerHeaderViewController : UIViewController <MDCBottomDrawerHeader>
{
    double _minimumHeight;
    id <ASMBottomDrawerHeaderDelegate> _delegate;
    MDCButton *_closeButton;
    NSLayoutConstraint *_closeButtonSizeConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *closeButtonSizeConstraint; // @synthesize closeButtonSizeConstraint=_closeButtonSizeConstraint;
@property(retain, nonatomic) MDCButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak id <ASMBottomDrawerHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
- (void)didTapCloseButton;
- (void)updateCloseButtonVisibility;
- (void)removeCloseButton;
- (void)showCloseButton;
- (void)voiceOverStatusChanged:(id)arg1;
- (void)updatePreferredContentSize;
- (id)accessibilityElements;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

