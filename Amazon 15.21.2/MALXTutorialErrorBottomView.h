//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol MALXTutorialSheetBottomViewDelegate;

@interface MALXTutorialErrorBottomView : UIView
{
    id <MALXTutorialSheetBottomViewDelegate> _delegate;
    UIButton *_settingsButton;
    UIButton *_notNowButton;
}

@property(nonatomic) __weak UIButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(nonatomic) __weak UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(nonatomic) __weak id <MALXTutorialSheetBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleNotNowButtonTapped:(id)arg1;
- (void)handleIPhoneSettingsButtonTapped:(id)arg1;

@end
