//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GLUELabel, SPTExplicitContentTheme;

@interface SPTExplicitContentPopupViewController : UIViewController
{
    SPTExplicitContentTheme *_theme;
    GLUELabel *_titleLabel;
    GLUELabel *_messageLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GLUELabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) SPTExplicitContentTheme *theme; // @synthesize theme=_theme;
- (id)labelWithText:(id)arg1;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 message:(id)arg2 theme:(id)arg3;

@end
